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
ATerm term_d_49;
ATerm term_g_48;
ATerm term_s_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_d_45;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_f_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_o_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_23;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_x_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_m_14;
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
ATerm term_d_12;
ATerm term_h_11;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
void init_constant_terms (void)
{
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_x_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_13, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_13, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_14);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_13, term_h_14);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_13, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_2", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Op_2, term_y_24, (ATerm) ATempty);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_38);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_j_41);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_41);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_c_42, term_o_38);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_r_42, term_o_38);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_a_46);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym__2, term_c_47, term_o_38);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym__2, term_f_47, term_o_38);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_d_45, term_o_38);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__3, term_z_45, term_a_46, (ATerm) ATempty);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_129 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm v_139 (ATerm));
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
ATerm unzip_1 (ATerm, ATerm b_117 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm q_96 (ATerm), ATerm r_96 (ATerm));
ATerm Con_3 (ATerm, ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_110 (ATerm));
ATerm desugar_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm i_111 (ATerm));
ATerm UnMark_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_122 (ATerm));
ATerm restore_always_2 (ATerm, ATerm l_113 (ATerm), ATerm m_113 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_122 (ATerm));
ATerm scope_2 (ATerm, ATerm n_122 (ATerm), ATerm o_122 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm f_110 (ATerm));
ATerm innermost_1 (ATerm, ATerm u_125 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm u_99 (ATerm));
ATerm Seq_2 (ATerm, ATerm a_100 (ATerm), ATerm b_100 (ATerm));
ATerm Match_1 (ATerm, ATerm t_99 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_100 (ATerm), ATerm d_100 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_111 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm PrimT_3 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm Explode_2 (ATerm, ATerm m_96 (ATerm), ATerm n_96 (ATerm));
ATerm Op_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_138 (ATerm));
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
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
ATerm repeat_1 (ATerm, ATerm i_123 (ATerm));
ATerm downup_1 (ATerm, ATerm g_110 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm));
ATerm zip_1 (ATerm, ATerm w_116 (ATerm));
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm j_136 (ATerm), ATerm k_136 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_135 (ATerm), ATerm v_135 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_135 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm j_139 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_100 (ATerm), ATerm k_100 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm));
ATerm Let_2 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm l_99 (ATerm));
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm f_139 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm t_98 (ATerm));
ATerm RDefT_4 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm));
ATerm SDefT_4 (ATerm, ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm tboundin_3 (ATerm, ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm i_139 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_118 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm i_121 (ATerm));
ATerm crush_3 (ATerm, ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm g_119 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_118 (ATerm), ATerm w_118 (ATerm));
ATerm diff_1 (ATerm, ATerm n_118 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_123 (ATerm), ATerm y_123 (ATerm));
ATerm for_3 (ATerm, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm w_136 (ATerm), ATerm x_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm q_136 (ATerm), ATerm r_136 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm b_137 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm u_126 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm e_126 (ATerm));
ATerm rename_4 (ATerm, ATerm l_136 (ATerm, ATerm (ATerm)), ATerm m_136 (ATerm), ATerm n_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_136 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_122 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_122 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm d_95 (ATerm));
ATerm Signature_1 (ATerm, ATerm e_95 (ATerm));
ATerm Specification_1 (ATerm, ATerm i_95 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_115 (ATerm));
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
ATerm WriteToFile_1 (ATerm, ATerm c_130 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_131 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_129 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_113 (ATerm), ATerm r_113 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_121 (ATerm), ATerm f_121 (ATerm));
ATerm crush_2 (ATerm, ATerm c_119 (ATerm), ATerm d_119 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_139 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_132 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_135 (ATerm));
ATerm map_1 (ATerm, ATerm o_114 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_135 (ATerm));
ATerm Program_1 (ATerm, ATerm h_109 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_109 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_114 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_134 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_112 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_135 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_135 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_135 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_131 (ATerm), ATerm w_131 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_131 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm a_10;
  a_10 = t;
  {
    ATerm s_0 = NULL;
    ATerm t_0 = NULL;
    t_0 = t;
    if(((s_0 != NULL) && (s_0 != t_0)))
      _fail(t_0);
    else
      s_0 = t_0;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(s_0)));
      t = printnl_0(t);
    }
  }
  t = a_10;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_129 (ATerm))
{
  ATerm c_10;
  c_10 = t;
  {
    t = s_129(t);
    t = debug_0(t);
  }
  t = c_10;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_139 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm w_7 = NULL;
      ATerm k_8 = NULL;
      t = term_e_10;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_f_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = v_139(t);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)), not_null(z_10)), not_null(y_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_11)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_11)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), not_null(i_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Op_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), not_null(s_11)))))));
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
        ATerm o_10 = t;
        int q_10 = stack_ptr;
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
            LocalPopChoice(q_10);
          }
        else
          {
            t = o_10;
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
  ATerm u_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = u_10;
      {
        ATerm x_10 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = x_10;
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
      t = term_h_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_117 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_117);
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
      ATerm r_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_11;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_17))));
    return(t);
  }
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_Var_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_17(t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
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
            ATerm g_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_12;
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
      ATerm i_12;
      i_12 = t;
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
      t = i_12;
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
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
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
      t = j_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm q_96 (ATerm), ATerm r_96 (ATerm))
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
            t = q_96(t);
            {
              p_20 = t;
              {
                t = not_null(j_20);
                {
                  ATerm u_20 = NULL;
                  t = r_96(t);
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
ATerm Con_3 (ATerm t, ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm))
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
            t = c_97(t);
            {
              t_21 = t;
              {
                t = not_null(k_21);
                {
                  ATerm x_21 = NULL;
                  t = d_97(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(l_21);
                      {
                        ATerm a_22 = NULL;
                        t = e_97(t);
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
  ATerm m_12 = t;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
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
      t = m_12;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_24)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_24), not_null(e_24), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_23), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_23), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_23), not_null(a_24), term_d_12))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_24)))))));
          }
        }
      else
        {
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
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, i_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_110 (ATerm))
{
  t = e_110(t);
  {
    ATerm j_1 (ATerm t)
    {
      t = topdown_1(t, e_110);
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
        ATerm t_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = t_12;
            {
              ATerm b_13 = t;
              int c_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(c_13);
                }
              else
                {
                  t = b_13;
                  {
                    ATerm d_13 = t;
                    int e_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(e_13);
                      }
                    else
                      {
                        t = d_13;
                        {
                          ATerm f_13 = t;
                          int g_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(g_13);
                            }
                          else
                            {
                              t = f_13;
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
ATerm oncetd_1 (ATerm t, ATerm i_111 (ATerm))
{
  ATerm c_25 (ATerm t)
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
        t = _one(t, c_25);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm UnMark_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  j_25 = t;
  e_25 :
  if(match_cons(j_25, sym_CallT_3))
    {
      k_25 = ATgetArgument(j_25, 0);
      m_25 = ATgetArgument(j_25, 1);
      n_25 = ATgetArgument(j_25, 2);
      f_25 :
      if(match_cons(k_25, sym_SVar_1))
        {
          l_25 = ATgetArgument(k_25, 0);
          g_25 :
          if(match_string(l_25, "mark"))
            {
              h_25 :
              if(((ATgetType(m_25) == AT_LIST) && ATisEmpty(m_25)))
                {
                  i_25 :
                  if(((ATgetType(n_25) == AT_LIST) && ATisEmpty(n_25)))
                    {
                      t = term_d_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  q_26 = t;
  f_26 :
  if(match_cons(q_26, sym_Seq_2))
    {
      r_26 = ATgetArgument(q_26, 0);
      w_26 = ATgetArgument(q_26, 1);
      g_26 :
      if(match_cons(r_26, sym_CallT_3))
        {
          s_26 = ATgetArgument(r_26, 0);
          u_26 = ATgetArgument(r_26, 1);
          v_26 = ATgetArgument(r_26, 2);
          h_26 :
          if(match_cons(s_26, sym_SVar_1))
            {
              t_26 = ATgetArgument(s_26, 0);
              i_26 :
              if(match_string(t_26, "mark"))
                {
                  j_26 :
                  if(((ATgetType(u_26) == AT_LIST) && ATisEmpty(u_26)))
                    {
                      k_26 :
                      if(((ATgetType(v_26) == AT_LIST) && ATisEmpty(v_26)))
                        {
                          l_26 :
                          if(match_cons(w_26, sym_Seq_2))
                            {
                              x_26 = ATgetArgument(w_26, 0);
                              z_26 = ATgetArgument(w_26, 1);
                              m_26 :
                              if(match_cons(x_26, sym_Match_1))
                                {
                                  y_26 = ATgetArgument(x_26, 0);
                                  n_26 :
                                  if(match_cons(z_26, sym_Seq_2))
                                    {
                                      a_27 = ATgetArgument(z_26, 0);
                                      c_27 = ATgetArgument(z_26, 1);
                                      o_26 :
                                      if(match_cons(a_27, sym_Where_1))
                                        {
                                          b_27 = ATgetArgument(a_27, 0);
                                          p_26 :
                                          if(match_cons(c_27, sym_Build_1))
                                            {
                                              d_27 = ATgetArgument(c_27, 0);
                                              {
                                                ATerm o_13 = t;
                                                int v_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
                                                    ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
                                                    t = term_k_14;
                                                    {
                                                      ATerm m_1 (ATerm t)
                                                      {
                                                        t = term_l_14;
                                                        return(t);
                                                      }
                                                      t = rewrite_1(t, m_1);
                                                      {
                                                        l_27 = t;
                                                        u_25 :
                                                        if(match_cons(l_27, sym_Defined_2))
                                                          {
                                                            m_27 = ATgetArgument(l_27, 0);
                                                            n_27 = ATgetArgument(l_27, 1);
                                                            v_25 :
                                                            if(match_string(m_27, "r_0"))
                                                              {
                                                                ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
                                                                if(((i_27 != NULL) && (i_27 != n_27)))
                                                                  _fail(n_27);
                                                                else
                                                                  i_27 = n_27;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_27), not_null(y_26), (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(d_27)));
                                                                  {
                                                                    t = replace_application_0(t);
                                                                    {
                                                                      o_27 = t;
                                                                      t_25 :
                                                                      if(match_cons(o_27, sym__2))
                                                                        {
                                                                          p_27 = ATgetArgument(o_27, 0);
                                                                          q_27 = ATgetArgument(o_27, 1);
                                                                          {
                                                                            if(((j_27 != NULL) && (j_27 != p_27)))
                                                                              _fail(p_27);
                                                                            else
                                                                              j_27 = p_27;
                                                                            if(((k_27 != NULL) && (k_27 != q_27)))
                                                                              _fail(q_27);
                                                                            else
                                                                              k_27 = q_27;
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
                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(j_27)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_27))));
                                                    ;
                                                    LocalPopChoice(v_13);
                                                  }
                                                else
                                                  {
                                                    t = o_13;
                                                    {
                                                      ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
                                                      ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
                                                      t = term_k_14;
                                                      {
                                                        ATerm n_1 (ATerm t)
                                                        {
                                                          t = term_l_14;
                                                          return(t);
                                                        }
                                                        t = rewrite_1(t, n_1);
                                                        {
                                                          a_28 = t;
                                                          d_26 :
                                                          if(match_cons(a_28, sym_Defined_2))
                                                            {
                                                              b_28 = ATgetArgument(a_28, 0);
                                                              c_28 = ATgetArgument(a_28, 1);
                                                              e_26 :
                                                              if(match_string(b_28, "h_0"))
                                                                {
                                                                  ATerm d_28 = NULL;
                                                                  if(((v_27 != NULL) && (v_27 != c_28)))
                                                                    _fail(c_28);
                                                                  else
                                                                    v_27 = c_28;
                                                                  {
                                                                    ATerm e_28 = NULL;
                                                                    t = not_null(v_27);
                                                                    {
                                                                      d_28 = t;
                                                                      {
                                                                        if(((x_27 != NULL) && (x_27 != d_28)))
                                                                          _fail(d_28);
                                                                        else
                                                                          x_27 = d_28;
                                                                        {
                                                                          t = not_null(y_26);
                                                                          {
                                                                            t = tvars_0(t);
                                                                            {
                                                                              e_28 = t;
                                                                              {
                                                                                if(((w_27 != NULL) && (w_27 != e_28)))
                                                                                  _fail(e_28);
                                                                                else
                                                                                  w_27 = e_28;
                                                                                {
                                                                                  ATerm o_1 (ATerm t)
                                                                                  {
                                                                                    t = term_m_14;
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm p_1 (ATerm t)
                                                                                  {
                                                                                    ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
                                                                                    ATerm q_1 (ATerm t)
                                                                                    {
                                                                                      ATerm f_28 = NULL,h_28 = NULL;
                                                                                      ATerm g_28 = NULL;
                                                                                      g_28 = t;
                                                                                      if(((f_28 != NULL) && (f_28 != g_28)))
                                                                                        _fail(g_28);
                                                                                      else
                                                                                        f_28 = g_28;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_28));
                                                                                        {
                                                                                          h_28 = t;
                                                                                          {
                                                                                            ATerm n_14;
                                                                                            n_14 = t;
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(x_27), not_null(h_28)), term_q_14);
                                                                                              {
                                                                                                ATerm r_1 (ATerm t)
                                                                                                {
                                                                                                  t = term_m_14;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, r_1);
                                                                                              }
                                                                                            }
                                                                                            t = n_14;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, q_1);
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(d_27));
                                                                                      {
                                                                                        t = alltd_1(t, Replace_0);
                                                                                        {
                                                                                          j_28 = t;
                                                                                          c_26 :
                                                                                          if(match_cons(j_28, sym__2))
                                                                                            {
                                                                                              k_28 = ATgetArgument(j_28, 0);
                                                                                              l_28 = ATgetArgument(j_28, 1);
                                                                                              {
                                                                                                if(((y_27 != NULL) && (y_27 != k_28)))
                                                                                                  _fail(k_28);
                                                                                                else
                                                                                                  y_27 = k_28;
                                                                                                if(((z_27 != NULL) && (z_27 != l_28)))
                                                                                                  _fail(l_28);
                                                                                                else
                                                                                                  z_27 = l_28;
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
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(y_27)), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_27))));
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
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  ATerm b_30 (ATerm t)
  {
    ATerm t_29 = NULL,u_29 = NULL;
    t = not_null(i_29);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_m_14;
        return(t);
      }
      t = rewrite_1(t, s_1);
      {
        t_29 = t;
        b_29 :
        if(match_cons(t_29, sym_Defined_1))
          {
            u_29 = ATgetArgument(t_29, 0);
            c_29 :
            if(!(match_string(u_29, "l_0")))
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
    t = not_null(k_29);
    return(t);
  }
  ATerm c_30 (ATerm t)
  {
    ATerm y_29 = NULL,z_29 = NULL;
    t = not_null(i_29);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_m_14;
        return(t);
      }
      t = rewrite_1(t, t_1);
      {
        y_29 = t;
        d_29 :
        if(match_cons(y_29, sym_Defined_1))
          {
            z_29 = ATgetArgument(y_29, 0);
            e_29 :
            if(!(match_string(z_29, "j_0")))
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
    t = not_null(k_29);
    return(t);
  }
  i_29 = t;
  f_29 :
  if(match_cons(i_29, sym_App_2))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      g_29 :
      if(match_cons(k_29, sym_Var_1))
        {
          h_29 = ATgetArgument(k_29, 0);
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_29 = NULL,p_29 = NULL;
                t = not_null(i_29);
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_m_14;
                    return(t);
                  }
                  t = rewrite_1(t, u_1);
                  {
                    o_29 = t;
                    z_28 :
                    if(match_cons(o_29, sym_Defined_1))
                      {
                        p_29 = ATgetArgument(o_29, 0);
                        a_29 :
                        if(!(match_string(p_29, "u_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_29));
                ;
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
                {
                  ATerm w_14 = t;
                  int a_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_30(t);
                      ;
                      LocalPopChoice(a_15);
                    }
                  else
                    {
                      t = w_14;
                      t = c_30(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm h_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_30(t);
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = h_15;
              t = c_30(t);
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
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
    {
      g_30 = ATgetFirst((ATermList) f_30);
      h_30 = (ATerm) ATgetNext((ATermList) f_30);
      t = not_null(h_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm r_15;
        r_15 = t;
        {
          ATerm s_30 = NULL;
          ATerm t_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(p_30));
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                t = (ATerm) ATempty;
              }
            {
              t_30 = t;
              if(((s_30 != NULL) && (s_30 != t_30)))
                _fail(t_30);
              else
                s_30 = t_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_30), not_null(p_30), not_null(s_30));
            t = table_put_0(t);
          }
        }
        t = r_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_122 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm d_31 = NULL;
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
    t = m_122(t);
    {
      d_31 = t;
      {
        if(((c_31 != NULL) && (c_31 != d_31)))
          _fail(d_31);
        else
          c_31 = d_31;
        {
          ATerm v_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), term_x_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(w_15);
            }
          else
            {
              t = v_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_31 = t;
            z_30 :
            if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
              {
                f_31 = ATgetFirst((ATermList) e_31);
                g_31 = (ATerm) ATgetNext((ATermList) e_31);
                {
                  if(((b_31 != NULL) && (b_31 != f_31)))
                    _fail(f_31);
                  else
                    b_31 = f_31;
                  {
                    if(((a_31 != NULL) && (a_31 != g_31)))
                      _fail(g_31);
                    else
                      a_31 = g_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_31), term_x_15, not_null(a_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_31);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm h_31 = NULL;
                              h_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(h_31));
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
  t = u_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm l_113 (ATerm), ATerm m_113 (ATerm))
{
  ATerm g_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_113(t);
      t = m_113(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = g_16;
      {
        t = m_113(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_122 (ATerm))
{
  ATerm o_31 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm p_31 = NULL;
    ATerm q_31 = NULL;
    t = l_122(t);
    {
      p_31 = t;
      {
        if(((o_31 != NULL) && (o_31 != p_31)))
          _fail(p_31);
        else
          o_31 = p_31;
        {
          ATerm r_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_x_15);
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                t = (ATerm) ATempty;
              }
            {
              r_31 = t;
              if(((q_31 != NULL) && (q_31 != r_31)))
                _fail(r_31);
              else
                q_31 = r_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), term_x_15, (ATerm) ATinsert(CheckATermList(not_null(q_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_122 (ATerm), ATerm o_122 (ATerm))
{
  t = begin_scope_1(t, n_122);
  {
    ATerm w_1 (ATerm t)
    {
      t = end_scope_1(t, n_122);
      return(t);
    }
    t = restore_always_2(t, o_122, w_1);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym__3))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      b_32 = ATgetArgument(y_31, 2);
      {
        ATerm f_32 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = term_m_14;
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          ATerm i_32 = NULL;
          t = not_null(a_32);
          {
            t = tvars_0(t);
            {
              ATerm a_2 (ATerm t)
              {
                ATerm g_32 = NULL;
                g_32 = t;
                {
                  ATerm n_16;
                  n_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(z_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32))), term_t_16);
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = term_m_14;
                        return(t);
                      }
                      t = assert_1(t, c_2);
                    }
                  }
                  t = n_16;
                }
                return(t);
              }
              t = map_1(t, a_2);
              {
                t = not_null(b_32);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    i_32 = t;
                    if(((f_32 != NULL) && (f_32 != i_32)))
                      _fail(i_32);
                    else
                      f_32 = i_32;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, x_1, y_1);
        t = not_null(f_32);
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
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  j_33 = t;
  a_33 :
  if(match_cons(j_33, sym_Seq_2))
    {
      k_33 = ATgetArgument(j_33, 0);
      p_33 = ATgetArgument(j_33, 1);
      b_33 :
      if(match_cons(k_33, sym_CallT_3))
        {
          l_33 = ATgetArgument(k_33, 0);
          n_33 = ATgetArgument(k_33, 1);
          o_33 = ATgetArgument(k_33, 2);
          c_33 :
          if(match_cons(l_33, sym_SVar_1))
            {
              m_33 = ATgetArgument(l_33, 0);
              d_33 :
              if(match_string(m_33, "mark"))
                {
                  e_33 :
                  if(((ATgetType(n_33) == AT_LIST) && ATisEmpty(n_33)))
                    {
                      f_33 :
                      if(((ATgetType(o_33) == AT_LIST) && ATisEmpty(o_33)))
                        {
                          g_33 :
                          if(match_cons(p_33, sym_Seq_2))
                            {
                              q_33 = ATgetArgument(p_33, 0);
                              s_33 = ATgetArgument(p_33, 1);
                              h_33 :
                              if(match_cons(q_33, sym_Match_1))
                                {
                                  r_33 = ATgetArgument(q_33, 0);
                                  i_33 :
                                  if(match_cons(s_33, sym_Build_1))
                                    {
                                      t_33 = ATgetArgument(s_33, 0);
                                      {
                                        ATerm u_16 = t;
                                        int v_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_33 = NULL,y_33 = NULL;
                                            ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
                                            t = term_z_16;
                                            {
                                              ATerm d_2 (ATerm t)
                                              {
                                                t = term_a_17;
                                                return(t);
                                              }
                                              t = rewrite_1(t, d_2);
                                              {
                                                z_33 = t;
                                                q_32 :
                                                if(match_cons(z_33, sym_Defined_2))
                                                  {
                                                    a_34 = ATgetArgument(z_33, 0);
                                                    b_34 = ATgetArgument(z_33, 1);
                                                    r_32 :
                                                    if(match_string(a_34, "o_0"))
                                                      {
                                                        ATerm c_34 = NULL;
                                                        if(((x_33 != NULL) && (x_33 != b_34)))
                                                          _fail(b_34);
                                                        else
                                                          x_33 = b_34;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__3, not_null(x_33), not_null(r_33), not_null(t_33));
                                                          {
                                                            t = replace_application_0(t);
                                                            {
                                                              c_34 = t;
                                                              if(((y_33 != NULL) && (y_33 != c_34)))
                                                                _fail(c_34);
                                                              else
                                                                y_33 = c_34;
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
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_33)));
                                            ;
                                            LocalPopChoice(v_16);
                                          }
                                        else
                                          {
                                            t = u_16;
                                            {
                                              ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
                                              ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
                                              t = term_z_16;
                                              {
                                                ATerm e_2 (ATerm t)
                                                {
                                                  t = term_a_17;
                                                  return(t);
                                                }
                                                t = rewrite_1(t, e_2);
                                                {
                                                  k_34 = t;
                                                  y_32 :
                                                  if(match_cons(k_34, sym_Defined_2))
                                                    {
                                                      l_34 = ATgetArgument(k_34, 0);
                                                      m_34 = ATgetArgument(k_34, 1);
                                                      z_32 :
                                                      if(match_string(l_34, "e_0"))
                                                        {
                                                          ATerm n_34 = NULL;
                                                          if(((g_34 != NULL) && (g_34 != m_34)))
                                                            _fail(m_34);
                                                          else
                                                            g_34 = m_34;
                                                          {
                                                            ATerm o_34 = NULL;
                                                            t = not_null(g_34);
                                                            {
                                                              n_34 = t;
                                                              {
                                                                if(((i_34 != NULL) && (i_34 != n_34)))
                                                                  _fail(n_34);
                                                                else
                                                                  i_34 = n_34;
                                                                {
                                                                  t = not_null(r_33);
                                                                  {
                                                                    t = tvars_0(t);
                                                                    {
                                                                      o_34 = t;
                                                                      {
                                                                        if(((h_34 != NULL) && (h_34 != o_34)))
                                                                          _fail(o_34);
                                                                        else
                                                                          h_34 = o_34;
                                                                        {
                                                                          ATerm f_2 (ATerm t)
                                                                          {
                                                                            t = term_m_14;
                                                                            return(t);
                                                                          }
                                                                          ATerm g_2 (ATerm t)
                                                                          {
                                                                            ATerm t_34 = NULL;
                                                                            ATerm h_2 (ATerm t)
                                                                            {
                                                                              ATerm p_34 = NULL,r_34 = NULL;
                                                                              ATerm q_34 = NULL;
                                                                              q_34 = t;
                                                                              if(((p_34 != NULL) && (p_34 != q_34)))
                                                                                _fail(q_34);
                                                                              else
                                                                                p_34 = q_34;
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_34));
                                                                                {
                                                                                  r_34 = t;
                                                                                  {
                                                                                    ATerm b_17;
                                                                                    b_17 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(i_34), not_null(r_34)), term_d_17);
                                                                                      {
                                                                                        ATerm i_2 (ATerm t)
                                                                                        {
                                                                                          t = term_m_14;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, i_2);
                                                                                      }
                                                                                    }
                                                                                    t = b_17;
                                                                                  }
                                                                                }
                                                                              }
                                                                              return(t);
                                                                            }
                                                                            t = map_1(t, h_2);
                                                                            {
                                                                              t = not_null(t_33);
                                                                              {
                                                                                t = alltd_1(t, Replace_0);
                                                                                {
                                                                                  t_34 = t;
                                                                                  if(((j_34 != NULL) && (j_34 != t_34)))
                                                                                    _fail(t_34);
                                                                                  else
                                                                                    j_34 = t_34;
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
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_34)));
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
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  p_35 = t;
  h_35 :
  if(match_cons(p_35, sym_App_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      x_35 = ATgetArgument(p_35, 1);
      i_35 :
      if(match_cons(q_35, sym_CallT_3))
        {
          r_35 = ATgetArgument(q_35, 0);
          t_35 = ATgetArgument(q_35, 1);
          w_35 = ATgetArgument(q_35, 2);
          j_35 :
          if(match_cons(r_35, sym_SVar_1))
            {
              s_35 = ATgetArgument(r_35, 0);
              k_35 :
              if(match_string(s_35, "bottomup_1_0"))
                {
                  l_35 :
                  if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
                    {
                      u_35 = ATgetFirst((ATermList) t_35);
                      v_35 = (ATerm) ATgetNext((ATermList) t_35);
                      m_35 :
                      if(((ATgetType(v_35) == AT_LIST) && ATisEmpty(v_35)))
                        {
                          n_35 :
                          if(((ATgetType(w_35) == AT_LIST) && ATisEmpty(w_35)))
                            {
                              o_35 :
                              if(match_cons(x_35, sym_Op_2))
                                {
                                  y_35 = ATgetArgument(x_35, 0);
                                  z_35 = ATgetArgument(x_35, 1);
                                  {
                                    ATerm d_36 = NULL;
                                    ATerm g_36 = NULL;
                                    t = not_null(z_35);
                                    {
                                      ATerm j_2 (ATerm t)
                                      {
                                        ATerm e_36 = NULL;
                                        e_36 = t;
                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, not_null(u_35)), (ATerm) ATempty), not_null(e_36));
                                        return(t);
                                      }
                                      t = map_1(t, j_2);
                                      {
                                        g_36 = t;
                                        if(((d_36 != NULL) && (d_36 != g_36)))
                                          _fail(g_36);
                                        else
                                          d_36 = g_36;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_35), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_35), not_null(d_36)));
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  n_36 = t;
  l_36 :
  if(match_cons(n_36, sym_Seq_2))
    {
      o_36 = ATgetArgument(n_36, 0);
      q_36 = ATgetArgument(n_36, 1);
      m_36 :
      if(match_cons(o_36, sym_Build_1))
        {
          p_36 = ATgetArgument(o_36, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(q_36), not_null(p_36)));
        }
      else
        {
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
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  x_36 = t;
  v_36 :
  if(match_cons(x_36, sym_Seq_2))
    {
      y_36 = ATgetArgument(x_36, 0);
      b_37 = ATgetArgument(x_36, 1);
      w_36 :
      if(match_cons(y_36, sym_Scope_2))
        {
          z_36 = ATgetArgument(y_36, 0);
          a_37 = ATgetArgument(y_36, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_37), not_null(b_37)));
        }
      else
        {
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
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  l_37 = t;
  j_37 :
  if(match_cons(l_37, sym_Seq_2))
    {
      m_37 = ATgetArgument(l_37, 0);
      p_37 = ATgetArgument(l_37, 1);
      k_37 :
      if(match_cons(m_37, sym_LChoice_2))
        {
          n_37 = ATgetArgument(m_37, 0);
          o_37 = ATgetArgument(m_37, 1);
          {
            ATerm x_40 = NULL,y_40 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_n_17, not_null(p_37));
            {
              ATerm k_2 (ATerm t)
              {
                t = term_o_17;
                return(t);
              }
              t = rewrite_1(t, k_2);
              {
                x_40 = t;
                h_37 :
                if(match_cons(x_40, sym_Defined_1))
                  {
                    y_40 = ATgetArgument(x_40, 0);
                    i_37 :
                    if(!(match_string(y_40, "b_2")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(n_37), not_null(p_37)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_37), not_null(p_37)));
          }
        }
      else
        {
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
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  o_41 = t;
  m_41 :
  if(match_cons(o_41, sym_Seq_2))
    {
      p_41 = ATgetArgument(o_41, 0);
      s_41 = ATgetArgument(o_41, 1);
      n_41 :
      if(match_cons(p_41, sym_Choice_2))
        {
          q_41 = ATgetArgument(p_41, 0);
          r_41 = ATgetArgument(p_41, 1);
          {
            ATerm z_41 = NULL,a_42 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_17, not_null(s_41));
            {
              ATerm l_2 (ATerm t)
              {
                t = term_q_17;
                return(t);
              }
              t = rewrite_1(t, l_2);
              {
                z_41 = t;
                k_41 :
                if(match_cons(z_41, sym_Defined_1))
                  {
                    a_42 = ATgetArgument(z_41, 0);
                    l_41 :
                    if(!(match_string(a_42, "z_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(q_41), not_null(s_41)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_41), not_null(s_41)));
          }
        }
      else
        {
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
    ATerm t_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
        w_43 = t;
        g_43 :
        if(match_cons(w_43, sym_Seq_2))
          {
            x_43 = ATgetArgument(w_43, 0);
            e_44 = ATgetArgument(w_43, 1);
            h_43 :
            if(match_cons(x_43, sym_Choice_2))
              {
                y_43 = ATgetArgument(x_43, 0);
                a_44 = ATgetArgument(x_43, 1);
                {
                  ATerm n_44 = NULL,p_44 = NULL;
                  ATerm c_18;
                  c_18 = t;
                  {
                    ATerm l_44 = NULL,m_44 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_17, not_null(e_44));
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = term_q_17;
                        return(t);
                      }
                      t = rewrite_1(t, n_2);
                      {
                        l_44 = t;
                        k_42 :
                        if(match_cons(l_44, sym_Defined_1))
                          {
                            m_44 = ATgetArgument(l_44, 0);
                            l_42 :
                            if(!(match_string(m_44, "z_1")))
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
                  t = c_18;
                  {
                    ATerm d_18;
                    d_18 = t;
                    {
                      ATerm o_44 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_43), not_null(e_44));
                      {
                        t = m_2(t);
                        {
                          o_44 = t;
                          if(((n_44 != NULL) && (n_44 != o_44)))
                            _fail(o_44);
                          else
                            n_44 = o_44;
                        }
                      }
                    }
                    t = d_18;
                    {
                      ATerm q_44 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_44), not_null(e_44));
                      {
                        t = m_2(t);
                        {
                          q_44 = t;
                          if(((p_44 != NULL) && (p_44 != q_44)))
                            _fail(q_44);
                          else
                            p_44 = q_44;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_44), not_null(p_44));
                        t = m_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(x_43, sym_LChoice_2))
                  {
                    y_43 = ATgetArgument(x_43, 0);
                    a_44 = ATgetArgument(x_43, 1);
                    {
                      ATerm x_44 = NULL,z_44 = NULL;
                      ATerm m_18;
                      m_18 = t;
                      {
                        ATerm v_44 = NULL,w_44 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_n_17, not_null(e_44));
                        {
                          ATerm o_2 (ATerm t)
                          {
                            t = term_o_17;
                            return(t);
                          }
                          t = rewrite_1(t, o_2);
                          {
                            v_44 = t;
                            o_42 :
                            if(match_cons(v_44, sym_Defined_1))
                              {
                                w_44 = ATgetArgument(v_44, 0);
                                p_42 :
                                if(!(match_string(w_44, "b_2")))
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
                      t = m_18;
                      {
                        ATerm n_18;
                        n_18 = t;
                        {
                          ATerm y_44 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_43), not_null(e_44));
                          {
                            t = m_2(t);
                            {
                              y_44 = t;
                              if(((x_44 != NULL) && (x_44 != y_44)))
                                _fail(y_44);
                              else
                                x_44 = y_44;
                            }
                          }
                        }
                        t = n_18;
                        {
                          ATerm a_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_44), not_null(e_44));
                          {
                            t = m_2(t);
                            {
                              a_45 = t;
                              if(((z_44 != NULL) && (z_44 != a_45)))
                                _fail(a_45);
                              else
                                z_44 = a_45;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_44), not_null(z_44));
                            t = m_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(x_43, sym_Scope_2))
                      {
                        y_43 = ATgetArgument(x_43, 0);
                        a_44 = ATgetArgument(x_43, 1);
                        {
                          ATerm e_45 = NULL;
                          ATerm f_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_44), not_null(e_44));
                          {
                            t = m_2(t);
                            {
                              f_45 = t;
                              if(((e_45 != NULL) && (e_45 != f_45)))
                                _fail(f_45);
                              else
                                e_45 = f_45;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_43), not_null(e_45));
                            t = m_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(x_43, sym_Seq_2))
                          {
                            y_43 = ATgetArgument(x_43, 0);
                            a_44 = ATgetArgument(x_43, 1);
                            {
                              ATerm s_45 = NULL;
                              ATerm t_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_44), not_null(e_44));
                              {
                                t = m_2(t);
                                {
                                  t_45 = t;
                                  if(((s_45 != NULL) && (s_45 != t_45)))
                                    _fail(t_45);
                                  else
                                    s_45 = t_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_43), not_null(s_45));
                                t = m_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(x_43, sym_Build_1))
                              {
                                y_43 = ATgetArgument(x_43, 0);
                                {
                                  ATerm j_46 = NULL;
                                  ATerm k_46 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_44), not_null(y_43));
                                  {
                                    t = m_2(t);
                                    {
                                      k_46 = t;
                                      if(((j_46 != NULL) && (j_46 != k_46)))
                                        _fail(k_46);
                                      else
                                        j_46 = k_46;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_46));
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
            if(match_cons(w_43, sym_LChoice_2))
              {
                x_43 = ATgetArgument(w_43, 0);
                e_44 = ATgetArgument(w_43, 1);
                i_43 :
                if(match_cons(x_43, sym_LChoice_2))
                  {
                    y_43 = ATgetArgument(x_43, 0);
                    a_44 = ATgetArgument(x_43, 1);
                    {
                      ATerm j_45 = NULL;
                      ATerm k_45 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_44), not_null(e_44));
                      {
                        t = m_2(t);
                        {
                          k_45 = t;
                          if(((j_45 != NULL) && (j_45 != k_45)))
                            _fail(k_45);
                          else
                            j_45 = k_45;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_43), not_null(j_45));
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
                if(match_cons(w_43, sym_Choice_2))
                  {
                    x_43 = ATgetArgument(w_43, 0);
                    e_44 = ATgetArgument(w_43, 1);
                    j_43 :
                    if(match_cons(x_43, sym_Choice_2))
                      {
                        y_43 = ATgetArgument(x_43, 0);
                        a_44 = ATgetArgument(x_43, 1);
                        {
                          ATerm x_45 = NULL;
                          ATerm g_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_44), not_null(e_44));
                          {
                            t = m_2(t);
                            {
                              g_46 = t;
                              if(((x_45 != NULL) && (x_45 != g_46)))
                                _fail(g_46);
                              else
                                x_45 = g_46;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_43), not_null(x_45));
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
                    if(match_cons(w_43, sym_App_2))
                      {
                        x_43 = ATgetArgument(w_43, 0);
                        e_44 = ATgetArgument(w_43, 1);
                        k_43 :
                        if(match_cons(x_43, sym_CallT_3))
                          {
                            y_43 = ATgetArgument(x_43, 0);
                            a_44 = ATgetArgument(x_43, 1);
                            d_44 = ATgetArgument(x_43, 2);
                            q_43 :
                            if(match_cons(y_43, sym_SVar_1))
                              {
                                z_43 = ATgetArgument(y_43, 0);
                                r_43 :
                                if(match_string(z_43, "bottomup_1_0"))
                                  {
                                    s_43 :
                                    if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
                                      {
                                        b_44 = ATgetFirst((ATermList) a_44);
                                        c_44 = (ATerm) ATgetNext((ATermList) a_44);
                                        t_43 :
                                        if(((ATgetType(c_44) == AT_LIST) && ATisEmpty(c_44)))
                                          {
                                            u_43 :
                                            if(((ATgetType(d_44) == AT_LIST) && ATisEmpty(d_44)))
                                              {
                                                v_43 :
                                                if(match_cons(e_44, sym_Op_2))
                                                  {
                                                    f_44 = ATgetArgument(e_44, 0);
                                                    g_44 = ATgetArgument(e_44, 1);
                                                    {
                                                      ATerm o_46 = NULL,s_46 = NULL;
                                                      ATerm o_18;
                                                      o_18 = t;
                                                      {
                                                        ATerm r_46 = NULL;
                                                        t = not_null(g_44);
                                                        {
                                                          ATerm p_2 (ATerm t)
                                                          {
                                                            ATerm p_46 = NULL;
                                                            p_46 = t;
                                                            t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, not_null(b_44)), (ATerm) ATempty), not_null(p_46));
                                                            return(t);
                                                          }
                                                          t = map_1(t, p_2);
                                                          {
                                                            r_46 = t;
                                                            if(((o_46 != NULL) && (o_46 != r_46)))
                                                              _fail(r_46);
                                                            else
                                                              o_46 = r_46;
                                                          }
                                                        }
                                                      }
                                                      t = o_18;
                                                      {
                                                        ATerm t_46 = NULL,v_46 = NULL;
                                                        ATerm u_46 = NULL;
                                                        t = not_null(o_46);
                                                        {
                                                          t = bottomup_1(t, m_2);
                                                          {
                                                            u_46 = t;
                                                            if(((t_46 != NULL) && (t_46 != u_46)))
                                                              _fail(u_46);
                                                            else
                                                              t_46 = u_46;
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_44), not_null(t_46));
                                                          {
                                                            t = m_2(t);
                                                            {
                                                              v_46 = t;
                                                              if(((s_46 != NULL) && (s_46 != v_46)))
                                                                _fail(v_46);
                                                              else
                                                                s_46 = v_46;
                                                            }
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_44), not_null(s_46));
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
        LocalPopChoice(b_18);
      }
    else
      {
        t = t_17;
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
  ATerm v_47 = NULL,a_48 = NULL,b_48 = NULL,f_48 = NULL,i_48 = NULL;
  v_47 = t;
  t_47 :
  if(match_cons(v_47, sym_Seq_2))
    {
      a_48 = ATgetArgument(v_47, 0);
      b_48 = ATgetArgument(v_47, 1);
      u_47 :
      if(match_cons(b_48, sym_Scope_2))
        {
          f_48 = ATgetArgument(b_48, 0);
          i_48 = ATgetArgument(b_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_48), not_null(i_48)));
        }
      else
        {
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
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  q_48 = t;
  o_48 :
  if(match_cons(q_48, sym_Seq_2))
    {
      r_48 = ATgetArgument(q_48, 0);
      s_48 = ATgetArgument(q_48, 1);
      p_48 :
      if(match_cons(s_48, sym_LChoice_2))
        {
          t_48 = ATgetArgument(s_48, 0);
          u_48 = ATgetArgument(s_48, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(r_48), not_null(t_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_48), not_null(u_48)));
        }
      else
        {
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
  ATerm g_49 = NULL,h_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  g_49 = t;
  a_49 :
  if(match_cons(g_49, sym_Seq_2))
    {
      h_49 = ATgetArgument(g_49, 0);
      m_49 = ATgetArgument(g_49, 1);
      b_49 :
      if(match_cons(m_49, sym_Choice_2))
        {
          n_49 = ATgetArgument(m_49, 0);
          o_49 = ATgetArgument(m_49, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(h_49), not_null(n_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_49), not_null(o_49)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm f_110 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = bottomup_1(t, f_110);
    return(t);
  }
  t = _all(t, q_2);
  t = f_110(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm u_125 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      t = u_125(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm r_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_125(t);
              t = bottomup_1(t, t_2);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = r_18;
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
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
        e_50 = t;
        c_50 :
        if(match_cons(e_50, sym_Seq_2))
          {
            f_50 = ATgetArgument(e_50, 0);
            g_50 = ATgetArgument(e_50, 1);
            d_50 :
            if(match_cons(g_50, sym_Choice_2))
              {
                h_50 = ATgetArgument(g_50, 0);
                i_50 = ATgetArgument(g_50, 1);
                {
                  ATerm m_50 = NULL,o_50 = NULL;
                  ATerm b_19;
                  b_19 = t;
                  {
                    ATerm n_50 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_50), not_null(h_50));
                    {
                      t = u_2(t);
                      {
                        n_50 = t;
                        if(((m_50 != NULL) && (m_50 != n_50)))
                          _fail(n_50);
                        else
                          m_50 = n_50;
                      }
                    }
                  }
                  t = b_19;
                  {
                    ATerm p_50 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_50), not_null(i_50));
                    {
                      t = u_2(t);
                      {
                        p_50 = t;
                        if(((o_50 != NULL) && (o_50 != p_50)))
                          _fail(p_50);
                        else
                          o_50 = p_50;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_50), not_null(o_50));
                      t = u_2(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(g_50, sym_LChoice_2))
                  {
                    h_50 = ATgetArgument(g_50, 0);
                    i_50 = ATgetArgument(g_50, 1);
                    {
                      ATerm t_50 = NULL,v_50 = NULL;
                      ATerm c_19;
                      c_19 = t;
                      {
                        ATerm u_50 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_50), not_null(h_50));
                        {
                          t = u_2(t);
                          {
                            u_50 = t;
                            if(((t_50 != NULL) && (t_50 != u_50)))
                              _fail(u_50);
                            else
                              t_50 = u_50;
                          }
                        }
                      }
                      t = c_19;
                      {
                        ATerm w_50 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_50), not_null(i_50));
                        {
                          t = u_2(t);
                          {
                            w_50 = t;
                            if(((v_50 != NULL) && (v_50 != w_50)))
                              _fail(w_50);
                            else
                              v_50 = w_50;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_50), not_null(v_50));
                          t = u_2(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(g_50, sym_Scope_2))
                      {
                        h_50 = ATgetArgument(g_50, 0);
                        i_50 = ATgetArgument(g_50, 1);
                        {
                          ATerm a_51 = NULL;
                          ATerm b_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_50), not_null(i_50));
                          {
                            t = u_2(t);
                            {
                              b_51 = t;
                              if(((a_51 != NULL) && (a_51 != b_51)))
                                _fail(b_51);
                              else
                                a_51 = b_51;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_50), not_null(a_51));
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
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, u_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm t_51 = NULL,u_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym_Build_1))
    {
      u_51 = ATgetArgument(t_51, 0);
      {
        ATerm x_51 = NULL,z_51 = NULL;
        ATerm y_51 = NULL;
        t = SSLgetAnnotations(not_null(t_51));
        {
          y_51 = t;
          if(((x_51 != NULL) && (x_51 != y_51)))
            _fail(y_51);
          else
            x_51 = y_51;
        }
        {
          t = not_null(u_51);
          {
            ATerm b_52 = NULL;
            t = u_99(t);
            {
              z_51 = t;
              {
                ATerm c_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(z_51)), not_null(x_51));
                {
                  c_52 = t;
                  if(((b_52 != NULL) && (b_52 != c_52)))
                    _fail(c_52);
                  else
                    b_52 = c_52;
                }
                t = not_null(b_52);
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
ATerm Seq_2 (ATerm t, ATerm a_100 (ATerm), ATerm b_100 (ATerm))
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  m_52 :
  if(match_cons(p_52, sym_Seq_2))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      {
        ATerm g_53 = NULL,o_53 = NULL;
        ATerm n_53 = NULL;
        t = SSLgetAnnotations(not_null(p_52));
        {
          n_53 = t;
          if(((g_53 != NULL) && (g_53 != n_53)))
            _fail(n_53);
          else
            g_53 = n_53;
        }
        {
          t = not_null(q_52);
          {
            ATerm q_53 = NULL;
            t = a_100(t);
            {
              o_53 = t;
              {
                t = not_null(r_52);
                {
                  ATerm u_53 = NULL;
                  t = b_100(t);
                  {
                    q_53 = t;
                    {
                      ATerm v_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(o_53), not_null(q_53)), not_null(g_53));
                      {
                        v_53 = t;
                        if(((u_53 != NULL) && (u_53 != v_53)))
                          _fail(v_53);
                        else
                          u_53 = v_53;
                      }
                      t = not_null(u_53);
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
ATerm Match_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym_Match_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      {
        ATerm k_54 = NULL,m_54 = NULL;
        ATerm l_54 = NULL;
        t = SSLgetAnnotations(not_null(g_54));
        {
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
        }
        {
          t = not_null(h_54);
          {
            ATerm o_54 = NULL;
            t = t_99(t);
            {
              m_54 = t;
              {
                ATerm p_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(m_54)), not_null(k_54));
                {
                  p_54 = t;
                  if(((o_54 != NULL) && (o_54 != p_54)))
                    _fail(p_54);
                  else
                    o_54 = p_54;
                }
                t = not_null(o_54);
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
ATerm LChoice_2 (ATerm t, ATerm c_100 (ATerm), ATerm d_100 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_LChoice_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      {
        ATerm o_55 = NULL,q_55 = NULL;
        ATerm p_55 = NULL;
        t = SSLgetAnnotations(not_null(h_55));
        {
          p_55 = t;
          if(((o_55 != NULL) && (o_55 != p_55)))
            _fail(p_55);
          else
            o_55 = p_55;
        }
        {
          t = not_null(i_55);
          {
            ATerm s_55 = NULL;
            t = c_100(t);
            {
              q_55 = t;
              {
                t = not_null(j_55);
                {
                  ATerm u_55 = NULL;
                  t = d_100(t);
                  {
                    s_55 = t;
                    {
                      ATerm v_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_55), not_null(s_55)), not_null(o_55));
                      {
                        v_55 = t;
                        if(((u_55 != NULL) && (u_55 != v_55)))
                          _fail(v_55);
                        else
                          u_55 = v_55;
                      }
                      t = not_null(u_55);
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
ATerm Choice_2 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_Choice_2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      {
        ATerm n_56 = NULL,p_56 = NULL;
        ATerm o_56 = NULL;
        t = SSLgetAnnotations(not_null(h_56));
        {
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
        }
        {
          t = not_null(i_56);
          {
            ATerm r_56 = NULL;
            t = a_99(t);
            {
              p_56 = t;
              {
                t = not_null(j_56);
                {
                  ATerm t_56 = NULL;
                  t = b_99(t);
                  {
                    r_56 = t;
                    {
                      ATerm u_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_56), not_null(r_56)), not_null(n_56));
                      {
                        u_56 = t;
                        if(((t_56 != NULL) && (t_56 != u_56)))
                          _fail(u_56);
                        else
                          t_56 = u_56;
                      }
                      t = not_null(t_56);
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
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0(t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm h_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = h_19;
              {
                ATerm n_19 = t;
                int o_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2(t, inline_rules_0, inline_rules_0);
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
                                LocalPopChoice(s_19);
                              }
                            else
                              {
                                t = r_19;
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
  ATerm c_57 = NULL;
  c_57 = t;
  {
    ATerm t_19;
    t_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, not_null(c_57)));
      {
        ATerm d_3 (ATerm t)
        {
          t = term_a_17;
          return(t);
        }
        t = assert_1(t, d_3);
      }
    }
    t = t_19;
    {
      ATerm v_19;
      v_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, (ATerm) ATmakeAppl(sym_Defined_2, term_w_19, not_null(c_57)));
        {
          ATerm e_3 (ATerm t)
          {
            t = term_l_14;
            return(t);
          }
          t = assert_1(t, e_3);
        }
      }
      t = v_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  {
    ATerm x_19;
    x_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_p_17, not_null(g_57)), term_z_19);
      {
        ATerm f_3 (ATerm t)
        {
          t = term_q_17;
          return(t);
        }
        t = assert_1(t, f_3);
      }
    }
    t = x_19;
    {
      ATerm a_20;
      a_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_n_17, not_null(g_57)), term_c_20);
        {
          ATerm g_3 (ATerm t)
          {
            t = term_o_17;
            return(t);
          }
          t = assert_1(t, g_3);
        }
      }
      t = a_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  x_57 = t;
  r_57 :
  if(match_cons(x_57, sym_CallT_3))
    {
      y_57 = ATgetArgument(x_57, 0);
      a_58 = ATgetArgument(x_57, 1);
      d_58 = ATgetArgument(x_57, 2);
      s_57 :
      if(match_cons(y_57, sym_SVar_1))
        {
          z_57 = ATgetArgument(y_57, 0);
          t_57 :
          if(match_string(z_57, "innermost_1_0"))
            {
              u_57 :
              if(((ATgetType(a_58) == AT_LIST) && !(ATisEmpty(a_58))))
                {
                  b_58 = ATgetFirst((ATermList) a_58);
                  c_58 = (ATerm) ATgetNext((ATermList) a_58);
                  v_57 :
                  if(((ATgetType(c_58) == AT_LIST) && ATisEmpty(c_58)))
                    {
                      w_57 :
                      if(((ATgetType(d_58) == AT_LIST) && ATisEmpty(d_58)))
                        {
                          {
                            ATerm f_58 = NULL,h_58 = NULL;
                            ATerm h_3 (ATerm t)
                            {
                              ATerm i_3 (ATerm t)
                              {
                                t = term_d_20;
                                return(t);
                              }
                              t = say_1(t, i_3);
                              return(t);
                            }
                            t = if_verbose2_1(t, h_3);
                            {
                              ATerm e_20;
                              e_20 = t;
                              {
                                ATerm g_58 = NULL;
                                t = new_0(t);
                                {
                                  g_58 = t;
                                  if(((f_58 != NULL) && (f_58 != g_58)))
                                    _fail(g_58);
                                  else
                                    f_58 = g_58;
                                }
                              }
                              t = e_20;
                              {
                                ATerm g_20;
                                g_20 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                  t = seq_over_choice_0(t);
                                }
                                t = g_20;
                                {
                                  ATerm k_20;
                                  k_20 = t;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                    t = bottomup_to_var_0(t);
                                  }
                                  t = k_20;
                                  {
                                    ATerm i_58 = NULL;
                                    t = not_null(b_58);
                                    {
                                      t = inline_rules_0(t);
                                      {
                                        i_58 = t;
                                        if(((h_58 != NULL) && (h_58 != i_58)))
                                          _fail(i_58);
                                        else
                                          h_58 = i_58;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_58), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_y_13, not_null(h_58)), (ATerm) ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_d_12))), (ATerm) ATempty);
                                      {
                                        t = propagate_mark_0(t);
                                        {
                                          t = fuse_with_bottomup_0(t);
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              ATerm l_20 = t;
                                              int m_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = BottomupToVarIsId_UnCond_0(t);
                                                  ;
                                                  LocalPopChoice(m_20);
                                                }
                                              else
                                                {
                                                  t = l_20;
                                                  {
                                                    ATerm q_20 = t;
                                                    int s_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = BottomupToVarIsId_Cond_0(t);
                                                        ;
                                                        LocalPopChoice(s_20);
                                                      }
                                                    else
                                                      {
                                                        t = q_20;
                                                        t = UnMark_0(t);
                                                      }
                                                  }
                                                }
                                              return(t);
                                            }
                                            t = alltd_1(t, j_3);
                                            {
                                              ATerm t_20 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_3 (ATerm t)
                                                  {
                                                    ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
                                                    j_58 = t;
                                                    m_57 :
                                                    if(match_cons(j_58, sym_CallT_3))
                                                      {
                                                        k_58 = ATgetArgument(j_58, 0);
                                                        m_58 = ATgetArgument(j_58, 1);
                                                        n_58 = ATgetArgument(j_58, 2);
                                                        n_57 :
                                                        if(match_cons(k_58, sym_SVar_1))
                                                          {
                                                            l_58 = ATgetArgument(k_58, 0);
                                                            o_57 :
                                                            if(match_string(l_58, "mark"))
                                                              {
                                                                p_57 :
                                                                if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                                                  {
                                                                    q_57 :
                                                                    if(((ATgetType(n_58) == AT_LIST) && ATisEmpty(n_58)))
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
                                                      t = term_w_20;
                                                      return(t);
                                                    }
                                                    t = say_1(t, l_3);
                                                  }
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = t_20;
                                                }
                                              {
                                                t = desugar_0(t);
                                                {
                                                  ATerm m_3 (ATerm t)
                                                  {
                                                    ATerm n_3 (ATerm t)
                                                    {
                                                      t = term_x_20;
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
ATerm alltd_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm r_58 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_111(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = _all(t, r_58);
      }
    return(t);
  }
  t = r_58(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm w_59 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm c_61 = NULL;
    t = new_0(t);
    {
      c_61 = t;
      {
        if(((w_59 != NULL) && (w_59 != c_61)))
          _fail(c_61);
        else
          w_59 = c_61;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_59)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = term_d_21;
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
            ATerm e_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
                d_61 = t;
                u_58 :
                if(match_cons(d_61, sym_Seq_2))
                  {
                    e_61 = ATgetArgument(d_61, 0);
                    q_61 = ATgetArgument(d_61, 1);
                    v_58 :
                    if(match_cons(e_61, sym_All_1))
                      {
                        f_61 = ATgetArgument(e_61, 0);
                        w_58 :
                        if(match_cons(f_61, sym_CallT_3))
                          {
                            g_61 = ATgetArgument(f_61, 0);
                            i_61 = ATgetArgument(f_61, 1);
                            p_61 = ATgetArgument(f_61, 2);
                            x_58 :
                            if(match_cons(g_61, sym_SVar_1))
                              {
                                h_61 = ATgetArgument(g_61, 0);
                                y_58 :
                                if(match_string(h_61, "bottomup_1_0"))
                                  {
                                    z_58 :
                                    if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
                                      {
                                        j_61 = ATgetFirst((ATermList) i_61);
                                        o_61 = (ATerm) ATgetNext((ATermList) i_61);
                                        a_59 :
                                        if(match_cons(j_61, sym_CallT_3))
                                          {
                                            k_61 = ATgetArgument(j_61, 0);
                                            m_61 = ATgetArgument(j_61, 1);
                                            n_61 = ATgetArgument(j_61, 2);
                                            b_59 :
                                            if(match_cons(k_61, sym_SVar_1))
                                              {
                                                l_61 = ATgetArgument(k_61, 0);
                                                c_59 :
                                                if(((ATgetType(m_61) == AT_LIST) && ATisEmpty(m_61)))
                                                  {
                                                    d_59 :
                                                    if(((ATgetType(n_61) == AT_LIST) && ATisEmpty(n_61)))
                                                      {
                                                        e_59 :
                                                        if(((ATgetType(o_61) == AT_LIST) && ATisEmpty(o_61)))
                                                          {
                                                            f_59 :
                                                            if(((ATgetType(p_61) == AT_LIST) && ATisEmpty(p_61)))
                                                              {
                                                                g_59 :
                                                                if(match_cons(q_61, sym_CallT_3))
                                                                  {
                                                                    r_61 = ATgetArgument(q_61, 0);
                                                                    t_61 = ATgetArgument(q_61, 1);
                                                                    u_61 = ATgetArgument(q_61, 2);
                                                                    h_59 :
                                                                    if(match_cons(r_61, sym_SVar_1))
                                                                      {
                                                                        s_61 = ATgetArgument(r_61, 0);
                                                                        j_59 :
                                                                        if(((ATgetType(t_61) == AT_LIST) && ATisEmpty(t_61)))
                                                                          {
                                                                            v_59 :
                                                                            if(((ATgetType(u_61) == AT_LIST) && ATisEmpty(u_61)))
                                                                              {
                                                                                {
                                                                                  if(((w_59 != NULL) && (w_59 != l_61)))
                                                                                    _fail(l_61);
                                                                                  else
                                                                                    w_59 = l_61;
                                                                                  if(((w_59 != NULL) && (w_59 != s_61)))
                                                                                    _fail(s_61);
                                                                                  else
                                                                                    w_59 = s_61;
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(f_21);
              }
            else
              {
                t = e_21;
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm r_3 (ATerm t)
                    {
                      t = term_g_21;
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
                  t = term_m_21;
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
  t = a_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm w_64 = NULL;
  ATerm n_21;
  n_21 = t;
  {
    ATerm x_64 = NULL;
    t = new_0(t);
    {
      x_64 = t;
      {
        if(((w_64 != NULL) && (w_64 != x_64)))
          _fail(x_64);
        else
          w_64 = x_64;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_64)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm v_3 (ATerm t)
                  {
                    t = term_w_21;
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
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
                s_65 = t;
                b_62 :
                if(match_cons(s_65, sym_Call_2))
                  {
                    t_65 = ATgetArgument(s_65, 0);
                    v_65 = ATgetArgument(s_65, 1);
                    c_62 :
                    if(match_cons(t_65, sym_SVar_1))
                      {
                        u_65 = ATgetArgument(t_65, 0);
                        d_62 :
                        if(match_string(u_65, "bottomup_1_0"))
                          {
                            e_62 :
                            if(((ATgetType(v_65) == AT_LIST) && !(ATisEmpty(v_65))))
                              {
                                w_65 = ATgetFirst((ATermList) v_65);
                                r_66 = (ATerm) ATgetNext((ATermList) v_65);
                                f_62 :
                                if(match_cons(w_65, sym_Call_2))
                                  {
                                    x_65 = ATgetArgument(w_65, 0);
                                    y_65 = ATgetArgument(w_65, 1);
                                    g_62 :
                                    if(match_cons(x_65, sym_SVar_1))
                                      {
                                        y_64 = ATgetArgument(x_65, 0);
                                        k_62 :
                                        if(match_string(y_64, "try_1_0"))
                                          {
                                            l_62 :
                                            if(((ATgetType(y_65) == AT_LIST) && !(ATisEmpty(y_65))))
                                              {
                                                z_65 = ATgetFirst((ATermList) y_65);
                                                q_66 = (ATerm) ATgetNext((ATermList) y_65);
                                                m_62 :
                                                if(match_cons(z_65, sym_Seq_2))
                                                  {
                                                    a_66 = ATgetArgument(z_65, 0);
                                                    f_66 = ATgetArgument(z_65, 1);
                                                    n_62 :
                                                    if(match_cons(a_66, sym_CallT_3))
                                                      {
                                                        b_66 = ATgetArgument(a_66, 0);
                                                        d_66 = ATgetArgument(a_66, 1);
                                                        e_66 = ATgetArgument(a_66, 2);
                                                        o_62 :
                                                        if(match_cons(b_66, sym_SVar_1))
                                                          {
                                                            c_66 = ATgetArgument(b_66, 0);
                                                            p_62 :
                                                            if(((ATgetType(d_66) == AT_LIST) && ATisEmpty(d_66)))
                                                              {
                                                                q_62 :
                                                                if(((ATgetType(e_66) == AT_LIST) && ATisEmpty(e_66)))
                                                                  {
                                                                    r_62 :
                                                                    if(match_cons(f_66, sym_CallT_3))
                                                                      {
                                                                        g_66 = ATgetArgument(f_66, 0);
                                                                        i_66 = ATgetArgument(f_66, 1);
                                                                        p_66 = ATgetArgument(f_66, 2);
                                                                        s_62 :
                                                                        if(match_cons(g_66, sym_SVar_1))
                                                                          {
                                                                            h_66 = ATgetArgument(g_66, 0);
                                                                            t_62 :
                                                                            if(match_string(h_66, "innermost_1_0"))
                                                                              {
                                                                                u_62 :
                                                                                if(((ATgetType(i_66) == AT_LIST) && !(ATisEmpty(i_66))))
                                                                                  {
                                                                                    j_66 = ATgetFirst((ATermList) i_66);
                                                                                    o_66 = (ATerm) ATgetNext((ATermList) i_66);
                                                                                    v_62 :
                                                                                    if(match_cons(j_66, sym_CallT_3))
                                                                                      {
                                                                                        k_66 = ATgetArgument(j_66, 0);
                                                                                        m_66 = ATgetArgument(j_66, 1);
                                                                                        n_66 = ATgetArgument(j_66, 2);
                                                                                        w_62 :
                                                                                        if(match_cons(k_66, sym_SVar_1))
                                                                                          {
                                                                                            l_66 = ATgetArgument(k_66, 0);
                                                                                            x_62 :
                                                                                            if(((ATgetType(m_66) == AT_LIST) && ATisEmpty(m_66)))
                                                                                              {
                                                                                                y_62 :
                                                                                                if(((ATgetType(n_66) == AT_LIST) && ATisEmpty(n_66)))
                                                                                                  {
                                                                                                    z_62 :
                                                                                                    if(((ATgetType(o_66) == AT_LIST) && ATisEmpty(o_66)))
                                                                                                      {
                                                                                                        a_63 :
                                                                                                        if(((ATgetType(p_66) == AT_LIST) && ATisEmpty(p_66)))
                                                                                                          {
                                                                                                            b_63 :
                                                                                                            if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
                                                                                                              {
                                                                                                                c_63 :
                                                                                                                if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
                                                                                                                  {
                                                                                                                    {
                                                                                                                      if(((w_64 != NULL) && (w_64 != c_66)))
                                                                                                                        _fail(c_66);
                                                                                                                      else
                                                                                                                        w_64 = c_66;
                                                                                                                      if(((w_64 != NULL) && (w_64 != l_66)))
                                                                                                                        _fail(l_66);
                                                                                                                      else
                                                                                                                        w_64 = l_66;
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    if(match_cons(s_65, sym_CallT_3))
                      {
                        t_65 = ATgetArgument(s_65, 0);
                        v_65 = ATgetArgument(s_65, 1);
                        s_66 = ATgetArgument(s_65, 2);
                        d_63 :
                        if(match_cons(t_65, sym_SVar_1))
                          {
                            u_65 = ATgetArgument(t_65, 0);
                            e_63 :
                            if(match_string(u_65, "bottomup_1_0"))
                              {
                                f_63 :
                                if(((ATgetType(v_65) == AT_LIST) && !(ATisEmpty(v_65))))
                                  {
                                    w_65 = ATgetFirst((ATermList) v_65);
                                    r_66 = (ATerm) ATgetNext((ATermList) v_65);
                                    g_63 :
                                    if(match_cons(w_65, sym_Rec_2))
                                      {
                                        x_65 = ATgetArgument(w_65, 0);
                                        y_65 = ATgetArgument(w_65, 1);
                                        h_63 :
                                        if(match_cons(y_65, sym_CallT_3))
                                          {
                                            z_65 = ATgetArgument(y_65, 0);
                                            q_66 = ATgetArgument(y_65, 1);
                                            r_65 = ATgetArgument(y_65, 2);
                                            i_63 :
                                            if(match_cons(z_65, sym_SVar_1))
                                              {
                                                a_66 = ATgetArgument(z_65, 0);
                                                j_63 :
                                                if(match_string(a_66, "try_1_0"))
                                                  {
                                                    k_63 :
                                                    if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
                                                      {
                                                        z_64 = ATgetFirst((ATermList) q_66);
                                                        q_65 = (ATerm) ATgetNext((ATermList) q_66);
                                                        l_63 :
                                                        if(match_cons(z_64, sym_Seq_2))
                                                          {
                                                            a_65 = ATgetArgument(z_64, 0);
                                                            f_65 = ATgetArgument(z_64, 1);
                                                            m_63 :
                                                            if(match_cons(a_65, sym_CallT_3))
                                                              {
                                                                b_65 = ATgetArgument(a_65, 0);
                                                                d_65 = ATgetArgument(a_65, 1);
                                                                e_65 = ATgetArgument(a_65, 2);
                                                                n_63 :
                                                                if(match_cons(b_65, sym_SVar_1))
                                                                  {
                                                                    c_65 = ATgetArgument(b_65, 0);
                                                                    o_63 :
                                                                    if(((ATgetType(d_65) == AT_LIST) && ATisEmpty(d_65)))
                                                                      {
                                                                        p_63 :
                                                                        if(((ATgetType(e_65) == AT_LIST) && ATisEmpty(e_65)))
                                                                          {
                                                                            q_63 :
                                                                            if(match_cons(f_65, sym_CallT_3))
                                                                              {
                                                                                g_65 = ATgetArgument(f_65, 0);
                                                                                i_65 = ATgetArgument(f_65, 1);
                                                                                p_65 = ATgetArgument(f_65, 2);
                                                                                r_63 :
                                                                                if(match_cons(g_65, sym_SVar_1))
                                                                                  {
                                                                                    h_65 = ATgetArgument(g_65, 0);
                                                                                    s_63 :
                                                                                    if(match_string(h_65, "bottomup_1_0"))
                                                                                      {
                                                                                        t_63 :
                                                                                        if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
                                                                                          {
                                                                                            j_65 = ATgetFirst((ATermList) i_65);
                                                                                            o_65 = (ATerm) ATgetNext((ATermList) i_65);
                                                                                            u_63 :
                                                                                            if(match_cons(j_65, sym_CallT_3))
                                                                                              {
                                                                                                k_65 = ATgetArgument(j_65, 0);
                                                                                                m_65 = ATgetArgument(j_65, 1);
                                                                                                n_65 = ATgetArgument(j_65, 2);
                                                                                                v_63 :
                                                                                                if(match_cons(k_65, sym_SVar_1))
                                                                                                  {
                                                                                                    l_65 = ATgetArgument(k_65, 0);
                                                                                                    w_63 :
                                                                                                    if(((ATgetType(m_65) == AT_LIST) && ATisEmpty(m_65)))
                                                                                                      {
                                                                                                        x_63 :
                                                                                                        if(((ATgetType(n_65) == AT_LIST) && ATisEmpty(n_65)))
                                                                                                          {
                                                                                                            y_63 :
                                                                                                            if(((ATgetType(o_65) == AT_LIST) && ATisEmpty(o_65)))
                                                                                                              {
                                                                                                                z_63 :
                                                                                                                if(((ATgetType(p_65) == AT_LIST) && ATisEmpty(p_65)))
                                                                                                                  {
                                                                                                                    a_64 :
                                                                                                                    if(((ATgetType(q_65) == AT_LIST) && ATisEmpty(q_65)))
                                                                                                                      {
                                                                                                                        b_64 :
                                                                                                                        if(((ATgetType(r_65) == AT_LIST) && ATisEmpty(r_65)))
                                                                                                                          {
                                                                                                                            c_64 :
                                                                                                                            if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
                                                                                                                              {
                                                                                                                                d_64 :
                                                                                                                                if(((ATgetType(s_66) == AT_LIST) && ATisEmpty(s_66)))
                                                                                                                                  {
                                                                                                                                    {
                                                                                                                                      if(((w_64 != NULL) && (w_64 != c_65)))
                                                                                                                                        _fail(c_65);
                                                                                                                                      else
                                                                                                                                        w_64 = c_65;
                                                                                                                                      if(((x_65 != NULL) && (x_65 != l_65)))
                                                                                                                                        _fail(l_65);
                                                                                                                                      else
                                                                                                                                        x_65 = l_65;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    _fail(t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                _fail(t);
                                                                                                                              }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(y_65, sym_LChoice_2))
                                              {
                                                z_65 = ATgetArgument(y_65, 0);
                                                q_66 = ATgetArgument(y_65, 1);
                                                e_64 :
                                                if(match_cons(z_65, sym_Seq_2))
                                                  {
                                                    a_66 = ATgetArgument(z_65, 0);
                                                    f_66 = ATgetArgument(z_65, 1);
                                                    f_64 :
                                                    if(match_cons(a_66, sym_CallT_3))
                                                      {
                                                        b_66 = ATgetArgument(a_66, 0);
                                                        d_66 = ATgetArgument(a_66, 1);
                                                        e_66 = ATgetArgument(a_66, 2);
                                                        g_64 :
                                                        if(match_cons(b_66, sym_SVar_1))
                                                          {
                                                            c_66 = ATgetArgument(b_66, 0);
                                                            h_64 :
                                                            if(((ATgetType(d_66) == AT_LIST) && ATisEmpty(d_66)))
                                                              {
                                                                i_64 :
                                                                if(((ATgetType(e_66) == AT_LIST) && ATisEmpty(e_66)))
                                                                  {
                                                                    j_64 :
                                                                    if(match_cons(f_66, sym_CallT_3))
                                                                      {
                                                                        g_66 = ATgetArgument(f_66, 0);
                                                                        i_66 = ATgetArgument(f_66, 1);
                                                                        p_66 = ATgetArgument(f_66, 2);
                                                                        k_64 :
                                                                        if(match_cons(g_66, sym_SVar_1))
                                                                          {
                                                                            h_66 = ATgetArgument(g_66, 0);
                                                                            l_64 :
                                                                            if(match_string(h_66, "bottomup_1_0"))
                                                                              {
                                                                                m_64 :
                                                                                if(((ATgetType(i_66) == AT_LIST) && !(ATisEmpty(i_66))))
                                                                                  {
                                                                                    j_66 = ATgetFirst((ATermList) i_66);
                                                                                    o_66 = (ATerm) ATgetNext((ATermList) i_66);
                                                                                    n_64 :
                                                                                    if(match_cons(j_66, sym_CallT_3))
                                                                                      {
                                                                                        k_66 = ATgetArgument(j_66, 0);
                                                                                        m_66 = ATgetArgument(j_66, 1);
                                                                                        n_66 = ATgetArgument(j_66, 2);
                                                                                        o_64 :
                                                                                        if(match_cons(k_66, sym_SVar_1))
                                                                                          {
                                                                                            l_66 = ATgetArgument(k_66, 0);
                                                                                            p_64 :
                                                                                            if(((ATgetType(m_66) == AT_LIST) && ATisEmpty(m_66)))
                                                                                              {
                                                                                                q_64 :
                                                                                                if(((ATgetType(n_66) == AT_LIST) && ATisEmpty(n_66)))
                                                                                                  {
                                                                                                    r_64 :
                                                                                                    if(((ATgetType(o_66) == AT_LIST) && ATisEmpty(o_66)))
                                                                                                      {
                                                                                                        s_64 :
                                                                                                        if(((ATgetType(p_66) == AT_LIST) && ATisEmpty(p_66)))
                                                                                                          {
                                                                                                            t_64 :
                                                                                                            if(match_cons(q_66, sym_Id_0))
                                                                                                              {
                                                                                                                u_64 :
                                                                                                                if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
                                                                                                                  {
                                                                                                                    v_64 :
                                                                                                                    if(((ATgetType(s_66) == AT_LIST) && ATisEmpty(s_66)))
                                                                                                                      {
                                                                                                                        {
                                                                                                                          if(((w_64 != NULL) && (w_64 != c_66)))
                                                                                                                            _fail(c_66);
                                                                                                                          else
                                                                                                                            w_64 = c_66;
                                                                                                                          if(((x_65 != NULL) && (x_65 != l_66)))
                                                                                                                            _fail(l_66);
                                                                                                                          else
                                                                                                                            x_65 = l_66;
                                                                                                                        }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
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
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm x_3 (ATerm t)
                    {
                      t = term_c_22;
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
                  t = term_d_22;
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
  t = n_21;
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  t_67 = t;
  s_67 :
  if(match_cons(t_67, sym_Cong_2))
    {
      u_67 = ATgetArgument(t_67, 0);
      v_67 = ATgetArgument(t_67, 1);
      {
        ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,y_68 = NULL,a_69 = NULL,c_69 = NULL;
        ATerm e_22;
        e_22 = t;
        {
          ATerm e_68 = NULL;
          t = not_null(v_67);
          {
            ATerm h_68 = NULL;
            t = map_1(t, new_0);
            {
              e_68 = t;
              {
                if(((b_68 != NULL) && (b_68 != e_68)))
                  _fail(e_68);
                else
                  b_68 = e_68;
                {
                  t = not_null(b_68);
                  {
                    ATerm i_68 = NULL;
                    ATerm a_4 (ATerm t)
                    {
                      ATerm f_68 = NULL;
                      ATerm g_68 = NULL;
                      g_68 = t;
                      if(((f_68 != NULL) && (f_68 != g_68)))
                        _fail(g_68);
                      else
                        f_68 = g_68;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_68));
                      return(t);
                    }
                    t = map_1(t, a_4);
                    {
                      h_68 = t;
                      {
                        if(((y_67 != NULL) && (y_67 != h_68)))
                          _fail(h_68);
                        else
                          y_67 = h_68;
                        {
                          ATerm j_68 = NULL;
                          t = new_0(t);
                          {
                            i_68 = t;
                            {
                              if(((z_67 != NULL) && (z_67 != i_68)))
                                _fail(i_68);
                              else
                                z_67 = i_68;
                              {
                                t = not_null(v_67);
                                {
                                  ATerm m_68 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    j_68 = t;
                                    {
                                      if(((c_68 != NULL) && (c_68 != j_68)))
                                        _fail(j_68);
                                      else
                                        c_68 = j_68;
                                      {
                                        t = not_null(c_68);
                                        {
                                          ATerm n_68 = NULL,x_68 = NULL;
                                          ATerm b_4 (ATerm t)
                                          {
                                            ATerm k_68 = NULL;
                                            ATerm l_68 = NULL;
                                            l_68 = t;
                                            if(((k_68 != NULL) && (k_68 != l_68)))
                                              _fail(l_68);
                                            else
                                              k_68 = l_68;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_68));
                                            return(t);
                                          }
                                          t = map_1(t, b_4);
                                          {
                                            m_68 = t;
                                            {
                                              if(((a_68 != NULL) && (a_68 != m_68)))
                                                _fail(m_68);
                                              else
                                                a_68 = m_68;
                                              {
                                                ATerm o_68 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_68), not_null(c_68));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    o_68 = t;
                                                    if(((n_68 != NULL) && (n_68 != o_68)))
                                                      _fail(o_68);
                                                    else
                                                      n_68 = o_68;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_68), not_null(v_67));
                                                  {
                                                    ATerm c_4 (ATerm t)
                                                    {
                                                      ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
                                                      p_68 = t;
                                                      m_67 :
                                                      if(match_cons(p_68, sym__2))
                                                        {
                                                          q_68 = ATgetArgument(p_68, 0);
                                                          t_68 = ATgetArgument(p_68, 1);
                                                          n_67 :
                                                          if(match_cons(q_68, sym__2))
                                                            {
                                                              r_68 = ATgetArgument(q_68, 0);
                                                              s_68 = ATgetArgument(q_68, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_68)))));
                                                            }
                                                          else
                                                            {
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
                                                      x_68 = t;
                                                      if(((d_68 != NULL) && (d_68 != x_68)))
                                                        _fail(x_68);
                                                      else
                                                        d_68 = x_68;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = e_22;
        {
          ATerm f_22;
          f_22 = t;
          {
            ATerm z_68 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_68), not_null(c_68));
            {
              t = conc_0(t);
              {
                z_68 = t;
                if(((y_68 != NULL) && (y_68 != z_68)))
                  _fail(z_68);
                else
                  y_68 = z_68;
              }
            }
          }
          t = f_22;
          {
            ATerm g_22;
            g_22 = t;
            {
              ATerm b_69 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_67), not_null(y_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_67))));
              {
                t = Mapp2_0(t);
                {
                  b_69 = t;
                  if(((a_69 != NULL) && (a_69 != b_69)))
                    _fail(b_69);
                  else
                    a_69 = b_69;
                }
              }
            }
            t = g_22;
            {
              ATerm d_69 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_67), not_null(a_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_67))));
              {
                t = Bapp2_0(t);
                {
                  d_69 = t;
                  if(((c_69 != NULL) && (c_69 != d_69)))
                    _fail(d_69);
                  else
                    c_69 = d_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(y_68)), not_null(z_67)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_69), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_68)), not_null(c_69))));
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
  ATerm o_70 = NULL,p_70 = NULL;
  o_70 = t;
  n_70 :
  if(match_cons(o_70, sym_Build_1))
    {
      p_70 = ATgetArgument(o_70, 0);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
            ATerm v_70 = NULL;
            ATerm z_70 = NULL;
            t = new_0(t);
            {
              v_70 = t;
              {
                if(((t_70 != NULL) && (t_70 != v_70)))
                  _fail(v_70);
                else
                  t_70 = v_70;
                {
                  t = not_null(p_70);
                  {
                    ATerm d_4 (ATerm t)
                    {
                      ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
                      w_70 = t;
                      d_70 :
                      if(match_cons(w_70, sym_Anno_2))
                        {
                          x_70 = ATgetArgument(w_70, 0);
                          y_70 = ATgetArgument(w_70, 1);
                          {
                            if(((r_70 != NULL) && (r_70 != x_70)))
                              _fail(x_70);
                            else
                              r_70 = x_70;
                            {
                              if(((s_70 != NULL) && (s_70 != y_70)))
                                _fail(y_70);
                              else
                                s_70 = y_70;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_70));
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
                      z_70 = t;
                      if(((u_70 != NULL) && (u_70 != z_70)))
                        _fail(z_70);
                      else
                        u_70 = z_70;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_70)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_70)), not_null(r_70))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_70))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_70))));
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm r_22 = t;
              int s_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
                  ATerm e_71 = NULL;
                  ATerm h_71 = NULL;
                  t = new_0(t);
                  {
                    e_71 = t;
                    {
                      if(((c_71 != NULL) && (c_71 != e_71)))
                        _fail(e_71);
                      else
                        c_71 = e_71;
                      {
                        t = not_null(p_70);
                        {
                          ATerm e_4 (ATerm t)
                          {
                            ATerm f_71 = NULL,g_71 = NULL;
                            f_71 = t;
                            h_70 :
                            if(match_cons(f_71, sym_RootApp_1))
                              {
                                g_71 = ATgetArgument(f_71, 0);
                                {
                                  if(((b_71 != NULL) && (b_71 != g_71)))
                                    _fail(g_71);
                                  else
                                    b_71 = g_71;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_71));
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
                            h_71 = t;
                            if(((d_71 != NULL) && (d_71 != h_71)))
                              _fail(h_71);
                            else
                              d_71 = h_71;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_71)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_71), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_71))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_71))));
                  ;
                  LocalPopChoice(s_22);
                }
              else
                {
                  t = r_22;
                  {
                    ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
                    ATerm n_71 = NULL;
                    ATerm r_71 = NULL;
                    t = new_0(t);
                    {
                      n_71 = t;
                      {
                        if(((l_71 != NULL) && (l_71 != n_71)))
                          _fail(n_71);
                        else
                          l_71 = n_71;
                        {
                          t = not_null(p_70);
                          {
                            ATerm f_4 (ATerm t)
                            {
                              ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
                              o_71 = t;
                              l_70 :
                              if(match_cons(o_71, sym_App_2))
                                {
                                  p_71 = ATgetArgument(o_71, 0);
                                  q_71 = ATgetArgument(o_71, 1);
                                  {
                                    if(((j_71 != NULL) && (j_71 != p_71)))
                                      _fail(p_71);
                                    else
                                      j_71 = p_71;
                                    {
                                      if(((k_71 != NULL) && (k_71 != q_71)))
                                        _fail(q_71);
                                      else
                                        k_71 = q_71;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_71));
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
                              r_71 = t;
                              if(((m_71 != NULL) && (m_71 != r_71)))
                                _fail(r_71);
                              else
                                m_71 = r_71;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_71)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_71), not_null(k_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_71)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_71))));
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
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
  l_73 = t;
  e_73 :
  if(match_cons(l_73, sym_Call_2))
    {
      m_73 = ATgetArgument(l_73, 0);
      o_73 = ATgetArgument(l_73, 1);
      f_73 :
      if(match_cons(m_73, sym_SVar_1))
        {
          n_73 = ATgetArgument(m_73, 0);
          g_73 :
          if(match_string(n_73, "Anno_Cong__"))
            {
              h_73 :
              if(((ATgetType(o_73) == AT_LIST) && !(ATisEmpty(o_73))))
                {
                  p_73 = ATgetFirst((ATermList) o_73);
                  s_73 = (ATerm) ATgetNext((ATermList) o_73);
                  i_73 :
                  if(match_cons(p_73, sym_Cong_2))
                    {
                      q_73 = ATgetArgument(p_73, 0);
                      r_73 = ATgetArgument(p_73, 1);
                      j_73 :
                      if(((ATgetType(s_73) == AT_LIST) && !(ATisEmpty(s_73))))
                        {
                          t_73 = ATgetFirst((ATermList) s_73);
                          u_73 = (ATerm) ATgetNext((ATermList) s_73);
                          k_73 :
                          if(((ATgetType(u_73) == AT_LIST) && ATisEmpty(u_73)))
                            {
                              {
                                ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,j_75 = NULL,l_75 = NULL,p_75 = NULL;
                                ATerm t_22;
                                t_22 = t;
                                {
                                  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(r_73)), not_null(t_73));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      f_74 = t;
                                      r_72 :
                                      if(((ATgetType(f_74) == AT_LIST) && !(ATisEmpty(f_74))))
                                        {
                                          g_74 = ATgetFirst((ATermList) f_74);
                                          h_74 = (ATerm) ATgetNext((ATermList) f_74);
                                          {
                                            ATerm k_74 = NULL;
                                            if(((y_73 != NULL) && (y_73 != g_74)))
                                              _fail(g_74);
                                            else
                                              y_73 = g_74;
                                            {
                                              if(((c_74 != NULL) && (c_74 != h_74)))
                                                _fail(h_74);
                                              else
                                                c_74 = h_74;
                                              {
                                                ATerm l_74 = NULL,m_74 = NULL,o_74 = NULL;
                                                ATerm g_4 (ATerm t)
                                                {
                                                  ATerm i_74 = NULL;
                                                  ATerm j_74 = NULL;
                                                  j_74 = t;
                                                  if(((i_74 != NULL) && (i_74 != j_74)))
                                                    _fail(j_74);
                                                  else
                                                    i_74 = j_74;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_74));
                                                  return(t);
                                                }
                                                t = map_1(t, g_4);
                                                {
                                                  k_74 = t;
                                                  {
                                                    if(((z_73 != NULL) && (z_73 != k_74)))
                                                      _fail(k_74);
                                                    else
                                                      z_73 = k_74;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(r_73)), not_null(t_73));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          l_74 = t;
                                                          q_72 :
                                                          if(((ATgetType(l_74) == AT_LIST) && !(ATisEmpty(l_74))))
                                                            {
                                                              m_74 = ATgetFirst((ATermList) l_74);
                                                              o_74 = (ATerm) ATgetNext((ATermList) l_74);
                                                              {
                                                                ATerm r_74 = NULL;
                                                                if(((a_74 != NULL) && (a_74 != m_74)))
                                                                  _fail(m_74);
                                                                else
                                                                  a_74 = m_74;
                                                                {
                                                                  if(((d_74 != NULL) && (d_74 != o_74)))
                                                                    _fail(o_74);
                                                                  else
                                                                    d_74 = o_74;
                                                                  {
                                                                    ATerm s_74 = NULL,c_75 = NULL;
                                                                    ATerm h_4 (ATerm t)
                                                                    {
                                                                      ATerm p_74 = NULL;
                                                                      ATerm q_74 = NULL;
                                                                      q_74 = t;
                                                                      if(((p_74 != NULL) && (p_74 != q_74)))
                                                                        _fail(q_74);
                                                                      else
                                                                        p_74 = q_74;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_74));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, h_4);
                                                                    {
                                                                      r_74 = t;
                                                                      {
                                                                        if(((b_74 != NULL) && (b_74 != r_74)))
                                                                          _fail(r_74);
                                                                        else
                                                                          b_74 = r_74;
                                                                        {
                                                                          ATerm t_74 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), not_null(d_74));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              t_74 = t;
                                                                              if(((s_74 != NULL) && (s_74 != t_74)))
                                                                                _fail(t_74);
                                                                              else
                                                                                s_74 = t_74;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), (ATerm) ATinsert(CheckATermList(not_null(r_73)), not_null(t_73)));
                                                                            {
                                                                              ATerm i_4 (ATerm t)
                                                                              {
                                                                                ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
                                                                                u_74 = t;
                                                                                n_72 :
                                                                                if(match_cons(u_74, sym__2))
                                                                                  {
                                                                                    v_74 = ATgetArgument(u_74, 0);
                                                                                    y_74 = ATgetArgument(u_74, 1);
                                                                                    o_72 :
                                                                                    if(match_cons(v_74, sym__2))
                                                                                      {
                                                                                        w_74 = ATgetArgument(v_74, 0);
                                                                                        x_74 = ATgetArgument(v_74, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_74))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_74), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_74)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                c_75 = t;
                                                                                if(((e_74 != NULL) && (e_74 != c_75)))
                                                                                  _fail(c_75);
                                                                                else
                                                                                  e_74 = c_75;
                                                                              }
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
                                t = t_22;
                                {
                                  ATerm u_22;
                                  u_22 = t;
                                  {
                                    ATerm k_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), not_null(d_74));
                                    {
                                      t = conc_0(t);
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
                                    ATerm v_22;
                                    v_22 = t;
                                    {
                                      ATerm m_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_73), not_null(z_73)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_73))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          m_75 = t;
                                          if(((l_75 != NULL) && (l_75 != m_75)))
                                            _fail(m_75);
                                          else
                                            l_75 = m_75;
                                        }
                                      }
                                    }
                                    t = v_22;
                                    {
                                      ATerm q_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(q_73), not_null(b_74)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          q_75 = t;
                                          if(((p_75 != NULL) && (p_75 != q_75)))
                                            _fail(q_75);
                                          else
                                            p_75 = q_75;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(j_75)), not_null(a_74)), not_null(y_73)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_74)), not_null(p_75))));
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
ATerm As_2 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm))
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  p_76 :
  if(match_cons(q_76, sym_As_2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      {
        ATerm w_76 = NULL,y_76 = NULL;
        ATerm x_76 = NULL;
        t = SSLgetAnnotations(not_null(q_76));
        {
          x_76 = t;
          if(((w_76 != NULL) && (w_76 != x_76)))
            _fail(x_76);
          else
            w_76 = x_76;
        }
        {
          t = not_null(r_76);
          {
            ATerm a_77 = NULL;
            t = t_96(t);
            {
              y_76 = t;
              {
                t = not_null(s_76);
                {
                  ATerm c_77 = NULL;
                  t = u_96(t);
                  {
                    a_77 = t;
                    {
                      ATerm d_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(y_76), not_null(a_77)), not_null(w_76));
                      {
                        d_77 = t;
                        if(((c_77 != NULL) && (c_77 != d_77)))
                          _fail(d_77);
                        else
                          c_77 = d_77;
                      }
                      t = not_null(c_77);
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
ATerm PrimT_3 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  q_77 = t;
  p_77 :
  if(match_cons(q_77, sym_PrimT_3))
    {
      r_77 = ATgetArgument(q_77, 0);
      s_77 = ATgetArgument(q_77, 1);
      t_77 = ATgetArgument(q_77, 2);
      {
        ATerm y_77 = NULL,a_78 = NULL;
        ATerm z_77 = NULL;
        t = SSLgetAnnotations(not_null(q_77));
        {
          z_77 = t;
          if(((y_77 != NULL) && (y_77 != z_77)))
            _fail(z_77);
          else
            y_77 = z_77;
        }
        {
          t = not_null(r_77);
          {
            ATerm c_78 = NULL;
            t = s_100(t);
            {
              a_78 = t;
              {
                t = not_null(s_77);
                {
                  ATerm e_78 = NULL;
                  t = t_100(t);
                  {
                    c_78 = t;
                    {
                      t = not_null(t_77);
                      {
                        ATerm g_78 = NULL;
                        t = u_100(t);
                        {
                          e_78 = t;
                          {
                            ATerm h_78 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(a_78), not_null(c_78), not_null(e_78)), not_null(y_77));
                            {
                              h_78 = t;
                              if(((g_78 != NULL) && (g_78 != h_78)))
                                _fail(h_78);
                              else
                                g_78 = h_78;
                            }
                            t = not_null(g_78);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm m_96 (ATerm), ATerm n_96 (ATerm))
{
  ATerm y_79 = NULL,b_80 = NULL,c_80 = NULL;
  y_79 = t;
  s_79 :
  if(match_cons(y_79, sym_Explode_2))
    {
      b_80 = ATgetArgument(y_79, 0);
      c_80 = ATgetArgument(y_79, 1);
      {
        ATerm g_80 = NULL,i_80 = NULL;
        ATerm h_80 = NULL;
        t = SSLgetAnnotations(not_null(y_79));
        {
          h_80 = t;
          if(((g_80 != NULL) && (g_80 != h_80)))
            _fail(h_80);
          else
            g_80 = h_80;
        }
        {
          t = not_null(b_80);
          {
            ATerm k_80 = NULL;
            t = m_96(t);
            {
              i_80 = t;
              {
                t = not_null(c_80);
                {
                  ATerm m_80 = NULL;
                  t = n_96(t);
                  {
                    k_80 = t;
                    {
                      ATerm n_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_80), not_null(k_80)), not_null(g_80));
                      {
                        n_80 = t;
                        if(((m_80 != NULL) && (m_80 != n_80)))
                          _fail(n_80);
                        else
                          m_80 = n_80;
                      }
                      t = not_null(m_80);
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
ATerm Op_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym_Op_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        ATerm p_81 = NULL,s_81 = NULL;
        ATerm q_81 = NULL;
        t = SSLgetAnnotations(not_null(z_80));
        {
          q_81 = t;
          if(((p_81 != NULL) && (p_81 != q_81)))
            _fail(q_81);
          else
            p_81 = q_81;
        }
        {
          t = not_null(a_81);
          {
            ATerm f_82 = NULL;
            t = i_96(t);
            {
              s_81 = t;
              {
                t = not_null(b_81);
                {
                  ATerm h_82 = NULL;
                  t = j_96(t);
                  {
                    f_82 = t;
                    {
                      ATerm i_82 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(s_81), not_null(f_82)), not_null(p_81));
                      {
                        i_82 = t;
                        if(((h_82 != NULL) && (h_82 != i_82)))
                          _fail(i_82);
                        else
                          h_82 = i_82;
                      }
                      t = not_null(h_82);
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
ATerm pat_td_1 (ATerm t, ATerm l_138 (ATerm))
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_138(t);
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
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                t = pat_td_1(t, l_138);
                return(t);
              }
              t = fetch_1(t, k_4);
              return(t);
            }
            t = Op_2(t, _id, j_4);
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
                  ATerm l_4 (ATerm t)
                  {
                    t = pat_td_1(t, l_138);
                    return(t);
                  }
                  t = Explode_2(t, _id, l_4);
                  ;
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm c_23 = t;
                    int f_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          t = pat_td_1(t, l_138);
                          return(t);
                        }
                        t = Explode_2(t, m_4, _id);
                        ;
                        LocalPopChoice(f_23);
                      }
                    else
                      {
                        t = c_23;
                        {
                          ATerm g_23 = t;
                          int m_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  t = pat_td_1(t, l_138);
                                  return(t);
                                }
                                t = fetch_1(t, o_4);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, n_4);
                              ;
                              LocalPopChoice(m_23);
                            }
                          else
                            {
                              t = g_23;
                              {
                                ATerm p_4 (ATerm t)
                                {
                                  t = pat_td_1(t, l_138);
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
  ATerm b_84 = NULL,w_87 = NULL;
  b_84 = t;
  a_84 :
  if(match_cons(b_84, sym_Match_1))
    {
      w_87 = ATgetArgument(b_84, 0);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
            ATerm s_89 = NULL;
            ATerm y_89 = NULL;
            t = new_0(t);
            {
              s_89 = t;
              {
                if(((a_88 != NULL) && (a_88 != s_89)))
                  _fail(s_89);
                else
                  a_88 = s_89;
                {
                  t = not_null(w_87);
                  {
                    ATerm q_4 (ATerm t)
                    {
                      ATerm t_89 = NULL,w_89 = NULL,x_89 = NULL;
                      t_89 = t;
                      t_82 :
                      if(match_cons(t_89, sym_Anno_2))
                        {
                          w_89 = ATgetArgument(t_89, 0);
                          x_89 = ATgetArgument(t_89, 1);
                          {
                            if(((y_87 != NULL) && (y_87 != w_89)))
                              _fail(w_89);
                            else
                              y_87 = w_89;
                            {
                              if(((z_87 != NULL) && (z_87 != x_89)))
                                _fail(x_89);
                              else
                                z_87 = x_89;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_88)), not_null(y_87));
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
                      y_89 = t;
                      if(((b_88 != NULL) && (b_88 != y_89)))
                        _fail(y_89);
                      else
                        b_88 = y_89;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_88)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_88)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_88)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_87))))));
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
                  ATerm d_90 = NULL;
                  ATerm g_90 = NULL;
                  t = new_0(t);
                  {
                    d_90 = t;
                    {
                      if(((b_90 != NULL) && (b_90 != d_90)))
                        _fail(d_90);
                      else
                        b_90 = d_90;
                      {
                        t = not_null(w_87);
                        {
                          ATerm r_4 (ATerm t)
                          {
                            ATerm e_90 = NULL,f_90 = NULL;
                            e_90 = t;
                            u_83 :
                            if(match_cons(e_90, sym_RootApp_1))
                              {
                                f_90 = ATgetArgument(e_90, 0);
                                {
                                  if(((a_90 != NULL) && (a_90 != f_90)))
                                    _fail(f_90);
                                  else
                                    a_90 = f_90;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_90));
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
                            g_90 = t;
                            if(((c_90 != NULL) && (c_90 != g_90)))
                              _fail(g_90);
                            else
                              c_90 = g_90;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_90))), not_null(a_90))));
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  {
                    ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
                    ATerm m_90 = NULL;
                    ATerm q_90 = NULL;
                    t = new_0(t);
                    {
                      m_90 = t;
                      {
                        if(((k_90 != NULL) && (k_90 != m_90)))
                          _fail(m_90);
                        else
                          k_90 = m_90;
                        {
                          t = not_null(w_87);
                          {
                            ATerm s_4 (ATerm t)
                            {
                              ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
                              n_90 = t;
                              y_83 :
                              if(match_cons(n_90, sym_App_2))
                                {
                                  o_90 = ATgetArgument(n_90, 0);
                                  p_90 = ATgetArgument(n_90, 1);
                                  {
                                    if(((j_90 != NULL) && (j_90 != o_90)))
                                      _fail(o_90);
                                    else
                                      j_90 = o_90;
                                    {
                                      if(((i_90 != NULL) && (i_90 != p_90)))
                                        _fail(p_90);
                                      else
                                        i_90 = p_90;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_90));
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
                              q_90 = t;
                              if(((l_90 != NULL) && (l_90 != q_90)))
                                _fail(q_90);
                              else
                                l_90 = q_90;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_90))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_90)), not_null(j_90)))));
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
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
  j_91 = t;
  i_91 :
  if(match_cons(j_91, sym_Cong_2))
    {
      k_91 = ATgetArgument(j_91, 0);
      l_91 = ATgetArgument(j_91, 1);
      {
        ATerm o_91 = NULL;
        ATerm s_91 = NULL;
        t = not_null(l_91);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm p_91 = NULL,q_91 = NULL;
            q_91 = t;
            g_91 :
            if(match_cons(q_91, sym_Match_1))
              {
                p_91 = ATgetArgument(q_91, 0);
                t = not_null(p_91);
              }
            else
              {
                if(match_cons(q_91, sym_Id_0))
                  {
                    t = term_x_24;
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
            s_91 = t;
            if(((o_91 != NULL) && (o_91 != s_91)))
              _fail(s_91);
            else
              o_91 = s_91;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_91), not_null(o_91)));
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
ATerm EmptyScope_0 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  a_92 = t;
  y_91 :
  if(match_cons(a_92, sym_Scope_2))
    {
      b_92 = ATgetArgument(a_92, 0);
      c_92 = ATgetArgument(a_92, 1);
      z_91 :
      if(((ATgetType(b_92) == AT_LIST) && ATisEmpty(b_92)))
        {
          t = not_null(c_92);
        }
      else
        {
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
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  n_92 :
  if(match_cons(c_94, sym_Where_1))
    {
      d_94 = ATgetArgument(c_94, 0);
      o_92 :
      if(match_cons(d_94, sym_Seq_2))
        {
          b_94 = ATgetArgument(d_94, 0);
          x_93 = ATgetArgument(d_94, 1);
          p_93 :
          if(match_cons(b_94, sym_Where_1))
            {
              w_93 = ATgetArgument(b_94, 0);
              s_93 :
              if(match_cons(x_93, sym_Seq_2))
                {
                  y_93 = ATgetArgument(x_93, 0);
                  a_94 = ATgetArgument(x_93, 1);
                  t_93 :
                  if(match_cons(y_93, sym_Build_1))
                    {
                      z_93 = ATgetArgument(y_93, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_93), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_93)), not_null(a_94))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_94, sym_Where_1))
            {
              b_94 = ATgetArgument(d_94, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(b_94));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(c_94, sym_Test_1))
        {
          d_94 = ATgetArgument(c_94, 0);
          u_93 :
          if(match_cons(d_94, sym_Test_1))
            {
              b_94 = ATgetArgument(d_94, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(b_94));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_94, sym_Not_1))
            {
              d_94 = ATgetArgument(c_94, 0);
              v_93 :
              if(match_cons(d_94, sym_Not_1))
                {
                  b_94 = ATgetArgument(d_94, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(b_94));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(c_94, sym_LChoice_2))
                {
                  d_94 = ATgetArgument(c_94, 0);
                  e_94 = ATgetArgument(c_94, 1);
                  {
                    if(((d_94 != NULL) && (d_94 != e_94)))
                      _fail(e_94);
                    else
                      d_94 = e_94;
                    t = not_null(d_94);
                  }
                }
              else
                {
                  if(match_cons(c_94, sym_Choice_2))
                    {
                      d_94 = ATgetArgument(c_94, 0);
                      e_94 = ATgetArgument(c_94, 1);
                      {
                        if(((d_94 != NULL) && (d_94 != e_94)))
                          _fail(e_94);
                        else
                          d_94 = e_94;
                        t = not_null(d_94);
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
  ATerm c_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,j_95 = NULL;
  c_95 = t;
  w_94 :
  if(match_cons(c_95, sym_LChoice_2))
    {
      f_95 = ATgetArgument(c_95, 0);
      j_95 = ATgetArgument(c_95, 1);
      x_94 :
      if(match_cons(f_95, sym_LChoice_2))
        {
          g_95 = ATgetArgument(f_95, 0);
          h_95 = ATgetArgument(f_95, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_95), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_95), not_null(j_95)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_95, sym_Seq_2))
        {
          f_95 = ATgetArgument(c_95, 0);
          j_95 = ATgetArgument(c_95, 1);
          y_94 :
          if(match_cons(f_95, sym_Seq_2))
            {
              g_95 = ATgetArgument(f_95, 0);
              h_95 = ATgetArgument(f_95, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_95), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_95), not_null(j_95)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_95, sym_Choice_2))
            {
              f_95 = ATgetArgument(c_95, 0);
              j_95 = ATgetArgument(c_95, 1);
              b_95 :
              if(match_cons(f_95, sym_Choice_2))
                {
                  g_95 = ATgetArgument(f_95, 0);
                  h_95 = ATgetArgument(f_95, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_95), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_95), not_null(j_95)));
                }
              else
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
  ATerm y_95 = NULL,z_95 = NULL;
  y_95 = t;
  x_95 :
  if(match_cons(y_95, sym_DefaultVarDec_1))
    {
      z_95 = ATgetArgument(y_95, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_95), term_a_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  e_96 = t;
  d_96 :
  if(match_cons(e_96, sym_DefaultVarDec_1))
    {
      f_96 = ATgetArgument(e_96, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_96), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_25), term_a_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm u_4 (ATerm t)
        {
          ATerm v_4 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, v_4);
          return(t);
        }
        t = Cons_2(t, _id, u_4);
      }
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = b_25;
      {
        ATerm w_4 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, w_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  w_97 = t;
  o_97 :
  if(match_cons(w_97, sym_Lets_2))
    {
      x_97 = ATgetArgument(w_97, 0);
      y_97 = ATgetArgument(w_97, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_97), not_null(y_97));
    }
  else
    {
      if(match_cons(w_97, sym_LChoices_1))
        {
          x_97 = ATgetArgument(w_97, 0);
          p_97 :
          if(((ATgetType(x_97) == AT_LIST) && !(ATisEmpty(x_97))))
            {
              s_97 = ATgetFirst((ATermList) x_97);
              t_97 = (ATerm) ATgetNext((ATermList) x_97);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_97), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_97)));
            }
          else
            {
              if(((ATgetType(x_97) == AT_LIST) && ATisEmpty(x_97)))
                {
                  t = term_o_25;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_97, sym_Choices_1))
            {
              x_97 = ATgetArgument(w_97, 0);
              q_97 :
              if(((ATgetType(x_97) == AT_LIST) && !(ATisEmpty(x_97))))
                {
                  s_97 = ATgetFirst((ATermList) x_97);
                  t_97 = (ATerm) ATgetNext((ATermList) x_97);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_97), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_97)));
                }
              else
                {
                  if(((ATgetType(x_97) == AT_LIST) && ATisEmpty(x_97)))
                    {
                      t = term_o_25;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_97, sym_Seqs_1))
                {
                  x_97 = ATgetArgument(w_97, 0);
                  r_97 :
                  if(((ATgetType(x_97) == AT_LIST) && !(ATisEmpty(x_97))))
                    {
                      s_97 = ATgetFirst((ATermList) x_97);
                      t_97 = (ATerm) ATgetNext((ATermList) x_97);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_97), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_97)));
                    }
                  else
                    {
                      if(((ATgetType(x_97) == AT_LIST) && ATisEmpty(x_97)))
                        {
                          t = term_d_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_97, sym_RDefT_4))
                    {
                      x_97 = ATgetArgument(w_97, 0);
                      y_97 = ATgetArgument(w_97, 1);
                      v_97 = ATgetArgument(w_97, 2);
                      u_97 = ATgetArgument(w_97, 3);
                      {
                        ATerm p_98 = NULL,q_98 = NULL;
                        ATerm r_98 = NULL;
                        t = not_null(y_97);
                        {
                          ATerm s_98 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            r_98 = t;
                            {
                              if(((p_98 != NULL) && (p_98 != r_98)))
                                _fail(r_98);
                              else
                                p_98 = r_98;
                              {
                                t = not_null(v_97);
                                {
                                  ATerm x_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, x_4);
                                  {
                                    s_98 = t;
                                    if(((q_98 != NULL) && (q_98 != s_98)))
                                      _fail(s_98);
                                    else
                                      q_98 = s_98;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(x_97), not_null(p_98), not_null(q_98), not_null(u_97));
                      }
                    }
                  else
                    {
                      if(match_cons(w_97, sym_SDefT_4))
                        {
                          x_97 = ATgetArgument(w_97, 0);
                          y_97 = ATgetArgument(w_97, 1);
                          v_97 = ATgetArgument(w_97, 2);
                          u_97 = ATgetArgument(w_97, 3);
                          {
                            ATerm p_25 = t;
                            int q_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_98 = NULL,z_98 = NULL;
                                ATerm c_99 = NULL;
                                t = not_null(v_97);
                                {
                                  ATerm d_99 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    c_99 = t;
                                    {
                                      if(((y_98 != NULL) && (y_98 != c_99)))
                                        _fail(c_99);
                                      else
                                        y_98 = c_99;
                                      {
                                        t = not_null(y_97);
                                        {
                                          ATerm y_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, y_4);
                                          {
                                            d_99 = t;
                                            if(((z_98 != NULL) && (z_98 != d_99)))
                                              _fail(d_99);
                                            else
                                              z_98 = d_99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_97), not_null(z_98), not_null(y_98), not_null(u_97));
                                ;
                                LocalPopChoice(q_25);
                              }
                            else
                              {
                                t = p_25;
                                {
                                  ATerm i_99 = NULL,j_99 = NULL;
                                  ATerm k_99 = NULL;
                                  t = not_null(y_97);
                                  {
                                    ATerm o_99 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      k_99 = t;
                                      {
                                        if(((i_99 != NULL) && (i_99 != k_99)))
                                          _fail(k_99);
                                        else
                                          i_99 = k_99;
                                        {
                                          t = not_null(v_97);
                                          {
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, z_4);
                                            {
                                              o_99 = t;
                                              if(((j_99 != NULL) && (j_99 != o_99)))
                                                _fail(o_99);
                                              else
                                                j_99 = o_99;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_97), not_null(i_99), not_null(j_99), not_null(u_97));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(w_97, sym_InfixApp_3))
                            {
                              x_97 = ATgetArgument(w_97, 0);
                              y_97 = ATgetArgument(w_97, 1);
                              v_97 = ATgetArgument(w_97, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_97), (ATerm) ATmakeAppl(sym_Op_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_97)), not_null(x_97))));
                            }
                          else
                            {
                              if(match_cons(w_97, sym_BAM_3))
                                {
                                  x_97 = ATgetArgument(w_97, 0);
                                  y_97 = ATgetArgument(w_97, 1);
                                  v_97 = ATgetArgument(w_97, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_97))), not_null(x_97)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_97))));
                                }
                              else
                                {
                                  if(match_cons(w_97, sym_AM_2))
                                    {
                                      x_97 = ATgetArgument(w_97, 0);
                                      y_97 = ATgetArgument(w_97, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_97), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_97)));
                                    }
                                  else
                                    {
                                      if(match_cons(w_97, sym_MA_2))
                                        {
                                          x_97 = ATgetArgument(w_97, 0);
                                          y_97 = ATgetArgument(w_97, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_97)), not_null(y_97));
                                        }
                                      else
                                        {
                                          if(match_cons(w_97, sym_BA_2))
                                            {
                                              x_97 = ATgetArgument(w_97, 0);
                                              y_97 = ATgetArgument(w_97, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_97)), not_null(x_97));
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
ATerm F15_0 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL;
  m_101 = t;
  k_101 :
  if(match_cons(m_101, sym_Where_1))
    {
      n_101 = ATgetArgument(m_101, 0);
      l_101 :
      if(match_cons(n_101, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL;
  s_101 = t;
  q_101 :
  if(match_cons(s_101, sym_LChoice_2))
    {
      t_101 = ATgetArgument(s_101, 0);
      u_101 = ATgetArgument(s_101, 1);
      r_101 :
      if(match_cons(u_101, sym_Fail_0))
        {
          t = not_null(t_101);
        }
      else
        {
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
  ATerm a_102 = NULL,i_102 = NULL,j_102 = NULL;
  a_102 = t;
  y_101 :
  if(match_cons(a_102, sym_LChoice_2))
    {
      i_102 = ATgetArgument(a_102, 0);
      j_102 = ATgetArgument(a_102, 1);
      z_101 :
      if(match_cons(i_102, sym_Fail_0))
        {
          t = not_null(j_102);
        }
      else
        {
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
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
  p_102 = t;
  n_102 :
  if(match_cons(p_102, sym_Choice_2))
    {
      q_102 = ATgetArgument(p_102, 0);
      r_102 = ATgetArgument(p_102, 1);
      o_102 :
      if(match_cons(r_102, sym_Fail_0))
        {
          t = not_null(q_102);
        }
      else
        {
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
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
  x_102 = t;
  v_102 :
  if(match_cons(x_102, sym_Choice_2))
    {
      y_102 = ATgetArgument(x_102, 0);
      z_102 = ATgetArgument(x_102, 1);
      w_102 :
      if(match_cons(y_102, sym_Fail_0))
        {
          t = not_null(z_102);
        }
      else
        {
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
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL;
  f_103 = t;
  e_103 :
  if(match_cons(f_103, sym_Cong_2))
    {
      g_103 = ATgetArgument(f_103, 0);
      h_103 = ATgetArgument(f_103, 1);
      {
        t = not_null(h_103);
        {
          ATerm a_5 (ATerm t)
          {
            ATerm k_103 = NULL;
            k_103 = t;
            d_103 :
            if(!(match_cons(k_103, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, a_5);
        }
        t = term_o_25;
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
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL;
  p_103 = t;
  n_103 :
  if(match_cons(p_103, sym_Path_2))
    {
      q_103 = ATgetArgument(p_103, 0);
      r_103 = ATgetArgument(p_103, 1);
      o_103 :
      if(match_cons(r_103, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm x_103 = NULL,y_103 = NULL;
  x_103 = t;
  v_103 :
  if(match_cons(x_103, sym_One_1))
    {
      y_103 = ATgetArgument(x_103, 0);
      w_103 :
      if(match_cons(y_103, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm d_104 = NULL,e_104 = NULL;
  d_104 = t;
  b_104 :
  if(match_cons(d_104, sym_Some_1))
    {
      e_104 = ATgetArgument(d_104, 0);
      c_104 :
      if(match_cons(e_104, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
  j_104 = t;
  h_104 :
  if(match_cons(j_104, sym_Rec_2))
    {
      k_104 = ATgetArgument(j_104, 0);
      l_104 = ATgetArgument(j_104, 1);
      i_104 :
      if(match_cons(l_104, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
  r_104 = t;
  p_104 :
  if(match_cons(r_104, sym_Scope_2))
    {
      s_104 = ATgetArgument(r_104, 0);
      t_104 = ATgetArgument(r_104, 1);
      q_104 :
      if(match_cons(t_104, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL;
  z_104 = t;
  x_104 :
  if(match_cons(z_104, sym_Seq_2))
    {
      a_105 = ATgetArgument(z_104, 0);
      b_105 = ATgetArgument(z_104, 1);
      y_104 :
      if(match_cons(a_105, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm h_105 = NULL,i_105 = NULL;
  h_105 = t;
  f_105 :
  if(match_cons(h_105, sym_Not_1))
    {
      i_105 = ATgetArgument(h_105, 0);
      g_105 :
      if(match_cons(i_105, sym_Fail_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm n_105 = NULL,o_105 = NULL;
  n_105 = t;
  l_105 :
  if(match_cons(n_105, sym_Test_1))
    {
      o_105 = ATgetArgument(n_105, 0);
      m_105 :
      if(match_cons(o_105, sym_Fail_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm a_26 = t;
                    int b_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(b_26);
                      }
                    else
                      {
                        t = a_26;
                        {
                          ATerm e_27 = t;
                          int f_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(f_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm g_27 = t;
                                int h_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(h_27);
                                  }
                                else
                                  {
                                    t = g_27;
                                    {
                                      ATerm r_27 = t;
                                      int s_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(s_27);
                                        }
                                      else
                                        {
                                          t = r_27;
                                          {
                                            ATerm t_27 = t;
                                            int u_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(u_27);
                                              }
                                            else
                                              {
                                                t = t_27;
                                                {
                                                  ATerm i_28 = t;
                                                  int m_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(m_28);
                                                    }
                                                  else
                                                    {
                                                      t = i_28;
                                                      {
                                                        ATerm n_28 = t;
                                                        int o_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(o_28);
                                                          }
                                                        else
                                                          {
                                                            t = n_28;
                                                            {
                                                              ATerm p_28 = t;
                                                              int q_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_28);
                                                                }
                                                              else
                                                                {
                                                                  t = p_28;
                                                                  {
                                                                    ATerm r_28 = t;
                                                                    int s_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(u_28);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_28;
                                                                              t = F15_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm t_105 = NULL,u_105 = NULL;
  t_105 = t;
  r_105 :
  if(match_cons(t_105, sym_Match_1))
    {
      u_105 = ATgetArgument(t_105, 0);
      s_105 :
      if(match_cons(u_105, sym_Wld_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm z_105 = NULL,a_106 = NULL;
  z_105 = t;
  x_105 :
  if(match_cons(z_105, sym_Where_1))
    {
      a_106 = ATgetArgument(z_105, 0);
      y_105 :
      if(match_cons(a_106, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm f_106 = NULL,g_106 = NULL;
  f_106 = t;
  d_106 :
  if(match_cons(f_106, sym_All_1))
    {
      g_106 = ATgetArgument(f_106, 0);
      e_106 :
      if(match_cons(g_106, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  j_106 :
  if(match_cons(l_106, sym_Rec_2))
    {
      m_106 = ATgetArgument(l_106, 0);
      n_106 = ATgetArgument(l_106, 1);
      k_106 :
      if(match_cons(n_106, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL;
  t_106 = t;
  r_106 :
  if(match_cons(t_106, sym_Scope_2))
    {
      u_106 = ATgetArgument(t_106, 0);
      v_106 = ATgetArgument(t_106, 1);
      s_106 :
      if(match_cons(v_106, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
  b_107 = t;
  z_106 :
  if(match_cons(b_107, sym_LChoice_2))
    {
      c_107 = ATgetArgument(b_107, 0);
      d_107 = ATgetArgument(b_107, 1);
      a_107 :
      if(match_cons(c_107, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL;
  j_107 = t;
  h_107 :
  if(match_cons(j_107, sym_Seq_2))
    {
      k_107 = ATgetArgument(j_107, 0);
      l_107 = ATgetArgument(j_107, 1);
      i_107 :
      if(match_cons(l_107, sym_Id_0))
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
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL;
  r_107 = t;
  p_107 :
  if(match_cons(r_107, sym_Seq_2))
    {
      s_107 = ATgetArgument(r_107, 0);
      t_107 = ATgetArgument(r_107, 1);
      q_107 :
      if(match_cons(s_107, sym_Id_0))
        {
          t = not_null(t_107);
        }
      else
        {
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
  ATerm z_107 = NULL,a_108 = NULL;
  z_107 = t;
  x_107 :
  if(match_cons(z_107, sym_Not_1))
    {
      a_108 = ATgetArgument(z_107, 0);
      y_107 :
      if(match_cons(a_108, sym_Id_0))
        {
          t = term_o_25;
        }
      else
        {
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
  ATerm f_108 = NULL,g_108 = NULL;
  f_108 = t;
  d_108 :
  if(match_cons(f_108, sym_Test_1))
    {
      g_108 = ATgetArgument(f_108, 0);
      e_108 :
      if(match_cons(g_108, sym_Id_0))
        {
          t = term_d_12;
        }
      else
        {
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
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm l_29 = t;
              int m_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(m_29);
                }
              else
                {
                  t = l_29;
                  {
                    ATerm n_29 = t;
                    int q_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(q_29);
                      }
                    else
                      {
                        t = n_29;
                        {
                          ATerm r_29 = t;
                          int s_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(s_29);
                            }
                          else
                            {
                              t = r_29;
                              {
                                ATerm v_29 = t;
                                int w_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(w_29);
                                  }
                                else
                                  {
                                    t = v_29;
                                    {
                                      ATerm x_29 = t;
                                      int a_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(a_30);
                                        }
                                      else
                                        {
                                          t = x_29;
                                          {
                                            ATerm d_30 = t;
                                            int i_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(i_30);
                                              }
                                            else
                                              {
                                                t = d_30;
                                                {
                                                  ATerm j_30 = t;
                                                  int k_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(k_30);
                                                    }
                                                  else
                                                    {
                                                      t = j_30;
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
  ATerm l_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = l_30;
      {
        ATerm r_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(u_30);
          }
        else
          {
            t = r_30;
            {
              ATerm v_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(y_30);
                      }
                    else
                      {
                        t = x_30;
                        {
                          ATerm i_31 = t;
                          int j_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
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
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(l_31);
                                  }
                                else
                                  {
                                    t = k_31;
                                    {
                                      ATerm m_31 = t;
                                      int n_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(n_31);
                                        }
                                      else
                                        {
                                          t = m_31;
                                          {
                                            ATerm s_31 = t;
                                            int t_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(t_31);
                                              }
                                            else
                                              {
                                                t = s_31;
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
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_123 (ATerm))
{
  ATerm i_108 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      t = i_123(t);
      t = i_108(t);
      return(t);
    }
    t = try_1(t, b_5);
    return(t);
  }
  t = i_108(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm g_110 (ATerm))
{
  t = g_110(t);
  {
    ATerm c_5 (ATerm t)
    {
      t = downup_1(t, g_110);
      return(t);
    }
    t = _all(t, c_5);
    t = g_110(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, d_5);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL;
  l_108 = t;
  k_108 :
  if(match_cons(l_108, sym__2))
    {
      m_108 = ATgetArgument(l_108, 0);
      n_108 = ATgetArgument(l_108, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_108)), not_null(m_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL;
  v_108 = t;
  s_108 :
  if(match_cons(v_108, sym__2))
    {
      w_108 = ATgetArgument(v_108, 0);
      z_108 = ATgetArgument(v_108, 1);
      t_108 :
      if(((ATgetType(w_108) == AT_LIST) && !(ATisEmpty(w_108))))
        {
          x_108 = ATgetFirst((ATermList) w_108);
          y_108 = (ATerm) ATgetNext((ATermList) w_108);
          u_108 :
          if(((ATgetType(z_108) == AT_LIST) && !(ATisEmpty(z_108))))
            {
              a_109 = ATgetFirst((ATermList) z_108);
              b_109 = (ATerm) ATgetNext((ATermList) z_108);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_108), not_null(a_109)), (ATerm) ATmakeAppl(sym__2, not_null(y_108), not_null(b_109)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  k_109 :
  if(match_cons(n_109, sym__2))
    {
      o_109 = ATgetArgument(n_109, 0);
      p_109 = ATgetArgument(n_109, 1);
      l_109 :
      if(((ATgetType(o_109) == AT_LIST) && ATisEmpty(o_109)))
        {
          m_109 :
          if(((ATgetType(p_109) == AT_LIST) && ATisEmpty(p_109)))
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
ATerm genzip_4 (ATerm t, ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm))
{
  ATerm r_109 (ATerm t)
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_116(t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          t = s_116(t);
          {
            t = _2(t, u_116, r_109);
            t = t_116(t);
          }
        }
      }
    return(t);
  }
  t = r_109(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_116 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_116);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL,h_110 = NULL,i_110 = NULL;
  b_110 = t;
  u_109 :
  if(match_cons(b_110, sym_CallT_3))
    {
      c_110 = ATgetArgument(b_110, 0);
      i_110 = ATgetArgument(b_110, 1);
      a_110 = ATgetArgument(b_110, 2);
      v_109 :
      if(match_cons(c_110, sym_SVar_1))
        {
          h_110 = ATgetArgument(c_110, 0);
          w_109 :
          if(((ATgetType(i_110) == AT_LIST) && ATisEmpty(i_110)))
            {
              x_109 :
              if(((ATgetType(a_110) == AT_LIST) && ATisEmpty(a_110)))
                {
                  t = not_null(h_110);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(b_110, sym_Call_2))
        {
          c_110 = ATgetArgument(b_110, 0);
          i_110 = ATgetArgument(b_110, 1);
          y_109 :
          if(match_cons(c_110, sym_SVar_1))
            {
              h_110 = ATgetArgument(c_110, 0);
              z_109 :
              if(((ATgetType(i_110) == AT_LIST) && ATisEmpty(i_110)))
                {
                  t = not_null(h_110);
                }
              else
                {
                  _fail(t);
                }
            }
          else
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
ATerm SubsVar_2 (ATerm t, ATerm j_136 (ATerm), ATerm k_136 (ATerm))
{
  ATerm q_110 = NULL;
  ATerm s_110 = NULL,t_110 = NULL;
  q_110 = t;
  {
    ATerm u_110 = NULL;
    t = not_null(q_110);
    {
      ATerm v_110 = NULL;
      t = j_136(t);
      {
        u_110 = t;
        {
          if(((s_110 != NULL) && (s_110 != u_110)))
            _fail(u_110);
          else
            s_110 = u_110;
          {
            t = k_136(t);
            {
              v_110 = t;
              if(((t_110 != NULL) && (t_110 != v_110)))
                _fail(v_110);
              else
                t_110 = v_110;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_110), not_null(t_110));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym__2))
    {
      e_111 = ATgetArgument(d_111, 0);
      f_111 = ATgetArgument(d_111, 1);
      {
        ATerm k_111 = NULL;
        if(((k_111 != NULL) && (k_111 != f_111)))
          _fail(f_111);
        else
          k_111 = f_111;
      }
    }
  else
    {
      if(match_cons(d_111, sym__3))
        {
          e_111 = ATgetArgument(d_111, 0);
          f_111 = ATgetArgument(d_111, 1);
          g_111 = ATgetArgument(d_111, 2);
          {
            ATerm q_111 = NULL;
            ATerm r_111 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_111), not_null(f_111));
            {
              t = zip_1(t, _id);
              {
                r_111 = t;
                if(((q_111 != NULL) && (q_111 != r_111)))
                  _fail(r_111);
                else
                  q_111 = r_111;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_111), not_null(g_111));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_135 (ATerm), ATerm v_135 (ATerm))
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
  t = subs_args_0(t);
  {
    z_111 = t;
    y_111 :
    if(match_cons(z_111, sym__2))
      {
        a_112 = ATgetArgument(z_111, 0);
        b_112 = ATgetArgument(z_111, 1);
        {
          t = not_null(b_112);
          {
            ATerm e_5 (ATerm t)
            {
              ATerm f_5 (ATerm t)
              {
                t = not_null(a_112);
                return(t);
              }
              t = SubsVar_2(t, u_135, f_5);
              t = v_135(t);
              return(t);
            }
            t = alltd_1(t, e_5);
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
ATerm substitute_1 (ATerm t, ATerm w_135 (ATerm))
{
  t = substitute_2(t, w_135, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm j_139 (ATerm))
{
  ATerm w_31 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        t = split_2(t, _id, j_139);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL;
            j_112 = t;
            h_112 :
            if(match_cons(j_112, sym__2))
              {
                k_112 = ATgetArgument(j_112, 0);
                p_112 = ATgetArgument(j_112, 1);
                i_112 :
                if(match_cons(k_112, sym_SDef_3))
                  {
                    l_112 = ATgetArgument(k_112, 0);
                    m_112 = ATgetArgument(k_112, 1);
                    n_112 = ATgetArgument(k_112, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_112), not_null(m_112), not_null(n_112));
                  }
                else
                  {
                    if(match_cons(k_112, sym_SDefT_4))
                      {
                        l_112 = ATgetArgument(k_112, 0);
                        m_112 = ATgetArgument(k_112, 1);
                        n_112 = ATgetArgument(k_112, 2);
                        o_112 = ATgetArgument(k_112, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(p_112), not_null(m_112), not_null(n_112), not_null(o_112));
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
          t = zip_1(t, h_5);
        }
        return(t);
      }
      t = Let_2(t, g_5, _id);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = w_31;
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = split_2(t, _id, j_139);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, i_5, _id);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            {
              ATerm h_32 = t;
              int j_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_5 (ATerm t)
                  {
                    t = split_2(t, _id, j_139);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, j_5, _id, _id);
                  ;
                  LocalPopChoice(j_32);
                }
              else
                {
                  t = h_32;
                  {
                    ATerm k_32 = t;
                    int l_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_5 (ATerm t)
                        {
                          t = split_2(t, _id, j_139);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, k_5, _id, _id);
                        ;
                        LocalPopChoice(l_32);
                      }
                    else
                      {
                        t = k_32;
                        {
                          ATerm l_5 (ATerm t)
                          {
                            t = j_139(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, l_5, _id);
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
ATerm Rec_2 (ATerm t, ATerm j_100 (ATerm), ATerm k_100 (ATerm))
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym_Rec_2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      {
        ATerm o_113 = NULL,s_113 = NULL;
        ATerm p_113 = NULL;
        t = SSLgetAnnotations(not_null(g_113));
        {
          p_113 = t;
          if(((o_113 != NULL) && (o_113 != p_113)))
            _fail(p_113);
          else
            o_113 = p_113;
        }
        {
          t = not_null(h_113);
          {
            ATerm u_113 = NULL;
            t = j_100(t);
            {
              s_113 = t;
              {
                t = not_null(i_113);
                {
                  ATerm w_113 = NULL;
                  t = k_100(t);
                  {
                    u_113 = t;
                    {
                      ATerm x_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_113), not_null(u_113)), not_null(o_113));
                      {
                        x_113 = t;
                        if(((w_113 != NULL) && (w_113 != x_113)))
                          _fail(x_113);
                        else
                          w_113 = x_113;
                      }
                      t = not_null(w_113);
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
ATerm SDef_3 (ATerm t, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm))
{
  ATerm k_114 = NULL,l_114 = NULL,n_114 = NULL,q_114 = NULL;
  k_114 = t;
  j_114 :
  if(match_cons(k_114, sym_SDef_3))
    {
      l_114 = ATgetArgument(k_114, 0);
      n_114 = ATgetArgument(k_114, 1);
      q_114 = ATgetArgument(k_114, 2);
      {
        ATerm v_114 = NULL,x_114 = NULL;
        ATerm w_114 = NULL;
        t = SSLgetAnnotations(not_null(k_114));
        {
          w_114 = t;
          if(((v_114 != NULL) && (v_114 != w_114)))
            _fail(w_114);
          else
            v_114 = w_114;
        }
        {
          t = not_null(l_114);
          {
            ATerm b_115 = NULL;
            t = b_102(t);
            {
              x_114 = t;
              {
                t = not_null(n_114);
                {
                  ATerm d_115 = NULL;
                  t = c_102(t);
                  {
                    b_115 = t;
                    {
                      t = not_null(q_114);
                      {
                        ATerm h_115 = NULL;
                        t = d_102(t);
                        {
                          d_115 = t;
                          {
                            ATerm i_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_114), not_null(b_115), not_null(d_115)), not_null(v_114));
                            {
                              i_115 = t;
                              if(((h_115 != NULL) && (h_115 != i_115)))
                                _fail(i_115);
                              else
                                h_115 = i_115;
                            }
                            t = not_null(h_115);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm))
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL;
  v_115 = t;
  u_115 :
  if(match_cons(v_115, sym_Let_2))
    {
      w_115 = ATgetArgument(v_115, 0);
      x_115 = ATgetArgument(v_115, 1);
      {
        ATerm b_116 = NULL,d_116 = NULL;
        ATerm c_116 = NULL;
        t = SSLgetAnnotations(not_null(v_115));
        {
          c_116 = t;
          if(((b_116 != NULL) && (b_116 != c_116)))
            _fail(c_116);
          else
            b_116 = c_116;
        }
        {
          t = not_null(w_115);
          {
            ATerm f_116 = NULL;
            t = m_99(t);
            {
              d_116 = t;
              {
                t = not_null(x_115);
                {
                  ATerm h_116 = NULL;
                  t = n_99(t);
                  {
                    f_116 = t;
                    {
                      ATerm i_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(d_116), not_null(f_116)), not_null(b_116));
                      {
                        i_116 = t;
                        if(((h_116 != NULL) && (h_116 != i_116)))
                          _fail(i_116);
                        else
                          h_116 = i_116;
                      }
                      t = not_null(h_116);
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
ATerm sboundin_3 (ATerm t, ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm))
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, k_139, k_139);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, m_139, m_139, k_139);
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, m_139, m_139, m_139, k_139);
                  ;
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  t = Rec_2(t, m_139, k_139);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm q_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL;
  q_116 = t;
  p_116 :
  if(match_cons(q_116, sym_RDefT_4))
    {
      x_116 = ATgetArgument(q_116, 0);
      y_116 = ATgetArgument(q_116, 1);
      z_116 = ATgetArgument(q_116, 2);
      a_117 = ATgetArgument(q_116, 3);
      {
        t = not_null(y_116);
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
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL;
  j_117 = t;
  i_117 :
  if(match_cons(j_117, sym_SDefT_4))
    {
      k_117 = ATgetArgument(j_117, 0);
      l_117 = ATgetArgument(j_117, 1);
      m_117 = ATgetArgument(j_117, 2);
      n_117 = ATgetArgument(j_117, 3);
      {
        t = not_null(l_117);
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
  ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL;
  v_117 = t;
  u_117 :
  if(match_cons(v_117, sym_Rec_2))
    {
      w_117 = ATgetArgument(v_117, 0);
      x_117 = ATgetArgument(v_117, 1);
      t = (ATerm) ATinsert(ATempty, not_null(w_117));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL;
  d_118 = t;
  c_118 :
  if(match_cons(d_118, sym_SDef_3))
    {
      e_118 = ATgetArgument(d_118, 0);
      f_118 = ATgetArgument(d_118, 1);
      g_118 = ATgetArgument(d_118, 2);
      {
        t = not_null(f_118);
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
  ATerm u_118 = NULL,x_118 = NULL,y_118 = NULL;
  u_118 = t;
  t_118 :
  if(match_cons(u_118, sym_Let_2))
    {
      x_118 = ATgetArgument(u_118, 0);
      y_118 = ATgetArgument(u_118, 1);
      {
        t = not_null(x_118);
        {
          ATerm m_5 (ATerm t)
          {
            ATerm b_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL;
            b_119 = t;
            q_118 :
            if(match_cons(b_119, sym_SDef_3))
              {
                h_119 = ATgetArgument(b_119, 0);
                i_119 = ATgetArgument(b_119, 1);
                j_119 = ATgetArgument(b_119, 2);
                t = not_null(h_119);
              }
            else
              {
                if(match_cons(b_119, sym_SDefT_4))
                  {
                    h_119 = ATgetArgument(b_119, 0);
                    i_119 = ATgetArgument(b_119, 1);
                    j_119 = ATgetArgument(b_119, 2);
                    k_119 = ATgetArgument(b_119, 3);
                    t = not_null(h_119);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, m_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm l_99 (ATerm))
{
  ATerm v_119 = NULL,w_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym_SVar_1))
    {
      w_119 = ATgetArgument(v_119, 0);
      {
        ATerm z_119 = NULL,b_120 = NULL;
        ATerm a_120 = NULL;
        t = SSLgetAnnotations(not_null(v_119));
        {
          a_120 = t;
          if(((z_119 != NULL) && (z_119 != a_120)))
            _fail(a_120);
          else
            z_119 = a_120;
        }
        {
          t = not_null(w_119);
          {
            ATerm d_120 = NULL;
            t = l_99(t);
            {
              b_120 = t;
              {
                ATerm e_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_120)), not_null(z_119));
                {
                  e_120 = t;
                  if(((d_120 != NULL) && (d_120 != e_120)))
                    _fail(e_120);
                  else
                    d_120 = e_120;
                }
                t = not_null(d_120);
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
  ATerm n_5 (ATerm t)
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        {
          ATerm w_32 = t;
          int x_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(x_32);
            }
          else
            {
              t = w_32;
              {
                ATerm u_33 = t;
                int v_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(v_33);
                  }
                else
                  {
                    t = u_33;
                    {
                      ATerm w_33 = t;
                      int d_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(d_34);
                        }
                      else
                        {
                          t = w_33;
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
  t = rename_4(t, SVar_1, n_5, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL;
  n_120 = t;
  l_120 :
  if(match_cons(n_120, sym__2))
    {
      o_120 = ATgetArgument(n_120, 0);
      r_120 = ATgetArgument(n_120, 1);
      m_120 :
      if(match_cons(o_120, sym_DefaultVarDec_1))
        {
          p_120 = ATgetArgument(o_120, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(r_120));
        }
      else
        {
          if(match_cons(o_120, sym_VarDec_2))
            {
              p_120 = ATgetArgument(o_120, 0);
              q_120 = ATgetArgument(o_120, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_120), not_null(q_120));
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
ATerm tpaste_1 (ATerm t, ATerm f_139 (ATerm))
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, f_139, _id);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm s_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = split_2(t, _id, f_139);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, o_5, _id);
            ;
            LocalPopChoice(u_34);
          }
        else
          {
            t = s_34;
            {
              ATerm p_5 (ATerm t)
              {
                t = split_2(t, _id, f_139);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, p_5, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm k_121 = NULL,l_121 = NULL;
  k_121 = t;
  j_121 :
  if(match_cons(k_121, sym_DynamicRules_1))
    {
      l_121 = ATgetArgument(k_121, 0);
      {
        ATerm o_121 = NULL,q_121 = NULL;
        ATerm p_121 = NULL;
        t = SSLgetAnnotations(not_null(k_121));
        {
          p_121 = t;
          if(((o_121 != NULL) && (o_121 != p_121)))
            _fail(p_121);
          else
            o_121 = p_121;
        }
        {
          t = not_null(l_121);
          {
            ATerm s_121 = NULL;
            t = t_98(t);
            {
              q_121 = t;
              {
                ATerm t_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(q_121)), not_null(o_121));
                {
                  t_121 = t;
                  if(((s_121 != NULL) && (s_121 != t_121)))
                    _fail(t_121);
                  else
                    s_121 = t_121;
                }
                t = not_null(s_121);
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
ATerm RDefT_4 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm))
{
  ATerm g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL;
  g_122 = t;
  f_122 :
  if(match_cons(g_122, sym_RDefT_4))
    {
      h_122 = ATgetArgument(g_122, 0);
      i_122 = ATgetArgument(g_122, 1);
      j_122 = ATgetArgument(g_122, 2);
      k_122 = ATgetArgument(g_122, 3);
      {
        ATerm w_122 = NULL,y_122 = NULL;
        ATerm x_122 = NULL;
        t = SSLgetAnnotations(not_null(g_122));
        {
          x_122 = t;
          if(((w_122 != NULL) && (w_122 != x_122)))
            _fail(x_122);
          else
            w_122 = x_122;
        }
        {
          t = not_null(h_122);
          {
            ATerm a_123 = NULL;
            t = k_98(t);
            {
              y_122 = t;
              {
                t = not_null(i_122);
                {
                  ATerm c_123 = NULL;
                  t = l_98(t);
                  {
                    a_123 = t;
                    {
                      t = not_null(j_122);
                      {
                        ATerm e_123 = NULL;
                        t = m_98(t);
                        {
                          c_123 = t;
                          {
                            t = not_null(k_122);
                            {
                              ATerm g_123 = NULL;
                              t = n_98(t);
                              {
                                e_123 = t;
                                {
                                  ATerm h_123 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(y_122), not_null(a_123), not_null(c_123), not_null(e_123)), not_null(w_122));
                                  {
                                    h_123 = t;
                                    if(((g_123 != NULL) && (g_123 != h_123)))
                                      _fail(h_123);
                                    else
                                      g_123 = h_123;
                                  }
                                  t = not_null(g_123);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm))
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL,j_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_cons(f_124, sym_SDefT_4))
    {
      g_124 = ATgetArgument(f_124, 0);
      h_124 = ATgetArgument(f_124, 1);
      i_124 = ATgetArgument(f_124, 2);
      j_124 = ATgetArgument(f_124, 3);
      {
        ATerm p_124 = NULL,r_124 = NULL;
        ATerm q_124 = NULL;
        t = SSLgetAnnotations(not_null(f_124));
        {
          q_124 = t;
          if(((p_124 != NULL) && (p_124 != q_124)))
            _fail(q_124);
          else
            p_124 = q_124;
        }
        {
          t = not_null(g_124);
          {
            ATerm t_124 = NULL;
            t = e_102(t);
            {
              r_124 = t;
              {
                t = not_null(h_124);
                {
                  ATerm v_124 = NULL;
                  t = f_102(t);
                  {
                    t_124 = t;
                    {
                      t = not_null(i_124);
                      {
                        ATerm x_124 = NULL;
                        t = g_102(t);
                        {
                          v_124 = t;
                          {
                            t = not_null(j_124);
                            {
                              ATerm z_124 = NULL;
                              t = h_102(t);
                              {
                                x_124 = t;
                                {
                                  ATerm a_125 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(r_124), not_null(t_124), not_null(v_124), not_null(x_124)), not_null(p_124));
                                  {
                                    a_125 = t;
                                    if(((z_124 != NULL) && (z_124 != a_125)))
                                      _fail(a_125);
                                    else
                                      z_124 = a_125;
                                  }
                                  t = not_null(z_124);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Scope_2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  o_125 = t;
  n_125 :
  if(match_cons(o_125, sym_Scope_2))
    {
      p_125 = ATgetArgument(o_125, 0);
      q_125 = ATgetArgument(o_125, 1);
      {
        ATerm v_125 = NULL,x_125 = NULL;
        ATerm w_125 = NULL;
        t = SSLgetAnnotations(not_null(o_125));
        {
          w_125 = t;
          if(((v_125 != NULL) && (v_125 != w_125)))
            _fail(w_125);
          else
            v_125 = w_125;
        }
        {
          t = not_null(p_125);
          {
            ATerm z_125 = NULL;
            t = w_99(t);
            {
              x_125 = t;
              {
                t = not_null(q_125);
                {
                  ATerm b_126 = NULL;
                  t = x_99(t);
                  {
                    z_125 = t;
                    {
                      ATerm c_126 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_125), not_null(z_125)), not_null(v_125));
                      {
                        c_126 = t;
                        if(((b_126 != NULL) && (b_126 != c_126)))
                          _fail(c_126);
                        else
                          b_126 = c_126;
                      }
                      t = not_null(b_126);
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
ATerm tboundin_3 (ATerm t, ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm i_139 (ATerm))
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, i_139, g_139);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, i_139, i_139, i_139, g_139);
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, i_139, i_139, i_139, g_139);
                  ;
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = DynamicRules_1(t, g_139);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL;
  m_126 = t;
  l_126 :
  if(match_cons(m_126, sym_RDefT_4))
    {
      n_126 = ATgetArgument(m_126, 0);
      o_126 = ATgetArgument(m_126, 1);
      p_126 = ATgetArgument(m_126, 2);
      q_126 = ATgetArgument(m_126, 3);
      {
        t = not_null(p_126);
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
  ATerm q_5 (ATerm t)
  {
    ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL;
    b_127 = t;
    z_126 :
    if(match_cons(b_127, sym_VarDec_2))
      {
        c_127 = ATgetArgument(b_127, 0);
        a_127 = ATgetArgument(b_127, 1);
        t = not_null(c_127);
      }
    else
      {
        if(match_cons(b_127, sym_DefaultVarDec_1))
          {
            c_127 = ATgetArgument(b_127, 0);
            t = not_null(c_127);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, q_5);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL,n_127 = NULL;
  j_127 = t;
  i_127 :
  if(match_cons(j_127, sym_SDefT_4))
    {
      k_127 = ATgetArgument(j_127, 0);
      l_127 = ATgetArgument(j_127, 1);
      m_127 = ATgetArgument(j_127, 2);
      n_127 = ATgetArgument(j_127, 3);
      {
        t = not_null(m_127);
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
  ATerm v_127 = NULL,w_127 = NULL;
  v_127 = t;
  u_127 :
  if(match_cons(v_127, sym_DynamicRules_1))
    {
      w_127 = ATgetArgument(v_127, 0);
      {
        t = not_null(w_127);
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
  ATerm b_128 = NULL,c_128 = NULL;
  b_128 = t;
  a_128 :
  if(match_cons(b_128, sym_Var_1))
    {
      c_128 = ATgetArgument(b_128, 0);
      t = (ATerm) ATinsert(ATempty, not_null(c_128));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_118 (ATerm))
{
  ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL;
  h_128 = t;
  g_128 :
  if(match_cons(h_128, sym__2))
    {
      i_128 = ATgetArgument(h_128, 0);
      j_128 = ATgetArgument(h_128, 1);
      {
        t = not_null(i_128);
        {
          ATerm n_128 (ATerm t)
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_128);
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                {
                  ATerm d_35 = t;
                  int e_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_5 (ATerm t)
                      {
                        t = not_null(j_128);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_118, r_5);
                      t = n_128(t);
                      ;
                      LocalPopChoice(e_35);
                    }
                  else
                    {
                      t = d_35;
                      t = Cons_2(t, _id, n_128);
                    }
                }
              }
            return(t);
          }
          t = n_128(t);
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
ATerm foldr_3 (ATerm t, ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm i_121 (ATerm))
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_121(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL;
        s_128 = t;
        r_128 :
        if(((ATgetType(s_128) == AT_LIST) && !(ATisEmpty(s_128))))
          {
            t_128 = ATgetFirst((ATermList) s_128);
            u_128 = (ATerm) ATgetNext((ATermList) s_128);
            {
              ATerm x_128 = NULL,z_128 = NULL;
              ATerm a_36;
              a_36 = t;
              {
                ATerm y_128 = NULL;
                t = not_null(t_128);
                {
                  t = i_121(t);
                  {
                    y_128 = t;
                    if(((x_128 != NULL) && (x_128 != y_128)))
                      _fail(y_128);
                    else
                      x_128 = y_128;
                  }
                }
              }
              t = a_36;
              {
                ATerm a_129 = NULL;
                t = not_null(u_128);
                {
                  t = foldr_3(t, g_121, h_121, i_121);
                  {
                    a_129 = t;
                    if(((z_128 != NULL) && (z_128 != a_129)))
                      _fail(a_129);
                    else
                      z_128 = a_129;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_128), not_null(z_128));
                  t = h_121(t);
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
ATerm crush_3 (ATerm t, ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm g_119 (ATerm))
{
  ATerm i_129 = NULL;
  ATerm k_129 = NULL;
  i_129 = t;
  {
    ATerm l_129 = NULL;
    ATerm n_129 = NULL,p_129 = NULL,q_129 = NULL;
    t = not_null(i_129);
    {
      l_129 = t;
      {
        t = SSL_explode_term(not_null(l_129));
        {
          n_129 = t;
          h_129 :
          if(match_cons(n_129, sym__2))
            {
              p_129 = ATgetArgument(n_129, 0);
              q_129 = ATgetArgument(n_129, 1);
              if(((k_129 != NULL) && (k_129 != q_129)))
                _fail(q_129);
              else
                k_129 = q_129;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_129);
      t = foldr_3(t, e_119, f_119, g_119);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL;
  x_129 = t;
  w_129 :
  if(match_cons(x_129, sym__2))
    {
      y_129 = ATgetArgument(x_129, 0);
      z_129 = ATgetArgument(x_129, 1);
      if(((y_129 != NULL) && (y_129 != z_129)))
        _fail(z_129);
      else
        y_129 = z_129;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_118 (ATerm), ATerm w_118 (ATerm))
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL;
  g_130 = t;
  f_130 :
  if(((ATgetType(g_130) == AT_LIST) && !(ATisEmpty(g_130))))
    {
      h_130 = ATgetFirst((ATermList) g_130);
      i_130 = (ATerm) ATgetNext((ATermList) g_130);
      {
        t = w_118(t);
        {
          ATerm s_5 (ATerm t)
          {
            ATerm l_130 = NULL;
            l_130 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_130), not_null(l_130));
              t = v_118(t);
            }
            return(t);
          }
          t = fetch_1(t, s_5);
        }
        t = not_null(i_130);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_118 (ATerm))
{
  ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL;
  r_130 = t;
  q_130 :
  if(match_cons(r_130, sym__2))
    {
      s_130 = ATgetArgument(r_130, 0);
      t_130 = ATgetArgument(r_130, 1);
      {
        t = not_null(s_130);
        {
          ATerm x_130 (ATerm t)
          {
            ATerm b_36 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(c_36);
              }
            else
              {
                t = b_36;
                {
                  ATerm f_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_5 (ATerm t)
                      {
                        t = not_null(t_130);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_118, t_5);
                      t = x_130(t);
                      ;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = f_36;
                      t = Cons_2(t, _id, x_130);
                    }
                }
              }
            return(t);
          }
          t = x_130(t);
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
  ATerm b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL;
  b_131 = t;
  z_130 :
  if(match_cons(b_131, sym__2))
    {
      c_131 = ATgetArgument(b_131, 0);
      d_131 = ATgetArgument(b_131, 1);
      a_131 :
      if(((ATgetType(d_131) == AT_LIST) && !(ATisEmpty(d_131))))
        {
          e_131 = ATgetFirst((ATermList) d_131);
          f_131 = (ATerm) ATgetNext((ATermList) d_131);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_131)), not_null(e_131)), not_null(f_131));
        }
      else
        {
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
  ATerm b_132 = NULL,c_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL;
  b_132 = t;
  u_131 :
  if(((ATgetType(b_132) == AT_LIST) && !(ATisEmpty(b_132))))
    {
      c_132 = ATgetFirst((ATermList) b_132);
      j_132 = (ATerm) ATgetNext((ATermList) b_132);
      a_132 :
      if(match_cons(c_132, sym__2))
        {
          h_132 = ATgetArgument(c_132, 0);
          i_132 = ATgetArgument(c_132, 1);
          {
            ATerm s_132 = NULL,t_132 = NULL,z_132 = NULL,f_133 = NULL;
            ATerm i_36;
            i_36 = t;
            {
              ATerm u_132 = NULL;
              ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL;
              t = not_null(i_132);
              {
                u_132 = t;
                {
                  t = SSL_explode_term(not_null(u_132));
                  {
                    w_132 = t;
                    n_131 :
                    if(match_cons(w_132, sym__2))
                      {
                        x_132 = ATgetArgument(w_132, 0);
                        y_132 = ATgetArgument(w_132, 1);
                        {
                          if(((s_132 != NULL) && (s_132 != x_132)))
                            _fail(x_132);
                          else
                            s_132 = x_132;
                          if(((t_132 != NULL) && (t_132 != y_132)))
                            _fail(y_132);
                          else
                            t_132 = y_132;
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
            t = i_36;
            {
              ATerm j_36;
              j_36 = t;
              {
                ATerm a_133 = NULL;
                ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL;
                t = not_null(h_132);
                {
                  a_133 = t;
                  {
                    t = SSL_explode_term(not_null(a_133));
                    {
                      c_133 = t;
                      r_131 :
                      if(match_cons(c_133, sym__2))
                        {
                          d_133 = ATgetArgument(c_133, 0);
                          e_133 = ATgetArgument(c_133, 1);
                          {
                            if(((s_132 != NULL) && (s_132 != d_133)))
                              _fail(d_133);
                            else
                              s_132 = d_133;
                            if(((z_132 != NULL) && (z_132 != e_133)))
                              _fail(e_133);
                            else
                              z_132 = e_133;
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
              t = j_36;
              {
                ATerm g_133 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_132), not_null(t_132));
                {
                  t = zip_1(t, _id);
                  {
                    g_133 = t;
                    if(((f_133 != NULL) && (f_133 != g_133)))
                      _fail(g_133);
                    else
                      f_133 = g_133;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_133), not_null(j_132));
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
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL;
  q_133 = t;
  o_133 :
  if(((ATgetType(q_133) == AT_LIST) && !(ATisEmpty(q_133))))
    {
      r_133 = ATgetFirst((ATermList) q_133);
      u_133 = (ATerm) ATgetNext((ATermList) q_133);
      p_133 :
      if(match_cons(r_133, sym__2))
        {
          s_133 = ATgetArgument(r_133, 0);
          t_133 = ATgetArgument(r_133, 1);
          {
            ATerm w_133 = NULL;
            if(((s_133 != NULL) && (s_133 != t_133)))
              _fail(t_133);
            else
              s_133 = t_133;
            {
              if(((w_133 != NULL) && (w_133 != u_133)))
                _fail(u_133);
              else
                w_133 = u_133;
              t = not_null(w_133);
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
ATerm while_not_2 (ATerm t, ATerm x_123 (ATerm), ATerm y_123 (ATerm))
{
  ATerm y_133 (ATerm t)
  {
    ATerm k_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_123(t);
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = k_36;
        {
          t = y_123(t);
          t = y_133(t);
        }
      }
    return(t);
  }
  t = y_133(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm))
{
  t = a_124(t);
  t = while_not_2(t, b_124, c_124);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 (ATerm t)
      {
        ATerm a_134 = NULL;
        a_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_134));
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        ATerm u_36 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 (ATerm t)
            {
              ATerm d_37 = t;
              int e_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(e_37);
                }
              else
                {
                  t = d_37;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, x_5);
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = u_36;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_5, v_5, w_5);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_134 (ATerm t)
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_138(t);
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_134 = NULL;
              ATerm s_37;
              s_37 = t;
              {
                ATerm f_134 = NULL;
                t = c_138(t);
                {
                  f_134 = t;
                  if(((e_134 != NULL) && (e_134 != f_134)))
                    _fail(f_134);
                  else
                    e_134 = f_134;
                }
              }
              t = s_37;
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm a_6 (ATerm t)
                  {
                    t = not_null(e_134);
                    return(t);
                  }
                  t = split_2(t, g_134, a_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_138(t, y_5, g_134, z_5);
                {
                  ATerm b_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_6, union_0, _id);
                }
              }
              ;
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              {
                ATerm c_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_6, union_0, g_134);
              }
            }
        }
      }
    return(t);
  }
  t = g_134(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                ATerm x_37 = t;
                int y_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(y_37);
                  }
                else
                  {
                    t = x_37;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_6, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL,s_134 = NULL;
  q_134 = t;
  k_134 :
  if(match_cons(q_134, sym_LRule_1))
    {
      r_134 = ATgetArgument(q_134, 0);
      l_134 :
      if(match_cons(r_134, sym_Rule_3))
        {
          m_134 = ATgetArgument(r_134, 0);
          n_134 = ATgetArgument(r_134, 1);
          p_134 = ATgetArgument(r_134, 2);
          {
            t = not_null(m_134);
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
      if(match_cons(q_134, sym_Scope_2))
        {
          r_134 = ATgetArgument(q_134, 0);
          s_134 = ATgetArgument(q_134, 1);
          t = not_null(r_134);
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
  ATerm n_135 = NULL,x_135 = NULL;
  n_135 = t;
  m_135 :
  if(match_cons(n_135, sym_Var_1))
    {
      x_135 = ATgetArgument(n_135, 0);
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_136 = NULL,c_136 = NULL;
            ATerm b_136 = NULL;
            t = SSLgetAnnotations(not_null(n_135));
            {
              b_136 = t;
              if(((a_136 != NULL) && (a_136 != b_136)))
                _fail(b_136);
              else
                a_136 = b_136;
            }
            {
              t = not_null(x_135);
              {
                ATerm e_136 = NULL;
                t = p_0(t);
                {
                  c_136 = t;
                  {
                    ATerm f_136 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_136)), not_null(a_136));
                    {
                      f_136 = t;
                      if(((e_136 != NULL) && (e_136 != f_136)))
                        _fail(f_136);
                      else
                        e_136 = f_136;
                    }
                    t = not_null(e_136);
                  }
                }
              }
            }
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
                  ATerm i_136 = NULL,t_136 = NULL;
                  ATerm s_136 = NULL;
                  t = SSLgetAnnotations(not_null(n_135));
                  {
                    s_136 = t;
                    if(((i_136 != NULL) && (i_136 != s_136)))
                      _fail(s_136);
                    else
                      i_136 = s_136;
                  }
                  {
                    t = not_null(x_135);
                    {
                      ATerm v_136 = NULL;
                      t = p_0(t);
                      {
                        t_136 = t;
                        {
                          ATerm y_136 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_136)), not_null(i_136));
                          {
                            y_136 = t;
                            if(((v_136 != NULL) && (v_136 != y_136)))
                              _fail(y_136);
                            else
                              v_136 = y_136;
                          }
                          t = not_null(v_136);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = b_38;
                  {
                    ATerm c_137 = NULL,e_137 = NULL;
                    ATerm d_137 = NULL;
                    t = SSLgetAnnotations(not_null(n_135));
                    {
                      d_137 = t;
                      if(((c_137 != NULL) && (c_137 != d_137)))
                        _fail(d_137);
                      else
                        c_137 = d_137;
                    }
                    {
                      t = not_null(x_135);
                      {
                        ATerm g_137 = NULL;
                        t = p_0(t);
                        {
                          e_137 = t;
                          {
                            ATerm h_137 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_137)), not_null(c_137));
                            {
                              h_137 = t;
                              if(((g_137 != NULL) && (g_137 != h_137)))
                                _fail(h_137);
                              else
                                g_137 = h_137;
                            }
                            t = not_null(g_137);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm w_136 (ATerm), ATerm x_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL,f_138 = NULL;
  y_137 = t;
  x_137 :
  if(match_cons(y_137, sym__3))
    {
      z_137 = ATgetArgument(y_137, 0);
      a_138 = ATgetArgument(y_137, 1);
      f_138 = ATgetArgument(y_137, 2);
      {
        t = not_null(z_137);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm j_138 = NULL;
            j_138 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_138), not_null(f_138));
              t = w_136(t);
            }
            return(t);
          }
          ATerm f_6 (ATerm t)
          {
            ATerm n_138 = NULL;
            n_138 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_138), not_null(a_138));
              t = w_136(t);
            }
            return(t);
          }
          t = x_136(t, e_6, f_6, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm q_136 (ATerm), ATerm r_136 (ATerm, ATerm (ATerm)))
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL;
  z_138 = t;
  y_138 :
  if(match_cons(z_138, sym__2))
    {
      a_139 = ATgetArgument(z_138, 0);
      b_139 = ATgetArgument(z_138, 1);
      {
        ATerm e_139 = NULL,n_139 = NULL,o_139 = NULL,w_139 = NULL;
        ATerm d_38;
        d_38 = t;
        {
          ATerm p_139 = NULL;
          t = not_null(a_139);
          {
            ATerm q_139 = NULL;
            t = q_136(t);
            {
              p_139 = t;
              {
                if(((e_139 != NULL) && (e_139 != p_139)))
                  _fail(p_139);
                else
                  e_139 = p_139;
                {
                  ATerm r_139 = NULL,t_139 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_139 = t;
                    {
                      if(((n_139 != NULL) && (n_139 != q_139)))
                        _fail(q_139);
                      else
                        n_139 = q_139;
                      {
                        ATerm s_139 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_139), not_null(n_139));
                        {
                          t = zip_1(t, _id);
                          {
                            s_139 = t;
                            if(((r_139 != NULL) && (r_139 != s_139)))
                              _fail(s_139);
                            else
                              r_139 = s_139;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_139), not_null(b_139));
                          {
                            t = conc_0(t);
                            {
                              t_139 = t;
                              if(((o_139 != NULL) && (o_139 != t_139)))
                                _fail(t_139);
                              else
                                o_139 = t_139;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = d_38;
        {
          ATerm x_139 = NULL;
          t = not_null(a_139);
          {
            ATerm g_6 (ATerm t)
            {
              t = not_null(n_139);
              return(t);
            }
            t = r_136(t, g_6);
            {
              x_139 = t;
              if(((w_139 != NULL) && (w_139 != x_139)))
                _fail(x_139);
              else
                w_139 = x_139;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(w_139), not_null(b_139), not_null(o_139));
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
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL,l_140 = NULL;
  h_140 = t;
  f_140 :
  if(match_cons(h_140, sym__2))
    {
      i_140 = ATgetArgument(h_140, 0);
      j_140 = ATgetArgument(h_140, 1);
      g_140 :
      if(((ATgetType(j_140) == AT_LIST) && !(ATisEmpty(j_140))))
        {
          k_140 = ATgetFirst((ATermList) j_140);
          l_140 = (ATerm) ATgetNext((ATermList) j_140);
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_140), not_null(l_140));
        }
      else
        {
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
  ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL,z_140 = NULL;
  t_140 = t;
  q_140 :
  if(match_cons(t_140, sym__2))
    {
      u_140 = ATgetArgument(t_140, 0);
      v_140 = ATgetArgument(t_140, 1);
      r_140 :
      if(((ATgetType(v_140) == AT_LIST) && !(ATisEmpty(v_140))))
        {
          w_140 = ATgetFirst((ATermList) v_140);
          z_140 = (ATerm) ATgetNext((ATermList) v_140);
          s_140 :
          if(match_cons(w_140, sym__2))
            {
              x_140 = ATgetArgument(w_140, 0);
              y_140 = ATgetArgument(w_140, 1);
              {
                ATerm b_141 = NULL;
                if(((u_140 != NULL) && (u_140 != x_140)))
                  _fail(x_140);
                else
                  u_140 = x_140;
                {
                  if(((b_141 != NULL) && (b_141 != y_140)))
                    _fail(y_140);
                  else
                    b_141 = y_140;
                  t = not_null(b_141);
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
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm b_137 (ATerm, ATerm (ATerm)))
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL;
  g_141 = t;
  f_141 :
  if(match_cons(g_141, sym__2))
    {
      h_141 = ATgetArgument(g_141, 0);
      i_141 = ATgetArgument(g_141, 1);
      {
        t = not_null(h_141);
        {
          ATerm h_6 (ATerm t)
          {
            ATerm i_6 (ATerm t)
            {
              t = not_null(i_141);
              return(t);
            }
            t = split_2(t, _id, i_6);
            t = lookup_0(t);
            return(t);
          }
          t = b_137(t, h_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm u_126 (ATerm))
{
  ATerm p_141 = NULL,q_141 = NULL,r_141 = NULL;
  p_141 = t;
  o_141 :
  if(match_cons(p_141, sym__2))
    {
      q_141 = ATgetArgument(p_141, 0);
      r_141 = ATgetArgument(p_141, 1);
      {
        t = not_null(q_141);
        {
          ATerm j_6 (ATerm t)
          {
            ATerm u_141 = NULL;
            u_141 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_141), not_null(r_141));
              t = u_126(t);
            }
            return(t);
          }
          t = _all(t, j_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm e_126 (ATerm))
{
  ATerm y_141 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_126(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = all_dist_1(t, y_141);
      }
    return(t);
  }
  t = y_141(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm l_136 (ATerm, ATerm (ATerm)), ATerm m_136 (ATerm), ATerm n_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_136 (ATerm, ATerm (ATerm)))
{
  ATerm a_142 = NULL;
  a_142 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_142), (ATerm) ATempty);
    {
      ATerm d_142 (ATerm t)
      {
        ATerm k_6 (ATerm t)
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, l_136);
              ;
              LocalPopChoice(j_38);
            }
          else
            {
              t = i_38;
              {
                t = RnBinding_2(t, m_136, o_136);
                t = DistBinding_2(t, d_142, n_136);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_6);
        return(t);
      }
      t = d_142(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = m_38;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, l_6, tboundin_3, tpaste_1);
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
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL;
  g_142 = t;
  f_142 :
  if(((ATgetType(g_142) == AT_LIST) && !(ATisEmpty(g_142))))
    {
      h_142 = ATgetFirst((ATermList) g_142);
      i_142 = (ATerm) ATgetNext((ATermList) g_142);
      t = not_null(h_142);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL;
  n_142 = t;
  m_142 :
  if(match_cons(n_142, sym__2))
    {
      o_142 = ATgetArgument(n_142, 0);
      p_142 = ATgetArgument(n_142, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_142), not_null(p_142));
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
ATerm rewrite_1 (ATerm t, ATerm r_122 (ATerm))
{
  ATerm v_142 = NULL;
  ATerm x_142 = NULL;
  v_142 = t;
  {
    ATerm y_142 = NULL;
    t = term_o_38;
    {
      t = r_122(t);
      {
        y_142 = t;
        if(((x_142 != NULL) && (x_142 != y_142)))
          _fail(y_142);
        else
          x_142 = y_142;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_142), not_null(v_142));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,y_143 = NULL;
  u_143 = t;
  s_143 :
  if(match_cons(u_143, sym_CallT_3))
    {
      v_143 = ATgetArgument(u_143, 0);
      x_143 = ATgetArgument(u_143, 1);
      y_143 = ATgetArgument(u_143, 2);
      t_143 :
      if(match_cons(v_143, sym_SVar_1))
        {
          w_143 = ATgetArgument(v_143, 0);
          {
            ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL;
            ATerm m_144 = NULL,n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_143)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
            {
              ATerm m_6 (ATerm t)
              {
                t = term_p_38;
                return(t);
              }
              t = rewrite_1(t, m_6);
              {
                m_144 = t;
                q_143 :
                if(match_cons(m_144, sym_Defined_4))
                  {
                    n_144 = ATgetArgument(m_144, 0);
                    o_144 = ATgetArgument(m_144, 1);
                    p_144 = ATgetArgument(m_144, 2);
                    q_144 = ATgetArgument(m_144, 3);
                    r_143 :
                    if(match_string(n_144, "c_0"))
                      {
                        ATerm r_144 = NULL,s_144 = NULL,t_144 = NULL,u_144 = NULL,v_144 = NULL;
                        if(((d_144 != NULL) && (d_144 != o_144)))
                          _fail(o_144);
                        else
                          d_144 = o_144;
                        {
                          if(((e_144 != NULL) && (e_144 != p_144)))
                            _fail(p_144);
                          else
                            e_144 = p_144;
                          {
                            if(((j_144 != NULL) && (j_144 != q_144)))
                              _fail(q_144);
                            else
                              j_144 = q_144;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(w_143), not_null(d_144), not_null(j_144), not_null(e_144));
                              {
                                t = strename_0(t);
                                {
                                  r_144 = t;
                                  p_143 :
                                  if(match_cons(r_144, sym_SDefT_4))
                                    {
                                      s_144 = ATgetArgument(r_144, 0);
                                      t_144 = ATgetArgument(r_144, 1);
                                      u_144 = ATgetArgument(r_144, 2);
                                      v_144 = ATgetArgument(r_144, 3);
                                      {
                                        ATerm w_144 = NULL,c_145 = NULL;
                                        if(((w_143 != NULL) && (w_143 != s_144)))
                                          _fail(s_144);
                                        else
                                          w_143 = s_144;
                                        {
                                          if(((g_144 != NULL) && (g_144 != t_144)))
                                            _fail(t_144);
                                          else
                                            g_144 = t_144;
                                          {
                                            if(((f_144 != NULL) && (f_144 != u_144)))
                                              _fail(u_144);
                                            else
                                              f_144 = u_144;
                                            {
                                              if(((h_144 != NULL) && (h_144 != v_144)))
                                                _fail(v_144);
                                              else
                                                h_144 = v_144;
                                              {
                                                ATerm b_145 = NULL;
                                                t = not_null(g_144);
                                                {
                                                  ATerm n_6 (ATerm t)
                                                  {
                                                    ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL;
                                                    x_144 = t;
                                                    f_143 :
                                                    if(match_cons(x_144, sym_VarDec_2))
                                                      {
                                                        y_144 = ATgetArgument(x_144, 0);
                                                        z_144 = ATgetArgument(x_144, 1);
                                                        t = not_null(y_144);
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = map_1(t, n_6);
                                                  {
                                                    b_145 = t;
                                                    if(((w_144 != NULL) && (w_144 != b_145)))
                                                      _fail(b_145);
                                                    else
                                                      w_144 = b_145;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_144), not_null(x_143), not_null(h_144));
                                                  {
                                                    ATerm h_145 = NULL;
                                                    t = ssubs_0(t);
                                                    {
                                                      c_145 = t;
                                                      {
                                                        if(((i_144 != NULL) && (i_144 != c_145)))
                                                          _fail(c_145);
                                                        else
                                                          i_144 = c_145;
                                                        {
                                                          t = not_null(j_144);
                                                          {
                                                            ATerm i_145 = NULL,p_145 = NULL;
                                                            ATerm o_6 (ATerm t)
                                                            {
                                                              ATerm d_145 = NULL,e_145 = NULL,f_145 = NULL;
                                                              d_145 = t;
                                                              j_143 :
                                                              if(match_cons(d_145, sym_VarDec_2))
                                                                {
                                                                  e_145 = ATgetArgument(d_145, 0);
                                                                  f_145 = ATgetArgument(d_145, 1);
                                                                  t = not_null(e_145);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, o_6);
                                                            {
                                                              h_145 = t;
                                                              {
                                                                if(((k_144 != NULL) && (k_144 != h_145)))
                                                                  _fail(h_145);
                                                                else
                                                                  k_144 = h_145;
                                                                {
                                                                  ATerm o_145 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_143), not_null(k_144));
                                                                  {
                                                                    ATerm p_6 (ATerm t)
                                                                    {
                                                                      ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL;
                                                                      j_145 = t;
                                                                      m_143 :
                                                                      if(match_cons(j_145, sym__2))
                                                                        {
                                                                          k_145 = ATgetArgument(j_145, 0);
                                                                          l_145 = ATgetArgument(j_145, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_145)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_145))));
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = zip_1(t, p_6);
                                                                    {
                                                                      o_145 = t;
                                                                      if(((i_145 != NULL) && (i_145 != o_145)))
                                                                        _fail(o_145);
                                                                      else
                                                                        i_145 = o_145;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_145));
                                                                    {
                                                                      p_145 = t;
                                                                      if(((l_144 != NULL) && (l_144 != p_145)))
                                                                        _fail(p_145);
                                                                      else
                                                                        l_144 = p_145;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
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
              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_144), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_144), not_null(i_144)));
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
  ATerm j_146 = NULL;
  ATerm q_38;
  q_38 = t;
  {
    ATerm k_146 = NULL;
    t = new_0(t);
    {
      k_146 = t;
      {
        if(((j_146 != NULL) && (j_146 != k_146)))
          _fail(k_146);
        else
          j_146 = k_146;
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_38, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_146)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm r_6 (ATerm t)
                  {
                    t = term_v_38;
                    return(t);
                  }
                  t = say_1(t, r_6);
                  return(t);
                }
                t = if_verbose2_1(t, q_6);
                _fail(t);
              }
            }
          {
            ATerm w_38 = t;
            int x_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL,r_146 = NULL;
                l_146 = t;
                d_146 :
                if(match_cons(l_146, sym_LChoice_2))
                  {
                    m_146 = ATgetArgument(l_146, 0);
                    r_146 = ATgetArgument(l_146, 1);
                    e_146 :
                    if(match_cons(m_146, sym_CallT_3))
                      {
                        n_146 = ATgetArgument(m_146, 0);
                        p_146 = ATgetArgument(m_146, 1);
                        q_146 = ATgetArgument(m_146, 2);
                        f_146 :
                        if(match_cons(n_146, sym_SVar_1))
                          {
                            o_146 = ATgetArgument(n_146, 0);
                            g_146 :
                            if(((ATgetType(p_146) == AT_LIST) && ATisEmpty(p_146)))
                              {
                                h_146 :
                                if(((ATgetType(q_146) == AT_LIST) && ATisEmpty(q_146)))
                                  {
                                    i_146 :
                                    if(match_cons(r_146, sym_Id_0))
                                      {
                                        if(((j_146 != NULL) && (j_146 != o_146)))
                                          _fail(o_146);
                                        else
                                          j_146 = o_146;
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(x_38);
              }
            else
              {
                t = w_38;
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm t_6 (ATerm t)
                    {
                      t = term_y_38;
                      return(t);
                    }
                    t = debug_1(t, t_6);
                    return(t);
                  }
                  t = if_verbose1_1(t, s_6);
                  _fail(t);
                }
              }
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  t = term_z_38;
                  return(t);
                }
                t = say_1(t, v_6);
                return(t);
              }
              t = if_verbose2_1(t, u_6);
            }
          }
        }
      }
    }
  }
  t = q_38;
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
ATerm assert_1 (ATerm t, ATerm p_122 (ATerm))
{
  ATerm z_146 = NULL,a_147 = NULL,b_147 = NULL;
  z_146 = t;
  y_146 :
  if(match_cons(z_146, sym__2))
    {
      a_147 = ATgetArgument(z_146, 0);
      b_147 = ATgetArgument(z_146, 1);
      {
        ATerm e_147 = NULL,f_147 = NULL,g_147 = NULL;
        ATerm a_39;
        a_39 = t;
        {
          ATerm h_147 = NULL;
          ATerm i_147 = NULL,j_147 = NULL,k_147 = NULL;
          t = p_122(t);
          {
            h_147 = t;
            {
              if(((e_147 != NULL) && (e_147 != h_147)))
                _fail(h_147);
              else
                e_147 = h_147;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_147), not_null(a_147), not_null(b_147));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_39 = t;
                    int c_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_147), term_x_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(c_39);
                      }
                    else
                      {
                        t = b_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_147 = t;
                      x_146 :
                      if(((ATgetType(i_147) == AT_LIST) && !(ATisEmpty(i_147))))
                        {
                          j_147 = ATgetFirst((ATermList) i_147);
                          k_147 = (ATerm) ATgetNext((ATermList) i_147);
                          {
                            if(((f_147 != NULL) && (f_147 != j_147)))
                              _fail(j_147);
                            else
                              f_147 = j_147;
                            {
                              if(((g_147 != NULL) && (g_147 != k_147)))
                                _fail(k_147);
                              else
                                g_147 = k_147;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_147), term_x_15, (ATerm) ATinsert(CheckATermList(not_null(g_147)), (ATerm) ATinsert(CheckATermList(not_null(f_147)), not_null(a_147))));
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
        t = a_39;
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
  ATerm q_147 = NULL,r_147 = NULL,s_147 = NULL,t_147 = NULL,u_147 = NULL;
  q_147 = t;
  p_147 :
  if(match_cons(q_147, sym_SDefT_4))
    {
      r_147 = ATgetArgument(q_147, 0);
      s_147 = ATgetArgument(q_147, 1);
      t_147 = ATgetArgument(q_147, 2);
      u_147 = ATgetArgument(q_147, 3);
      {
        ATerm d_39;
        d_39 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_147)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_e_39, not_null(s_147), not_null(u_147), not_null(t_147)));
          {
            ATerm w_6 (ATerm t)
            {
              t = term_p_38;
              return(t);
            }
            t = assert_1(t, w_6);
          }
        }
        t = d_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm f_148 = NULL,g_148 = NULL;
  f_148 = t;
  e_148 :
  if(match_cons(f_148, sym_Strategies_1))
    {
      g_148 = ATgetArgument(f_148, 0);
      {
        ATerm j_148 = NULL,l_148 = NULL;
        ATerm k_148 = NULL;
        t = SSLgetAnnotations(not_null(f_148));
        {
          k_148 = t;
          if(((j_148 != NULL) && (j_148 != k_148)))
            _fail(k_148);
          else
            j_148 = k_148;
        }
        {
          t = not_null(g_148);
          {
            ATerm n_148 = NULL;
            t = d_95(t);
            {
              l_148 = t;
              {
                ATerm o_148 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_148)), not_null(j_148));
                {
                  o_148 = t;
                  if(((n_148 != NULL) && (n_148 != o_148)))
                    _fail(o_148);
                  else
                    n_148 = o_148;
                }
                t = not_null(n_148);
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
ATerm Signature_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm y_148 = NULL,z_148 = NULL;
  y_148 = t;
  x_148 :
  if(match_cons(y_148, sym_Signature_1))
    {
      z_148 = ATgetArgument(y_148, 0);
      {
        ATerm c_149 = NULL,e_149 = NULL;
        ATerm d_149 = NULL;
        t = SSLgetAnnotations(not_null(y_148));
        {
          d_149 = t;
          if(((c_149 != NULL) && (c_149 != d_149)))
            _fail(d_149);
          else
            c_149 = d_149;
        }
        {
          t = not_null(z_148);
          {
            ATerm g_149 = NULL;
            t = e_95(t);
            {
              e_149 = t;
              {
                ATerm h_149 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(e_149)), not_null(c_149));
                {
                  h_149 = t;
                  if(((g_149 != NULL) && (g_149 != h_149)))
                    _fail(h_149);
                  else
                    g_149 = h_149;
                }
                t = not_null(g_149);
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
ATerm Specification_1 (ATerm t, ATerm i_95 (ATerm))
{
  ATerm r_149 = NULL,s_149 = NULL;
  r_149 = t;
  q_149 :
  if(match_cons(r_149, sym_Specification_1))
    {
      s_149 = ATgetArgument(r_149, 0);
      {
        ATerm v_149 = NULL,x_149 = NULL;
        ATerm w_149 = NULL;
        t = SSLgetAnnotations(not_null(r_149));
        {
          w_149 = t;
          if(((v_149 != NULL) && (v_149 != w_149)))
            _fail(w_149);
          else
            v_149 = w_149;
        }
        {
          t = not_null(s_149);
          {
            ATerm z_149 = NULL;
            t = i_95(t);
            {
              x_149 = t;
              {
                ATerm a_150 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_149)), not_null(v_149));
                {
                  a_150 = t;
                  if(((z_149 != NULL) && (z_149 != a_150)))
                    _fail(a_150);
                  else
                    z_149 = a_150;
                }
                t = not_null(z_149);
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
  ATerm x_6 (ATerm t)
  {
    ATerm y_6 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm z_6 (ATerm t)
    {
      ATerm a_7 (ATerm t)
      {
        ATerm b_7 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, b_7);
        return(t);
      }
      t = Cons_2(t, a_7, Nil_0);
      return(t);
    }
    t = Cons_2(t, y_6, z_6);
    return(t);
  }
  t = Specification_1(t, x_6);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  ATerm l_150 = NULL,m_150 = NULL,n_150 = NULL;
  l_150 = t;
  k_150 :
  if(match_cons(l_150, sym__2))
    {
      m_150 = ATgetArgument(l_150, 0);
      n_150 = ATgetArgument(l_150, 1);
      {
        ATerm r_150 = NULL,t_150 = NULL;
        ATerm s_150 = NULL;
        t = SSLgetAnnotations(not_null(l_150));
        {
          s_150 = t;
          if(((r_150 != NULL) && (r_150 != s_150)))
            _fail(s_150);
          else
            r_150 = s_150;
        }
        {
          t = not_null(m_150);
          {
            ATerm v_150 = NULL;
            t = q_93(t);
            {
              t_150 = t;
              {
                t = not_null(n_150);
                {
                  ATerm x_150 = NULL;
                  t = r_93(t);
                  {
                    v_150 = t;
                    {
                      ATerm y_150 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_150), not_null(v_150)), not_null(r_150));
                      {
                        y_150 = t;
                        if(((x_150 != NULL) && (x_150 != y_150)))
                          _fail(y_150);
                        else
                          x_150 = y_150;
                      }
                      t = not_null(x_150);
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
  ATerm f_39;
  f_39 = t;
  {
    ATerm f_151 = NULL;
    ATerm g_151 = NULL;
    t = term_o_38;
    {
      t = whoami_0(t);
      {
        g_151 = t;
        if(((f_151 != NULL) && (f_151 != g_151)))
          _fail(g_151);
        else
          f_151 = g_151;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_39), not_null(f_151)), term_g_39));
      {
        t = printnl_0(t);
        {
          t = term_i_39;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_39;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_151 = NULL,l_151 = NULL,m_151 = NULL;
  k_151 = t;
  j_151 :
  if(match_cons(k_151, sym__2))
    {
      l_151 = ATgetArgument(k_151, 0);
      m_151 = ATgetArgument(k_151, 1);
      {
        ATerm j_39;
        j_39 = t;
        t = SSL_printnl(not_null(l_151), not_null(m_151));
        t = j_39;
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
  ATerm r_151 = NULL;
  r_151 = t;
  t = SSL_implode_string(not_null(r_151));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm w_151 = NULL,x_151 = NULL,y_151 = NULL;
        w_151 = t;
        v_151 :
        if(((ATgetType(w_151) == AT_LIST) && !(ATisEmpty(w_151))))
          {
            x_151 = ATgetFirst((ATermList) w_151);
            y_151 = (ATerm) ATgetNext((ATermList) w_151);
            {
              t = not_null(x_151);
              {
                ATerm c_7 (ATerm t)
                {
                  t = not_null(y_151);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_7);
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
  ATerm i_152 = NULL;
  ATerm k_152 = NULL;
  i_152 = t;
  {
    ATerm l_152 = NULL;
    ATerm n_152 = NULL,o_152 = NULL,p_152 = NULL;
    t = not_null(i_152);
    {
      l_152 = t;
      {
        t = SSL_explode_term(not_null(l_152));
        {
          n_152 = t;
          g_152 :
          if(match_cons(n_152, sym__2))
            {
              o_152 = ATgetArgument(n_152, 0);
              p_152 = ATgetArgument(n_152, 1);
              h_152 :
              if(match_string(o_152, ""))
                {
                  if(((k_152 != NULL) && (k_152 != p_152)))
                    _fail(p_152);
                  else
                    k_152 = p_152;
                }
              else
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
      t = not_null(k_152);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_115 (ATerm))
{
  ATerm t_152 (ATerm t)
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_152);
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        {
          t = Nil_0(t);
          t = e_115(t);
        }
      }
    return(t);
  }
  t = t_152(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_152 = NULL,x_152 = NULL,y_152 = NULL;
  w_152 = t;
  v_152 :
  if(match_cons(w_152, sym__2))
    {
      x_152 = ATgetArgument(w_152, 0);
      y_152 = ATgetArgument(w_152, 1);
      {
        t = not_null(x_152);
        {
          ATerm d_7 (ATerm t)
          {
            t = not_null(y_152);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_153 = NULL;
  d_153 = t;
  t = SSL_explode_string(not_null(d_153));
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
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_7);
            ;
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            {
              ATerm m_153 = NULL,n_153 = NULL,o_153 = NULL;
              m_153 = t;
              l_153 :
              if(match_cons(m_153, sym_Path_1))
                {
                  n_153 = ATgetArgument(m_153, 0);
                  t = not_null(n_153);
                }
              else
                {
                  if(match_cons(m_153, sym_Var_1))
                    {
                      n_153 = ATgetArgument(m_153, 0);
                      {
                        t = not_null(n_153);
                        {
                          ATerm u_39 = t;
                          int v_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_39);
                            }
                          else
                            {
                              t = u_39;
                              {
                                ATerm f_7 (ATerm t)
                                {
                                  t = term_w_39;
                                  return(t);
                                }
                                t = debug_1(t, f_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_153, sym_Prefix_2))
                        {
                          n_153 = ATgetArgument(m_153, 0);
                          o_153 = ATgetArgument(m_153, 1);
                          {
                            ATerm t_153 = NULL,v_153 = NULL;
                            ATerm x_39;
                            x_39 = t;
                            {
                              ATerm u_153 = NULL;
                              t = not_null(n_153);
                              {
                                t = eval_config_0(t);
                                {
                                  u_153 = t;
                                  if(((t_153 != NULL) && (t_153 != u_153)))
                                    _fail(u_153);
                                  else
                                    t_153 = u_153;
                                }
                              }
                            }
                            t = x_39;
                            {
                              ATerm w_153 = NULL;
                              t = not_null(o_153);
                              {
                                t = eval_config_0(t);
                                {
                                  w_153 = t;
                                  if(((v_153 != NULL) && (v_153 != w_153)))
                                    _fail(w_153);
                                  else
                                    v_153 = w_153;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_153), not_null(v_153));
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
  ATerm e_154 = NULL;
  e_154 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_39, not_null(e_154));
    {
      t = table_get_0(t);
      {
        ATerm g_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_39;
            z_39 = t;
            {
              ATerm g_154 = NULL;
              ATerm h_154 = NULL;
              h_154 = t;
              if(((g_154 != NULL) && (g_154 != h_154)))
                _fail(h_154);
              else
                g_154 = h_154;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_39, not_null(e_154), not_null(g_154));
                t = table_put_0(t);
              }
            }
            t = z_39;
          }
          return(t);
        }
        t = try_1(t, g_7);
      }
    }
  }
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm o_154 = NULL,p_154 = NULL,q_154 = NULL,r_154 = NULL;
  o_154 = t;
  m_154 :
  if(match_cons(o_154, sym__2))
    {
      p_154 = ATgetArgument(o_154, 0);
      q_154 = ATgetArgument(o_154, 1);
      n_154 :
      if(match_cons(q_154, sym_Stream_1))
        {
          r_154 = ATgetArgument(q_154, 0);
          {
            ATerm u_154 = NULL;
            t = SSL_fputc(not_null(p_154), not_null(r_154));
            {
              ATerm v_154 = NULL;
              v_154 = t;
              if(((u_154 != NULL) && (u_154 != v_154)))
                _fail(v_154);
              else
                u_154 = v_154;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_154));
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
  ATerm c_155 = NULL,d_155 = NULL,e_155 = NULL,f_155 = NULL;
  c_155 = t;
  a_155 :
  if(match_cons(c_155, sym__2))
    {
      d_155 = ATgetArgument(c_155, 0);
      f_155 = ATgetArgument(c_155, 1);
      b_155 :
      if(match_cons(d_155, sym_Stream_1))
        {
          e_155 = ATgetArgument(d_155, 0);
          {
            ATerm i_155 = NULL;
            t = SSL_write_term_to_stream_text(not_null(e_155), not_null(f_155));
            {
              ATerm j_155 = NULL;
              j_155 = t;
              if(((i_155 != NULL) && (i_155 != j_155)))
                _fail(j_155);
              else
                i_155 = j_155;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_155));
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
  ATerm h_7 (ATerm t)
  {
    ATerm n_155 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm o_155 = NULL;
      o_155 = t;
      if(((n_155 != NULL) && (n_155 != o_155)))
        _fail(o_155);
      else
        n_155 = o_155;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_40, not_null(n_155));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, h_7);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL,x_155 = NULL;
  u_155 = t;
  s_155 :
  if(match_cons(u_155, sym__2))
    {
      v_155 = ATgetArgument(u_155, 0);
      x_155 = ATgetArgument(u_155, 1);
      t_155 :
      if(match_cons(v_155, sym_Stream_1))
        {
          w_155 = ATgetArgument(v_155, 0);
          {
            ATerm a_156 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(w_155), not_null(x_155));
            {
              ATerm b_156 = NULL;
              b_156 = t;
              if(((a_156 != NULL) && (a_156 != b_156)))
                _fail(b_156);
              else
                a_156 = b_156;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_156));
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
ATerm WriteToFile_1 (ATerm t, ATerm c_130 (ATerm))
{
  ATerm i_156 = NULL,j_156 = NULL,k_156 = NULL;
  i_156 = t;
  h_156 :
  if(match_cons(i_156, sym__2))
    {
      j_156 = ATgetArgument(i_156, 0);
      k_156 = ATgetArgument(i_156, 1);
      {
        ATerm n_156 = NULL,p_156 = NULL;
        t = not_null(j_156);
        {
          ATerm o_156 = NULL;
          o_156 = t;
          if(((n_156 != NULL) && (n_156 != o_156)))
            _fail(o_156);
          else
            n_156 = o_156;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_156), term_b_40);
            {
              t = open_stream_0(t);
              {
                ATerm q_156 = NULL;
                q_156 = t;
                if(((p_156 != NULL) && (p_156 != q_156)))
                  _fail(q_156);
                else
                  p_156 = q_156;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_156), not_null(k_156));
                  {
                    t = c_130(t);
                    {
                      t = fclose_0(t);
                      t = not_null(k_156);
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
  ATerm y_156 = NULL;
  ATerm c_40;
  c_40 = t;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm d_40 = t;
      int e_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            ATerm z_156 = NULL,a_157 = NULL;
            z_156 = t;
            v_156 :
            if(match_cons(z_156, sym_Output_1))
              {
                a_157 = ATgetArgument(z_156, 0);
                if(((y_156 != NULL) && (y_156 != a_157)))
                  _fail(a_157);
                else
                  y_156 = a_157;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_7);
          ;
          LocalPopChoice(e_40);
        }
      else
        {
          t = d_40;
          {
            ATerm b_157 = NULL;
            t = term_f_40;
            {
              b_157 = t;
              if(((y_156 != NULL) && (y_156 != b_157)))
                _fail(b_157);
              else
                y_156 = b_157;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_7, _id);
  }
  t = c_40;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm l_7 (ATerm t)
      {
        t = not_null(y_156);
        return(t);
      }
      t = split_2(t, l_7, _id);
      return(t);
    }
    t = _2(t, _id, k_7);
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_7 (ATerm t)
          {
            ATerm n_7 (ATerm t)
            {
              ATerm c_157 = NULL;
              c_157 = t;
              x_156 :
              if(!(match_cons(c_157, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, n_7);
            return(t);
          }
          t = _2(t, m_7, WriteToBinaryFile_0);
          ;
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_131 (ATerm))
{
  ATerm i_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL;
  ATerm i_40;
  i_40 = t;
  t = dtime_0(t);
  t = i_40;
  {
    t = o_131(t);
    {
      ATerm j_40;
      j_40 = t;
      {
        ATerm j_157 = NULL;
        t = dtime_0(t);
        {
          j_157 = t;
          if(((i_157 != NULL) && (i_157 != j_157)))
            _fail(j_157);
          else
            i_157 = j_157;
        }
      }
      t = j_40;
      {
        k_157 = t;
        h_157 :
        if(match_cons(k_157, sym__2))
          {
            l_157 = ATgetArgument(k_157, 0);
            m_157 = ATgetArgument(k_157, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_157)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_157))), not_null(m_157));
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
  ATerm u_157 = NULL,v_157 = NULL;
  ATerm b_158 (ATerm t)
  {
    t = SSL_fclose(not_null(v_157));
    return(t);
  }
  v_157 = t;
  t_157 :
  if(match_cons(v_157, sym_Stream_1))
    {
      u_157 = ATgetArgument(v_157, 0);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(u_157));
            ;
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            t = b_158(t);
          }
      }
    }
  else
    {
      t = b_158(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL;
  e_158 = t;
  d_158 :
  if(match_cons(e_158, sym_Stream_1))
    {
      f_158 = ATgetArgument(e_158, 0);
      t = SSL_read_term_from_stream(not_null(f_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_129 (ATerm))
{
  ATerm m_40;
  m_40 = t;
  {
    ATerm k_158 = NULL,m_158 = NULL;
    ATerm n_40;
    n_40 = t;
    {
      ATerm l_158 = NULL;
      t = o_129(t);
      {
        l_158 = t;
        if(((k_158 != NULL) && (k_158 != l_158)))
          _fail(l_158);
        else
          k_158 = l_158;
      }
    }
    t = n_40;
    {
      ATerm n_158 = NULL;
      n_158 = t;
      if(((m_158 != NULL) && (m_158 != n_158)))
        _fail(n_158);
      else
        m_158 = n_158;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_158)), not_null(k_158)));
        t = printnl_0(t);
      }
    }
  }
  t = m_40;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm t_158 = NULL,u_158 = NULL,v_158 = NULL;
  t_158 = t;
  s_158 :
  if(match_cons(t_158, sym__2))
    {
      u_158 = ATgetArgument(t_158, 0);
      v_158 = ATgetArgument(t_158, 1);
      {
        ATerm y_158 = NULL;
        t = SSL_fopen(not_null(u_158), not_null(v_158));
        {
          ATerm z_158 = NULL;
          z_158 = t;
          if(((y_158 != NULL) && (y_158 != z_158)))
            _fail(z_158);
          else
            y_158 = z_158;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_158));
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
  ATerm d_159 = NULL;
  d_159 = t;
  t = SSL_is_string(not_null(d_159));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_159 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_159 = NULL;
    i_159 = t;
    if(((h_159 != NULL) && (h_159 != i_159)))
      _fail(i_159);
    else
      h_159 = i_159;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_159));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_159 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_159 = NULL;
    m_159 = t;
    if(((l_159 != NULL) && (l_159 != m_159)))
      _fail(m_159);
    else
      l_159 = m_159;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_159));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_159 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_159 = NULL;
    q_159 = t;
    if(((p_159 != NULL) && (p_159 != q_159)))
      _fail(q_159);
    else
      p_159 = q_159;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_159));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_159 = NULL;
  w_159 = t;
  v_159 :
  if(match_cons(w_159, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_159, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_159, sym_stdin_0))
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
  ATerm g_160 = NULL;
  ATerm j_160 = NULL,k_160 = NULL;
  g_160 = t;
  {
    ATerm l_160 = NULL;
    ATerm n_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL;
    t = not_null(g_160);
    {
      l_160 = t;
      {
        t = SSL_explode_term(not_null(l_160));
        {
          n_160 = t;
          d_160 :
          if(match_cons(n_160, sym__2))
            {
              p_160 = ATgetArgument(n_160, 0);
              q_160 = ATgetArgument(n_160, 1);
              e_160 :
              if(match_string(p_160, ""))
                {
                  f_160 :
                  if(((ATgetType(q_160) == AT_LIST) && !(ATisEmpty(q_160))))
                    {
                      r_160 = ATgetFirst((ATermList) q_160);
                      s_160 = (ATerm) ATgetNext((ATermList) q_160);
                      {
                        if(((k_160 != NULL) && (k_160 != r_160)))
                          _fail(r_160);
                        else
                          k_160 = r_160;
                        if(((j_160 != NULL) && (j_160 != s_160)))
                          _fail(s_160);
                        else
                          j_160 = s_160;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(k_160);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm a_161 = NULL,b_161 = NULL,c_161 = NULL;
  a_161 = t;
  z_160 :
  if(match_cons(a_161, sym__2))
    {
      b_161 = ATgetArgument(a_161, 0);
      c_161 = ATgetArgument(a_161, 1);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm o_7 (ATerm t)
                  {
                    ATerm d_161 = NULL,e_161 = NULL;
                    d_161 = t;
                    y_160 :
                    if(match_cons(d_161, sym_Path_1))
                      {
                        e_161 = ATgetArgument(d_161, 0);
                        t = not_null(e_161);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, o_7, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(r_40);
                }
              else
                {
                  t = q_40;
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
  ATerm m_161 = NULL;
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_161 = NULL;
      ATerm l_161 = NULL;
      l_161 = t;
      if(((k_161 != NULL) && (k_161 != l_161)))
        _fail(l_161);
      else
        k_161 = l_161;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_161), term_u_40);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm p_7 (ATerm t)
        {
          t = term_v_40;
          return(t);
        }
        t = debug_1(t, p_7);
        _fail(t);
      }
    }
  {
    ATerm w_40;
    w_40 = t;
    {
      ATerm n_161 = NULL;
      t = read_from_stream_0(t);
      {
        n_161 = t;
        if(((m_161 != NULL) && (m_161 != n_161)))
          _fail(n_161);
        else
          m_161 = n_161;
      }
    }
    t = w_40;
    {
      t = fclose_0(t);
      t = not_null(m_161);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_113 (ATerm), ATerm r_113 (ATerm))
{
  ATerm t_161 = NULL,v_161 = NULL;
  ATerm z_40;
  z_40 = t;
  {
    ATerm u_161 = NULL;
    t = q_113(t);
    {
      u_161 = t;
      if(((t_161 != NULL) && (t_161 != u_161)))
        _fail(u_161);
      else
        t_161 = u_161;
    }
  }
  t = z_40;
  {
    ATerm w_161 = NULL;
    t = r_113(t);
    {
      w_161 = t;
      if(((v_161 != NULL) && (v_161 != w_161)))
        _fail(w_161);
      else
        v_161 = w_161;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_161), not_null(v_161));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_162 = NULL;
  ATerm a_41;
  a_41 = t;
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 (ATerm t)
        {
          ATerm d_162 = NULL,e_162 = NULL;
          d_162 = t;
          a_162 :
          if(match_cons(d_162, sym_Input_1))
            {
              e_162 = ATgetArgument(d_162, 0);
              if(((c_162 != NULL) && (c_162 != e_162)))
                _fail(e_162);
              else
                c_162 = e_162;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, q_7);
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        {
          ATerm f_162 = NULL;
          t = term_d_41;
          {
            f_162 = t;
            if(((c_162 != NULL) && (c_162 != f_162)))
              _fail(f_162);
            else
              c_162 = f_162;
          }
        }
      }
  }
  t = a_41;
  {
    ATerm r_7 (ATerm t)
    {
      t = not_null(c_162);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_7);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm l_162 = NULL;
    l_162 = t;
    j_162 :
    if(!(match_string(l_162, "-k")))
      {
        if(!(match_string(l_162, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm e_41;
    e_41 = t;
    {
      ATerm m_162 = NULL;
      ATerm n_162 = NULL;
      t = string_to_int_0(t);
      {
        n_162 = t;
        if(((m_162 != NULL) && (m_162 != n_162)))
          _fail(n_162);
        else
          m_162 = n_162;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_41, not_null(m_162));
        t = set_config_0(t);
      }
    }
    t = e_41;
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_g_41;
    return(t);
  }
  t = ArgOption_3(t, s_7, t_7, u_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_162 = NULL;
  q_162 = t;
  t = SSL_string_to_int(not_null(q_162));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 (ATerm t)
      {
        ATerm y_162 = NULL;
        y_162 = t;
        t_162 :
        if(!(match_string(y_162, "-S")))
          {
            if(!(match_string(y_162, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        t = term_t_41;
        t = set_config_0(t);
        t = term_u_41;
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        t = term_v_41;
        return(t);
      }
      t = Option_3(t, v_7, x_7, y_7);
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 (ATerm t)
            {
              ATerm z_162 = NULL;
              z_162 = t;
              u_162 :
              if(!(match_string(z_162, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_8 (ATerm t)
            {
              ATerm c_163 = NULL;
              ATerm y_41;
              y_41 = t;
              {
                ATerm a_163 = NULL;
                ATerm b_163 = NULL;
                t = string_to_int_0(t);
                {
                  b_163 = t;
                  if(((a_163 != NULL) && (a_163 != b_163)))
                    _fail(b_163);
                  else
                    a_163 = b_163;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(a_163));
                  t = set_config_0(t);
                }
              }
              t = y_41;
              {
                ATerm d_163 = NULL;
                d_163 = t;
                if(((c_163 != NULL) && (c_163 != d_163)))
                  _fail(d_163);
                else
                  c_163 = d_163;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_163));
              }
              return(t);
            }
            ATerm b_8 (ATerm t)
            {
              t = term_b_42;
              return(t);
            }
            t = ArgOption_3(t, z_7, a_8, b_8);
            ;
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm e_163 = NULL;
                e_163 = t;
                x_162 :
                if(!(match_string(e_163, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_8 (ATerm t)
              {
                t = term_d_42;
                t = set_config_0(t);
                t = term_e_42;
                return(t);
              }
              ATerm e_8 (ATerm t)
              {
                t = term_f_42;
                return(t);
              }
              t = Option_3(t, c_8, d_8, e_8);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm k_163 = NULL;
    k_163 = t;
    h_163 :
    if(!(match_string(k_163, "-o")))
      {
        if(!(match_string(k_163, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm n_163 = NULL;
    ATerm i_42;
    i_42 = t;
    {
      ATerm l_163 = NULL;
      ATerm m_163 = NULL;
      m_163 = t;
      if(((l_163 != NULL) && (l_163 != m_163)))
        _fail(m_163);
      else
        l_163 = m_163;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_42, not_null(l_163));
        t = set_config_0(t);
      }
    }
    t = i_42;
    {
      ATerm o_163 = NULL;
      o_163 = t;
      if(((n_163 != NULL) && (n_163 != o_163)))
        _fail(o_163);
      else
        n_163 = o_163;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_163));
    }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    t = term_m_42;
    return(t);
  }
  t = ArgOption_3(t, f_8, g_8, h_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = n_42;
      {
        ATerm i_8 (ATerm t)
        {
          ATerm s_163 = NULL;
          s_163 = t;
          r_163 :
          if(!(match_string(s_163, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_8 (ATerm t)
        {
          t = term_s_42;
          t = set_config_0(t);
          t = term_t_42;
          return(t);
        }
        ATerm l_8 (ATerm t)
        {
          t = term_u_42;
          return(t);
        }
        t = Option_3(t, i_8, j_8, l_8);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm y_163 = NULL,z_163 = NULL,a_164 = NULL,b_164 = NULL,c_164 = NULL;
  y_163 = t;
  w_163 :
  if(match_string(y_163, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(y_163) == AT_LIST) && !(ATisEmpty(y_163))))
        {
          z_163 = ATgetFirst((ATermList) y_163);
          a_164 = (ATerm) ATgetNext((ATermList) y_163);
          x_163 :
          if(((ATgetType(a_164) == AT_LIST) && !(ATisEmpty(a_164))))
            {
              b_164 = ATgetFirst((ATermList) a_164);
              c_164 = (ATerm) ATgetNext((ATermList) a_164);
              {
                ATerm g_164 = NULL;
                ATerm v_42;
                v_42 = t;
                {
                  t = not_null(z_163);
                  t = k_0(t);
                }
                t = v_42;
                {
                  ATerm h_164 = NULL;
                  t = not_null(b_164);
                  {
                    t = m_0(t);
                    {
                      h_164 = t;
                      if(((g_164 != NULL) && (g_164 != h_164)))
                        _fail(h_164);
                      else
                        g_164 = h_164;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_164)), not_null(g_164));
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
  ATerm m_8 (ATerm t)
  {
    ATerm o_164 = NULL;
    o_164 = t;
    l_164 :
    if(!(match_string(o_164, "-i")))
      {
        if(!(match_string(o_164, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    ATerm r_164 = NULL;
    ATerm w_42;
    w_42 = t;
    {
      ATerm p_164 = NULL;
      ATerm q_164 = NULL;
      q_164 = t;
      if(((p_164 != NULL) && (p_164 != q_164)))
        _fail(q_164);
      else
        p_164 = q_164;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_42, not_null(p_164));
        t = set_config_0(t);
      }
    }
    t = w_42;
    {
      ATerm s_164 = NULL;
      s_164 = t;
      if(((r_164 != NULL) && (r_164 != s_164)))
        _fail(s_164);
      else
        r_164 = s_164;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_164));
    }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = term_y_42;
    return(t);
  }
  t = ArgOption_3(t, m_8, n_8, o_8);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      {
        ATerm b_43 = t;
        int c_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_43);
          }
        else
          {
            t = b_43;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm w_164 = NULL;
  t = report_run_time_0(t);
  {
    ATerm x_164 = NULL;
    t = term_o_38;
    {
      t = whoami_0(t);
      {
        x_164 = t;
        if(((w_164 != NULL) && (w_164 != x_164)))
          _fail(x_164);
        else
          w_164 = x_164;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, term_d_43), not_null(w_164)));
      {
        t = printnl_0(t);
        {
          t = term_i_39;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_43;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_165 = NULL;
  a_165 = t;
  t = SSL_TicksToSeconds(not_null(a_165));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_165 = NULL,g_165 = NULL,h_165 = NULL;
  f_165 = t;
  e_165 :
  if(match_cons(f_165, sym__2))
    {
      g_165 = ATgetArgument(f_165, 0);
      h_165 = ATgetArgument(f_165, 1);
      {
        ATerm f_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_165), not_null(h_165));
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = f_43;
            t = SSL_addr(not_null(g_165), not_null(h_165));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_121 (ATerm), ATerm f_121 (ATerm))
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_121(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm o_165 = NULL,p_165 = NULL,q_165 = NULL;
        o_165 = t;
        n_165 :
        if(((ATgetType(o_165) == AT_LIST) && !(ATisEmpty(o_165))))
          {
            p_165 = ATgetFirst((ATermList) o_165);
            q_165 = (ATerm) ATgetNext((ATermList) o_165);
            {
              ATerm t_165 = NULL;
              ATerm u_165 = NULL;
              t = not_null(q_165);
              {
                t = foldr_2(t, e_121, f_121);
                {
                  u_165 = t;
                  if(((t_165 != NULL) && (t_165 != u_165)))
                    _fail(u_165);
                  else
                    t_165 = u_165;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_165), not_null(t_165));
                t = f_121(t);
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
ATerm crush_2 (ATerm t, ATerm c_119 (ATerm), ATerm d_119 (ATerm))
{
  ATerm b_166 = NULL;
  ATerm d_166 = NULL;
  b_166 = t;
  {
    ATerm e_166 = NULL;
    ATerm g_166 = NULL,h_166 = NULL,i_166 = NULL;
    t = not_null(b_166);
    {
      e_166 = t;
      {
        t = SSL_explode_term(not_null(e_166));
        {
          g_166 = t;
          a_166 :
          if(match_cons(g_166, sym__2))
            {
              h_166 = ATgetArgument(g_166, 0);
              i_166 = ATgetArgument(g_166, 1);
              if(((d_166 != NULL) && (d_166 != i_166)))
                _fail(i_166);
              else
                d_166 = i_166;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_166);
      t = foldr_2(t, c_119, d_119);
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
    ATerm p_8 (ATerm t)
    {
      t = term_j_41;
      return(t);
    }
    t = crush_2(t, p_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL,q_166 = NULL;
  o_166 = t;
  n_166 :
  if(match_cons(o_166, sym__2))
    {
      p_166 = ATgetArgument(o_166, 0);
      q_166 = ATgetArgument(o_166, 1);
      {
        ATerm o_43;
        o_43 = t;
        {
          ATerm p_43 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_166), not_null(q_166));
              ;
              LocalPopChoice(h_44);
            }
          else
            {
              t = p_43;
              t = SSL_gtr(not_null(p_166), not_null(q_166));
            }
        }
        t = o_43;
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
  ATerm w_166 = NULL;
  ATerm i_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_166 = NULL,y_166 = NULL,z_166 = NULL;
      x_166 = t;
      v_166 :
      if(match_cons(x_166, sym__2))
        {
          y_166 = ATgetArgument(x_166, 0);
          z_166 = ATgetArgument(x_166, 1);
          {
            if(((w_166 != NULL) && (w_166 != y_166)))
              _fail(y_166);
            else
              w_166 = y_166;
            if(((w_166 != NULL) && (w_166 != z_166)))
              _fail(z_166);
            else
              w_166 = z_166;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = i_44;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_139 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm k_44;
    k_44 = t;
    {
      ATerm c_167 = NULL;
      ATerm d_167 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          d_167 = t;
          if(((c_167 != NULL) && (c_167 != d_167)))
            _fail(d_167);
          else
            c_167 = d_167;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_167), term_i_39);
        t = geq_0(t);
      }
    }
    t = k_44;
    t = u_139(t);
    return(t);
  }
  t = try_1(t, q_8);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm h_167 = NULL,j_167 = NULL;
    ATerm r_44;
    r_44 = t;
    {
      ATerm i_167 = NULL;
      t = run_time_0(t);
      {
        i_167 = t;
        if(((h_167 != NULL) && (h_167 != i_167)))
          _fail(i_167);
        else
          h_167 = i_167;
      }
    }
    t = r_44;
    {
      ATerm k_167 = NULL;
      t = term_o_38;
      {
        t = whoami_0(t);
        {
          k_167 = t;
          if(((j_167 != NULL) && (j_167 != k_167)))
            _fail(k_167);
          else
            j_167 = k_167;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_44), not_null(h_167)), term_s_44), not_null(j_167)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_j_41;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_167 = NULL;
  r_167 = t;
  q_167 :
  if(match_cons(r_167, sym_Version_0))
    {
      ATerm t_167 = NULL,v_167 = NULL;
      ATerm u_44;
      u_44 = t;
      {
        ATerm u_167 = NULL;
        t = SSLgetAnnotations(not_null(r_167));
        {
          u_167 = t;
          if(((t_167 != NULL) && (t_167 != u_167)))
            _fail(u_167);
          else
            t_167 = u_167;
        }
      }
      t = u_44;
      {
        ATerm w_167 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_167));
        {
          w_167 = t;
          if(((v_167 != NULL) && (v_167 != w_167)))
            _fail(w_167);
          else
            v_167 = w_167;
        }
        t = not_null(v_167);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_132 (ATerm))
{
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_45;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      {
        ATerm s_8 (ATerm t)
        {
          ATerm g_45 = t;
          int h_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(h_45);
            }
          else
            {
              t = g_45;
              {
                ATerm i_45 = t;
                int l_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(l_45);
                  }
                else
                  {
                    t = i_45;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, s_8);
      }
    }
  t = m_132(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_168 = NULL;
  b_168 = t;
  t = SSL_table_create(not_null(b_168));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_168 = NULL;
  f_168 = t;
  {
    ATerm m_45;
    m_45 = t;
    {
      t = term_n_45;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_45, term_o_45, not_null(f_168));
          t = table_put_0(t);
        }
      }
    }
    t = m_45;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_168 = NULL;
  j_168 = t;
  t = SSL_table_destroy(not_null(j_168));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_168 = NULL;
  n_168 = t;
  t = SSL_exit(not_null(n_168));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_114 (ATerm))
{
  ATerm q_168 (ATerm t)
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = Cons_2(t, o_114, q_168);
      }
    return(t);
  }
  t = q_168(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_168 = NULL,y_168 = NULL,z_168 = NULL;
  z_168 = t;
  w_168 :
  if(((ATgetType(z_168) == AT_LIST) && !(ATisEmpty(z_168))))
    {
      x_168 = ATgetFirst((ATermList) z_168);
      y_168 = (ATerm) ATgetNext((ATermList) z_168);
      {
        ATerm c_169 = NULL;
        t = not_null(y_168);
        {
          ATerm r_45;
          r_45 = t;
          {
            ATerm d_169 = NULL,f_169 = NULL,h_169 = NULL;
            ATerm u_45;
            u_45 = t;
            {
              ATerm e_169 = NULL;
              t = i_0(t);
              {
                e_169 = t;
                if(((d_169 != NULL) && (d_169 != e_169)))
                  _fail(e_169);
                else
                  d_169 = e_169;
              }
            }
            t = u_45;
            {
              ATerm g_169 = NULL;
              t = not_null(x_168);
              {
                t = g_0(t);
                {
                  g_169 = t;
                  if(((f_169 != NULL) && (f_169 != g_169)))
                    _fail(g_169);
                  else
                    f_169 = g_169;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_169)), not_null(f_169));
                {
                  h_169 = t;
                  if(((c_169 != NULL) && (c_169 != h_169)))
                    _fail(h_169);
                  else
                    c_169 = h_169;
                }
              }
            }
          }
          t = r_45;
          {
            ATerm t_8 (ATerm t)
            {
              t = not_null(c_169);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_168) == AT_LIST) && ATisEmpty(z_168)))
        {
          {
            t = term_o_38;
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
  ATerm u_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_109 (ATerm))
{
  ATerm s_169 = NULL,t_169 = NULL;
  s_169 = t;
  r_169 :
  if(match_cons(s_169, sym_Program_1))
    {
      t_169 = ATgetArgument(s_169, 0);
      {
        ATerm w_169 = NULL,y_169 = NULL;
        ATerm x_169 = NULL;
        t = SSLgetAnnotations(not_null(s_169));
        {
          x_169 = t;
          if(((w_169 != NULL) && (w_169 != x_169)))
            _fail(x_169);
          else
            w_169 = x_169;
        }
        {
          t = not_null(t_169);
          {
            ATerm a_170 = NULL;
            t = h_109(t);
            {
              y_169 = t;
              {
                ATerm b_170 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_169)), not_null(w_169));
                {
                  b_170 = t;
                  if(((a_170 != NULL) && (a_170 != b_170)))
                    _fail(b_170);
                  else
                    a_170 = b_170;
                }
                t = not_null(a_170);
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
  ATerm k_170 = NULL;
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_170 = NULL;
      t = term_e_43;
      {
        t = get_config_0(t);
        {
          l_170 = t;
          if(((k_170 != NULL) && (k_170 != l_170)))
            _fail(l_170);
          else
            k_170 = l_170;
        }
      }
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm v_8 (ATerm t)
        {
          ATerm w_8 (ATerm t)
          {
            ATerm m_170 = NULL;
            m_170 = t;
            if(((k_170 != NULL) && (k_170 != m_170)))
              _fail(m_170);
            else
              k_170 = m_170;
            return(t);
          }
          t = Program_1(t, w_8);
          return(t);
        }
        t = option_defined_1(t, v_8);
      }
    }
  {
    ATerm x_8 (ATerm t)
    {
      ATerm y_8 (ATerm t)
      {
        t = not_null(k_170);
        return(t);
      }
      t = short_description_1(t, y_8);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_8);
    {
      t = term_y_45;
      {
        t = echo_0(t);
        {
          t = term_b_46;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_8 (ATerm t)
                {
                  ATerm n_170 = NULL;
                  ATerm o_170 = NULL;
                  o_170 = t;
                  if(((n_170 != NULL) && (n_170 != o_170)))
                    _fail(o_170);
                  else
                    n_170 = o_170;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_170)), term_c_46);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_8);
                {
                  ATerm a_9 (ATerm t)
                  {
                    ATerm p_170 = NULL;
                    ATerm q_170 = NULL;
                    ATerm b_9 (ATerm t)
                    {
                      t = not_null(k_170);
                      return(t);
                    }
                    t = long_description_1(t, b_9);
                    {
                      q_170 = t;
                      if(((p_170 != NULL) && (p_170 != q_170)))
                        _fail(q_170);
                      else
                        p_170 = q_170;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_170)), term_d_46);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_9);
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
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(f_46);
    }
  else
    {
      t = e_46;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_109 (ATerm))
{
  ATerm a_171 = NULL,b_171 = NULL;
  a_171 = t;
  z_170 :
  if(match_cons(a_171, sym_Undefined_1))
    {
      b_171 = ATgetArgument(a_171, 0);
      {
        ATerm f_171 = NULL,h_171 = NULL;
        ATerm g_171 = NULL;
        t = SSLgetAnnotations(not_null(a_171));
        {
          g_171 = t;
          if(((f_171 != NULL) && (f_171 != g_171)))
            _fail(g_171);
          else
            f_171 = g_171;
        }
        {
          t = not_null(b_171);
          {
            ATerm j_171 = NULL;
            t = i_109(t);
            {
              h_171 = t;
              {
                ATerm k_171 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_171)), not_null(f_171));
                {
                  k_171 = t;
                  if(((j_171 != NULL) && (j_171 != k_171)))
                    _fail(k_171);
                  else
                    j_171 = k_171;
                }
                t = not_null(j_171);
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
ATerm fetch_1 (ATerm t, ATerm y_114 (ATerm))
{
  ATerm p_171 (ATerm t)
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_114, _id);
        ;
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        t = Cons_2(t, _id, p_171);
      }
    return(t);
  }
  t = p_171(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_134 (ATerm))
{
  t = fetch_1(t, o_134);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_171 = NULL,s_171 = NULL,t_171 = NULL;
  r_171 = t;
  q_171 :
  if(((ATgetType(r_171) == AT_LIST) && ATisEmpty(r_171)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_171) == AT_LIST) && !(ATisEmpty(r_171))))
        {
          s_171 = ATgetFirst((ATermList) r_171);
          t_171 = (ATerm) ATgetNext((ATermList) r_171);
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
  ATerm l_46;
  l_46 = t;
  {
    ATerm w_171 = NULL;
    ATerm z_171 = NULL;
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_46);
      }
    else
      {
        t = m_46;
        {
          ATerm x_171 = NULL;
          ATerm y_171 = NULL;
          y_171 = t;
          if(((x_171 != NULL) && (x_171 != y_171)))
            _fail(y_171);
          else
            x_171 = y_171;
          t = (ATerm) ATinsert(ATempty, not_null(x_171));
        }
      }
    {
      z_171 = t;
      if(((w_171 != NULL) && (w_171 != z_171)))
        _fail(z_171);
      else
        w_171 = z_171;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_40, not_null(w_171));
      t = printnl_0(t);
    }
  }
  t = l_46;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_e_43;
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
  ATerm q_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = q_46;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_172 = NULL;
  g_172 = t;
  f_172 :
  if(match_cons(g_172, sym_Help_0))
    {
      ATerm i_172 = NULL,k_172 = NULL;
      ATerm x_46;
      x_46 = t;
      {
        ATerm j_172 = NULL;
        t = SSLgetAnnotations(not_null(g_172));
        {
          j_172 = t;
          if(((i_172 != NULL) && (i_172 != j_172)))
            _fail(j_172);
          else
            i_172 = j_172;
        }
      }
      t = x_46;
      {
        ATerm l_172 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_172));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_112(t);
      ;
      LocalPopChoice(z_46);
    }
  else
    {
      t = y_46;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 (ATerm t)
      {
        ATerm r_172 = NULL;
        r_172 = t;
        p_172 :
        if(!(match_string(r_172, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm d_9 (ATerm t)
      {
        t = term_d_47;
        t = set_config_0(t);
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        t = term_e_47;
        return(t);
      }
      t = Option_3(t, c_9, d_9, e_9);
      ;
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      {
        ATerm f_9 (ATerm t)
        {
          ATerm s_172 = NULL;
          s_172 = t;
          q_172 :
          if(!(match_string(s_172, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_9 (ATerm t)
        {
          t = term_d_47;
          {
            t = set_config_0(t);
            {
              t = term_g_47;
              t = set_config_0(t);
            }
          }
          t = term_h_47;
          return(t);
        }
        ATerm h_9 (ATerm t)
        {
          t = term_i_47;
          return(t);
        }
        t = Option_3(t, f_9, g_9, h_9);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_172 = NULL,w_172 = NULL,x_172 = NULL;
  v_172 = t;
  u_172 :
  if(match_cons(v_172, sym__2))
    {
      w_172 = ATgetArgument(v_172, 0);
      x_172 = ATgetArgument(v_172, 1);
      t = SSL_table_get(not_null(w_172), not_null(x_172));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_173 = NULL,f_173 = NULL,g_173 = NULL,h_173 = NULL;
  e_173 = t;
  d_173 :
  if(match_cons(e_173, sym__3))
    {
      f_173 = ATgetArgument(e_173, 0);
      g_173 = ATgetArgument(e_173, 1);
      h_173 = ATgetArgument(e_173, 2);
      {
        ATerm j_47;
        j_47 = t;
        {
          ATerm l_173 = NULL;
          ATerm m_173 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_173), not_null(g_173));
          {
            ATerm k_47 = t;
            int l_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_47);
              }
            else
              {
                t = k_47;
                t = (ATerm) ATempty;
              }
            {
              m_173 = t;
              if(((l_173 != NULL) && (l_173 != m_173)))
                _fail(m_173);
              else
                l_173 = m_173;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_173), not_null(g_173), (ATerm) ATinsert(CheckATermList(not_null(l_173)), not_null(h_173)));
            t = table_put_0(t);
          }
        }
        t = j_47;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_135 (ATerm))
{
  ATerm q_173 = NULL;
  ATerm r_173 = NULL;
  t = term_o_38;
  {
    t = t_135(t);
    {
      r_173 = t;
      if(((q_173 != NULL) && (q_173 != r_173)))
        _fail(r_173);
      else
        q_173 = r_173;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_45, term_a_46, not_null(q_173));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm x_173 = NULL,y_173 = NULL,z_173 = NULL;
  x_173 = t;
  w_173 :
  if(match_string(x_173, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(x_173) == AT_LIST) && !(ATisEmpty(x_173))))
        {
          y_173 = ATgetFirst((ATermList) x_173);
          z_173 = (ATerm) ATgetNext((ATermList) x_173);
          {
            ATerm c_174 = NULL;
            ATerm m_47;
            m_47 = t;
            {
              t = not_null(y_173);
              t = a_0(t);
            }
            t = m_47;
            {
              ATerm d_174 = NULL;
              t = term_o_38;
              {
                t = b_0(t);
                {
                  d_174 = t;
                  if(((c_174 != NULL) && (c_174 != d_174)))
                    _fail(d_174);
                  else
                    c_174 = d_174;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_173)), not_null(c_174));
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
  ATerm i_9 (ATerm t)
  {
    ATerm i_174 = NULL;
    i_174 = t;
    h_174 :
    if(!(match_string(i_174, "--help")))
      {
        if(!(match_string(i_174, "-h")))
          {
            if(!(match_string(i_174, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = term_n_47;
    {
      t = set_config_0(t);
      t = term_o_47;
    }
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = term_p_47;
    return(t);
  }
  t = Option_3(t, i_9, j_9, k_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_174 = NULL,m_174 = NULL,n_174 = NULL;
  l_174 = t;
  k_174 :
  if(((ATgetType(l_174) == AT_LIST) && !(ATisEmpty(l_174))))
    {
      m_174 = ATgetFirst((ATermList) l_174);
      n_174 = (ATerm) ATgetNext((ATermList) l_174);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_174)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_174)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm x_174 = NULL,y_174 = NULL,a_175 = NULL;
  x_174 = t;
  w_174 :
  if(((ATgetType(x_174) == AT_LIST) && !(ATisEmpty(x_174))))
    {
      y_174 = ATgetFirst((ATermList) x_174);
      a_175 = (ATerm) ATgetNext((ATermList) x_174);
      {
        ATerm e_175 = NULL,g_175 = NULL;
        ATerm f_175 = NULL;
        t = SSLgetAnnotations(not_null(x_174));
        {
          f_175 = t;
          if(((e_175 != NULL) && (e_175 != f_175)))
            _fail(f_175);
          else
            e_175 = f_175;
        }
        {
          t = not_null(y_174);
          {
            ATerm i_175 = NULL;
            t = z_94(t);
            {
              g_175 = t;
              {
                t = not_null(a_175);
                {
                  ATerm k_175 = NULL;
                  t = a_95(t);
                  {
                    i_175 = t;
                    {
                      ATerm l_175 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_175)), not_null(g_175)), not_null(e_175));
                      {
                        l_175 = t;
                        if(((k_175 != NULL) && (k_175 != l_175)))
                          _fail(l_175);
                        else
                          k_175 = l_175;
                      }
                      t = not_null(k_175);
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
  ATerm v_175 = NULL;
  v_175 = t;
  u_175 :
  if(((ATgetType(v_175) == AT_LIST) && ATisEmpty(v_175)))
    {
      {
        ATerm x_175 = NULL,z_175 = NULL;
        ATerm q_47;
        q_47 = t;
        {
          ATerm y_175 = NULL;
          t = SSLgetAnnotations(not_null(v_175));
          {
            y_175 = t;
            if(((x_175 != NULL) && (x_175 != y_175)))
              _fail(y_175);
            else
              x_175 = y_175;
          }
        }
        t = q_47;
        {
          ATerm a_176 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_175));
          {
            a_176 = t;
            if(((z_175 != NULL) && (z_175 != a_176)))
              _fail(a_176);
            else
              z_175 = a_176;
          }
          t = not_null(z_175);
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
  ATerm g_176 = NULL,h_176 = NULL,i_176 = NULL;
  g_176 = t;
  f_176 :
  if(match_cons(g_176, sym__2))
    {
      h_176 = ATgetArgument(g_176, 0);
      i_176 = ATgetArgument(g_176, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_39, not_null(h_176), not_null(i_176));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_135 (ATerm))
{
  ATerm r_47;
  r_47 = t;
  {
    ATerm l_9 (ATerm t)
    {
      t = term_s_47;
      t = r_135(t);
      return(t);
    }
    t = try_1(t, l_9);
  }
  t = r_47;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm q_176 = NULL;
      ATerm w_47;
      w_47 = t;
      {
        ATerm o_176 = NULL;
        ATerm p_176 = NULL;
        p_176 = t;
        if(((o_176 != NULL) && (o_176 != p_176)))
          _fail(p_176);
        else
          o_176 = p_176;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_43, not_null(o_176));
          t = set_config_0(t);
        }
      }
      t = w_47;
      {
        ATerm r_176 = NULL;
        r_176 = t;
        if(((q_176 != NULL) && (q_176 != r_176)))
          _fail(r_176);
        else
          q_176 = r_176;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_176));
      }
      return(t);
    }
    ATerm n_9 (ATerm t)
    {
      ATerm x_47 = t;
      int y_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_47 = t;
          int c_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(c_48);
            }
          else
            {
              t = z_47;
              {
                t = r_135(t);
                t = Cons_2(t, _id, n_9);
              }
            }
          ;
          LocalPopChoice(y_47);
        }
      else
        {
          t = x_47;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_9, n_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_176 = NULL,y_176 = NULL,z_176 = NULL;
  ATerm d_48;
  d_48 = t;
  {
    ATerm a_177 = NULL,b_177 = NULL,c_177 = NULL,d_177 = NULL;
    a_177 = t;
    w_176 :
    if(match_cons(a_177, sym__3))
      {
        b_177 = ATgetArgument(a_177, 0);
        c_177 = ATgetArgument(a_177, 1);
        d_177 = ATgetArgument(a_177, 2);
        {
          if(((x_176 != NULL) && (x_176 != b_177)))
            _fail(b_177);
          else
            x_176 = b_177;
          {
            if(((y_176 != NULL) && (y_176 != c_177)))
              _fail(c_177);
            else
              y_176 = c_177;
            {
              if(((z_176 != NULL) && (z_176 != d_177)))
                _fail(d_177);
              else
                z_176 = d_177;
              t = SSL_table_put(not_null(x_176), not_null(y_176), not_null(z_176));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_48;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_135 (ATerm))
{
  ATerm g_177 = NULL;
  ATerm e_48;
  e_48 = t;
  {
    t = term_g_48;
    t = table_put_0(t);
  }
  t = e_48;
  {
    ATerm o_9 (ATerm t)
    {
      ATerm h_48 = t;
      int j_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_135(t);
          ;
          LocalPopChoice(j_48);
        }
      else
        {
          t = h_48;
          {
            ATerm k_48 = t;
            int l_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(l_48);
              }
            else
              {
                t = k_48;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, o_9);
    {
      ATerm p_9 (ATerm t)
      {
        ATerm m_48 = t;
        int n_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_48;
            v_48 = t;
            {
              ATerm w_48 = t;
              int x_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_45;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_48);
                }
              else
                {
                  t = w_48;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_48;
            {
              t = system_usage_0(t);
              {
                t = term_j_41;
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
              ATerm y_48 = t;
              int z_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_49;
                  c_49 = t;
                  {
                    t = term_c_47;
                    t = get_config_0(t);
                  }
                  t = c_49;
                  {
                    t = system_about_0(t);
                    {
                      t = term_j_41;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(z_48);
                }
              else
                {
                  t = y_48;
                  {
                    ATerm q_9 (ATerm t)
                    {
                      ATerm r_9 (ATerm t)
                      {
                        ATerm h_177 = NULL;
                        h_177 = t;
                        if(((g_177 != NULL) && (g_177 != h_177)))
                          _fail(h_177);
                        else
                          g_177 = h_177;
                        return(t);
                      }
                      t = Undefined_1(t, r_9);
                      return(t);
                    }
                    t = option_defined_1(t, q_9);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_177)), term_d_49));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_i_39;
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
      t = try_1(t, p_9);
      {
        ATerm e_49;
        e_49 = t;
        {
          t = term_z_45;
          t = table_destroy_0(t);
        }
        t = e_49;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm))
{
  t = parse_options_1(t, o_132);
  {
    t = store_options_0(t);
    {
      t = q_132(t);
      {
        ATerm f_49 = t;
        int i_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_132);
            ;
            LocalPopChoice(i_49);
          }
        else
          {
            t = f_49;
            {
              ATerm j_49 = t;
              int k_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_132(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(k_49);
                }
              else
                {
                  t = j_49;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    ATerm l_49 = t;
    int p_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_132(t);
        ;
        LocalPopChoice(p_49);
      }
    else
      {
        t = l_49;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_132);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_9, f_132, g_132, t_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    ATerm v_9 (ATerm t)
    {
      ATerm q_49;
      q_49 = t;
      {
        ATerm k_177 = NULL;
        ATerm l_177 = NULL;
        t = term_e_43;
        {
          t = get_config_0(t);
          {
            l_177 = t;
            if(((k_177 != NULL) && (k_177 != l_177)))
              _fail(l_177);
            else
              k_177 = l_177;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(k_177)));
          t = printnl_0(t);
        }
      }
      t = q_49;
      return(t);
    }
    t = if_verbose2_1(t, v_9);
    return(t);
  }
  t = iowrap_4(t, x_131, y_131, z_131, u_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_131 (ATerm), ATerm w_131 (ATerm))
{
  t = iowrap_3(t, v_131, w_131, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_131 (ATerm))
{
  ATerm w_9 (ATerm t)
  {
    t = _2(t, _id, s_131);
    return(t);
  }
  t = iowrap_2(t, w_9, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm x_9 (ATerm t)
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
          ATerm y_9 (ATerm t)
          {
            ATerm z_9 (ATerm t)
            {
              t = term_t_49;
              return(t);
            }
            t = say_1(t, z_9);
            return(t);
          }
          t = if_verbose2_1(t, y_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, x_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
