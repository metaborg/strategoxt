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
Symbol sym_Cong_2;
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
Symbol sym_WaitStatus_3;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_k_55;
ATerm term_z_53;
ATerm term_o_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_s_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_l_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_m_45;
ATerm term_e_45;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_q_43;
ATerm term_n_43;
ATerm term_d_43;
ATerm term_b_43;
ATerm term_j_42;
ATerm term_x_41;
ATerm term_o_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_d_40;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_e_34;
ATerm term_y_31;
ATerm term_u_30;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_h_23;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
void init_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Op_2, term_k_34, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_a_18);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_18);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_p_44, term_v_7);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_x_45, term_v_7);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym__2, term_a_50, term_b_50);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_c_52, term_v_7);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_w_52, term_v_7);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_s_48, term_v_7);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym__3, term_a_50, term_b_50, (ATerm) ATempty);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm spaste_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm Let_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm ReplaceVar_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm b_98 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm);
ATerm diff_1_0 (ATerm x_118 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm RnBinding_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm, ATerm (ATerm)), ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm f_124 (ATerm, ATerm (ATerm)), ATerm);
ATerm all_dist_1_0 (ATerm y_124 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm i_124 (ATerm), ATerm);
ATerm rename_4_0 (ATerm p_123 (ATerm, ATerm (ATerm)), ATerm q_123 (ATerm), ATerm r_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_123 (ATerm, ATerm (ATerm)), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_122 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm z_122 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm);
ATerm crush_3_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm LChoice_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm Match_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm Build_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm s_111 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm TransformingCongruence_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm);
ATerm zip_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm Op_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm z_135 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm EmptyScope_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm j_127 (ATerm), ATerm);
ATerm downup_1_0 (ATerm q_110 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_94 (ATerm), ATerm);
ATerm inline_strategies_0_0 (ATerm);
ATerm _2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_117 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_130 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_137 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_132 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_137 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm);
ATerm crush_2_0 (ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_130 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_133 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_116 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm g_113 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_135 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_135 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_132 (ATerm), ATerm);
ATerm inline_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm z_4 = NULL,d_5 = NULL,e_5 = NULL;
  ATerm q_7 (ATerm t)
  {
    ATerm f_5 = NULL,p_7 = NULL;
    t = not_null(d_5);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    t = not_null(e_5);
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(p_7));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  t = not_null(z_4);
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
      t = q_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm g_8 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm h_8 = NULL,s_8 = NULL;
    t = not_null(g_8);
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(g_8);
    {
      ATerm t_8 = NULL;
      ATerm y_8 (ATerm t)
      {
        t = not_null(t_8);
        if(((s_8 != NULL) && (s_8 != t)))
          _fail(t);
        else
          s_8 = t;
        t = not_null(t_8);
        return(t);
      }
      t = term_v_7;
      t = b_123(t);
      if(((t_8 != NULL) && (t_8 != t)))
        _fail(t);
      else
        t_8 = t;
      t = y_8(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), not_null(h_8));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  t = u_8(t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  ATerm s_9 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
    t = not_null(f_9);
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = not_null(h_9);
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = not_null(i_9);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = not_null(j_9);
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    t = not_null(f_9);
    {
      ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
      ATerm t_9 (ATerm t)
      {
        t = not_null(r_9);
        if(((o_9 != NULL) && (o_9 != t)))
          _fail(t);
        else
          o_9 = t;
        t = not_null(p_9);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_9)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm m_0 (ATerm t)
        {
          t = term_w_7;
          return(t);
        }
        t = rewrite_1_0(m_0, t);
        if(((p_9 != NULL) && (p_9 != t)))
          _fail(t);
        else
          p_9 = t;
        t = not_null(p_9);
        if(match_cons(t, sym_Defined_2))
          {
            q_9 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
            t = not_null(q_9);
            if(match_string(t, "n_0"))
              {
                t = t_9(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_9)), not_null(m_9), not_null(n_9));
    }
    return(t);
  }
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = not_null(f_9);
  if(match_cons(t, sym_CallT_3))
    {
      g_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      j_9 = ATgetArgument(t, 2);
      t = not_null(g_9);
      if(match_cons(t, sym_SVar_1))
        {
          h_9 = ATgetArgument(t, 0);
          t = s_9(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm n_10 (ATerm t)
  {
    ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
    t = not_null(c_10);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = not_null(e_10);
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    t = not_null(c_10);
    {
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
      ATerm o_10 (ATerm t)
      {
        t = not_null(m_10);
        if(((j_10 != NULL) && (j_10 != t)))
          _fail(t);
        else
          j_10 = t;
        t = not_null(k_10);
        return(t);
      }
      t = not_null(h_10);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = rewrite_1_0(q_0, t);
        if(((k_10 != NULL) && (k_10 != t)))
          _fail(t);
        else
          k_10 = t;
        t = not_null(k_10);
        if(match_cons(t, sym_Defined_2))
          {
            l_10 = ATgetArgument(t, 0);
            m_10 = ATgetArgument(t, 1);
            t = not_null(l_10);
            if(match_string(t, "k_0"))
              {
                t = o_10(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(j_10);
      t = strename_0_0(t);
    }
    return(t);
  }
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  t = not_null(c_10);
  if(match_cons(t, sym_CallT_3))
    {
      d_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      g_10 = ATgetArgument(t, 2);
      t = not_null(d_10);
      if(match_cons(t, sym_SVar_1))
        {
          e_10 = ATgetArgument(t, 0);
          t = not_null(f_10);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(g_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_10(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  t = o_110(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1_0(o_110, t);
      return(t);
    }
    t = SRTS_all(r_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  ATerm t_11 (ATerm t)
  {
    ATerm p_11 = NULL,q_11 = NULL;
    t = not_null(i_11);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = not_null(d_11);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = not_null(g_11);
    {
      ATerm y_7;
      y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_7, not_null(q_11)));
      {
        ATerm s_0 (ATerm t)
        {
          t = term_w_7;
          return(t);
        }
        t = assert_1_0(s_0, t);
      }
      t = y_7;
    }
    return(t);
  }
  ATerm u_11 (ATerm t)
  {
    ATerm r_11 = NULL,s_11 = NULL;
    t = not_null(i_11);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = not_null(o_11);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = not_null(g_11);
    {
      ATerm a_8;
      a_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_8, not_null(s_11)));
      {
        ATerm t_0 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = assert_1_0(t_0, t);
      }
      t = a_8;
    }
    return(t);
  }
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = not_null(g_11);
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
      t = not_null(h_11);
      if(match_cons(t, sym_VarDec_2))
        {
          i_11 = ATgetArgument(t, 0);
          j_11 = ATgetArgument(t, 1);
          t = not_null(j_11);
          if(match_cons(t, sym_FunType_2))
            {
              k_11 = ATgetArgument(t, 0);
              n_11 = ATgetArgument(t, 1);
              t = not_null(k_11);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_11 = ATgetFirst((ATermList) t);
                  m_11 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(m_11);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_11 = ATgetFirst((ATermList) t);
                      b_11 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(o_11);
                      if(match_cons(t, sym_CallT_3))
                        {
                          c_11 = ATgetArgument(t, 0);
                          e_11 = ATgetArgument(t, 1);
                          f_11 = ATgetArgument(t, 2);
                          t = not_null(c_11);
                          if(match_cons(t, sym_SVar_1))
                            {
                              d_11 = ATgetArgument(t, 0);
                              t = not_null(e_11);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = not_null(f_11);
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = t_11(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = u_11(t);
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
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  ATerm u_0 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_w_7;
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      ATerm e_12 (ATerm t)
      {
        t = not_null(b_12);
        if(((x_11 != NULL) && (x_11 != t)))
          _fail(t);
        else
          x_11 = t;
        t = not_null(c_12);
        if(((y_11 != NULL) && (y_11 != t)))
          _fail(t);
        else
          y_11 = t;
        t = not_null(d_12);
        if(((z_11 != NULL) && (z_11 != t)))
          _fail(t);
        else
          z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(y_11));
        t = zip_1_0(substitute_arg_0_0, t);
        t = not_null(z_11);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SubsArgCall1_0_0(t);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = SubsArgCall2_0_0(t);
                }
              return(t);
            }
            t = try_1_0(z_0, t);
            return(t);
          }
          t = topdown_1_0(y_0, t);
        }
        return(t);
      }
      if(((a_12 != NULL) && (a_12 != t)))
        _fail(t);
      else
        a_12 = t;
      t = not_null(a_12);
      if(match_cons(t, sym__3))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
          d_12 = ATgetArgument(t, 2);
          t = e_12(t);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = scope_2_0(w_0, x_0, t);
    return(t);
  }
  t = scope_2_0(u_0, v_0, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  ATerm l_12 (ATerm t)
  {
    ATerm k_12 = NULL;
    t = not_null(i_12);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    t = not_null(k_12);
    return(t);
  }
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = not_null(h_12);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_12 = ATgetFirst((ATermList) t);
      j_12 = (ATerm) ATgetNext((ATermList) t);
      t = l_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = split_2_0(_id, s_109, t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
            ATerm e_13 (ATerm t)
            {
              ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
              t = not_null(t_12);
              if(((x_12 != NULL) && (x_12 != t)))
                _fail(t);
              else
                x_12 = t;
              t = not_null(u_12);
              if(((y_12 != NULL) && (y_12 != t)))
                _fail(t);
              else
                y_12 = t;
              t = not_null(w_12);
              if(((z_12 != NULL) && (z_12 != t)))
                _fail(t);
              else
                z_12 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_12), not_null(x_12), not_null(y_12));
              return(t);
            }
            ATerm f_13 (ATerm t)
            {
              ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
              t = not_null(t_12);
              if(((a_13 != NULL) && (a_13 != t)))
                _fail(t);
              else
                a_13 = t;
              t = not_null(u_12);
              if(((b_13 != NULL) && (b_13 != t)))
                _fail(t);
              else
                b_13 = t;
              t = not_null(v_12);
              if(((c_13 != NULL) && (c_13 != t)))
                _fail(t);
              else
                c_13 = t;
              t = not_null(w_12);
              if(((d_13 != NULL) && (d_13 != t)))
                _fail(t);
              else
                d_13 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_13), not_null(a_13), not_null(b_13), not_null(c_13));
              return(t);
            }
            if(((q_12 != NULL) && (q_12 != t)))
              _fail(t);
            else
              q_12 = t;
            t = not_null(q_12);
            if(match_cons(t, sym__2))
              {
                r_12 = ATgetArgument(t, 0);
                w_12 = ATgetArgument(t, 1);
                t = not_null(r_12);
                if(match_cons(t, sym_SDef_3))
                  {
                    s_12 = ATgetArgument(t, 0);
                    t_12 = ATgetArgument(t, 1);
                    u_12 = ATgetArgument(t, 2);
                    t = e_13(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        s_12 = ATgetArgument(t, 0);
                        t_12 = ATgetArgument(t, 1);
                        u_12 = ATgetArgument(t, 2);
                        v_12 = ATgetArgument(t, 3);
                        t = f_13(t);
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
          t = zip_1_0(b_1, t);
        }
        return(t);
      }
      t = Let_2_0(a_1, _id, t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = split_2_0(_id, s_109, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, c_1, _id, t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = split_2_0(_id, s_109, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, d_1, _id, _id, t);
                  ;
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                  {
                    ATerm m_8 = t;
                    int n_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = split_2_0(_id, s_109, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, e_1, _id, _id, t);
                        ;
                        LocalPopChoice(n_8);
                      }
                    else
                      {
                        t = m_8;
                        {
                          ATerm f_1 (ATerm t)
                          {
                            t = s_109(t);
                            t = Hd_0_0(t);
                            return(t);
                          }
                          t = Rec_2_0(f_1, _id, t);
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
ATerm Rec_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  ATerm a_14 (ATerm t)
  {
    ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,u_13 = NULL;
    ATerm c_14 (ATerm t)
    {
      ATerm v_13 = NULL,w_13 = NULL;
      ATerm d_14 (ATerm t)
      {
        ATerm x_13 = NULL,y_13 = NULL;
        t = not_null(w_13);
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = not_null(w_13);
        {
          ATerm z_13 = NULL;
          ATerm e_14 (ATerm t)
          {
            t = not_null(z_13);
            if(((y_13 != NULL) && (y_13 != t)))
              _fail(t);
            else
              y_13 = t;
            t = not_null(z_13);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(v_13), not_null(x_13)), not_null(s_13));
          if(((z_13 != NULL) && (z_13 != t)))
            _fail(t);
          else
            z_13 = t;
          t = e_14(t);
          t = not_null(y_13);
        }
        return(t);
      }
      t = not_null(u_13);
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = not_null(r_13);
      t = s_99(t);
      if(((w_13 != NULL) && (w_13 != t)))
        _fail(t);
      else
        w_13 = t;
      t = d_14(t);
      return(t);
    }
    t = not_null(m_13);
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
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
    t = not_null(m_13);
    {
      ATerm t_13 = NULL;
      ATerm b_14 (ATerm t)
      {
        t = not_null(t_13);
        if(((s_13 != NULL) && (s_13 != t)))
          _fail(t);
        else
          s_13 = t;
        t = not_null(t_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_13));
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      t = b_14(t);
      t = not_null(q_13);
      t = r_99(t);
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = c_14(t);
    }
    return(t);
  }
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
  t = not_null(m_13);
  if(match_cons(t, sym_Rec_2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
      t = a_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  ATerm e_15 (ATerm t)
  {
    ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL;
    ATerm g_15 (ATerm t)
    {
      ATerm x_14 = NULL,y_14 = NULL;
      ATerm h_15 (ATerm t)
      {
        ATerm z_14 = NULL,a_15 = NULL;
        ATerm i_15 (ATerm t)
        {
          ATerm b_15 = NULL,c_15 = NULL;
          t = not_null(a_15);
          if(((b_15 != NULL) && (b_15 != t)))
            _fail(t);
          else
            b_15 = t;
          t = not_null(a_15);
          {
            ATerm d_15 = NULL;
            ATerm j_15 (ATerm t)
            {
              t = not_null(d_15);
              if(((c_15 != NULL) && (c_15 != t)))
                _fail(t);
              else
                c_15 = t;
              t = not_null(d_15);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_14), not_null(z_14), not_null(b_15)), not_null(u_14));
            if(((d_15 != NULL) && (d_15 != t)))
              _fail(t);
            else
              d_15 = t;
            t = j_15(t);
            t = not_null(c_15);
          }
          return(t);
        }
        t = not_null(y_14);
        if(((z_14 != NULL) && (z_14 != t)))
          _fail(t);
        else
          z_14 = t;
        t = not_null(t_14);
        t = l_101(t);
        if(((a_15 != NULL) && (a_15 != t)))
          _fail(t);
        else
          a_15 = t;
        t = i_15(t);
        return(t);
      }
      t = not_null(w_14);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = not_null(s_14);
      t = k_101(t);
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = h_15(t);
      return(t);
    }
    t = not_null(m_14);
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    t = not_null(n_14);
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = not_null(o_14);
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = not_null(p_14);
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
    t = not_null(m_14);
    {
      ATerm v_14 = NULL;
      ATerm f_15 (ATerm t)
      {
        t = not_null(v_14);
        if(((u_14 != NULL) && (u_14 != t)))
          _fail(t);
        else
          u_14 = t;
        t = not_null(v_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_14));
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = f_15(t);
      t = not_null(r_14);
      t = j_101(t);
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = g_15(t);
    }
    return(t);
  }
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = not_null(m_14);
  if(match_cons(t, sym_SDef_3))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      p_14 = ATgetArgument(t, 2);
      t = e_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  ATerm e_16 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL;
    ATerm g_16 (ATerm t)
    {
      ATerm z_15 = NULL,a_16 = NULL;
      ATerm h_16 (ATerm t)
      {
        ATerm b_16 = NULL,c_16 = NULL;
        t = not_null(a_16);
        if(((b_16 != NULL) && (b_16 != t)))
          _fail(t);
        else
          b_16 = t;
        t = not_null(a_16);
        {
          ATerm d_16 = NULL;
          ATerm i_16 (ATerm t)
          {
            t = not_null(d_16);
            if(((c_16 != NULL) && (c_16 != t)))
              _fail(t);
            else
              c_16 = t;
            t = not_null(d_16);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(z_15), not_null(b_16)), not_null(w_15));
          if(((d_16 != NULL) && (d_16 != t)))
            _fail(t);
          else
            d_16 = t;
          t = i_16(t);
          t = not_null(c_16);
        }
        return(t);
      }
      t = not_null(y_15);
      if(((z_15 != NULL) && (z_15 != t)))
        _fail(t);
      else
        z_15 = t;
      t = not_null(v_15);
      t = v_98(t);
      if(((a_16 != NULL) && (a_16 != t)))
        _fail(t);
      else
        a_16 = t;
      t = h_16(t);
      return(t);
    }
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
    t = not_null(s_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = not_null(q_15);
    {
      ATerm x_15 = NULL;
      ATerm f_16 (ATerm t)
      {
        t = not_null(x_15);
        if(((w_15 != NULL) && (w_15 != t)))
          _fail(t);
        else
          w_15 = t;
        t = not_null(x_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_15));
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      t = f_16(t);
      t = not_null(u_15);
      t = u_98(t);
      if(((y_15 != NULL) && (y_15 != t)))
        _fail(t);
      else
        y_15 = t;
      t = g_16(t);
    }
    return(t);
  }
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = not_null(q_15);
  if(match_cons(t, sym_Let_2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      t = e_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(t_109, t_109, t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(v_109, v_109, t_109, t);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm v_8 = t;
              int w_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(v_109, v_109, v_109, t_109, t);
                  ;
                  LocalPopChoice(w_8);
                }
              else
                {
                  t = v_8;
                  t = Rec_2_0(v_109, t_109, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  ATerm u_16 (ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
    t = not_null(m_16);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = not_null(n_16);
    if(((t_16 != NULL) && (t_16 != t)))
      _fail(t);
    else
      t_16 = t;
    t = not_null(o_16);
    if(((r_16 != NULL) && (r_16 != t)))
      _fail(t);
    else
      r_16 = t;
    t = not_null(p_16);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = not_null(t_16);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  t = not_null(l_16);
  if(match_cons(t, sym_RDefT_4))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      o_16 = ATgetArgument(t, 2);
      p_16 = ATgetArgument(t, 3);
      t = u_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  ATerm g_17 (ATerm t)
  {
    ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
    t = not_null(y_16);
    if(((c_17 != NULL) && (c_17 != t)))
      _fail(t);
    else
      c_17 = t;
    t = not_null(z_16);
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    t = not_null(a_17);
    if(((d_17 != NULL) && (d_17 != t)))
      _fail(t);
    else
      d_17 = t;
    t = not_null(b_17);
    if(((e_17 != NULL) && (e_17 != t)))
      _fail(t);
    else
      e_17 = t;
    t = not_null(f_17);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  t = not_null(x_16);
  if(match_cons(t, sym_SDefT_4))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      a_17 = ATgetArgument(t, 2);
      b_17 = ATgetArgument(t, 3);
      t = g_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  ATerm o_17 (ATerm t)
  {
    ATerm m_17 = NULL,n_17 = NULL;
    t = not_null(k_17);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = not_null(l_17);
    if(((m_17 != NULL) && (m_17 != t)))
      _fail(t);
    else
      m_17 = t;
    t = (ATerm) ATinsert(ATempty, not_null(n_17));
    return(t);
  }
  if(((j_17 != NULL) && (j_17 != t)))
    _fail(t);
  else
    j_17 = t;
  t = not_null(j_17);
  if(match_cons(t, sym_Rec_2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      t = o_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  ATerm y_17 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
    t = not_null(s_17);
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = not_null(t_17);
    if(((x_17 != NULL) && (x_17 != t)))
      _fail(t);
    else
      x_17 = t;
    t = not_null(u_17);
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = not_null(x_17);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(r_17);
  if(match_cons(t, sym_SDef_3))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
      u_17 = ATgetArgument(t, 2);
      t = y_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  ATerm q_18 (ATerm t)
  {
    ATerm h_18 = NULL,i_18 = NULL;
    t = not_null(f_18);
    if(((i_18 != NULL) && (i_18 != t)))
      _fail(t);
    else
      i_18 = t;
    t = not_null(g_18);
    if(((h_18 != NULL) && (h_18 != t)))
      _fail(t);
    else
      h_18 = t;
    t = not_null(i_18);
    {
      ATerm g_1 (ATerm t)
      {
        ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
        ATerm r_18 (ATerm t)
        {
          ATerm o_18 = NULL;
          t = not_null(k_18);
          if(((o_18 != NULL) && (o_18 != t)))
            _fail(t);
          else
            o_18 = t;
          t = not_null(o_18);
          return(t);
        }
        ATerm s_18 (ATerm t)
        {
          ATerm p_18 = NULL;
          t = not_null(k_18);
          if(((p_18 != NULL) && (p_18 != t)))
            _fail(t);
          else
            p_18 = t;
          t = not_null(p_18);
          return(t);
        }
        if(((j_18 != NULL) && (j_18 != t)))
          _fail(t);
        else
          j_18 = t;
        t = not_null(j_18);
        if(match_cons(t, sym_SDef_3))
          {
            k_18 = ATgetArgument(t, 0);
            l_18 = ATgetArgument(t, 1);
            m_18 = ATgetArgument(t, 2);
            t = r_18(t);
          }
        else
          {
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
          }
        return(t);
      }
      t = map_1_0(g_1, t);
    }
    return(t);
  }
  if(((e_18 != NULL) && (e_18 != t)))
    _fail(t);
  else
    e_18 = t;
  t = not_null(e_18);
  if(match_cons(t, sym_Let_2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      t = q_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              {
                ATerm c_9 = t;
                int d_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(d_9);
                  }
                else
                  {
                    t = c_9;
                    {
                      ATerm e_9 = t;
                      int u_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(u_9);
                        }
                      else
                        {
                          t = e_9;
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
  t = rename_4_0(SVar_1_0, h_1, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ReplaceVar_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  ATerm h_19 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL;
    t = not_null(z_18);
    if(((c_19 != NULL) && (c_19 != t)))
      _fail(t);
    else
      c_19 = t;
    t = not_null(b_19);
    if(((d_19 != NULL) && (d_19 != t)))
      _fail(t);
    else
      d_19 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(d_19));
    return(t);
  }
  ATerm i_19 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
    t = not_null(z_18);
    if(((e_19 != NULL) && (e_19 != t)))
      _fail(t);
    else
      e_19 = t;
    t = not_null(a_19);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    t = not_null(b_19);
    if(((f_19 != NULL) && (f_19 != t)))
      _fail(t);
    else
      f_19 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_19), not_null(g_19));
    return(t);
  }
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  t = not_null(x_18);
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      t = not_null(y_18);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_18 = ATgetArgument(t, 0);
          t = h_19(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              z_18 = ATgetArgument(t, 0);
              a_19 = ATgetArgument(t, 1);
              t = i_19(t);
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
ATerm tpaste_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_109, _id, t);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = split_2_0(_id, o_109, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, i_1, _id, t);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm j_1 (ATerm t)
              {
                t = split_2_0(_id, o_109, t);
                t = zip_1_0(ReplaceVar_0_0, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, j_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  ATerm y_19 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,u_19 = NULL;
    ATerm a_20 (ATerm t)
    {
      ATerm v_19 = NULL,w_19 = NULL;
      t = not_null(u_19);
      if(((v_19 != NULL) && (v_19 != t)))
        _fail(t);
      else
        v_19 = t;
      t = not_null(u_19);
      {
        ATerm x_19 = NULL;
        ATerm b_20 (ATerm t)
        {
          t = not_null(x_19);
          if(((w_19 != NULL) && (w_19 != t)))
            _fail(t);
          else
            w_19 = t;
          t = not_null(x_19);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(v_19)), not_null(s_19));
        if(((x_19 != NULL) && (x_19 != t)))
          _fail(t);
        else
          x_19 = t;
        t = b_20(t);
        t = not_null(w_19);
      }
      return(t);
    }
    t = not_null(o_19);
    if(((q_19 != NULL) && (q_19 != t)))
      _fail(t);
    else
      q_19 = t;
    t = not_null(p_19);
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    t = not_null(o_19);
    {
      ATerm t_19 = NULL;
      ATerm z_19 (ATerm t)
      {
        t = not_null(t_19);
        if(((s_19 != NULL) && (s_19 != t)))
          _fail(t);
        else
          s_19 = t;
        t = not_null(t_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_19));
      if(((t_19 != NULL) && (t_19 != t)))
        _fail(t);
      else
        t_19 = t;
      t = z_19(t);
      t = not_null(r_19);
      t = b_98(t);
      if(((u_19 != NULL) && (u_19 != t)))
        _fail(t);
      else
        u_19 = t;
      t = a_20(t);
    }
    return(t);
  }
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = not_null(o_19);
  if(match_cons(t, sym_DynamicRules_1))
    {
      p_19 = ATgetArgument(t, 0);
      t = y_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  ATerm g_21 (ATerm t)
  {
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,w_20 = NULL;
    ATerm i_21 (ATerm t)
    {
      ATerm x_20 = NULL,y_20 = NULL;
      ATerm j_21 (ATerm t)
      {
        ATerm z_20 = NULL,a_21 = NULL;
        ATerm k_21 (ATerm t)
        {
          ATerm b_21 = NULL,c_21 = NULL;
          ATerm l_21 (ATerm t)
          {
            ATerm d_21 = NULL,e_21 = NULL;
            t = not_null(c_21);
            if(((d_21 != NULL) && (d_21 != t)))
              _fail(t);
            else
              d_21 = t;
            t = not_null(c_21);
            {
              ATerm f_21 = NULL;
              ATerm m_21 (ATerm t)
              {
                t = not_null(f_21);
                if(((e_21 != NULL) && (e_21 != t)))
                  _fail(t);
                else
                  e_21 = t;
                t = not_null(f_21);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(x_20), not_null(z_20), not_null(b_21), not_null(d_21)), not_null(u_20));
              if(((f_21 != NULL) && (f_21 != t)))
                _fail(t);
              else
                f_21 = t;
              t = m_21(t);
              t = not_null(e_21);
            }
            return(t);
          }
          t = not_null(a_21);
          if(((b_21 != NULL) && (b_21 != t)))
            _fail(t);
          else
            b_21 = t;
          t = not_null(t_20);
          t = v_97(t);
          if(((c_21 != NULL) && (c_21 != t)))
            _fail(t);
          else
            c_21 = t;
          t = l_21(t);
          return(t);
        }
        t = not_null(y_20);
        if(((z_20 != NULL) && (z_20 != t)))
          _fail(t);
        else
          z_20 = t;
        t = not_null(s_20);
        t = u_97(t);
        if(((a_21 != NULL) && (a_21 != t)))
          _fail(t);
        else
          a_21 = t;
        t = k_21(t);
        return(t);
      }
      t = not_null(w_20);
      if(((x_20 != NULL) && (x_20 != t)))
        _fail(t);
      else
        x_20 = t;
      t = not_null(r_20);
      t = t_97(t);
      if(((y_20 != NULL) && (y_20 != t)))
        _fail(t);
      else
        y_20 = t;
      t = j_21(t);
      return(t);
    }
    t = not_null(k_20);
    if(((p_20 != NULL) && (p_20 != t)))
      _fail(t);
    else
      p_20 = t;
    t = not_null(l_20);
    if(((q_20 != NULL) && (q_20 != t)))
      _fail(t);
    else
      q_20 = t;
    t = not_null(m_20);
    if(((r_20 != NULL) && (r_20 != t)))
      _fail(t);
    else
      r_20 = t;
    t = not_null(n_20);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(o_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(k_20);
    {
      ATerm v_20 = NULL;
      ATerm h_21 (ATerm t)
      {
        t = not_null(v_20);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        t = not_null(v_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_20));
      if(((v_20 != NULL) && (v_20 != t)))
        _fail(t);
      else
        v_20 = t;
      t = h_21(t);
      t = not_null(q_20);
      t = s_97(t);
      if(((w_20 != NULL) && (w_20 != t)))
        _fail(t);
      else
        w_20 = t;
      t = i_21(t);
    }
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = not_null(k_20);
  if(match_cons(t, sym_RDefT_4))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
      n_20 = ATgetArgument(t, 2);
      o_20 = ATgetArgument(t, 3);
      t = g_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_109, p_109, t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(r_109, r_109, r_109, p_109, t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = b_10;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(r_109, r_109, r_109, p_109, t);
                  ;
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = q_10;
                  t = DynamicRules_1_0(p_109, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  ATerm y_21 (ATerm t)
  {
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
    t = not_null(q_21);
    if(((u_21 != NULL) && (u_21 != t)))
      _fail(t);
    else
      u_21 = t;
    t = not_null(r_21);
    if(((v_21 != NULL) && (v_21 != t)))
      _fail(t);
    else
      v_21 = t;
    t = not_null(s_21);
    if(((x_21 != NULL) && (x_21 != t)))
      _fail(t);
    else
      x_21 = t;
    t = not_null(t_21);
    if(((w_21 != NULL) && (w_21 != t)))
      _fail(t);
    else
      w_21 = t;
    t = not_null(x_21);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((p_21 != NULL) && (p_21 != t)))
    _fail(t);
  else
    p_21 = t;
  t = not_null(p_21);
  if(match_cons(t, sym_RDefT_4))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
      s_21 = ATgetArgument(t, 2);
      t_21 = ATgetArgument(t, 3);
      t = y_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
    ATerm h_22 (ATerm t)
    {
      ATerm f_22 = NULL;
      t = not_null(e_22);
      if(((f_22 != NULL) && (f_22 != t)))
        _fail(t);
      else
        f_22 = t;
      t = not_null(f_22);
      return(t);
    }
    ATerm i_22 (ATerm t)
    {
      ATerm g_22 = NULL;
      t = not_null(e_22);
      if(((g_22 != NULL) && (g_22 != t)))
        _fail(t);
      else
        g_22 = t;
      t = not_null(g_22);
      return(t);
    }
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = not_null(d_22);
    if(match_cons(t, sym_VarDec_2))
      {
        e_22 = ATgetArgument(t, 0);
        c_22 = ATgetArgument(t, 1);
        t = h_22(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            e_22 = ATgetArgument(t, 0);
            t = i_22(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(k_1, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  ATerm u_22 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
    t = not_null(m_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = not_null(n_22);
    if(((r_22 != NULL) && (r_22 != t)))
      _fail(t);
    else
      r_22 = t;
    t = not_null(o_22);
    if(((t_22 != NULL) && (t_22 != t)))
      _fail(t);
    else
      t_22 = t;
    t = not_null(p_22);
    if(((s_22 != NULL) && (s_22 != t)))
      _fail(t);
    else
      s_22 = t;
    t = not_null(t_22);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = not_null(l_22);
  if(match_cons(t, sym_SDefT_4))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      o_22 = ATgetArgument(t, 2);
      p_22 = ATgetArgument(t, 3);
      t = u_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  ATerm a_23 (ATerm t)
  {
    ATerm z_22 = NULL;
    t = not_null(y_22);
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = not_null(z_22);
    t = tvars_0_0(t);
    return(t);
  }
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = not_null(x_22);
  if(match_cons(t, sym_DynamicRules_1))
    {
      y_22 = ATgetArgument(t, 0);
      t = a_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  ATerm g_23 (ATerm t)
  {
    ATerm f_23 = NULL;
    t = not_null(e_23);
    if(((f_23 != NULL) && (f_23 != t)))
      _fail(t);
    else
      f_23 = t;
    t = (ATerm) ATinsert(ATempty, not_null(f_23));
    return(t);
  }
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  t = not_null(d_23);
  if(match_cons(t, sym_Var_1))
    {
      e_23 = ATgetArgument(t, 0);
      t = g_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  ATerm o_23 (ATerm t)
  {
    ATerm m_23 = NULL,n_23 = NULL;
    t = not_null(k_23);
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = not_null(l_23);
    if(((m_23 != NULL) && (m_23 != t)))
      _fail(t);
    else
      m_23 = t;
    t = not_null(n_23);
    {
      ATerm p_23 (ATerm t)
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(m_23);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            {
              ATerm u_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = not_null(m_23);
                    return(t);
                  }
                  t = HdMember_p__2_0(b_119, l_1, t);
                  t = p_23(t);
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = u_10;
                  t = Cons_2_0(_id, p_23, t);
                }
            }
          }
        return(t);
      }
      t = p_23(t);
    }
    return(t);
  }
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  t = not_null(j_23);
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
      t = o_23(t);
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
ATerm eq_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  ATerm w_23 (ATerm t)
  {
    ATerm v_23 = NULL;
    t = not_null(t_23);
    if(((v_23 != NULL) && (v_23 != t)))
      _fail(t);
    else
      v_23 = t;
    t = not_null(u_23);
    if(((v_23 != NULL) && (v_23 != t)))
      _fail(t);
    else
      v_23 = t;
    t = not_null(s_23);
    return(t);
  }
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = not_null(s_23);
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      t = w_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  ATerm h_24 (ATerm t)
  {
    ATerm d_24 = NULL,e_24 = NULL;
    t = not_null(b_24);
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    t = not_null(c_24);
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = not_null(a_24);
    t = g_119(t);
    {
      ATerm m_1 (ATerm t)
      {
        ATerm f_24 = NULL;
        ATerm i_24 (ATerm t)
        {
          ATerm g_24 = NULL;
          t = not_null(f_24);
          if(((g_24 != NULL) && (g_24 != t)))
            _fail(t);
          else
            g_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), not_null(g_24));
          t = f_119(t);
          return(t);
        }
        if(((f_24 != NULL) && (f_24 != t)))
          _fail(t);
        else
          f_24 = t;
        t = i_24(t);
        return(t);
      }
      t = fetch_1_0(m_1, t);
    }
    t = not_null(d_24);
    return(t);
  }
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = not_null(a_24);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_24 = ATgetFirst((ATermList) t);
      c_24 = (ATerm) ATgetNext((ATermList) t);
      t = h_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  ATerm q_24 (ATerm t)
  {
    ATerm o_24 = NULL,p_24 = NULL;
    t = not_null(m_24);
    if(((p_24 != NULL) && (p_24 != t)))
      _fail(t);
    else
      p_24 = t;
    t = not_null(n_24);
    if(((o_24 != NULL) && (o_24 != t)))
      _fail(t);
    else
      o_24 = t;
    t = not_null(p_24);
    {
      ATerm r_24 (ATerm t)
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = not_null(o_24);
                    return(t);
                  }
                  t = HdMember_p__2_0(x_118, n_1, t);
                  t = r_24(t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  t = Cons_2_0(_id, r_24, t);
                }
            }
          }
        return(t);
      }
      t = r_24(t);
    }
    return(t);
  }
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = not_null(l_24);
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
      t = q_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  ATerm d_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
    t = not_null(w_24);
    if(((b_25 != NULL) && (b_25 != t)))
      _fail(t);
    else
      b_25 = t;
    t = not_null(y_24);
    if(((a_25 != NULL) && (a_25 != t)))
      _fail(t);
    else
      a_25 = t;
    t = not_null(z_24);
    if(((c_25 != NULL) && (c_25 != t)))
      _fail(t);
    else
      c_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_25)), not_null(a_25)), not_null(c_25));
    return(t);
  }
  if(((v_24 != NULL) && (v_24 != t)))
    _fail(t);
  else
    v_24 = t;
  t = not_null(v_24);
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      t = not_null(x_24);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_24 = ATgetFirst((ATermList) t);
          z_24 = (ATerm) ATgetNext((ATermList) t);
          t = d_25(t);
        }
      else
        {
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
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  ATerm l_26 (ATerm t)
  {
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,d_26 = NULL,j_26 = NULL;
    t = not_null(q_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(r_25);
    if(((u_25 != NULL) && (u_25 != t)))
      _fail(t);
    else
      u_25 = t;
    t = not_null(s_25);
    if(((v_25 != NULL) && (v_25 != t)))
      _fail(t);
    else
      v_25 = t;
    t = not_null(o_25);
    {
      ATerm v_11;
      v_11 = t;
      {
        ATerm y_25 = NULL;
        ATerm m_26 (ATerm t)
        {
          ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
          ATerm n_26 (ATerm t)
          {
            t = not_null(b_26);
            if(((w_25 != NULL) && (w_25 != t)))
              _fail(t);
            else
              w_25 = t;
            t = not_null(c_26);
            if(((x_25 != NULL) && (x_25 != t)))
              _fail(t);
            else
              x_25 = t;
            t = not_null(a_26);
            return(t);
          }
          t = not_null(y_25);
          if(((z_25 != NULL) && (z_25 != t)))
            _fail(t);
          else
            z_25 = t;
          t = not_null(y_25);
          t = SSL_explode_term(not_null(z_25));
          if(((a_26 != NULL) && (a_26 != t)))
            _fail(t);
          else
            a_26 = t;
          t = not_null(a_26);
          if(match_cons(t, sym__2))
            {
              b_26 = ATgetArgument(t, 0);
              c_26 = ATgetArgument(t, 1);
              t = n_26(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(u_25);
        if(((y_25 != NULL) && (y_25 != t)))
          _fail(t);
        else
          y_25 = t;
        t = m_26(t);
      }
      t = v_11;
      {
        ATerm w_11;
        w_11 = t;
        {
          ATerm e_26 = NULL;
          ATerm o_26 (ATerm t)
          {
            ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
            ATerm p_26 (ATerm t)
            {
              t = not_null(h_26);
              if(((w_25 != NULL) && (w_25 != t)))
                _fail(t);
              else
                w_25 = t;
              t = not_null(i_26);
              if(((d_26 != NULL) && (d_26 != t)))
                _fail(t);
              else
                d_26 = t;
              t = not_null(g_26);
              return(t);
            }
            t = not_null(e_26);
            if(((f_26 != NULL) && (f_26 != t)))
              _fail(t);
            else
              f_26 = t;
            t = not_null(e_26);
            t = SSL_explode_term(not_null(f_26));
            if(((g_26 != NULL) && (g_26 != t)))
              _fail(t);
            else
              g_26 = t;
            t = not_null(g_26);
            if(match_cons(t, sym__2))
              {
                h_26 = ATgetArgument(t, 0);
                i_26 = ATgetArgument(t, 1);
                t = p_26(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(t_25);
          if(((e_26 != NULL) && (e_26 != t)))
            _fail(t);
          else
            e_26 = t;
          t = o_26(t);
        }
        t = w_11;
        {
          ATerm k_26 = NULL;
          ATerm q_26 (ATerm t)
          {
            t = not_null(k_26);
            if(((j_26 != NULL) && (j_26 != t)))
              _fail(t);
            else
              j_26 = t;
            t = not_null(k_26);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), not_null(x_25));
          t = zip_1_0(_id, t);
          if(((k_26 != NULL) && (k_26 != t)))
            _fail(t);
          else
            k_26 = t;
          t = q_26(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(v_25));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = not_null(o_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_25 = ATgetFirst((ATermList) t);
      s_25 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(p_25);
      if(match_cons(t, sym__2))
        {
          q_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
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
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  ATerm b_27 (ATerm t)
  {
    ATerm z_26 = NULL,a_27 = NULL;
    t = not_null(w_26);
    if(((z_26 != NULL) && (z_26 != t)))
      _fail(t);
    else
      z_26 = t;
    t = not_null(x_26);
    if(((z_26 != NULL) && (z_26 != t)))
      _fail(t);
    else
      z_26 = t;
    t = not_null(y_26);
    if(((a_27 != NULL) && (a_27 != t)))
      _fail(t);
    else
      a_27 = t;
    t = not_null(a_27);
    return(t);
  }
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = not_null(u_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_26 = ATgetFirst((ATermList) t);
      y_26 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(v_26);
      if(match_cons(t, sym__2))
        {
          w_26 = ATgetArgument(t, 0);
          x_26 = ATgetArgument(t, 1);
          t = b_27(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  ATerm c_27 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = z_127(t);
        t = c_27(t);
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm for_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  t = b_128(t);
  t = while_not_2_0(c_128, d_128, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm e_27 = NULL;
        ATerm g_27 (ATerm t)
        {
          ATerm f_27 = NULL;
          t = not_null(e_27);
          if(((f_27 != NULL) && (f_27 != t)))
            _fail(t);
          else
            f_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_27));
          return(t);
        }
        if(((e_27 != NULL) && (e_27 != t)))
          _fail(t);
        else
          e_27 = t;
        t = g_27(t);
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm g_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(h_13);
                }
              else
                {
                  t = g_13;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, r_1, t);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(o_1, p_1, q_1, t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm k_27 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_125(t);
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
              ATerm i_27 = NULL;
              ATerm f_14;
              f_14 = t;
              {
                ATerm j_27 = NULL;
                ATerm l_27 (ATerm t)
                {
                  t = not_null(j_27);
                  if(((i_27 != NULL) && (i_27 != t)))
                    _fail(t);
                  else
                    i_27 = t;
                  t = not_null(j_27);
                  return(t);
                }
                t = t_125(t);
                if(((j_27 != NULL) && (j_27 != t)))
                  _fail(t);
                else
                  j_27 = t;
                t = l_27(t);
              }
              t = f_14;
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(i_27);
                    return(t);
                  }
                  t = split_2_0(k_27, u_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm t_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_125(s_1, k_27, t_1, t);
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(v_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              {
                ATerm w_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(w_1, union_0_0, k_27, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
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
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(l_14);
                  }
                else
                  {
                    t = k_14;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, x_1, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  ATerm b_28 (ATerm t)
  {
    ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
    t = not_null(q_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(r_27);
    if(((w_27 != NULL) && (w_27 != t)))
      _fail(t);
    else
      w_27 = t;
    t = not_null(s_27);
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = not_null(y_27);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm c_28 (ATerm t)
  {
    ATerm z_27 = NULL,a_28 = NULL;
    t = not_null(u_27);
    if(((a_28 != NULL) && (a_28 != t)))
      _fail(t);
    else
      a_28 = t;
    t = not_null(v_27);
    if(((z_27 != NULL) && (z_27 != t)))
      _fail(t);
    else
      z_27 = t;
    t = not_null(a_28);
    return(t);
  }
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = not_null(t_27);
  if(match_cons(t, sym_LRule_1))
    {
      u_27 = ATgetArgument(t, 0);
      t = not_null(u_27);
      if(match_cons(t, sym_Rule_3))
        {
          q_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          s_27 = ATgetArgument(t, 2);
          t = b_28(t);
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
          u_27 = ATgetArgument(t, 0);
          v_27 = ATgetArgument(t, 1);
          t = c_28(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  ATerm q_29 (ATerm t)
  {
    ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL;
    ATerm u_29 (ATerm t)
    {
      ATerm x_28 = NULL,y_28 = NULL;
      t = not_null(w_28);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = not_null(w_28);
      {
        ATerm z_28 = NULL;
        ATerm v_29 (ATerm t)
        {
          t = not_null(z_28);
          if(((y_28 != NULL) && (y_28 != t)))
            _fail(t);
          else
            y_28 = t;
          t = not_null(z_28);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_28)), not_null(u_28));
        if(((z_28 != NULL) && (z_28 != t)))
          _fail(t);
        else
          z_28 = t;
        t = v_29(t);
        t = not_null(y_28);
      }
      return(t);
    }
    t = not_null(q_28);
    if(((s_28 != NULL) && (s_28 != t)))
      _fail(t);
    else
      s_28 = t;
    t = not_null(r_28);
    if(((t_28 != NULL) && (t_28 != t)))
      _fail(t);
    else
      t_28 = t;
    t = not_null(q_28);
    {
      ATerm v_28 = NULL;
      ATerm t_29 (ATerm t)
      {
        t = not_null(v_28);
        if(((u_28 != NULL) && (u_28 != t)))
          _fail(t);
        else
          u_28 = t;
        t = not_null(v_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_28));
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = t_29(t);
      t = not_null(t_28);
      t = p_0(t);
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      t = u_29(t);
    }
    return(t);
  }
  ATerm r_29 (ATerm t)
  {
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,e_29 = NULL;
    ATerm x_29 (ATerm t)
    {
      ATerm f_29 = NULL,g_29 = NULL;
      t = not_null(e_29);
      if(((f_29 != NULL) && (f_29 != t)))
        _fail(t);
      else
        f_29 = t;
      t = not_null(e_29);
      {
        ATerm h_29 = NULL;
        ATerm y_29 (ATerm t)
        {
          t = not_null(h_29);
          if(((g_29 != NULL) && (g_29 != t)))
            _fail(t);
          else
            g_29 = t;
          t = not_null(h_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_29)), not_null(c_29));
        if(((h_29 != NULL) && (h_29 != t)))
          _fail(t);
        else
          h_29 = t;
        t = y_29(t);
        t = not_null(g_29);
      }
      return(t);
    }
    t = not_null(q_28);
    if(((a_29 != NULL) && (a_29 != t)))
      _fail(t);
    else
      a_29 = t;
    t = not_null(r_28);
    if(((b_29 != NULL) && (b_29 != t)))
      _fail(t);
    else
      b_29 = t;
    t = not_null(q_28);
    {
      ATerm d_29 = NULL;
      ATerm w_29 (ATerm t)
      {
        t = not_null(d_29);
        if(((c_29 != NULL) && (c_29 != t)))
          _fail(t);
        else
          c_29 = t;
        t = not_null(d_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_29));
      if(((d_29 != NULL) && (d_29 != t)))
        _fail(t);
      else
        d_29 = t;
      t = w_29(t);
      t = not_null(b_29);
      t = p_0(t);
      if(((e_29 != NULL) && (e_29 != t)))
        _fail(t);
      else
        e_29 = t;
      t = x_29(t);
    }
    return(t);
  }
  ATerm s_29 (ATerm t)
  {
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,m_29 = NULL;
    ATerm a_30 (ATerm t)
    {
      ATerm n_29 = NULL,o_29 = NULL;
      t = not_null(m_29);
      if(((n_29 != NULL) && (n_29 != t)))
        _fail(t);
      else
        n_29 = t;
      t = not_null(m_29);
      {
        ATerm p_29 = NULL;
        ATerm b_30 (ATerm t)
        {
          t = not_null(p_29);
          if(((o_29 != NULL) && (o_29 != t)))
            _fail(t);
          else
            o_29 = t;
          t = not_null(p_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_29)), not_null(k_29));
        if(((p_29 != NULL) && (p_29 != t)))
          _fail(t);
        else
          p_29 = t;
        t = b_30(t);
        t = not_null(o_29);
      }
      return(t);
    }
    t = not_null(q_28);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = not_null(r_28);
    if(((j_29 != NULL) && (j_29 != t)))
      _fail(t);
    else
      j_29 = t;
    t = not_null(q_28);
    {
      ATerm l_29 = NULL;
      ATerm z_29 (ATerm t)
      {
        t = not_null(l_29);
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = not_null(l_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_29));
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = z_29(t);
      t = not_null(j_29);
      t = p_0(t);
      if(((m_29 != NULL) && (m_29 != t)))
        _fail(t);
      else
        m_29 = t;
      t = a_30(t);
    }
    return(t);
  }
  if(((q_28 != NULL) && (q_28 != t)))
    _fail(t);
  else
    q_28 = t;
  t = not_null(q_28);
  if(match_cons(t, sym_Var_1))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(t);
            ;
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_29(t);
                  ;
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  t = s_29(t);
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
ATerm DistBinding_2_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  ATerm r_30 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
    t = not_null(h_30);
    if(((m_30 != NULL) && (m_30 != t)))
      _fail(t);
    else
      m_30 = t;
    t = not_null(i_30);
    if(((l_30 != NULL) && (l_30 != t)))
      _fail(t);
    else
      l_30 = t;
    t = not_null(j_30);
    if(((k_30 != NULL) && (k_30 != t)))
      _fail(t);
    else
      k_30 = t;
    t = not_null(m_30);
    {
      ATerm y_1 (ATerm t)
      {
        ATerm n_30 = NULL;
        ATerm s_30 (ATerm t)
        {
          ATerm o_30 = NULL;
          t = not_null(n_30);
          if(((o_30 != NULL) && (o_30 != t)))
            _fail(t);
          else
            o_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(k_30));
          t = a_124(t);
          return(t);
        }
        if(((n_30 != NULL) && (n_30 != t)))
          _fail(t);
        else
          n_30 = t;
        t = s_30(t);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm p_30 = NULL;
        ATerm t_30 (ATerm t)
        {
          ATerm q_30 = NULL;
          t = not_null(p_30);
          if(((q_30 != NULL) && (q_30 != t)))
            _fail(t);
          else
            q_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(l_30));
          t = a_124(t);
          return(t);
        }
        if(((p_30 != NULL) && (p_30 != t)))
          _fail(t);
        else
          p_30 = t;
        t = t_30(t);
        return(t);
      }
      t = b_124(y_1, z_1, _id, t);
    }
    return(t);
  }
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = not_null(g_30);
  if(match_cons(t, sym__3))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      j_30 = ATgetArgument(t, 2);
      t = r_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm q_31 (ATerm t)
  {
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,o_31 = NULL;
    t = not_null(c_31);
    if(((e_31 != NULL) && (e_31 != t)))
      _fail(t);
    else
      e_31 = t;
    t = not_null(d_31);
    if(((f_31 != NULL) && (f_31 != t)))
      _fail(t);
    else
      f_31 = t;
    t = not_null(b_31);
    {
      ATerm o_15;
      o_15 = t;
      {
        ATerm j_31 = NULL;
        ATerm r_31 (ATerm t)
        {
          ATerm k_31 = NULL;
          ATerm s_31 (ATerm t)
          {
            ATerm l_31 = NULL,n_31 = NULL;
            ATerm u_31 (ATerm t)
            {
              t = not_null(n_31);
              if(((i_31 != NULL) && (i_31 != t)))
                _fail(t);
              else
                i_31 = t;
              t = not_null(n_31);
              return(t);
            }
            t = not_null(k_31);
            if(((h_31 != NULL) && (h_31 != t)))
              _fail(t);
            else
              h_31 = t;
            t = not_null(k_31);
            {
              ATerm m_31 = NULL;
              ATerm t_31 (ATerm t)
              {
                t = not_null(m_31);
                if(((l_31 != NULL) && (l_31 != t)))
                  _fail(t);
                else
                  l_31 = t;
                t = not_null(m_31);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), not_null(h_31));
              t = zip_1_0(_id, t);
              if(((m_31 != NULL) && (m_31 != t)))
                _fail(t);
              else
                m_31 = t;
              t = t_31(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(f_31));
              t = conc_0_0(t);
              if(((n_31 != NULL) && (n_31 != t)))
                _fail(t);
              else
                n_31 = t;
              t = u_31(t);
            }
            return(t);
          }
          t = not_null(j_31);
          if(((g_31 != NULL) && (g_31 != t)))
            _fail(t);
          else
            g_31 = t;
          t = not_null(j_31);
          t = map_1_0(new_0_0, t);
          if(((k_31 != NULL) && (k_31 != t)))
            _fail(t);
          else
            k_31 = t;
          t = s_31(t);
          return(t);
        }
        t = not_null(e_31);
        t = u_123(t);
        if(((j_31 != NULL) && (j_31 != t)))
          _fail(t);
        else
          j_31 = t;
        t = r_31(t);
      }
      t = o_15;
      {
        ATerm p_31 = NULL;
        ATerm v_31 (ATerm t)
        {
          t = not_null(p_31);
          if(((o_31 != NULL) && (o_31 != t)))
            _fail(t);
          else
            o_31 = t;
          t = not_null(p_31);
          return(t);
        }
        t = not_null(e_31);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(h_31);
            return(t);
          }
          t = v_123(a_2, t);
          if(((p_31 != NULL) && (p_31 != t)))
            _fail(t);
          else
            p_31 = t;
          t = v_31(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), not_null(f_31), not_null(i_31));
      }
    }
    return(t);
  }
  if(((b_31 != NULL) && (b_31 != t)))
    _fail(t);
  else
    b_31 = t;
  t = not_null(b_31);
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
      t = q_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  ATerm g_32 (ATerm t)
  {
    ATerm e_32 = NULL,f_32 = NULL;
    t = not_null(a_32);
    if(((e_32 != NULL) && (e_32 != t)))
      _fail(t);
    else
      e_32 = t;
    t = not_null(d_32);
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(f_32));
    return(t);
  }
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = not_null(z_31);
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
      t = not_null(b_32);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
          t = g_32(t);
        }
      else
        {
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
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  ATerm u_32 (ATerm t)
  {
    ATerm s_32 = NULL,t_32 = NULL;
    t = not_null(m_32);
    if(((s_32 != NULL) && (s_32 != t)))
      _fail(t);
    else
      s_32 = t;
    t = not_null(p_32);
    if(((s_32 != NULL) && (s_32 != t)))
      _fail(t);
    else
      s_32 = t;
    t = not_null(q_32);
    if(((t_32 != NULL) && (t_32 != t)))
      _fail(t);
    else
      t_32 = t;
    t = not_null(t_32);
    return(t);
  }
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  t = not_null(l_32);
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
      t = not_null(n_32);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          r_32 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(o_32);
          if(match_cons(t, sym__2))
            {
              p_32 = ATgetArgument(t, 0);
              q_32 = ATgetArgument(t, 1);
              t = u_32(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm p_15 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = p_15;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm f_124 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  ATerm d_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL;
    t = not_null(z_32);
    if(((c_33 != NULL) && (c_33 != t)))
      _fail(t);
    else
      c_33 = t;
    t = not_null(a_33);
    if(((b_33 != NULL) && (b_33 != t)))
      _fail(t);
    else
      b_33 = t;
    t = not_null(c_33);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = not_null(b_33);
          return(t);
        }
        t = split_2_0(_id, c_2, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = f_124(b_2, t);
    }
    return(t);
  }
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  t = not_null(y_32);
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
      t = d_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  ATerm o_33 (ATerm t)
  {
    ATerm k_33 = NULL,l_33 = NULL;
    t = not_null(i_33);
    if(((l_33 != NULL) && (l_33 != t)))
      _fail(t);
    else
      l_33 = t;
    t = not_null(j_33);
    if(((k_33 != NULL) && (k_33 != t)))
      _fail(t);
    else
      k_33 = t;
    t = not_null(l_33);
    {
      ATerm d_2 (ATerm t)
      {
        ATerm m_33 = NULL;
        ATerm p_33 (ATerm t)
        {
          ATerm n_33 = NULL;
          t = not_null(m_33);
          if(((n_33 != NULL) && (n_33 != t)))
            _fail(t);
          else
            n_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(k_33));
          t = y_124(t);
          return(t);
        }
        if(((m_33 != NULL) && (m_33 != t)))
          _fail(t);
        else
          m_33 = t;
        t = p_33(t);
        return(t);
      }
      t = SRTS_all(d_2, t);
    }
    return(t);
  }
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = not_null(h_33);
  if(match_cons(t, sym__2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
      t = o_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  ATerm q_33 (ATerm t)
  {
    ATerm k_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_124(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = k_16;
        t = all_dist_1_0(q_33, t);
      }
    return(t);
  }
  t = q_33(t);
  return(t);
}
ATerm rename_4_0 (ATerm p_123 (ATerm, ATerm (ATerm)), ATerm q_123 (ATerm), ATerm r_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_123 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm s_33 = NULL;
  ATerm u_33 (ATerm t)
  {
    ATerm t_33 = NULL;
    t = not_null(s_33);
    if(((t_33 != NULL) && (t_33 != t)))
      _fail(t);
    else
      t_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_33), (ATerm) ATempty);
    {
      ATerm v_33 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm w_16 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(p_123, t);
              ;
              LocalPopChoice(h_17);
            }
          else
            {
              t = w_16;
              t = RnBinding_2_0(q_123, s_123, t);
              t = DistBinding_2_0(v_33, r_123, t);
            }
          return(t);
        }
        t = env_alltd_1_0(e_2, t);
        return(t);
      }
      t = v_33(t);
    }
    return(t);
  }
  if(((s_33 != NULL) && (s_33 != t)))
    _fail(t);
  else
    s_33 = t;
  t = u_33(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm i_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = i_17;
        {
          ATerm q_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = q_17;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, f_2, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_a_18;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = foldr_3_0(g_2, add_0_0, h_2, t);
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  ATerm m_41 (ATerm t)
  {
    ATerm n_35 = NULL,o_35 = NULL;
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
    t = not_null(i_35);
    {
      ATerm p_35 = NULL;
      ATerm r_41 (ATerm t)
      {
        t = not_null(p_35);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_35)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm i_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = rewrite_1_0(i_2, t);
        if(((p_35 != NULL) && (p_35 != t)))
          _fail(t);
        else
          p_35 = t;
        t = not_null(p_35);
        if(match_cons(t, sym_Undefined_0))
          {
            t = r_41(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_d_18;
    }
    return(t);
  }
  ATerm n_41 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
    t = not_null(i_35);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = not_null(k_35);
    if(((r_35 != NULL) && (r_35 != t)))
      _fail(t);
    else
      r_35 = t;
    t = not_null(i_35);
    {
      ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
      ATerm s_41 (ATerm t)
      {
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
        ATerm t_41 (ATerm t)
        {
          ATerm f_36 = NULL,l_36 = NULL;
          ATerm y_41 (ATerm t)
          {
            t = not_null(l_36);
            if(((w_35 != NULL) && (w_35 != t)))
              _fail(t);
            else
              w_35 = t;
            t = not_null(l_36);
            {
              ATerm t_18;
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_35)), (ATerm)ATempty, (ATerm) ATempty), term_d_18);
              {
                ATerm j_2 (ATerm t)
                {
                  t = term_c_18;
                  return(t);
                }
                t = assert_1_0(j_2, t);
              }
              t = t_18;
            }
            return(t);
          }
          t = not_null(b_36);
          if(((r_35 != NULL) && (r_35 != t)))
            _fail(t);
          else
            r_35 = t;
          t = not_null(c_36);
          if(((u_35 != NULL) && (u_35 != t)))
            _fail(t);
          else
            u_35 = t;
          t = not_null(d_36);
          if(((v_35 != NULL) && (v_35 != t)))
            _fail(t);
          else
            v_35 = t;
          t = not_null(e_36);
          if(((t_35 != NULL) && (t_35 != t)))
            _fail(t);
          else
            t_35 = t;
          t = not_null(a_36);
          {
            ATerm g_36 = NULL,i_36 = NULL,k_36 = NULL;
            ATerm w_41 (ATerm t)
            {
              t = not_null(k_36);
              if(((f_36 != NULL) && (f_36 != t)))
                _fail(t);
              else
                f_36 = t;
              t = not_null(k_36);
              return(t);
            }
            ATerm u_18;
            u_18 = t;
            {
              ATerm h_36 = NULL;
              ATerm u_41 (ATerm t)
              {
                t = not_null(h_36);
                if(((g_36 != NULL) && (g_36 != t)))
                  _fail(t);
                else
                  g_36 = t;
                t = not_null(h_36);
                return(t);
              }
              t = not_null(u_35);
              t = length_0_0(t);
              if(((h_36 != NULL) && (h_36 != t)))
                _fail(t);
              else
                h_36 = t;
              t = u_41(t);
            }
            t = u_18;
            {
              ATerm j_36 = NULL;
              ATerm v_41 (ATerm t)
              {
                t = not_null(j_36);
                if(((i_36 != NULL) && (i_36 != t)))
                  _fail(t);
                else
                  i_36 = t;
                t = not_null(j_36);
                return(t);
              }
              t = not_null(v_35);
              t = length_0_0(t);
              if(((j_36 != NULL) && (j_36 != t)))
                _fail(t);
              else
                j_36 = t;
              t = v_41(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_36), not_null(i_36));
              t = add_0_0(t);
              if(((k_36 != NULL) && (k_36 != t)))
                _fail(t);
              else
                k_36 = t;
              t = w_41(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), term_a_18);
            t = gt_0_0(t);
            t = new_0_0(t);
            if(((l_36 != NULL) && (l_36 != t)))
              _fail(t);
            else
              l_36 = t;
            t = y_41(t);
          }
          return(t);
        }
        t = not_null(z_35);
        if(((s_35 != NULL) && (s_35 != t)))
          _fail(t);
        else
          s_35 = t;
        t = not_null(s_35);
        t = strename_0_0(t);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = not_null(a_36);
        if(match_cons(t, sym_SDefT_4))
          {
            b_36 = ATgetArgument(t, 0);
            c_36 = ATgetArgument(t, 1);
            d_36 = ATgetArgument(t, 2);
            e_36 = ATgetArgument(t, 3);
            t = t_41(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(q_35);
      {
        ATerm k_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = rewrite_1_0(k_2, t);
        if(((x_35 != NULL) && (x_35 != t)))
          _fail(t);
        else
          x_35 = t;
        t = not_null(x_35);
        if(match_cons(t, sym_Defined_2))
          {
            y_35 = ATgetArgument(t, 0);
            z_35 = ATgetArgument(t, 1);
            t = not_null(y_35);
            if(match_string(t, "g_0"))
              {
                t = s_41(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(w_35), not_null(u_35), not_null(v_35), not_null(t_35))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_35)), (ATerm)ATempty, (ATerm) ATempty));
    }
    return(t);
  }
  ATerm o_41 (ATerm t)
  {
    ATerm m_36 = NULL,n_36 = NULL;
    t = not_null(i_35);
    if(((m_36 != NULL) && (m_36 != t)))
      _fail(t);
    else
      m_36 = t;
    t = not_null(k_35);
    if(((n_36 != NULL) && (n_36 != t)))
      _fail(t);
    else
      n_36 = t;
    t = not_null(i_35);
    {
      ATerm o_36 = NULL;
      ATerm z_41 (ATerm t)
      {
        t = not_null(o_36);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_36)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm l_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = rewrite_1_0(l_2, t);
        if(((o_36 != NULL) && (o_36 != t)))
          _fail(t);
        else
          o_36 = t;
        t = not_null(o_36);
        if(match_cons(t, sym_Undefined_0))
          {
            t = z_41(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_d_18;
    }
    return(t);
  }
  ATerm p_41 (ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
    t = not_null(i_35);
    if(((p_36 != NULL) && (p_36 != t)))
      _fail(t);
    else
      p_36 = t;
    t = not_null(k_35);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = not_null(l_35);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = not_null(m_35);
    if(((s_36 != NULL) && (s_36 != t)))
      _fail(t);
    else
      s_36 = t;
    t = not_null(i_35);
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
      ATerm a_42 (ATerm t)
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
        ATerm b_42 (ATerm t)
        {
          ATerm i_37 = NULL;
          ATerm c_42 (ATerm t)
          {
            ATerm n_37 = NULL;
            ATerm e_42 (ATerm t)
            {
              ATerm j_39 = NULL,g_41 = NULL;
              ATerm h_42 (ATerm t)
              {
                t = not_null(g_41);
                if(((z_36 != NULL) && (z_36 != t)))
                  _fail(t);
                else
                  z_36 = t;
                t = not_null(g_41);
                {
                  ATerm v_18;
                  v_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_36)), (ATerm)ATempty, (ATerm) ATempty), term_d_18);
                  {
                    ATerm m_2 (ATerm t)
                    {
                      t = term_c_18;
                      return(t);
                    }
                    t = assert_1_0(m_2, t);
                  }
                  t = v_18;
                }
                return(t);
              }
              t = not_null(n_37);
              if(((x_36 != NULL) && (x_36 != t)))
                _fail(t);
              else
                x_36 = t;
              t = not_null(n_37);
              {
                ATerm f_41 = NULL;
                ATerm g_42 (ATerm t)
                {
                  t = not_null(f_41);
                  if(((j_39 != NULL) && (j_39 != t)))
                    _fail(t);
                  else
                    j_39 = t;
                  t = not_null(f_41);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(x_36));
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
                    ATerm f_42 (ATerm t)
                    {
                      ATerm d_41 = NULL,e_41 = NULL;
                      t = not_null(l_39);
                      if(((d_41 != NULL) && (d_41 != t)))
                        _fail(t);
                      else
                        d_41 = t;
                      t = not_null(m_39);
                      if(((e_41 != NULL) && (e_41 != t)))
                        _fail(t);
                      else
                        e_41 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_41)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_41))));
                      return(t);
                    }
                    if(((k_39 != NULL) && (k_39 != t)))
                      _fail(t);
                    else
                      k_39 = t;
                    t = not_null(k_39);
                    if(match_cons(t, sym__2))
                      {
                        l_39 = ATgetArgument(t, 0);
                        m_39 = ATgetArgument(t, 1);
                        t = f_42(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = zip_1_0(n_2, t);
                  if(((f_41 != NULL) && (f_41 != t)))
                    _fail(t);
                  else
                    f_41 = t;
                  t = g_42(t);
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_39)), not_null(y_36)));
                if(((g_41 != NULL) && (g_41 != t)))
                  _fail(t);
                else
                  g_41 = t;
                t = h_42(t);
              }
              return(t);
            }
            t = not_null(i_37);
            if(((y_36 != NULL) && (y_36 != t)))
              _fail(t);
            else
              y_36 = t;
            t = not_null(w_36);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
                ATerm d_42 (ATerm t)
                {
                  ATerm m_37 = NULL;
                  t = not_null(k_37);
                  if(((m_37 != NULL) && (m_37 != t)))
                    _fail(t);
                  else
                    m_37 = t;
                  t = not_null(m_37);
                  return(t);
                }
                if(((j_37 != NULL) && (j_37 != t)))
                  _fail(t);
                else
                  j_37 = t;
                t = not_null(j_37);
                if(match_cons(t, sym_VarDec_2))
                  {
                    k_37 = ATgetArgument(t, 0);
                    l_37 = ATgetArgument(t, 1);
                    t = d_42(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(o_2, t);
              if(((n_37 != NULL) && (n_37 != t)))
                _fail(t);
              else
                n_37 = t;
              t = e_42(t);
            }
            return(t);
          }
          t = not_null(e_37);
          if(((q_36 != NULL) && (q_36 != t)))
            _fail(t);
          else
            q_36 = t;
          t = not_null(f_37);
          if(((u_36 != NULL) && (u_36 != t)))
            _fail(t);
          else
            u_36 = t;
          t = not_null(g_37);
          if(((w_36 != NULL) && (w_36 != t)))
            _fail(t);
          else
            w_36 = t;
          t = not_null(h_37);
          if(((v_36 != NULL) && (v_36 != t)))
            _fail(t);
          else
            v_36 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_36), not_null(r_36), not_null(v_36));
          t = substitute_args_0_0(t);
          if(((i_37 != NULL) && (i_37 != t)))
            _fail(t);
          else
            i_37 = t;
          t = c_42(t);
          return(t);
        }
        t = not_null(c_37);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = not_null(t_36);
        t = strename_0_0(t);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = not_null(d_37);
        if(match_cons(t, sym_SDefT_4))
          {
            e_37 = ATgetArgument(t, 0);
            f_37 = ATgetArgument(t, 1);
            g_37 = ATgetArgument(t, 2);
            h_37 = ATgetArgument(t, 3);
            t = b_42(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_36)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm p_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = rewrite_1_0(p_2, t);
        if(((a_37 != NULL) && (a_37 != t)))
          _fail(t);
        else
          a_37 = t;
        t = not_null(a_37);
        if(match_cons(t, sym_Defined_2))
          {
            b_37 = ATgetArgument(t, 0);
            c_37 = ATgetArgument(t, 1);
            t = not_null(b_37);
            if(match_string(t, "d_0"))
              {
                t = a_42(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(z_36);
    }
    return(t);
  }
  ATerm q_41 (ATerm t)
  {
    ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
    t = not_null(i_35);
    if(((h_41 != NULL) && (h_41 != t)))
      _fail(t);
    else
      h_41 = t;
    t = not_null(k_35);
    if(((k_41 != NULL) && (k_41 != t)))
      _fail(t);
    else
      k_41 = t;
    t = not_null(l_35);
    if(((i_41 != NULL) && (i_41 != t)))
      _fail(t);
    else
      i_41 = t;
    t = not_null(m_35);
    if(((j_41 != NULL) && (j_41 != t)))
      _fail(t);
    else
      j_41 = t;
    t = not_null(i_35);
    {
      ATerm l_41 = NULL;
      ATerm i_42 (ATerm t)
      {
        t = not_null(l_41);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_41)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm q_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = rewrite_1_0(q_2, t);
        if(((l_41 != NULL) && (l_41 != t)))
          _fail(t);
        else
          l_41 = t;
        t = not_null(l_41);
        if(match_cons(t, sym_Undefined_0))
          {
            t = i_42(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_d_18;
    }
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(i_35);
  if(match_cons(t, sym_CallT_3))
    {
      j_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
      m_35 = ATgetArgument(t, 2);
      t = not_null(j_35);
      if(match_cons(t, sym_SVar_1))
        {
          k_35 = ATgetArgument(t, 0);
          t = not_null(m_35);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(l_35);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm w_18 = t;
                  int j_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_41(t);
                      ;
                      LocalPopChoice(j_19);
                    }
                  else
                    {
                      t = w_18;
                      {
                        ATerm k_19 = t;
                        int l_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_41(t);
                            ;
                            LocalPopChoice(l_19);
                          }
                        else
                          {
                            t = k_19;
                            {
                              ATerm m_19 = t;
                              int n_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_41(t);
                                  ;
                                  LocalPopChoice(n_19);
                                }
                              else
                                {
                                  t = m_19;
                                  {
                                    ATerm c_20 = t;
                                    int d_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_41(t);
                                        ;
                                        LocalPopChoice(d_20);
                                      }
                                    else
                                      {
                                        t = c_20;
                                        t = q_41(t);
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
                  ATerm e_20 = t;
                  int f_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_41(t);
                      ;
                      LocalPopChoice(f_20);
                    }
                  else
                    {
                      t = e_20;
                      {
                        ATerm g_20 = t;
                        int h_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_41(t);
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
                                  t = p_41(t);
                                  ;
                                  LocalPopChoice(j_20);
                                }
                              else
                                {
                                  t = i_20;
                                  t = q_41(t);
                                }
                            }
                          }
                      }
                    }
                }
            }
          else
            {
              t = not_null(l_35);
              {
                ATerm n_21 = t;
                int o_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_41(t);
                    ;
                    LocalPopChoice(o_21);
                  }
                else
                  {
                    t = n_21;
                    {
                      ATerm z_21 = t;
                      int a_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_41(t);
                          ;
                          LocalPopChoice(a_22);
                        }
                      else
                        {
                          t = z_21;
                          {
                            ATerm b_22 = t;
                            int j_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_41(t);
                                ;
                                LocalPopChoice(j_22);
                              }
                            else
                              {
                                t = b_22;
                                t = q_41(t);
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
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm l_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  ATerm t_42 (ATerm t)
  {
    ATerm s_42 = NULL;
    t = not_null(o_42);
    if(((s_42 != NULL) && (s_42 != t)))
      _fail(t);
    else
      s_42 = t;
    t = not_null(l_42);
    {
      ATerm k_22;
      k_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_42)), (ATerm)ATempty, (ATerm) ATempty), term_d_18);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = assert_1_0(r_2, t);
      }
      t = k_22;
    }
    return(t);
  }
  if(((l_42 != NULL) && (l_42 != t)))
    _fail(t);
  else
    l_42 = t;
  t = not_null(l_42);
  if(match_cons(t, sym_SDefT_4))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      q_42 = ATgetArgument(t, 2);
      r_42 = ATgetArgument(t, 3);
      t = t_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  ATerm a_43 (ATerm t)
  {
    ATerm z_42 = NULL;
    t = not_null(y_42);
    if(((z_42 != NULL) && (z_42 != t)))
      _fail(t);
    else
      z_42 = t;
    t = not_null(z_42);
    return(t);
  }
  if(((w_42 != NULL) && (w_42 != t)))
    _fail(t);
  else
    w_42 = t;
  t = not_null(w_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_42 = ATgetFirst((ATermList) t);
      y_42 = (ATerm) ATgetNext((ATermList) t);
      t = a_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  ATerm l_43 (ATerm t)
  {
    ATerm h_43 = NULL,i_43 = NULL;
    t = not_null(f_43);
    if(((h_43 != NULL) && (h_43 != t)))
      _fail(t);
    else
      h_43 = t;
    t = not_null(g_43);
    if(((i_43 != NULL) && (i_43 != t)))
      _fail(t);
    else
      i_43 = t;
    t = not_null(e_43);
    {
      ATerm v_22;
      v_22 = t;
      {
        ATerm j_43 = NULL;
        ATerm k_43 = NULL;
        ATerm m_43 (ATerm t)
        {
          t = not_null(k_43);
          if(((j_43 != NULL) && (j_43 != t)))
            _fail(t);
          else
            j_43 = t;
          t = not_null(k_43);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), not_null(i_43));
        {
          ATerm w_22 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = w_22;
              t = (ATerm) ATempty;
            }
          if(((k_43 != NULL) && (k_43 != t)))
            _fail(t);
          else
            k_43 = t;
          t = m_43(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(h_43), not_null(i_43), not_null(j_43));
        t = table_put_0_0(t);
      }
      t = v_22;
    }
    return(t);
  }
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  t = not_null(e_43);
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
      t = l_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  ATerm c_23;
  c_23 = t;
  {
    ATerm u_43 = NULL;
    ATerm a_44 (ATerm t)
    {
      ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
      ATerm b_44 (ATerm t)
      {
        t = not_null(w_43);
        if(((s_43 != NULL) && (s_43 != t)))
          _fail(t);
        else
          s_43 = t;
        t = not_null(x_43);
        if(((r_43 != NULL) && (r_43 != t)))
          _fail(t);
        else
          r_43 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_43), term_h_23, not_null(r_43));
        t = table_put_0_0(t);
        t = not_null(s_43);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm y_43 = NULL;
            ATerm c_44 (ATerm t)
            {
              ATerm z_43 = NULL;
              t = not_null(y_43);
              if(((z_43 != NULL) && (z_43 != t)))
                _fail(t);
              else
                z_43 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), not_null(z_43));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((y_43 != NULL) && (y_43 != t)))
              _fail(t);
            else
              y_43 = t;
            t = c_44(t);
            return(t);
          }
          t = map_1_0(s_2, t);
        }
        return(t);
      }
      t = not_null(u_43);
      if(((t_43 != NULL) && (t_43 != t)))
        _fail(t);
      else
        t_43 = t;
      t = not_null(u_43);
      {
        ATerm i_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), term_h_23);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = i_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((v_43 != NULL) && (v_43 != t)))
          _fail(t);
        else
          v_43 = t;
        t = not_null(v_43);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_43 = ATgetFirst((ATermList) t);
            x_43 = (ATerm) ATgetNext((ATermList) t);
            t = b_44(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = w_122(t);
    if(((u_43 != NULL) && (u_43 != t)))
      _fail(t);
    else
      u_43 = t;
    t = a_44(t);
  }
  t = c_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_113(t);
      t = w_113(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = r_23;
      t = w_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm f_44 = NULL;
  ATerm y_23;
  y_23 = t;
  {
    ATerm g_44 = NULL;
    ATerm j_44 (ATerm t)
    {
      ATerm h_44 = NULL;
      t = not_null(g_44);
      if(((f_44 != NULL) && (f_44 != t)))
        _fail(t);
      else
        f_44 = t;
      t = not_null(g_44);
      {
        ATerm i_44 = NULL;
        ATerm k_44 (ATerm t)
        {
          t = not_null(i_44);
          if(((h_44 != NULL) && (h_44 != t)))
            _fail(t);
          else
            h_44 = t;
          t = not_null(i_44);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), term_h_23);
        {
          ATerm z_23 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = z_23;
              t = (ATerm) ATempty;
            }
          if(((i_44 != NULL) && (i_44 != t)))
            _fail(t);
          else
            i_44 = t;
          t = k_44(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_44), term_h_23, (ATerm) ATinsert(CheckATermList(not_null(h_44)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = v_122(t);
    if(((g_44 != NULL) && (g_44 != t)))
      _fail(t);
    else
      g_44 = t;
    t = j_44(t);
  }
  t = y_23;
  return(t);
}
ATerm scope_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm t)
{
  t = begin_scope_1_0(x_122, t);
  {
    ATerm t_2 (ATerm t)
    {
      t = end_scope_1_0(x_122, t);
      return(t);
    }
    t = restore_always_2_0(y_122, t_2, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm k_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0_0(t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = k_24;
        t = repeat_1_0(InlineCall_0_0, t);
      }
    t = SRTS_all(inline_sdef_0_0, t);
    return(t);
  }
  t = scope_2_0(u_2, v_2, t);
  return(t);
}
ATerm assert_1_0 (ATerm z_122 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,x_44 = NULL;
  ATerm j_45 (ATerm t)
  {
    ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
    t = not_null(s_44);
    if(((y_44 != NULL) && (y_44 != t)))
      _fail(t);
    else
      y_44 = t;
    t = not_null(x_44);
    if(((z_44 != NULL) && (z_44 != t)))
      _fail(t);
    else
      z_44 = t;
    t = not_null(r_44);
    {
      ATerm t_24;
      t_24 = t;
      {
        ATerm f_45 = NULL;
        ATerm k_45 (ATerm t)
        {
          ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
          ATerm l_45 (ATerm t)
          {
            t = not_null(h_45);
            if(((b_45 != NULL) && (b_45 != t)))
              _fail(t);
            else
              b_45 = t;
            t = not_null(i_45);
            if(((c_45 != NULL) && (c_45 != t)))
              _fail(t);
            else
              c_45 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_45), term_h_23, (ATerm) ATinsert(CheckATermList(not_null(c_45)), (ATerm) ATinsert(CheckATermList(not_null(b_45)), not_null(y_44))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(f_45);
          if(((a_45 != NULL) && (a_45 != t)))
            _fail(t);
          else
            a_45 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(a_45), not_null(y_44), not_null(z_44));
          t = table_push_0_0(t);
          {
            ATerm u_24 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), term_h_23);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = u_24;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((g_45 != NULL) && (g_45 != t)))
              _fail(t);
            else
              g_45 = t;
            t = not_null(g_45);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_45 = ATgetFirst((ATermList) t);
                i_45 = (ATerm) ATgetNext((ATermList) t);
                t = l_45(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = z_122(t);
        if(((f_45 != NULL) && (f_45 != t)))
          _fail(t);
        else
          f_45 = t;
        t = k_45(t);
      }
      t = t_24;
    }
    return(t);
  }
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = not_null(r_44);
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
      t = j_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  ATerm v_45 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL;
    t = not_null(o_45);
    if(((u_45 != NULL) && (u_45 != t)))
      _fail(t);
    else
      u_45 = t;
    t = not_null(p_45);
    if(((t_45 != NULL) && (t_45 != t)))
      _fail(t);
    else
      t_45 = t;
    t = not_null(o_45);
    {
      ATerm f_25;
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_25, not_null(u_45)));
      {
        ATerm w_2 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = assert_1_0(w_2, t);
      }
      t = f_25;
      {
        ATerm h_25;
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_i_25, not_null(u_45)));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_c_18;
            return(t);
          }
          t = assert_1_0(x_2, t);
        }
        t = h_25;
      }
    }
    return(t);
  }
  if(((o_45 != NULL) && (o_45 != t)))
    _fail(t);
  else
    o_45 = t;
  t = not_null(o_45);
  if(match_cons(t, sym_SDefT_4))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
      r_45 = ATgetArgument(t, 2);
      s_45 = ATgetArgument(t, 3);
      t = v_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm j_25 = t;
  if((PushChoice() == 0))
    {
      t = gt_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_121(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
        ATerm j_46 (ATerm t)
        {
          ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,h_46 = NULL;
          t = not_null(b_46);
          if(((d_46 != NULL) && (d_46 != t)))
            _fail(t);
          else
            d_46 = t;
          t = not_null(c_46);
          if(((e_46 != NULL) && (e_46 != t)))
            _fail(t);
          else
            e_46 = t;
          t = not_null(a_46);
          {
            ATerm m_25;
            m_25 = t;
            {
              ATerm g_46 = NULL;
              ATerm k_46 (ATerm t)
              {
                t = not_null(g_46);
                if(((f_46 != NULL) && (f_46 != t)))
                  _fail(t);
                else
                  f_46 = t;
                t = not_null(g_46);
                return(t);
              }
              t = not_null(d_46);
              t = s_121(t);
              if(((g_46 != NULL) && (g_46 != t)))
                _fail(t);
              else
                g_46 = t;
              t = k_46(t);
            }
            t = m_25;
            {
              ATerm i_46 = NULL;
              ATerm q_46 (ATerm t)
              {
                t = not_null(i_46);
                if(((h_46 != NULL) && (h_46 != t)))
                  _fail(t);
                else
                  h_46 = t;
                t = not_null(i_46);
                return(t);
              }
              t = not_null(e_46);
              t = foldr_3_0(q_121, r_121, s_121, t);
              if(((i_46 != NULL) && (i_46 != t)))
                _fail(t);
              else
                i_46 = t;
              t = q_46(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), not_null(h_46));
              t = r_121(t);
            }
          }
          return(t);
        }
        if(((a_46 != NULL) && (a_46 != t)))
          _fail(t);
        else
          a_46 = t;
        t = not_null(a_46);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_46 = ATgetFirst((ATermList) t);
            c_46 = (ATerm) ATgetNext((ATermList) t);
            t = j_46(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t)
{
  ATerm v_46 = NULL;
  ATerm d_47 (ATerm t)
  {
    ATerm w_46 = NULL,x_46 = NULL;
    t = not_null(v_46);
    if(((w_46 != NULL) && (w_46 != t)))
      _fail(t);
    else
      w_46 = t;
    t = not_null(v_46);
    {
      ATerm y_46 = NULL;
      ATerm j_47 (ATerm t)
      {
        ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
        ATerm k_47 (ATerm t)
        {
          t = not_null(c_47);
          if(((x_46 != NULL) && (x_46 != t)))
            _fail(t);
          else
            x_46 = t;
          t = not_null(a_47);
          return(t);
        }
        t = not_null(y_46);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = not_null(y_46);
        t = SSL_explode_term(not_null(z_46));
        if(((a_47 != NULL) && (a_47 != t)))
          _fail(t);
        else
          a_47 = t;
        t = not_null(a_47);
        if(match_cons(t, sym__2))
          {
            b_47 = ATgetArgument(t, 0);
            c_47 = ATgetArgument(t, 1);
            t = k_47(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(w_46);
      if(((y_46 != NULL) && (y_46 != t)))
        _fail(t);
      else
        y_46 = t;
      t = j_47(t);
      t = not_null(x_46);
      t = foldr_3_0(o_119, p_119, q_119, t);
    }
    return(t);
  }
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = d_47(t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        t = term_b_18;
        return(t);
      }
      t = crush_3_0(y_2, add_0_0, term_size_0_0, t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = n_25;
      {
        ATerm l_47 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            t = term_b_18;
            return(t);
          }
          t = crush_3_0(z_2, add_0_0, l_47, t);
          return(t);
        }
        t = l_47(t);
      }
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  ATerm g_48 (ATerm t)
  {
    ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,a_48 = NULL;
    ATerm i_48 (ATerm t)
    {
      ATerm b_48 = NULL,c_48 = NULL;
      ATerm j_48 (ATerm t)
      {
        ATerm d_48 = NULL,e_48 = NULL;
        t = not_null(c_48);
        if(((d_48 != NULL) && (d_48 != t)))
          _fail(t);
        else
          d_48 = t;
        t = not_null(c_48);
        {
          ATerm f_48 = NULL;
          ATerm k_48 (ATerm t)
          {
            t = not_null(f_48);
            if(((e_48 != NULL) && (e_48 != t)))
              _fail(t);
            else
              e_48 = t;
            t = not_null(f_48);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(b_48), not_null(d_48)), not_null(y_47));
          if(((f_48 != NULL) && (f_48 != t)))
            _fail(t);
          else
            f_48 = t;
          t = k_48(t);
          t = not_null(e_48);
        }
        return(t);
      }
      t = not_null(a_48);
      if(((b_48 != NULL) && (b_48 != t)))
        _fail(t);
      else
        b_48 = t;
      t = not_null(x_47);
      t = l_99(t);
      if(((c_48 != NULL) && (c_48 != t)))
        _fail(t);
      else
        c_48 = t;
      t = j_48(t);
      return(t);
    }
    t = not_null(s_47);
    if(((v_47 != NULL) && (v_47 != t)))
      _fail(t);
    else
      v_47 = t;
    t = not_null(t_47);
    if(((w_47 != NULL) && (w_47 != t)))
      _fail(t);
    else
      w_47 = t;
    t = not_null(u_47);
    if(((x_47 != NULL) && (x_47 != t)))
      _fail(t);
    else
      x_47 = t;
    t = not_null(s_47);
    {
      ATerm z_47 = NULL;
      ATerm h_48 (ATerm t)
      {
        t = not_null(z_47);
        if(((y_47 != NULL) && (y_47 != t)))
          _fail(t);
        else
          y_47 = t;
        t = not_null(z_47);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_47));
      if(((z_47 != NULL) && (z_47 != t)))
        _fail(t);
      else
        z_47 = t;
      t = h_48(t);
      t = not_null(w_47);
      t = k_99(t);
      if(((a_48 != NULL) && (a_48 != t)))
        _fail(t);
      else
        a_48 = t;
      t = i_48(t);
    }
    return(t);
  }
  if(((s_47 != NULL) && (s_47 != t)))
    _fail(t);
  else
    s_47 = t;
  t = not_null(s_47);
  if(match_cons(t, sym_LChoice_2))
    {
      t_47 = ATgetArgument(t, 0);
      u_47 = ATgetArgument(t, 1);
      t = g_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  ATerm o_49 (ATerm t)
  {
    ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,i_49 = NULL;
    ATerm q_49 (ATerm t)
    {
      ATerm j_49 = NULL,k_49 = NULL;
      ATerm v_49 (ATerm t)
      {
        ATerm l_49 = NULL,m_49 = NULL;
        t = not_null(k_49);
        if(((l_49 != NULL) && (l_49 != t)))
          _fail(t);
        else
          l_49 = t;
        t = not_null(k_49);
        {
          ATerm n_49 = NULL;
          ATerm w_49 (ATerm t)
          {
            t = not_null(n_49);
            if(((m_49 != NULL) && (m_49 != t)))
              _fail(t);
            else
              m_49 = t;
            t = not_null(n_49);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(j_49), not_null(l_49)), not_null(g_49));
          if(((n_49 != NULL) && (n_49 != t)))
            _fail(t);
          else
            n_49 = t;
          t = w_49(t);
          t = not_null(m_49);
        }
        return(t);
      }
      t = not_null(i_49);
      if(((j_49 != NULL) && (j_49 != t)))
        _fail(t);
      else
        j_49 = t;
      t = not_null(f_49);
      t = j_98(t);
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = v_49(t);
      return(t);
    }
    t = not_null(a_49);
    if(((d_49 != NULL) && (d_49 != t)))
      _fail(t);
    else
      d_49 = t;
    t = not_null(b_49);
    if(((e_49 != NULL) && (e_49 != t)))
      _fail(t);
    else
      e_49 = t;
    t = not_null(c_49);
    if(((f_49 != NULL) && (f_49 != t)))
      _fail(t);
    else
      f_49 = t;
    t = not_null(a_49);
    {
      ATerm h_49 = NULL;
      ATerm p_49 (ATerm t)
      {
        t = not_null(h_49);
        if(((g_49 != NULL) && (g_49 != t)))
          _fail(t);
        else
          g_49 = t;
        t = not_null(h_49);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_49));
      if(((h_49 != NULL) && (h_49 != t)))
        _fail(t);
      else
        h_49 = t;
      t = p_49(t);
      t = not_null(e_49);
      t = i_98(t);
      if(((i_49 != NULL) && (i_49 != t)))
        _fail(t);
      else
        i_49 = t;
      t = q_49(t);
    }
    return(t);
  }
  if(((a_49 != NULL) && (a_49 != t)))
    _fail(t);
  else
    a_49 = t;
  t = not_null(a_49);
  if(match_cons(t, sym_Choice_2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
      t = o_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  ATerm v_50 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,p_50 = NULL;
    ATerm x_50 (ATerm t)
    {
      ATerm q_50 = NULL,r_50 = NULL;
      ATerm y_50 (ATerm t)
      {
        ATerm s_50 = NULL,t_50 = NULL;
        t = not_null(r_50);
        if(((s_50 != NULL) && (s_50 != t)))
          _fail(t);
        else
          s_50 = t;
        t = not_null(r_50);
        {
          ATerm u_50 = NULL;
          ATerm z_50 (ATerm t)
          {
            t = not_null(u_50);
            if(((t_50 != NULL) && (t_50 != t)))
              _fail(t);
            else
              t_50 = t;
            t = not_null(u_50);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(q_50), not_null(s_50)), not_null(n_50));
          if(((u_50 != NULL) && (u_50 != t)))
            _fail(t);
          else
            u_50 = t;
          t = z_50(t);
          t = not_null(t_50);
        }
        return(t);
      }
      t = not_null(p_50);
      if(((q_50 != NULL) && (q_50 != t)))
        _fail(t);
      else
        q_50 = t;
      t = not_null(m_50);
      t = i_94(t);
      if(((r_50 != NULL) && (r_50 != t)))
        _fail(t);
      else
        r_50 = t;
      t = y_50(t);
      return(t);
    }
    t = not_null(h_50);
    if(((k_50 != NULL) && (k_50 != t)))
      _fail(t);
    else
      k_50 = t;
    t = not_null(i_50);
    if(((l_50 != NULL) && (l_50 != t)))
      _fail(t);
    else
      l_50 = t;
    t = not_null(j_50);
    if(((m_50 != NULL) && (m_50 != t)))
      _fail(t);
    else
      m_50 = t;
    t = not_null(h_50);
    {
      ATerm o_50 = NULL;
      ATerm w_50 (ATerm t)
      {
        t = not_null(o_50);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = not_null(o_50);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_50));
      if(((o_50 != NULL) && (o_50 != t)))
        _fail(t);
      else
        o_50 = t;
      t = w_50(t);
      t = not_null(l_50);
      t = h_94(t);
      if(((p_50 != NULL) && (p_50 != t)))
        _fail(t);
      else
        p_50 = t;
      t = x_50(t);
    }
    return(t);
  }
  if(((h_50 != NULL) && (h_50 != t)))
    _fail(t);
  else
    h_50 = t;
  t = not_null(h_50);
  if(match_cons(t, sym_Cong_2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
      t = v_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  ATerm p_51 (ATerm t)
  {
    ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,l_51 = NULL;
    ATerm r_51 (ATerm t)
    {
      ATerm m_51 = NULL,n_51 = NULL;
      t = not_null(l_51);
      if(((m_51 != NULL) && (m_51 != t)))
        _fail(t);
      else
        m_51 = t;
      t = not_null(l_51);
      {
        ATerm o_51 = NULL;
        ATerm s_51 (ATerm t)
        {
          t = not_null(o_51);
          if(((n_51 != NULL) && (n_51 != t)))
            _fail(t);
          else
            n_51 = t;
          t = not_null(o_51);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(m_51)), not_null(j_51));
        if(((o_51 != NULL) && (o_51 != t)))
          _fail(t);
        else
          o_51 = t;
        t = s_51(t);
        t = not_null(n_51);
      }
      return(t);
    }
    t = not_null(f_51);
    if(((h_51 != NULL) && (h_51 != t)))
      _fail(t);
    else
      h_51 = t;
    t = not_null(g_51);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    t = not_null(f_51);
    {
      ATerm k_51 = NULL;
      ATerm q_51 (ATerm t)
      {
        t = not_null(k_51);
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
        t = not_null(k_51);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_51));
      if(((k_51 != NULL) && (k_51 != t)))
        _fail(t);
      else
        k_51 = t;
      t = q_51(t);
      t = not_null(i_51);
      t = b_99(t);
      if(((l_51 != NULL) && (l_51 != t)))
        _fail(t);
      else
        l_51 = t;
      t = r_51(t);
    }
    return(t);
  }
  if(((f_51 != NULL) && (f_51 != t)))
    _fail(t);
  else
    f_51 = t;
  t = not_null(f_51);
  if(match_cons(t, sym_Match_1))
    {
      g_51 = ATgetArgument(t, 0);
      t = p_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,e_52 = NULL;
  ATerm q_52 (ATerm t)
  {
    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,k_52 = NULL;
    ATerm s_52 (ATerm t)
    {
      ATerm l_52 = NULL,m_52 = NULL;
      ATerm t_52 (ATerm t)
      {
        ATerm n_52 = NULL,o_52 = NULL;
        t = not_null(m_52);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = not_null(m_52);
        {
          ATerm p_52 = NULL;
          ATerm u_52 (ATerm t)
          {
            t = not_null(p_52);
            if(((o_52 != NULL) && (o_52 != t)))
              _fail(t);
            else
              o_52 = t;
            t = not_null(p_52);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(l_52), not_null(n_52)), not_null(i_52));
          if(((p_52 != NULL) && (p_52 != t)))
            _fail(t);
          else
            p_52 = t;
          t = u_52(t);
          t = not_null(o_52);
        }
        return(t);
      }
      t = not_null(k_52);
      if(((l_52 != NULL) && (l_52 != t)))
        _fail(t);
      else
        l_52 = t;
      t = not_null(h_52);
      t = j_99(t);
      if(((m_52 != NULL) && (m_52 != t)))
        _fail(t);
      else
        m_52 = t;
      t = t_52(t);
      return(t);
    }
    t = not_null(a_52);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    t = not_null(b_52);
    if(((g_52 != NULL) && (g_52 != t)))
      _fail(t);
    else
      g_52 = t;
    t = not_null(e_52);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(a_52);
    {
      ATerm j_52 = NULL;
      ATerm r_52 (ATerm t)
      {
        t = not_null(j_52);
        if(((i_52 != NULL) && (i_52 != t)))
          _fail(t);
        else
          i_52 = t;
        t = not_null(j_52);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_52));
      if(((j_52 != NULL) && (j_52 != t)))
        _fail(t);
      else
        j_52 = t;
      t = r_52(t);
      t = not_null(g_52);
      t = i_99(t);
      if(((k_52 != NULL) && (k_52 != t)))
        _fail(t);
      else
        k_52 = t;
      t = s_52(t);
    }
    return(t);
  }
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  t = not_null(a_52);
  if(match_cons(t, sym_Seq_2))
    {
      b_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
      t = q_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,e_53 = NULL,f_53 = NULL;
  ATerm k_54 (ATerm t)
  {
    ATerm g_53 = NULL,h_53 = NULL,t_53 = NULL,u_53 = NULL,c_54 = NULL;
    ATerm m_54 (ATerm t)
    {
      ATerm d_54 = NULL,e_54 = NULL;
      ATerm n_54 (ATerm t)
      {
        ATerm f_54 = NULL,i_54 = NULL;
        t = not_null(e_54);
        if(((f_54 != NULL) && (f_54 != t)))
          _fail(t);
        else
          f_54 = t;
        t = not_null(e_54);
        {
          ATerm j_54 = NULL;
          ATerm o_54 (ATerm t)
          {
            t = not_null(j_54);
            if(((i_54 != NULL) && (i_54 != t)))
              _fail(t);
            else
              i_54 = t;
            t = not_null(j_54);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(d_54), not_null(f_54)), not_null(u_53));
          if(((j_54 != NULL) && (j_54 != t)))
            _fail(t);
          else
            j_54 = t;
          t = o_54(t);
          t = not_null(i_54);
        }
        return(t);
      }
      t = not_null(c_54);
      if(((d_54 != NULL) && (d_54 != t)))
        _fail(t);
      else
        d_54 = t;
      t = not_null(t_53);
      t = f_99(t);
      if(((e_54 != NULL) && (e_54 != t)))
        _fail(t);
      else
        e_54 = t;
      t = n_54(t);
      return(t);
    }
    t = not_null(b_53);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(e_53);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = not_null(f_53);
    if(((t_53 != NULL) && (t_53 != t)))
      _fail(t);
    else
      t_53 = t;
    t = not_null(b_53);
    {
      ATerm v_53 = NULL;
      ATerm l_54 (ATerm t)
      {
        t = not_null(v_53);
        if(((u_53 != NULL) && (u_53 != t)))
          _fail(t);
        else
          u_53 = t;
        t = not_null(v_53);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_53));
      if(((v_53 != NULL) && (v_53 != t)))
        _fail(t);
      else
        v_53 = t;
      t = l_54(t);
      t = not_null(h_53);
      t = e_99(t);
      if(((c_54 != NULL) && (c_54 != t)))
        _fail(t);
      else
        c_54 = t;
      t = m_54(t);
    }
    return(t);
  }
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  t = not_null(b_53);
  if(match_cons(t, sym_Scope_2))
    {
      e_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
      t = k_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  ATerm e_55 (ATerm t)
  {
    ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,a_55 = NULL;
    ATerm g_55 (ATerm t)
    {
      ATerm b_55 = NULL,c_55 = NULL;
      t = not_null(a_55);
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
      t = not_null(a_55);
      {
        ATerm d_55 = NULL;
        ATerm o_55 (ATerm t)
        {
          t = not_null(d_55);
          if(((c_55 != NULL) && (c_55 != t)))
            _fail(t);
          else
            c_55 = t;
          t = not_null(d_55);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(b_55)), not_null(y_54));
        if(((d_55 != NULL) && (d_55 != t)))
          _fail(t);
        else
          d_55 = t;
        t = o_55(t);
        t = not_null(c_55);
      }
      return(t);
    }
    t = not_null(u_54);
    if(((w_54 != NULL) && (w_54 != t)))
      _fail(t);
    else
      w_54 = t;
    t = not_null(v_54);
    if(((x_54 != NULL) && (x_54 != t)))
      _fail(t);
    else
      x_54 = t;
    t = not_null(u_54);
    {
      ATerm z_54 = NULL;
      ATerm f_55 (ATerm t)
      {
        t = not_null(z_54);
        if(((y_54 != NULL) && (y_54 != t)))
          _fail(t);
        else
          y_54 = t;
        t = not_null(z_54);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_54));
      if(((z_54 != NULL) && (z_54 != t)))
        _fail(t);
      else
        z_54 = t;
      t = f_55(t);
      t = not_null(x_54);
      t = c_99(t);
      if(((a_55 != NULL) && (a_55 != t)))
        _fail(t);
      else
        a_55 = t;
      t = g_55(t);
    }
    return(t);
  }
  if(((u_54 != NULL) && (u_54 != t)))
    _fail(t);
  else
    u_54 = t;
  t = not_null(u_54);
  if(match_cons(t, sym_Build_1))
    {
      v_54 = ATgetArgument(t, 0);
      t = e_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  ATerm r_56 (ATerm t)
  {
    ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,l_56 = NULL;
    ATerm t_56 (ATerm t)
    {
      ATerm o_56 = NULL,p_56 = NULL;
      t = not_null(l_56);
      if(((o_56 != NULL) && (o_56 != t)))
        _fail(t);
      else
        o_56 = t;
      t = not_null(l_56);
      {
        ATerm q_56 = NULL;
        ATerm u_56 (ATerm t)
        {
          t = not_null(q_56);
          if(((p_56 != NULL) && (p_56 != t)))
            _fail(t);
          else
            p_56 = t;
          t = not_null(q_56);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_56)), not_null(y_55));
        if(((q_56 != NULL) && (q_56 != t)))
          _fail(t);
        else
          q_56 = t;
        t = u_56(t);
        t = not_null(p_56);
      }
      return(t);
    }
    t = not_null(u_55);
    if(((w_55 != NULL) && (w_55 != t)))
      _fail(t);
    else
      w_55 = t;
    t = not_null(v_55);
    if(((x_55 != NULL) && (x_55 != t)))
      _fail(t);
    else
      x_55 = t;
    t = not_null(u_55);
    {
      ATerm f_56 = NULL;
      ATerm s_56 (ATerm t)
      {
        t = not_null(f_56);
        if(((y_55 != NULL) && (y_55 != t)))
          _fail(t);
        else
          y_55 = t;
        t = not_null(f_56);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_55));
      if(((f_56 != NULL) && (f_56 != t)))
        _fail(t);
      else
        f_56 = t;
      t = s_56(t);
      t = not_null(x_55);
      t = t_98(t);
      if(((l_56 != NULL) && (l_56 != t)))
        _fail(t);
      else
        l_56 = t;
      t = t_56(t);
    }
    return(t);
  }
  if(((u_55 != NULL) && (u_55 != t)))
    _fail(t);
  else
    u_55 = t;
  t = not_null(u_55);
  if(match_cons(t, sym_SVar_1))
    {
      v_55 = ATgetArgument(t, 0);
      t = r_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  ATerm y_57 (ATerm t)
  {
    ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,o_57 = NULL,q_57 = NULL;
    ATerm a_58 (ATerm t)
    {
      ATerm r_57 = NULL,s_57 = NULL;
      ATerm b_58 (ATerm t)
      {
        ATerm t_57 = NULL,u_57 = NULL;
        ATerm c_58 (ATerm t)
        {
          ATerm v_57 = NULL,w_57 = NULL;
          t = not_null(u_57);
          if(((v_57 != NULL) && (v_57 != t)))
            _fail(t);
          else
            v_57 = t;
          t = not_null(u_57);
          {
            ATerm x_57 = NULL;
            ATerm d_58 (ATerm t)
            {
              t = not_null(x_57);
              if(((w_57 != NULL) && (w_57 != t)))
                _fail(t);
              else
                w_57 = t;
              t = not_null(x_57);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(r_57), not_null(t_57), not_null(v_57)), not_null(o_57));
            if(((x_57 != NULL) && (x_57 != t)))
              _fail(t);
            else
              x_57 = t;
            t = d_58(t);
            t = not_null(w_57);
          }
          return(t);
        }
        t = not_null(s_57);
        if(((t_57 != NULL) && (t_57 != t)))
          _fail(t);
        else
          t_57 = t;
        t = not_null(m_57);
        t = a_99(t);
        if(((u_57 != NULL) && (u_57 != t)))
          _fail(t);
        else
          u_57 = t;
        t = c_58(t);
        return(t);
      }
      t = not_null(q_57);
      if(((r_57 != NULL) && (r_57 != t)))
        _fail(t);
      else
        r_57 = t;
      t = not_null(l_57);
      t = z_98(t);
      if(((s_57 != NULL) && (s_57 != t)))
        _fail(t);
      else
        s_57 = t;
      t = b_58(t);
      return(t);
    }
    t = not_null(f_57);
    if(((j_57 != NULL) && (j_57 != t)))
      _fail(t);
    else
      j_57 = t;
    t = not_null(g_57);
    if(((k_57 != NULL) && (k_57 != t)))
      _fail(t);
    else
      k_57 = t;
    t = not_null(h_57);
    if(((l_57 != NULL) && (l_57 != t)))
      _fail(t);
    else
      l_57 = t;
    t = not_null(i_57);
    if(((m_57 != NULL) && (m_57 != t)))
      _fail(t);
    else
      m_57 = t;
    t = not_null(f_57);
    {
      ATerm p_57 = NULL;
      ATerm z_57 (ATerm t)
      {
        t = not_null(p_57);
        if(((o_57 != NULL) && (o_57 != t)))
          _fail(t);
        else
          o_57 = t;
        t = not_null(p_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_57));
      if(((p_57 != NULL) && (p_57 != t)))
        _fail(t);
      else
        p_57 = t;
      t = z_57(t);
      t = not_null(k_57);
      t = y_98(t);
      if(((q_57 != NULL) && (q_57 != t)))
        _fail(t);
      else
        q_57 = t;
      t = a_58(t);
    }
    return(t);
  }
  if(((f_57 != NULL) && (f_57 != t)))
    _fail(t);
  else
    f_57 = t;
  t = not_null(f_57);
  if(match_cons(t, sym_CallT_3))
    {
      g_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
      i_57 = ATgetArgument(t, 2);
      t = y_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  ATerm i_58 = NULL;
  ATerm o_58 (ATerm t)
  {
    ATerm j_58 = NULL,k_58 = NULL,m_58 = NULL;
    t = not_null(i_58);
    if(((j_58 != NULL) && (j_58 != t)))
      _fail(t);
    else
      j_58 = t;
    t = not_null(i_58);
    {
      ATerm s_26;
      s_26 = t;
      {
        ATerm l_58 = NULL;
        ATerm p_58 (ATerm t)
        {
          t = not_null(l_58);
          if(((k_58 != NULL) && (k_58 != t)))
            _fail(t);
          else
            k_58 = t;
          t = not_null(l_58);
          return(t);
        }
        t = SSLgetAnnotations(not_null(j_58));
        if(((l_58 != NULL) && (l_58 != t)))
          _fail(t);
        else
          l_58 = t;
        t = p_58(t);
      }
      t = s_26;
      {
        ATerm n_58 = NULL;
        ATerm q_58 (ATerm t)
        {
          t = not_null(n_58);
          if(((m_58 != NULL) && (m_58 != t)))
            _fail(t);
          else
            m_58 = t;
          t = not_null(n_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(k_58));
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = q_58(t);
        t = not_null(m_58);
      }
    }
    return(t);
  }
  if(((i_58 != NULL) && (i_58 != t)))
    _fail(t);
  else
    i_58 = t;
  t = not_null(i_58);
  if(match_cons(t, sym_Fail_0))
    {
      t = o_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  ATerm v_58 = NULL;
  ATerm b_59 (ATerm t)
  {
    ATerm w_58 = NULL,x_58 = NULL,z_58 = NULL;
    t = not_null(v_58);
    if(((w_58 != NULL) && (w_58 != t)))
      _fail(t);
    else
      w_58 = t;
    t = not_null(v_58);
    {
      ATerm t_26;
      t_26 = t;
      {
        ATerm y_58 = NULL;
        ATerm c_59 (ATerm t)
        {
          t = not_null(y_58);
          if(((x_58 != NULL) && (x_58 != t)))
            _fail(t);
          else
            x_58 = t;
          t = not_null(y_58);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_58));
        if(((y_58 != NULL) && (y_58 != t)))
          _fail(t);
        else
          y_58 = t;
        t = c_59(t);
      }
      t = t_26;
      {
        ATerm a_59 = NULL;
        ATerm d_59 (ATerm t)
        {
          t = not_null(a_59);
          if(((z_58 != NULL) && (z_58 != t)))
            _fail(t);
          else
            z_58 = t;
          t = not_null(a_59);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_58));
        if(((a_59 != NULL) && (a_59 != t)))
          _fail(t);
        else
          a_59 = t;
        t = d_59(t);
        t = not_null(z_58);
      }
    }
    return(t);
  }
  if(((v_58 != NULL) && (v_58 != t)))
    _fail(t);
  else
    v_58 = t;
  t = not_null(v_58);
  if(match_cons(t, sym_Id_0))
    {
      t = b_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm e_59 (ATerm t)
  {
    ATerm d_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0_0(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = d_27;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0_0(t);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              {
                ATerm o_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(a_3, _id, _id, t);
                    ;
                    LocalPopChoice(p_27);
                  }
                else
                  {
                    t = o_27;
                    {
                      ATerm d_28 = t;
                      int e_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1_0(_id, t);
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
                                t = Match_1_0(_id, t);
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
                                      ATerm b_3 (ATerm t)
                                      {
                                        t = Match_1_0(_id, t);
                                        return(t);
                                      }
                                      t = Seq_2_0(b_3, _id, t);
                                      ;
                                      LocalPopChoice(i_28);
                                    }
                                  else
                                    {
                                      t = h_28;
                                      {
                                        ATerm j_28 = t;
                                        int k_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Scope_2_0(_id, c_3, t);
                                            ;
                                            LocalPopChoice(k_28);
                                          }
                                        else
                                          {
                                            t = j_28;
                                            {
                                              ATerm l_28 = t;
                                              int m_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_3 (ATerm t)
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      t = Match_1_0(_id, t);
                                                      return(t);
                                                    }
                                                    t = Seq_2_0(e_3, _id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, d_3, t);
                                                  ;
                                                  LocalPopChoice(m_28);
                                                }
                                              else
                                                {
                                                  t = l_28;
                                                  {
                                                    ATerm n_28 = t;
                                                    int o_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_3 (ATerm t)
                                                        {
                                                          ATerm g_3 (ATerm t)
                                                          {
                                                            ATerm h_3 (ATerm t)
                                                            {
                                                              t = Match_1_0(_id, t);
                                                              return(t);
                                                            }
                                                            t = Seq_2_0(h_3, _id, t);
                                                            return(t);
                                                          }
                                                          t = Scope_2_0(_id, g_3, t);
                                                          return(t);
                                                        }
                                                        t = Seq_2_0(f_3, _id, t);
                                                        ;
                                                        LocalPopChoice(o_28);
                                                      }
                                                    else
                                                      {
                                                        t = n_28;
                                                        {
                                                          ATerm p_28 = t;
                                                          int c_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2_0(_id, _id, t);
                                                              ;
                                                              LocalPopChoice(c_30);
                                                            }
                                                          else
                                                            {
                                                              t = p_28;
                                                              {
                                                                ATerm d_30 = t;
                                                                int e_30 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(e_59, e_59, t);
                                                                    ;
                                                                    LocalPopChoice(e_30);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_30;
                                                                    t = LChoice_2_0(e_59, e_59, t);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = e_59(t);
  {
    ATerm f_30;
    f_30 = t;
    {
      ATerm i_3 (ATerm t)
      {
        t = term_u_30;
        return(t);
      }
      t = split_2_0(term_size_0_0, i_3, t);
      t = leq_0_0(t);
    }
    t = f_30;
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm f_59 (ATerm t)
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = SRTS_one(f_59, t);
      }
    return(t);
  }
  t = f_59(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  ATerm k_60 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,a_60 = NULL;
    ATerm m_60 (ATerm t)
    {
      ATerm b_60 = NULL,c_60 = NULL;
      ATerm n_60 (ATerm t)
      {
        ATerm d_60 = NULL,e_60 = NULL;
        ATerm o_60 (ATerm t)
        {
          ATerm f_60 = NULL,g_60 = NULL;
          ATerm p_60 (ATerm t)
          {
            ATerm h_60 = NULL,i_60 = NULL;
            t = not_null(g_60);
            if(((h_60 != NULL) && (h_60 != t)))
              _fail(t);
            else
              h_60 = t;
            t = not_null(g_60);
            {
              ATerm j_60 = NULL;
              ATerm q_60 (ATerm t)
              {
                t = not_null(j_60);
                if(((i_60 != NULL) && (i_60 != t)))
                  _fail(t);
                else
                  i_60 = t;
                t = not_null(j_60);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(b_60), not_null(d_60), not_null(f_60), not_null(h_60)), not_null(y_59));
              if(((j_60 != NULL) && (j_60 != t)))
                _fail(t);
              else
                j_60 = t;
              t = q_60(t);
              t = not_null(i_60);
            }
            return(t);
          }
          t = not_null(e_60);
          if(((f_60 != NULL) && (f_60 != t)))
            _fail(t);
          else
            f_60 = t;
          t = not_null(x_59);
          t = p_101(t);
          if(((g_60 != NULL) && (g_60 != t)))
            _fail(t);
          else
            g_60 = t;
          t = p_60(t);
          return(t);
        }
        t = not_null(c_60);
        if(((d_60 != NULL) && (d_60 != t)))
          _fail(t);
        else
          d_60 = t;
        t = not_null(w_59);
        t = o_101(t);
        if(((e_60 != NULL) && (e_60 != t)))
          _fail(t);
        else
          e_60 = t;
        t = o_60(t);
        return(t);
      }
      t = not_null(a_60);
      if(((b_60 != NULL) && (b_60 != t)))
        _fail(t);
      else
        b_60 = t;
      t = not_null(v_59);
      t = n_101(t);
      if(((c_60 != NULL) && (c_60 != t)))
        _fail(t);
      else
        c_60 = t;
      t = n_60(t);
      return(t);
    }
    t = not_null(o_59);
    if(((t_59 != NULL) && (t_59 != t)))
      _fail(t);
    else
      t_59 = t;
    t = not_null(p_59);
    if(((u_59 != NULL) && (u_59 != t)))
      _fail(t);
    else
      u_59 = t;
    t = not_null(q_59);
    if(((v_59 != NULL) && (v_59 != t)))
      _fail(t);
    else
      v_59 = t;
    t = not_null(r_59);
    if(((w_59 != NULL) && (w_59 != t)))
      _fail(t);
    else
      w_59 = t;
    t = not_null(s_59);
    if(((x_59 != NULL) && (x_59 != t)))
      _fail(t);
    else
      x_59 = t;
    t = not_null(o_59);
    {
      ATerm z_59 = NULL;
      ATerm l_60 (ATerm t)
      {
        t = not_null(z_59);
        if(((y_59 != NULL) && (y_59 != t)))
          _fail(t);
        else
          y_59 = t;
        t = not_null(z_59);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_59));
      if(((z_59 != NULL) && (z_59 != t)))
        _fail(t);
      else
        z_59 = t;
      t = l_60(t);
      t = not_null(u_59);
      t = m_101(t);
      if(((a_60 != NULL) && (a_60 != t)))
        _fail(t);
      else
        a_60 = t;
      t = m_60(t);
    }
    return(t);
  }
  if(((o_59 != NULL) && (o_59 != t)))
    _fail(t);
  else
    o_59 = t;
  t = not_null(o_59);
  if(match_cons(t, sym_SDefT_4))
    {
      p_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
      r_59 = ATgetArgument(t, 2);
      s_59 = ATgetArgument(t, 3);
      t = k_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm a_61 = NULL;
    ATerm g_61 (ATerm t)
    {
      t = not_null(a_61);
      if(((y_60 != NULL) && (y_60 != t)))
        _fail(t);
      else
        y_60 = t;
      t = not_null(a_61);
      return(t);
    }
    ATerm x_30 = t;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        if(((z_60 != NULL) && (z_60 != t)))
          _fail(t);
        else
          z_60 = t;
        t = not_null(z_60);
        if(match_string(t, "main_0_0"))
          {
            t = not_null(z_60);
          }
        else
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_30;
      }
    if(((a_61 != NULL) && (a_61 != t)))
      _fail(t);
    else
      a_61 = t;
    t = g_61(t);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm y_30;
    y_30 = t;
    {
      ATerm z_30 = t;
      if((PushChoice() == 0))
        {
          ATerm l_3 (ATerm t)
          {
            ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
            ATerm h_61 (ATerm t)
            {
              t = not_null(d_61);
              if(((y_60 != NULL) && (y_60 != t)))
                _fail(t);
              else
                y_60 = t;
              t = not_null(b_61);
              return(t);
            }
            if(((b_61 != NULL) && (b_61 != t)))
              _fail(t);
            else
              b_61 = t;
            t = not_null(b_61);
            if(match_cons(t, sym_CallT_3))
              {
                c_61 = ATgetArgument(t, 0);
                e_61 = ATgetArgument(t, 1);
                f_61 = ATgetArgument(t, 2);
                t = not_null(c_61);
                if(match_cons(t, sym_SVar_1))
                  {
                    d_61 = ATgetArgument(t, 0);
                    t = not_null(e_61);
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = not_null(f_61);
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = h_61(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(l_3, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_30;
        }
    }
    t = y_30;
    t = body_to_inline_0_0(t);
    return(t);
  }
  t = SDefT_4_0(j_3, _id, _id, k_3, t);
  return(t);
}
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,e_62 = NULL;
  ATerm n_63 (ATerm t)
  {
    ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,h_63 = NULL,j_63 = NULL,l_63 = NULL;
    t = not_null(a_62);
    if(((f_62 != NULL) && (f_62 != t)))
      _fail(t);
    else
      f_62 = t;
    t = not_null(e_62);
    if(((g_62 != NULL) && (g_62 != t)))
      _fail(t);
    else
      g_62 = t;
    t = not_null(z_61);
    {
      ATerm a_31;
      a_31 = t;
      {
        ATerm n_62 = NULL;
        ATerm o_63 (ATerm t)
        {
          ATerm q_62 = NULL;
          ATerm q_63 (ATerm t)
          {
            ATerm r_62 = NULL;
            ATerm r_63 (ATerm t)
            {
              ATerm s_62 = NULL;
              ATerm s_63 (ATerm t)
              {
                ATerm v_62 = NULL;
                ATerm v_63 (ATerm t)
                {
                  ATerm w_62 = NULL,g_63 = NULL;
                  ATerm y_63 (ATerm t)
                  {
                    t = not_null(g_63);
                    if(((m_62 != NULL) && (m_62 != t)))
                      _fail(t);
                    else
                      m_62 = t;
                    t = not_null(g_63);
                    return(t);
                  }
                  t = not_null(v_62);
                  if(((j_62 != NULL) && (j_62 != t)))
                    _fail(t);
                  else
                    j_62 = t;
                  t = not_null(v_62);
                  {
                    ATerm x_62 = NULL;
                    ATerm w_63 (ATerm t)
                    {
                      t = not_null(x_62);
                      if(((w_62 != NULL) && (w_62 != t)))
                        _fail(t);
                      else
                        w_62 = t;
                      t = not_null(x_62);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), not_null(l_62));
                    t = zip_1_0(_id, t);
                    if(((x_62 != NULL) && (x_62 != t)))
                      _fail(t);
                    else
                      x_62 = t;
                    t = w_63(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_62), not_null(g_62));
                    {
                      ATerm m_3 (ATerm t)
                      {
                        ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
                        ATerm x_63 (ATerm t)
                        {
                          ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
                          t = not_null(a_63);
                          if(((d_63 != NULL) && (d_63 != t)))
                            _fail(t);
                          else
                            d_63 = t;
                          t = not_null(b_63);
                          if(((e_63 != NULL) && (e_63 != t)))
                            _fail(t);
                          else
                            e_63 = t;
                          t = not_null(c_63);
                          if(((f_63 != NULL) && (f_63 != t)))
                            _fail(t);
                          else
                            f_63 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_63))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_63)))));
                          return(t);
                        }
                        if(((y_62 != NULL) && (y_62 != t)))
                          _fail(t);
                        else
                          y_62 = t;
                        t = not_null(y_62);
                        if(match_cons(t, sym__2))
                          {
                            z_62 = ATgetArgument(t, 0);
                            c_63 = ATgetArgument(t, 1);
                            t = not_null(z_62);
                            if(match_cons(t, sym__2))
                              {
                                a_63 = ATgetArgument(t, 0);
                                b_63 = ATgetArgument(t, 1);
                                t = x_63(t);
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = zip_1_0(m_3, t);
                      if(((g_63 != NULL) && (g_63 != t)))
                        _fail(t);
                      else
                        g_63 = t;
                      t = y_63(t);
                    }
                  }
                  return(t);
                }
                t = not_null(s_62);
                if(((l_62 != NULL) && (l_62 != t)))
                  _fail(t);
                else
                  l_62 = t;
                t = not_null(l_62);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm t_62 = NULL;
                    ATerm u_62 = NULL;
                    ATerm t_63 (ATerm t)
                    {
                      t = not_null(u_62);
                      if(((t_62 != NULL) && (t_62 != t)))
                        _fail(t);
                      else
                        t_62 = t;
                      t = not_null(u_62);
                      return(t);
                    }
                    if(((u_62 != NULL) && (u_62 != t)))
                      _fail(t);
                    else
                      u_62 = t;
                    t = t_63(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_62));
                    return(t);
                  }
                  t = map_1_0(n_3, t);
                  if(((v_62 != NULL) && (v_62 != t)))
                    _fail(t);
                  else
                    v_62 = t;
                  t = v_63(t);
                }
                return(t);
              }
              t = not_null(r_62);
              if(((i_62 != NULL) && (i_62 != t)))
                _fail(t);
              else
                i_62 = t;
              t = not_null(g_62);
              t = map_1_0(new_0_0, t);
              if(((s_62 != NULL) && (s_62 != t)))
                _fail(t);
              else
                s_62 = t;
              t = s_63(t);
              return(t);
            }
            t = not_null(q_62);
            if(((h_62 != NULL) && (h_62 != t)))
              _fail(t);
            else
              h_62 = t;
            t = not_null(q_62);
            t = new_0_0(t);
            if(((r_62 != NULL) && (r_62 != t)))
              _fail(t);
            else
              r_62 = t;
            t = r_63(t);
            return(t);
          }
          t = not_null(n_62);
          if(((k_62 != NULL) && (k_62 != t)))
            _fail(t);
          else
            k_62 = t;
          t = not_null(k_62);
          {
            ATerm o_3 (ATerm t)
            {
              ATerm o_62 = NULL;
              ATerm p_62 = NULL;
              ATerm p_63 (ATerm t)
              {
                t = not_null(p_62);
                if(((o_62 != NULL) && (o_62 != t)))
                  _fail(t);
                else
                  o_62 = t;
                t = not_null(p_62);
                return(t);
              }
              if(((p_62 != NULL) && (p_62 != t)))
                _fail(t);
              else
                p_62 = t;
              t = p_63(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_62));
              return(t);
            }
            t = map_1_0(o_3, t);
            if(((q_62 != NULL) && (q_62 != t)))
              _fail(t);
            else
              q_62 = t;
            t = q_63(t);
          }
          return(t);
        }
        t = not_null(g_62);
        t = map_1_0(new_0_0, t);
        if(((n_62 != NULL) && (n_62 != t)))
          _fail(t);
        else
          n_62 = t;
        t = o_63(t);
      }
      t = a_31;
      {
        ATerm w_31;
        w_31 = t;
        {
          ATerm i_63 = NULL;
          ATerm z_63 (ATerm t)
          {
            t = not_null(i_63);
            if(((h_63 != NULL) && (h_63 != t)))
              _fail(t);
            else
              h_63 = t;
            t = not_null(i_63);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), not_null(l_62));
          t = conc_0_0(t);
          if(((i_63 != NULL) && (i_63 != t)))
            _fail(t);
          else
            i_63 = t;
          t = z_63(t);
        }
        t = w_31;
        {
          ATerm x_31;
          x_31 = t;
          {
            ATerm k_63 = NULL;
            ATerm c_64 (ATerm t)
            {
              t = not_null(k_63);
              if(((j_63 != NULL) && (j_63 != t)))
                _fail(t);
              else
                j_63 = t;
              t = not_null(k_63);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_62), not_null(h_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))));
            t = Mapp2_0_0(t);
            if(((k_63 != NULL) && (k_63 != t)))
              _fail(t);
            else
              k_63 = t;
            t = c_64(t);
          }
          t = x_31;
          {
            ATerm m_63 = NULL;
            ATerm d_64 (ATerm t)
            {
              t = not_null(m_63);
              if(((l_63 != NULL) && (l_63 != t)))
                _fail(t);
              else
                l_63 = t;
              t = not_null(m_63);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_62), not_null(j_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))));
            t = Bapp2_0_0(t);
            if(((m_63 != NULL) && (m_63 != t)))
              _fail(t);
            else
              m_63 = t;
            t = d_64(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_63)), not_null(i_62)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_62)), not_null(l_63))));
          }
        }
      }
    }
    return(t);
  }
  if(((z_61 != NULL) && (z_61 != t)))
    _fail(t);
  else
    z_61 = t;
  t = not_null(z_61);
  if(match_cons(t, sym_Cong_2))
    {
      a_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
      t = n_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL;
  ATerm k_66 (ATerm t)
  {
    ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
    t = not_null(a_65);
    if(((b_65 != NULL) && (b_65 != t)))
      _fail(t);
    else
      b_65 = t;
    t = not_null(z_64);
    {
      ATerm g_65 = NULL;
      ATerm n_66 (ATerm t)
      {
        ATerm k_65 = NULL;
        ATerm p_66 (ATerm t)
        {
          t = not_null(k_65);
          if(((f_65 != NULL) && (f_65 != t)))
            _fail(t);
          else
            f_65 = t;
          t = not_null(k_65);
          return(t);
        }
        t = not_null(g_65);
        if(((e_65 != NULL) && (e_65 != t)))
          _fail(t);
        else
          e_65 = t;
        t = not_null(b_65);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
            ATerm o_66 (ATerm t)
            {
              t = not_null(i_65);
              if(((c_65 != NULL) && (c_65 != t)))
                _fail(t);
              else
                c_65 = t;
              t = not_null(j_65);
              if(((d_65 != NULL) && (d_65 != t)))
                _fail(t);
              else
                d_65 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_65));
              return(t);
            }
            if(((h_65 != NULL) && (h_65 != t)))
              _fail(t);
            else
              h_65 = t;
            t = not_null(h_65);
            if(match_cons(t, sym_Anno_2))
              {
                i_65 = ATgetArgument(t, 0);
                j_65 = ATgetArgument(t, 1);
                t = o_66(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(p_3, t);
          if(((k_65 != NULL) && (k_65 != t)))
            _fail(t);
          else
            k_65 = t;
          t = p_66(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((g_65 != NULL) && (g_65 != t)))
        _fail(t);
      else
        g_65 = t;
      t = n_66(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_31, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_65)), not_null(c_65))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_65))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_65))));
    }
    return(t);
  }
  ATerm l_66 (ATerm t)
  {
    ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
    t = not_null(a_65);
    if(((l_65 != NULL) && (l_65 != t)))
      _fail(t);
    else
      l_65 = t;
    t = not_null(z_64);
    {
      ATerm v_65 = NULL;
      ATerm q_66 (ATerm t)
      {
        ATerm z_65 = NULL;
        ATerm s_66 (ATerm t)
        {
          t = not_null(z_65);
          if(((o_65 != NULL) && (o_65 != t)))
            _fail(t);
          else
            o_65 = t;
          t = not_null(z_65);
          return(t);
        }
        t = not_null(v_65);
        if(((n_65 != NULL) && (n_65 != t)))
          _fail(t);
        else
          n_65 = t;
        t = not_null(l_65);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm w_65 = NULL,x_65 = NULL;
            ATerm r_66 (ATerm t)
            {
              t = not_null(x_65);
              if(((m_65 != NULL) && (m_65 != t)))
                _fail(t);
              else
                m_65 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_65));
              return(t);
            }
            if(((w_65 != NULL) && (w_65 != t)))
              _fail(t);
            else
              w_65 = t;
            t = not_null(w_65);
            if(match_cons(t, sym_RootApp_1))
              {
                x_65 = ATgetArgument(t, 0);
                t = r_66(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          if(((z_65 != NULL) && (z_65 != t)))
            _fail(t);
          else
            z_65 = t;
          t = s_66(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((v_65 != NULL) && (v_65 != t)))
        _fail(t);
      else
        v_65 = t;
      t = q_66(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_65))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_65))));
    }
    return(t);
  }
  ATerm m_66 (ATerm t)
  {
    ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
    t = not_null(a_65);
    if(((a_66 != NULL) && (a_66 != t)))
      _fail(t);
    else
      a_66 = t;
    t = not_null(z_64);
    {
      ATerm f_66 = NULL;
      ATerm t_66 (ATerm t)
      {
        ATerm j_66 = NULL;
        ATerm v_66 (ATerm t)
        {
          t = not_null(j_66);
          if(((e_66 != NULL) && (e_66 != t)))
            _fail(t);
          else
            e_66 = t;
          t = not_null(j_66);
          return(t);
        }
        t = not_null(f_66);
        if(((d_66 != NULL) && (d_66 != t)))
          _fail(t);
        else
          d_66 = t;
        t = not_null(a_66);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
            ATerm u_66 (ATerm t)
            {
              t = not_null(h_66);
              if(((b_66 != NULL) && (b_66 != t)))
                _fail(t);
              else
                b_66 = t;
              t = not_null(i_66);
              if(((c_66 != NULL) && (c_66 != t)))
                _fail(t);
              else
                c_66 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_66));
              return(t);
            }
            if(((g_66 != NULL) && (g_66 != t)))
              _fail(t);
            else
              g_66 = t;
            t = not_null(g_66);
            if(match_cons(t, sym_App_2))
              {
                h_66 = ATgetArgument(t, 0);
                i_66 = ATgetArgument(t, 1);
                t = u_66(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(r_3, t);
          if(((j_66 != NULL) && (j_66 != t)))
            _fail(t);
          else
            j_66 = t;
          t = v_66(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((f_66 != NULL) && (f_66 != t)))
        _fail(t);
      else
        f_66 = t;
      t = t_66(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_66), not_null(c_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_66)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_66))));
    }
    return(t);
  }
  if(((z_64 != NULL) && (z_64 != t)))
    _fail(t);
  else
    z_64 = t;
  t = not_null(z_64);
  if(match_cons(t, sym_Build_1))
    {
      a_65 = ATgetArgument(t, 0);
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_66(t);
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
                  t = l_66(t);
                  ;
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  t = m_66(t);
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
ATerm Zip3_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  ATerm d_67 (ATerm t)
  {
    ATerm b_67 = NULL,c_67 = NULL;
    t = not_null(z_66);
    if(((b_67 != NULL) && (b_67 != t)))
      _fail(t);
    else
      b_67 = t;
    t = not_null(a_67);
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), not_null(b_67));
    return(t);
  }
  if(((y_66 != NULL) && (y_66 != t)))
    _fail(t);
  else
    y_66 = t;
  t = not_null(y_66);
  if(match_cons(t, sym__2))
    {
      z_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
      t = d_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
  ATerm t_67 (ATerm t)
  {
    ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
    t = not_null(k_67);
    if(((p_67 != NULL) && (p_67 != t)))
      _fail(t);
    else
      p_67 = t;
    t = not_null(l_67);
    if(((r_67 != NULL) && (r_67 != t)))
      _fail(t);
    else
      r_67 = t;
    t = not_null(n_67);
    if(((q_67 != NULL) && (q_67 != t)))
      _fail(t);
    else
      q_67 = t;
    t = not_null(o_67);
    if(((s_67 != NULL) && (s_67 != t)))
      _fail(t);
    else
      s_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_67), not_null(q_67)), (ATerm) ATmakeAppl(sym__2, not_null(r_67), not_null(s_67)));
    return(t);
  }
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  t = not_null(i_67);
  if(match_cons(t, sym__2))
    {
      j_67 = ATgetArgument(t, 0);
      m_67 = ATgetArgument(t, 1);
      t = not_null(j_67);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_67 = ATgetFirst((ATermList) t);
          l_67 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_67);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_67 = ATgetFirst((ATermList) t);
              o_67 = (ATerm) ATgetNext((ATermList) t);
              t = t_67(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  ATerm b_68 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = not_null(y_67);
  if(match_cons(t, sym__2))
    {
      z_67 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
      t = not_null(z_67);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(a_68);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_68(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm t)
{
  ATerm c_68 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_115(t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = b_115(t);
        t = _2_0(d_115, c_68, t);
        t = c_115(t);
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, f_115, t);
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,b_70 = NULL,c_70 = NULL,m_70 = NULL;
  ATerm i_72 (ATerm t)
  {
    ATerm n_70 = NULL,o_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,c_72 = NULL,e_72 = NULL,g_72 = NULL;
    t = not_null(p_69);
    if(((n_70 != NULL) && (n_70 != t)))
      _fail(t);
    else
      n_70 = t;
    t = not_null(q_69);
    if(((o_70 != NULL) && (o_70 != t)))
      _fail(t);
    else
      o_70 = t;
    t = not_null(c_70);
    if(((x_70 != NULL) && (x_70 != t)))
      _fail(t);
    else
      x_70 = t;
    t = not_null(k_69);
    {
      ATerm x_32;
      x_32 = t;
      {
        ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
        ATerm j_72 (ATerm t)
        {
          ATerm k_71 = NULL;
          ATerm l_72 (ATerm t)
          {
            ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
            ATerm m_72 (ATerm t)
            {
              ATerm q_71 = NULL;
              ATerm o_72 (ATerm t)
              {
                ATerm r_71 = NULL,b_72 = NULL;
                ATerm r_72 (ATerm t)
                {
                  t = not_null(b_72);
                  if(((e_71 != NULL) && (e_71 != t)))
                    _fail(t);
                  else
                    e_71 = t;
                  t = not_null(b_72);
                  return(t);
                }
                t = not_null(q_71);
                if(((b_71 != NULL) && (b_71 != t)))
                  _fail(t);
                else
                  b_71 = t;
                t = not_null(q_71);
                {
                  ATerm s_71 = NULL;
                  ATerm p_72 (ATerm t)
                  {
                    t = not_null(s_71);
                    if(((r_71 != NULL) && (r_71 != t)))
                      _fail(t);
                    else
                      r_71 = t;
                    t = not_null(s_71);
                    return(t);
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(d_71));
                  t = zip_1_0(_id, t);
                  if(((s_71 != NULL) && (s_71 != t)))
                    _fail(t);
                  else
                    s_71 = t;
                  t = p_72(t);
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_71), (ATerm) ATinsert(CheckATermList(not_null(o_70)), not_null(x_70)));
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
                      ATerm q_72 (ATerm t)
                      {
                        ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
                        t = not_null(v_71);
                        if(((y_71 != NULL) && (y_71 != t)))
                          _fail(t);
                        else
                          y_71 = t;
                        t = not_null(w_71);
                        if(((z_71 != NULL) && (z_71 != t)))
                          _fail(t);
                        else
                          z_71 = t;
                        t = not_null(x_71);
                        if(((a_72 != NULL) && (a_72 != t)))
                          _fail(t);
                        else
                          a_72 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_71))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_72), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_71)))));
                        return(t);
                      }
                      if(((t_71 != NULL) && (t_71 != t)))
                        _fail(t);
                      else
                        t_71 = t;
                      t = not_null(t_71);
                      if(match_cons(t, sym__2))
                        {
                          u_71 = ATgetArgument(t, 0);
                          x_71 = ATgetArgument(t, 1);
                          t = not_null(u_71);
                          if(match_cons(t, sym__2))
                            {
                              v_71 = ATgetArgument(t, 0);
                              w_71 = ATgetArgument(t, 1);
                              t = q_72(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = zip_1_0(s_3, t);
                    if(((b_72 != NULL) && (b_72 != t)))
                      _fail(t);
                    else
                      b_72 = t;
                    t = r_72(t);
                  }
                }
                return(t);
              }
              t = not_null(m_71);
              if(((a_71 != NULL) && (a_71 != t)))
                _fail(t);
              else
                a_71 = t;
              t = not_null(n_71);
              if(((d_71 != NULL) && (d_71 != t)))
                _fail(t);
              else
                d_71 = t;
              t = not_null(l_71);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm o_71 = NULL;
                  ATerm p_71 = NULL;
                  ATerm n_72 (ATerm t)
                  {
                    t = not_null(p_71);
                    if(((o_71 != NULL) && (o_71 != t)))
                      _fail(t);
                    else
                      o_71 = t;
                    t = not_null(p_71);
                    return(t);
                  }
                  if(((p_71 != NULL) && (p_71 != t)))
                    _fail(t);
                  else
                    p_71 = t;
                  t = n_72(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_71));
                  return(t);
                }
                t = map_1_0(t_3, t);
                if(((q_71 != NULL) && (q_71 != t)))
                  _fail(t);
                else
                  q_71 = t;
                t = o_72(t);
              }
              return(t);
            }
            t = not_null(k_71);
            if(((z_70 != NULL) && (z_70 != t)))
              _fail(t);
            else
              z_70 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(o_70)), not_null(x_70));
            t = map_1_0(new_0_0, t);
            if(((l_71 != NULL) && (l_71 != t)))
              _fail(t);
            else
              l_71 = t;
            t = not_null(l_71);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_71 = ATgetFirst((ATermList) t);
                n_71 = (ATerm) ATgetNext((ATermList) t);
                t = m_72(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(g_71);
          if(((y_70 != NULL) && (y_70 != t)))
            _fail(t);
          else
            y_70 = t;
          t = not_null(h_71);
          if(((c_71 != NULL) && (c_71 != t)))
            _fail(t);
          else
            c_71 = t;
          t = not_null(f_71);
          {
            ATerm u_3 (ATerm t)
            {
              ATerm i_71 = NULL;
              ATerm j_71 = NULL;
              ATerm k_72 (ATerm t)
              {
                t = not_null(j_71);
                if(((i_71 != NULL) && (i_71 != t)))
                  _fail(t);
                else
                  i_71 = t;
                t = not_null(j_71);
                return(t);
              }
              if(((j_71 != NULL) && (j_71 != t)))
                _fail(t);
              else
                j_71 = t;
              t = k_72(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_71));
              return(t);
            }
            t = map_1_0(u_3, t);
            if(((k_71 != NULL) && (k_71 != t)))
              _fail(t);
            else
              k_71 = t;
            t = l_72(t);
          }
          return(t);
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(o_70)), not_null(x_70));
        t = map_1_0(new_0_0, t);
        if(((f_71 != NULL) && (f_71 != t)))
          _fail(t);
        else
          f_71 = t;
        t = not_null(f_71);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_71 = ATgetFirst((ATermList) t);
            h_71 = (ATerm) ATgetNext((ATermList) t);
            t = j_72(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = x_32;
      {
        ATerm e_33;
        e_33 = t;
        {
          ATerm d_72 = NULL;
          ATerm s_72 (ATerm t)
          {
            t = not_null(d_72);
            if(((c_72 != NULL) && (c_72 != t)))
              _fail(t);
            else
              c_72 = t;
            t = not_null(d_72);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(d_71));
          t = conc_0_0(t);
          if(((d_72 != NULL) && (d_72 != t)))
            _fail(t);
          else
            d_72 = t;
          t = s_72(t);
        }
        t = e_33;
        {
          ATerm f_33;
          f_33 = t;
          {
            ATerm f_72 = NULL;
            ATerm t_72 (ATerm t)
            {
              t = not_null(f_72);
              if(((e_72 != NULL) && (e_72 != t)))
                _fail(t);
              else
                e_72 = t;
              t = not_null(f_72);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_70), not_null(z_70)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_70))));
            t = Mapp2_0_0(t);
            if(((f_72 != NULL) && (f_72 != t)))
              _fail(t);
            else
              f_72 = t;
            t = t_72(t);
          }
          t = f_33;
          {
            ATerm h_72 = NULL;
            ATerm u_72 (ATerm t)
            {
              t = not_null(h_72);
              if(((g_72 != NULL) && (g_72 != t)))
                _fail(t);
              else
                g_72 = t;
              t = not_null(h_72);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_70), not_null(b_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_71))));
            t = Bapp2_0_0(t);
            if(((h_72 != NULL) && (h_72 != t)))
              _fail(t);
            else
              h_72 = t;
            t = u_72(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(c_72)), not_null(a_71)), not_null(y_70)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_71)), not_null(g_72))));
          }
        }
      }
    }
    return(t);
  }
  if(((k_69 != NULL) && (k_69 != t)))
    _fail(t);
  else
    k_69 = t;
  t = not_null(k_69);
  if(match_cons(t, sym_Call_2))
    {
      l_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
      t = not_null(l_69);
      if(match_cons(t, sym_SVar_1))
        {
          m_69 = ATgetArgument(t, 0);
          t = not_null(m_69);
          if(match_string(t, "Anno_Cong__"))
            {
              t = not_null(n_69);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_69 = ATgetFirst((ATermList) t);
                  b_70 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(o_69);
                  if(match_cons(t, sym_Cong_2))
                    {
                      p_69 = ATgetArgument(t, 0);
                      q_69 = ATgetArgument(t, 1);
                      t = not_null(b_70);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          c_70 = ATgetFirst((ATermList) t);
                          m_70 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(m_70);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = i_72(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  ATerm d_74 (ATerm t)
  {
    ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,o_73 = NULL;
    ATerm f_74 (ATerm t)
    {
      ATerm p_73 = NULL,q_73 = NULL;
      ATerm l_74 (ATerm t)
      {
        ATerm a_74 = NULL,b_74 = NULL;
        t = not_null(q_73);
        if(((a_74 != NULL) && (a_74 != t)))
          _fail(t);
        else
          a_74 = t;
        t = not_null(q_73);
        {
          ATerm c_74 = NULL;
          ATerm m_74 (ATerm t)
          {
            t = not_null(c_74);
            if(((b_74 != NULL) && (b_74 != t)))
              _fail(t);
            else
              b_74 = t;
            t = not_null(c_74);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(p_73), not_null(a_74)), not_null(h_73));
          if(((c_74 != NULL) && (c_74 != t)))
            _fail(t);
          else
            c_74 = t;
          t = m_74(t);
          t = not_null(b_74);
        }
        return(t);
      }
      t = not_null(o_73);
      if(((p_73 != NULL) && (p_73 != t)))
        _fail(t);
      else
        p_73 = t;
      t = not_null(g_73);
      t = c_96(t);
      if(((q_73 != NULL) && (q_73 != t)))
        _fail(t);
      else
        q_73 = t;
      t = l_74(t);
      return(t);
    }
    t = not_null(b_73);
    if(((e_73 != NULL) && (e_73 != t)))
      _fail(t);
    else
      e_73 = t;
    t = not_null(c_73);
    if(((f_73 != NULL) && (f_73 != t)))
      _fail(t);
    else
      f_73 = t;
    t = not_null(d_73);
    if(((g_73 != NULL) && (g_73 != t)))
      _fail(t);
    else
      g_73 = t;
    t = not_null(b_73);
    {
      ATerm n_73 = NULL;
      ATerm e_74 (ATerm t)
      {
        t = not_null(n_73);
        if(((h_73 != NULL) && (h_73 != t)))
          _fail(t);
        else
          h_73 = t;
        t = not_null(n_73);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_73));
      if(((n_73 != NULL) && (n_73 != t)))
        _fail(t);
      else
        n_73 = t;
      t = e_74(t);
      t = not_null(f_73);
      t = b_96(t);
      if(((o_73 != NULL) && (o_73 != t)))
        _fail(t);
      else
        o_73 = t;
      t = f_74(t);
    }
    return(t);
  }
  if(((b_73 != NULL) && (b_73 != t)))
    _fail(t);
  else
    b_73 = t;
  t = not_null(b_73);
  if(match_cons(t, sym_As_2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      t = d_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  ATerm j_77 (ATerm t)
  {
    ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,b_77 = NULL;
    ATerm l_77 (ATerm t)
    {
      ATerm c_77 = NULL,d_77 = NULL;
      ATerm m_77 (ATerm t)
      {
        ATerm e_77 = NULL,f_77 = NULL;
        ATerm n_77 (ATerm t)
        {
          ATerm g_77 = NULL,h_77 = NULL;
          t = not_null(f_77);
          if(((g_77 != NULL) && (g_77 != t)))
            _fail(t);
          else
            g_77 = t;
          t = not_null(f_77);
          {
            ATerm i_77 = NULL;
            ATerm o_77 (ATerm t)
            {
              t = not_null(i_77);
              if(((h_77 != NULL) && (h_77 != t)))
                _fail(t);
              else
                h_77 = t;
              t = not_null(i_77);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(c_77), not_null(e_77), not_null(g_77)), not_null(l_75));
            if(((i_77 != NULL) && (i_77 != t)))
              _fail(t);
            else
              i_77 = t;
            t = o_77(t);
            t = not_null(h_77);
          }
          return(t);
        }
        t = not_null(d_77);
        if(((e_77 != NULL) && (e_77 != t)))
          _fail(t);
        else
          e_77 = t;
        t = not_null(k_75);
        t = c_100(t);
        if(((f_77 != NULL) && (f_77 != t)))
          _fail(t);
        else
          f_77 = t;
        t = n_77(t);
        return(t);
      }
      t = not_null(b_77);
      if(((c_77 != NULL) && (c_77 != t)))
        _fail(t);
      else
        c_77 = t;
      t = not_null(j_75);
      t = b_100(t);
      if(((d_77 != NULL) && (d_77 != t)))
        _fail(t);
      else
        d_77 = t;
      t = m_77(t);
      return(t);
    }
    t = not_null(d_75);
    if(((h_75 != NULL) && (h_75 != t)))
      _fail(t);
    else
      h_75 = t;
    t = not_null(e_75);
    if(((i_75 != NULL) && (i_75 != t)))
      _fail(t);
    else
      i_75 = t;
    t = not_null(f_75);
    if(((j_75 != NULL) && (j_75 != t)))
      _fail(t);
    else
      j_75 = t;
    t = not_null(g_75);
    if(((k_75 != NULL) && (k_75 != t)))
      _fail(t);
    else
      k_75 = t;
    t = not_null(d_75);
    {
      ATerm a_77 = NULL;
      ATerm k_77 (ATerm t)
      {
        t = not_null(a_77);
        if(((l_75 != NULL) && (l_75 != t)))
          _fail(t);
        else
          l_75 = t;
        t = not_null(a_77);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_75));
      if(((a_77 != NULL) && (a_77 != t)))
        _fail(t);
      else
        a_77 = t;
      t = k_77(t);
      t = not_null(i_75);
      t = a_100(t);
      if(((b_77 != NULL) && (b_77 != t)))
        _fail(t);
      else
        b_77 = t;
      t = l_77(t);
    }
    return(t);
  }
  if(((d_75 != NULL) && (d_75 != t)))
    _fail(t);
  else
    d_75 = t;
  t = not_null(d_75);
  if(match_cons(t, sym_PrimT_3))
    {
      e_75 = ATgetArgument(t, 0);
      f_75 = ATgetArgument(t, 1);
      g_75 = ATgetArgument(t, 2);
      t = j_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  ATerm j_78 (ATerm t)
  {
    ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,d_78 = NULL;
    ATerm l_78 (ATerm t)
    {
      ATerm e_78 = NULL,f_78 = NULL;
      ATerm m_78 (ATerm t)
      {
        ATerm g_78 = NULL,h_78 = NULL;
        t = not_null(f_78);
        if(((g_78 != NULL) && (g_78 != t)))
          _fail(t);
        else
          g_78 = t;
        t = not_null(f_78);
        {
          ATerm i_78 = NULL;
          ATerm n_78 (ATerm t)
          {
            t = not_null(i_78);
            if(((h_78 != NULL) && (h_78 != t)))
              _fail(t);
            else
              h_78 = t;
            t = not_null(i_78);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(e_78), not_null(g_78)), not_null(b_78));
          if(((i_78 != NULL) && (i_78 != t)))
            _fail(t);
          else
            i_78 = t;
          t = n_78(t);
          t = not_null(h_78);
        }
        return(t);
      }
      t = not_null(d_78);
      if(((e_78 != NULL) && (e_78 != t)))
        _fail(t);
      else
        e_78 = t;
      t = not_null(a_78);
      t = v_95(t);
      if(((f_78 != NULL) && (f_78 != t)))
        _fail(t);
      else
        f_78 = t;
      t = m_78(t);
      return(t);
    }
    t = not_null(v_77);
    if(((y_77 != NULL) && (y_77 != t)))
      _fail(t);
    else
      y_77 = t;
    t = not_null(w_77);
    if(((z_77 != NULL) && (z_77 != t)))
      _fail(t);
    else
      z_77 = t;
    t = not_null(x_77);
    if(((a_78 != NULL) && (a_78 != t)))
      _fail(t);
    else
      a_78 = t;
    t = not_null(v_77);
    {
      ATerm c_78 = NULL;
      ATerm k_78 (ATerm t)
      {
        t = not_null(c_78);
        if(((b_78 != NULL) && (b_78 != t)))
          _fail(t);
        else
          b_78 = t;
        t = not_null(c_78);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_77));
      if(((c_78 != NULL) && (c_78 != t)))
        _fail(t);
      else
        c_78 = t;
      t = k_78(t);
      t = not_null(z_77);
      t = u_95(t);
      if(((d_78 != NULL) && (d_78 != t)))
        _fail(t);
      else
        d_78 = t;
      t = l_78(t);
    }
    return(t);
  }
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  t = not_null(v_77);
  if(match_cons(t, sym_Explode_2))
    {
      w_77 = ATgetArgument(t, 0);
      x_77 = ATgetArgument(t, 1);
      t = j_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
  ATerm i_79 (ATerm t)
  {
    ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,c_79 = NULL;
    ATerm l_79 (ATerm t)
    {
      ATerm d_79 = NULL,e_79 = NULL;
      ATerm m_79 (ATerm t)
      {
        ATerm f_79 = NULL,g_79 = NULL;
        t = not_null(e_79);
        if(((f_79 != NULL) && (f_79 != t)))
          _fail(t);
        else
          f_79 = t;
        t = not_null(e_79);
        {
          ATerm h_79 = NULL;
          ATerm n_79 (ATerm t)
          {
            t = not_null(h_79);
            if(((g_79 != NULL) && (g_79 != t)))
              _fail(t);
            else
              g_79 = t;
            t = not_null(h_79);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(d_79), not_null(f_79)), not_null(a_79));
          if(((h_79 != NULL) && (h_79 != t)))
            _fail(t);
          else
            h_79 = t;
          t = n_79(t);
          t = not_null(g_79);
        }
        return(t);
      }
      t = not_null(c_79);
      if(((d_79 != NULL) && (d_79 != t)))
        _fail(t);
      else
        d_79 = t;
      t = not_null(z_78);
      t = r_95(t);
      if(((e_79 != NULL) && (e_79 != t)))
        _fail(t);
      else
        e_79 = t;
      t = m_79(t);
      return(t);
    }
    t = not_null(u_78);
    if(((x_78 != NULL) && (x_78 != t)))
      _fail(t);
    else
      x_78 = t;
    t = not_null(v_78);
    if(((y_78 != NULL) && (y_78 != t)))
      _fail(t);
    else
      y_78 = t;
    t = not_null(w_78);
    if(((z_78 != NULL) && (z_78 != t)))
      _fail(t);
    else
      z_78 = t;
    t = not_null(u_78);
    {
      ATerm b_79 = NULL;
      ATerm k_79 (ATerm t)
      {
        t = not_null(b_79);
        if(((a_79 != NULL) && (a_79 != t)))
          _fail(t);
        else
          a_79 = t;
        t = not_null(b_79);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_78));
      if(((b_79 != NULL) && (b_79 != t)))
        _fail(t);
      else
        b_79 = t;
      t = k_79(t);
      t = not_null(y_78);
      t = q_95(t);
      if(((c_79 != NULL) && (c_79 != t)))
        _fail(t);
      else
        c_79 = t;
      t = l_79(t);
    }
    return(t);
  }
  if(((u_78 != NULL) && (u_78 != t)))
    _fail(t);
  else
    u_78 = t;
  t = not_null(u_78);
  if(match_cons(t, sym_Op_2))
    {
      v_78 = ATgetArgument(t, 0);
      w_78 = ATgetArgument(t, 1);
      t = i_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm g_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_135(t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = g_33;
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                t = pat_td_1_0(z_135, t);
                return(t);
              }
              t = fetch_1_0(w_3, t);
              return(t);
            }
            t = Op_2_0(_id, v_3, t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            {
              ATerm y_33 = t;
              int z_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = pat_td_1_0(z_135, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, x_3, t);
                  ;
                  LocalPopChoice(z_33);
                }
              else
                {
                  t = y_33;
                  {
                    ATerm a_34 = t;
                    int b_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 (ATerm t)
                        {
                          t = pat_td_1_0(z_135, t);
                          return(t);
                        }
                        t = Explode_2_0(y_3, _id, t);
                        ;
                        LocalPopChoice(b_34);
                      }
                    else
                      {
                        t = a_34;
                        {
                          ATerm c_34 = t;
                          int d_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1_0(z_135, t);
                                  return(t);
                                }
                                t = fetch_1_0(a_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, z_3, t);
                              ;
                              LocalPopChoice(d_34);
                            }
                          else
                            {
                              t = c_34;
                              {
                                ATerm b_4 (ATerm t)
                                {
                                  t = pat_td_1_0(z_135, t);
                                  return(t);
                                }
                                t = As_2_0(_id, b_4, t);
                              }
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL;
  ATerm i_81 (ATerm t)
  {
    ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
    t = not_null(f_80);
    if(((g_80 != NULL) && (g_80 != t)))
      _fail(t);
    else
      g_80 = t;
    t = not_null(e_80);
    {
      ATerm l_80 = NULL;
      ATerm l_81 (ATerm t)
      {
        ATerm p_80 = NULL;
        ATerm n_81 (ATerm t)
        {
          t = not_null(p_80);
          if(((k_80 != NULL) && (k_80 != t)))
            _fail(t);
          else
            k_80 = t;
          t = not_null(p_80);
          return(t);
        }
        t = not_null(l_80);
        if(((j_80 != NULL) && (j_80 != t)))
          _fail(t);
        else
          j_80 = t;
        t = not_null(g_80);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
            ATerm m_81 (ATerm t)
            {
              t = not_null(n_80);
              if(((h_80 != NULL) && (h_80 != t)))
                _fail(t);
              else
                h_80 = t;
              t = not_null(o_80);
              if(((i_80 != NULL) && (i_80 != t)))
                _fail(t);
              else
                i_80 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_80)), not_null(h_80));
              return(t);
            }
            if(((m_80 != NULL) && (m_80 != t)))
              _fail(t);
            else
              m_80 = t;
            t = not_null(m_80);
            if(match_cons(t, sym_Anno_2))
              {
                n_80 = ATgetArgument(t, 0);
                o_80 = ATgetArgument(t, 1);
                t = m_81(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(c_4, t);
          if(((p_80 != NULL) && (p_80 != t)))
            _fail(t);
          else
            p_80 = t;
          t = n_81(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((l_80 != NULL) && (l_80 != t)))
        _fail(t);
      else
        l_80 = t;
      t = l_81(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_80)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_80)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_80))))));
    }
    return(t);
  }
  ATerm j_81 (ATerm t)
  {
    ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
    t = not_null(f_80);
    if(((q_80 != NULL) && (q_80 != t)))
      _fail(t);
    else
      q_80 = t;
    t = not_null(e_80);
    {
      ATerm u_80 = NULL;
      ATerm o_81 (ATerm t)
      {
        ATerm x_80 = NULL;
        ATerm q_81 (ATerm t)
        {
          t = not_null(x_80);
          if(((t_80 != NULL) && (t_80 != t)))
            _fail(t);
          else
            t_80 = t;
          t = not_null(x_80);
          return(t);
        }
        t = not_null(u_80);
        if(((s_80 != NULL) && (s_80 != t)))
          _fail(t);
        else
          s_80 = t;
        t = not_null(q_80);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm v_80 = NULL,w_80 = NULL;
            ATerm p_81 (ATerm t)
            {
              t = not_null(w_80);
              if(((r_80 != NULL) && (r_80 != t)))
                _fail(t);
              else
                r_80 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_80));
              return(t);
            }
            if(((v_80 != NULL) && (v_80 != t)))
              _fail(t);
            else
              v_80 = t;
            t = not_null(v_80);
            if(match_cons(t, sym_RootApp_1))
              {
                w_80 = ATgetArgument(t, 0);
                t = p_81(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(d_4, t);
          if(((x_80 != NULL) && (x_80 != t)))
            _fail(t);
          else
            x_80 = t;
          t = q_81(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((u_80 != NULL) && (u_80 != t)))
        _fail(t);
      else
        u_80 = t;
      t = o_81(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_80))), not_null(r_80))));
    }
    return(t);
  }
  ATerm k_81 (ATerm t)
  {
    ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
    t = not_null(f_80);
    if(((y_80 != NULL) && (y_80 != t)))
      _fail(t);
    else
      y_80 = t;
    t = not_null(e_80);
    {
      ATerm d_81 = NULL;
      ATerm r_81 (ATerm t)
      {
        ATerm h_81 = NULL;
        ATerm t_81 (ATerm t)
        {
          t = not_null(h_81);
          if(((c_81 != NULL) && (c_81 != t)))
            _fail(t);
          else
            c_81 = t;
          t = not_null(h_81);
          return(t);
        }
        t = not_null(d_81);
        if(((b_81 != NULL) && (b_81 != t)))
          _fail(t);
        else
          b_81 = t;
        t = not_null(y_80);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
            ATerm s_81 (ATerm t)
            {
              t = not_null(f_81);
              if(((a_81 != NULL) && (a_81 != t)))
                _fail(t);
              else
                a_81 = t;
              t = not_null(g_81);
              if(((z_80 != NULL) && (z_80 != t)))
                _fail(t);
              else
                z_80 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_81));
              return(t);
            }
            if(((e_81 != NULL) && (e_81 != t)))
              _fail(t);
            else
              e_81 = t;
            t = not_null(e_81);
            if(match_cons(t, sym_App_2))
              {
                f_81 = ATgetArgument(t, 0);
                g_81 = ATgetArgument(t, 1);
                t = s_81(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(e_4, t);
          if(((h_81 != NULL) && (h_81 != t)))
            _fail(t);
          else
            h_81 = t;
          t = t_81(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((d_81 != NULL) && (d_81 != t)))
        _fail(t);
      else
        d_81 = t;
      t = r_81(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_81))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_80)), not_null(a_81)))));
    }
    return(t);
  }
  if(((e_80 != NULL) && (e_80 != t)))
    _fail(t);
  else
    e_80 = t;
  t = not_null(e_80);
  if(match_cons(t, sym_Match_1))
    {
      f_80 = ATgetArgument(t, 0);
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_81(t);
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm h_34 = t;
              int i_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_81(t);
                  ;
                  LocalPopChoice(i_34);
                }
              else
                {
                  t = h_34;
                  t = k_81(t);
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  ATerm k_82 (ATerm t)
  {
    ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
    t = not_null(b_82);
    if(((d_82 != NULL) && (d_82 != t)))
      _fail(t);
    else
      d_82 = t;
    t = not_null(c_82);
    if(((e_82 != NULL) && (e_82 != t)))
      _fail(t);
    else
      e_82 = t;
    t = not_null(a_82);
    {
      ATerm j_82 = NULL;
      ATerm n_82 (ATerm t)
      {
        t = not_null(j_82);
        if(((f_82 != NULL) && (f_82 != t)))
          _fail(t);
        else
          f_82 = t;
        t = not_null(j_82);
        return(t);
      }
      t = not_null(e_82);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_82 = NULL,h_82 = NULL;
          ATerm l_82 (ATerm t)
          {
            ATerm i_82 = NULL;
            t = not_null(g_82);
            if(((i_82 != NULL) && (i_82 != t)))
              _fail(t);
            else
              i_82 = t;
            t = not_null(i_82);
            return(t);
          }
          ATerm m_82 (ATerm t)
          {
            t = term_j_34;
            return(t);
          }
          if(((h_82 != NULL) && (h_82 != t)))
            _fail(t);
          else
            h_82 = t;
          t = not_null(h_82);
          if(match_cons(t, sym_Match_1))
            {
              g_82 = ATgetArgument(t, 0);
              t = l_82(t);
            }
          else
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = m_82(t);
                }
              else
                {
                  _fail(t);
                }
            }
          return(t);
        }
        t = map_1_0(f_4, t);
        if(((j_82 != NULL) && (j_82 != t)))
          _fail(t);
        else
          j_82 = t;
        t = n_82(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_82), not_null(f_82)));
      t = Mapp2_0_0(t);
    }
    return(t);
  }
  if(((a_82 != NULL) && (a_82 != t)))
    _fail(t);
  else
    a_82 = t;
  t = not_null(a_82);
  if(match_cons(t, sym_Cong_2))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      t = k_82(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
  ATerm v_82 (ATerm t)
  {
    ATerm u_82 = NULL;
    t = not_null(t_82);
    if(((u_82 != NULL) && (u_82 != t)))
      _fail(t);
    else
      u_82 = t;
    t = not_null(u_82);
    return(t);
  }
  if(((r_82 != NULL) && (r_82 != t)))
    _fail(t);
  else
    r_82 = t;
  t = not_null(r_82);
  if(match_cons(t, sym_Scope_2))
    {
      s_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
      t = not_null(s_82);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_82(t);
        }
      else
        {
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
  ATerm v_83 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL;
  ATerm r_85 (ATerm t)
  {
    ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
    t = not_null(v_83);
    if(((j_85 != NULL) && (j_85 != t)))
      _fail(t);
    else
      j_85 = t;
    t = not_null(d_85);
    if(((k_85 != NULL) && (k_85 != t)))
      _fail(t);
    else
      k_85 = t;
    t = not_null(e_85);
    if(((l_85 != NULL) && (l_85 != t)))
      _fail(t);
    else
      l_85 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_85)), not_null(l_85))));
    return(t);
  }
  ATerm s_85 (ATerm t)
  {
    ATerm m_85 = NULL;
    t = not_null(f_85);
    if(((m_85 != NULL) && (m_85 != t)))
      _fail(t);
    else
      m_85 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_85));
    return(t);
  }
  ATerm t_85 (ATerm t)
  {
    ATerm n_85 = NULL;
    t = not_null(f_85);
    if(((n_85 != NULL) && (n_85 != t)))
      _fail(t);
    else
      n_85 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_85));
    return(t);
  }
  ATerm u_85 (ATerm t)
  {
    ATerm o_85 = NULL;
    t = not_null(f_85);
    if(((o_85 != NULL) && (o_85 != t)))
      _fail(t);
    else
      o_85 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(o_85));
    return(t);
  }
  ATerm v_85 (ATerm t)
  {
    ATerm p_85 = NULL;
    t = not_null(h_85);
    if(((p_85 != NULL) && (p_85 != t)))
      _fail(t);
    else
      p_85 = t;
    t = not_null(i_85);
    if(((p_85 != NULL) && (p_85 != t)))
      _fail(t);
    else
      p_85 = t;
    t = not_null(p_85);
    return(t);
  }
  ATerm w_85 (ATerm t)
  {
    ATerm q_85 = NULL;
    t = not_null(h_85);
    if(((q_85 != NULL) && (q_85 != t)))
      _fail(t);
    else
      q_85 = t;
    t = not_null(i_85);
    if(((q_85 != NULL) && (q_85 != t)))
      _fail(t);
    else
      q_85 = t;
    t = not_null(q_85);
    return(t);
  }
  if(((g_85 != NULL) && (g_85 != t)))
    _fail(t);
  else
    g_85 = t;
  t = not_null(g_85);
  if(match_cons(t, sym_Where_1))
    {
      h_85 = ATgetArgument(t, 0);
      t = not_null(h_85);
      if(match_cons(t, sym_Seq_2))
        {
          f_85 = ATgetArgument(t, 0);
          b_85 = ATgetArgument(t, 1);
          t = not_null(f_85);
          if(match_cons(t, sym_Where_1))
            {
              v_83 = ATgetArgument(t, 0);
              t = not_null(b_85);
              if(match_cons(t, sym_Seq_2))
                {
                  c_85 = ATgetArgument(t, 0);
                  e_85 = ATgetArgument(t, 1);
                  t = not_null(c_85);
                  if(match_cons(t, sym_Build_1))
                    {
                      d_85 = ATgetArgument(t, 0);
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
              f_85 = ATgetArgument(t, 0);
              t = u_85(t);
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
          h_85 = ATgetArgument(t, 0);
          t = not_null(h_85);
          if(match_cons(t, sym_Test_1))
            {
              f_85 = ATgetArgument(t, 0);
              t = s_85(t);
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
              h_85 = ATgetArgument(t, 0);
              t = not_null(h_85);
              if(match_cons(t, sym_Not_1))
                {
                  f_85 = ATgetArgument(t, 0);
                  t = t_85(t);
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
                  h_85 = ATgetArgument(t, 0);
                  i_85 = ATgetArgument(t, 1);
                  t = v_85(t);
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_85 = ATgetArgument(t, 0);
                      i_85 = ATgetArgument(t, 1);
                      t = w_85(t);
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
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL;
  ATerm s_86 (ATerm t)
  {
    ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
    t = not_null(g_86);
    if(((j_86 != NULL) && (j_86 != t)))
      _fail(t);
    else
      j_86 = t;
    t = not_null(h_86);
    if(((k_86 != NULL) && (k_86 != t)))
      _fail(t);
    else
      k_86 = t;
    t = not_null(i_86);
    if(((l_86 != NULL) && (l_86 != t)))
      _fail(t);
    else
      l_86 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_86), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_86), not_null(l_86)));
    return(t);
  }
  ATerm t_86 (ATerm t)
  {
    ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
    t = not_null(g_86);
    if(((m_86 != NULL) && (m_86 != t)))
      _fail(t);
    else
      m_86 = t;
    t = not_null(h_86);
    if(((n_86 != NULL) && (n_86 != t)))
      _fail(t);
    else
      n_86 = t;
    t = not_null(i_86);
    if(((o_86 != NULL) && (o_86 != t)))
      _fail(t);
    else
      o_86 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_86), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_86), not_null(o_86)));
    return(t);
  }
  ATerm u_86 (ATerm t)
  {
    ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
    t = not_null(g_86);
    if(((p_86 != NULL) && (p_86 != t)))
      _fail(t);
    else
      p_86 = t;
    t = not_null(h_86);
    if(((q_86 != NULL) && (q_86 != t)))
      _fail(t);
    else
      q_86 = t;
    t = not_null(i_86);
    if(((r_86 != NULL) && (r_86 != t)))
      _fail(t);
    else
      r_86 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_86), (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_86), not_null(r_86)));
    return(t);
  }
  if(((e_86 != NULL) && (e_86 != t)))
    _fail(t);
  else
    e_86 = t;
  t = not_null(e_86);
  if(match_cons(t, sym_LChoice_2))
    {
      f_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
      t = not_null(f_86);
      if(match_cons(t, sym_LChoice_2))
        {
          g_86 = ATgetArgument(t, 0);
          h_86 = ATgetArgument(t, 1);
          t = s_86(t);
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
          f_86 = ATgetArgument(t, 0);
          i_86 = ATgetArgument(t, 1);
          t = not_null(f_86);
          if(match_cons(t, sym_Seq_2))
            {
              g_86 = ATgetArgument(t, 0);
              h_86 = ATgetArgument(t, 1);
              t = t_86(t);
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
              f_86 = ATgetArgument(t, 0);
              i_86 = ATgetArgument(t, 1);
              t = not_null(f_86);
              if(match_cons(t, sym_Choice_2))
                {
                  g_86 = ATgetArgument(t, 0);
                  h_86 = ATgetArgument(t, 1);
                  t = u_86(t);
                }
              else
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
  ATerm x_86 = NULL,y_86 = NULL;
  ATerm a_87 (ATerm t)
  {
    ATerm z_86 = NULL;
    t = not_null(y_86);
    if(((z_86 != NULL) && (z_86 != t)))
      _fail(t);
    else
      z_86 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_86), term_m_34);
    return(t);
  }
  if(((x_86 != NULL) && (x_86 != t)))
    _fail(t);
  else
    x_86 = t;
  t = not_null(x_86);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_86 = ATgetArgument(t, 0);
      t = a_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL;
  ATerm g_87 (ATerm t)
  {
    ATerm f_87 = NULL;
    t = not_null(e_87);
    if(((f_87 != NULL) && (f_87 != t)))
      _fail(t);
    else
      f_87 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_34), term_m_34));
    return(t);
  }
  if(((d_87 != NULL) && (d_87 != t)))
    _fail(t);
  else
    d_87 = t;
  t = not_null(d_87);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_87 = ATgetArgument(t, 0);
      t = g_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(o_0, _id, t);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            t = map1_1_0(o_0, t);
            return(t);
          }
          t = try_1_0(h_4, t);
          return(t);
        }
        t = Cons_2_0(_id, g_4, t);
      }
      ;
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm i_4 (ATerm t)
        {
          t = map1_1_0(o_0, t);
          return(t);
        }
        t = Cons_2_0(_id, i_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  ATerm l_90 (ATerm t)
  {
    ATerm n_88 = NULL,o_88 = NULL;
    t = not_null(l_88);
    if(((n_88 != NULL) && (n_88 != t)))
      _fail(t);
    else
      n_88 = t;
    t = not_null(m_88);
    if(((o_88 != NULL) && (o_88 != t)))
      _fail(t);
    else
      o_88 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_88), not_null(o_88));
    return(t);
  }
  ATerm m_90 (ATerm t)
  {
    ATerm p_88 = NULL,q_88 = NULL;
    t = not_null(g_88);
    if(((p_88 != NULL) && (p_88 != t)))
      _fail(t);
    else
      p_88 = t;
    t = not_null(h_88);
    if(((q_88 != NULL) && (q_88 != t)))
      _fail(t);
    else
      q_88 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_88), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_88)));
    return(t);
  }
  ATerm n_90 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  ATerm o_90 (ATerm t)
  {
    ATerm r_88 = NULL,s_88 = NULL;
    t = not_null(g_88);
    if(((r_88 != NULL) && (r_88 != t)))
      _fail(t);
    else
      r_88 = t;
    t = not_null(h_88);
    if(((s_88 != NULL) && (s_88 != t)))
      _fail(t);
    else
      s_88 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_88), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_88)));
    return(t);
  }
  ATerm p_90 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  ATerm q_90 (ATerm t)
  {
    ATerm t_88 = NULL,u_88 = NULL;
    t = not_null(g_88);
    if(((t_88 != NULL) && (t_88 != t)))
      _fail(t);
    else
      t_88 = t;
    t = not_null(h_88);
    if(((u_88 != NULL) && (u_88 != t)))
      _fail(t);
    else
      u_88 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_88), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_88)));
    return(t);
  }
  ATerm r_90 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  ATerm s_90 (ATerm t)
  {
    ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
    t = not_null(l_88);
    if(((b_89 != NULL) && (b_89 != t)))
      _fail(t);
    else
      b_89 = t;
    t = not_null(m_88);
    if(((c_89 != NULL) && (c_89 != t)))
      _fail(t);
    else
      c_89 = t;
    t = not_null(j_88);
    if(((d_89 != NULL) && (d_89 != t)))
      _fail(t);
    else
      d_89 = t;
    t = not_null(i_88);
    if(((e_89 != NULL) && (e_89 != t)))
      _fail(t);
    else
      e_89 = t;
    t = not_null(k_88);
    {
      ATerm h_89 = NULL;
      ATerm a_91 (ATerm t)
      {
        ATerm i_89 = NULL;
        ATerm b_91 (ATerm t)
        {
          t = not_null(i_89);
          if(((g_89 != NULL) && (g_89 != t)))
            _fail(t);
          else
            g_89 = t;
          t = not_null(i_89);
          return(t);
        }
        t = not_null(h_89);
        if(((f_89 != NULL) && (f_89 != t)))
          _fail(t);
        else
          f_89 = t;
        t = not_null(d_89);
        {
          ATerm j_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(j_4, t);
          if(((i_89 != NULL) && (i_89 != t)))
            _fail(t);
          else
            i_89 = t;
          t = b_91(t);
        }
        return(t);
      }
      t = not_null(c_89);
      t = map1_1_0(MkFunType_0_0, t);
      if(((h_89 != NULL) && (h_89 != t)))
        _fail(t);
      else
        h_89 = t;
      t = a_91(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(b_89), not_null(f_89), not_null(g_89), not_null(e_89));
    }
    return(t);
  }
  ATerm t_90 (ATerm t)
  {
    ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
    t = not_null(l_88);
    if(((j_89 != NULL) && (j_89 != t)))
      _fail(t);
    else
      j_89 = t;
    t = not_null(m_88);
    if(((k_89 != NULL) && (k_89 != t)))
      _fail(t);
    else
      k_89 = t;
    t = not_null(j_88);
    if(((l_89 != NULL) && (l_89 != t)))
      _fail(t);
    else
      l_89 = t;
    t = not_null(i_88);
    if(((m_89 != NULL) && (m_89 != t)))
      _fail(t);
    else
      m_89 = t;
    t = not_null(k_88);
    {
      ATerm p_89 = NULL;
      ATerm c_91 (ATerm t)
      {
        ATerm q_89 = NULL;
        ATerm d_91 (ATerm t)
        {
          t = not_null(q_89);
          if(((o_89 != NULL) && (o_89 != t)))
            _fail(t);
          else
            o_89 = t;
          t = not_null(q_89);
          return(t);
        }
        t = not_null(p_89);
        if(((n_89 != NULL) && (n_89 != t)))
          _fail(t);
        else
          n_89 = t;
        t = not_null(k_89);
        {
          ATerm k_4 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(k_4, t);
          if(((q_89 != NULL) && (q_89 != t)))
            _fail(t);
          else
            q_89 = t;
          t = d_91(t);
        }
        return(t);
      }
      t = not_null(l_89);
      t = map1_1_0(MkConstType_0_0, t);
      if(((p_89 != NULL) && (p_89 != t)))
        _fail(t);
      else
        p_89 = t;
      t = c_91(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(j_89), not_null(o_89), not_null(n_89), not_null(m_89));
    }
    return(t);
  }
  ATerm u_90 (ATerm t)
  {
    ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
    t = not_null(l_88);
    if(((r_89 != NULL) && (r_89 != t)))
      _fail(t);
    else
      r_89 = t;
    t = not_null(m_88);
    if(((s_89 != NULL) && (s_89 != t)))
      _fail(t);
    else
      s_89 = t;
    t = not_null(j_88);
    if(((t_89 != NULL) && (t_89 != t)))
      _fail(t);
    else
      t_89 = t;
    t = not_null(i_88);
    if(((u_89 != NULL) && (u_89 != t)))
      _fail(t);
    else
      u_89 = t;
    t = not_null(k_88);
    {
      ATerm x_89 = NULL;
      ATerm e_91 (ATerm t)
      {
        ATerm y_89 = NULL;
        ATerm f_91 (ATerm t)
        {
          t = not_null(y_89);
          if(((w_89 != NULL) && (w_89 != t)))
            _fail(t);
          else
            w_89 = t;
          t = not_null(y_89);
          return(t);
        }
        t = not_null(x_89);
        if(((v_89 != NULL) && (v_89 != t)))
          _fail(t);
        else
          v_89 = t;
        t = not_null(t_89);
        {
          ATerm l_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(l_4, t);
          if(((y_89 != NULL) && (y_89 != t)))
            _fail(t);
          else
            y_89 = t;
          t = f_91(t);
        }
        return(t);
      }
      t = not_null(s_89);
      t = map1_1_0(MkFunType_0_0, t);
      if(((x_89 != NULL) && (x_89 != t)))
        _fail(t);
      else
        x_89 = t;
      t = e_91(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_89), not_null(v_89), not_null(w_89), not_null(u_89));
    }
    return(t);
  }
  ATerm v_90 (ATerm t)
  {
    ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
    t = not_null(l_88);
    if(((a_90 != NULL) && (a_90 != t)))
      _fail(t);
    else
      a_90 = t;
    t = not_null(m_88);
    if(((z_89 != NULL) && (z_89 != t)))
      _fail(t);
    else
      z_89 = t;
    t = not_null(j_88);
    if(((b_90 != NULL) && (b_90 != t)))
      _fail(t);
    else
      b_90 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_89), (ATerm) ATmakeAppl(sym_Op_2, term_r_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_90)), not_null(a_90))));
    return(t);
  }
  ATerm w_90 (ATerm t)
  {
    ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
    t = not_null(l_88);
    if(((d_90 != NULL) && (d_90 != t)))
      _fail(t);
    else
      d_90 = t;
    t = not_null(m_88);
    if(((c_90 != NULL) && (c_90 != t)))
      _fail(t);
    else
      c_90 = t;
    t = not_null(j_88);
    if(((e_90 != NULL) && (e_90 != t)))
      _fail(t);
    else
      e_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_90))), not_null(d_90)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_90))));
    return(t);
  }
  ATerm x_90 (ATerm t)
  {
    ATerm f_90 = NULL,g_90 = NULL;
    t = not_null(l_88);
    if(((f_90 != NULL) && (f_90 != t)))
      _fail(t);
    else
      f_90 = t;
    t = not_null(m_88);
    if(((g_90 != NULL) && (g_90 != t)))
      _fail(t);
    else
      g_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_90), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_90)));
    return(t);
  }
  ATerm y_90 (ATerm t)
  {
    ATerm h_90 = NULL,i_90 = NULL;
    t = not_null(l_88);
    if(((h_90 != NULL) && (h_90 != t)))
      _fail(t);
    else
      h_90 = t;
    t = not_null(m_88);
    if(((i_90 != NULL) && (i_90 != t)))
      _fail(t);
    else
      i_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_90)), not_null(i_90));
    return(t);
  }
  ATerm z_90 (ATerm t)
  {
    ATerm j_90 = NULL,k_90 = NULL;
    t = not_null(l_88);
    if(((k_90 != NULL) && (k_90 != t)))
      _fail(t);
    else
      k_90 = t;
    t = not_null(m_88);
    if(((j_90 != NULL) && (j_90 != t)))
      _fail(t);
    else
      j_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_90)), not_null(k_90));
    return(t);
  }
  if(((k_88 != NULL) && (k_88 != t)))
    _fail(t);
  else
    k_88 = t;
  t = not_null(k_88);
  if(match_cons(t, sym_Lets_2))
    {
      l_88 = ATgetArgument(t, 0);
      m_88 = ATgetArgument(t, 1);
      t = l_90(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_88 = ATgetArgument(t, 0);
          t = not_null(l_88);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_88 = ATgetFirst((ATermList) t);
              h_88 = (ATerm) ATgetNext((ATermList) t);
              t = m_90(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_90(t);
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
              l_88 = ATgetArgument(t, 0);
              t = not_null(l_88);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_88 = ATgetFirst((ATermList) t);
                  h_88 = (ATerm) ATgetNext((ATermList) t);
                  t = o_90(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = p_90(t);
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
                  l_88 = ATgetArgument(t, 0);
                  t = not_null(l_88);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_88 = ATgetFirst((ATermList) t);
                      h_88 = (ATerm) ATgetNext((ATermList) t);
                      t = q_90(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = r_90(t);
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
                      l_88 = ATgetArgument(t, 0);
                      m_88 = ATgetArgument(t, 1);
                      j_88 = ATgetArgument(t, 2);
                      i_88 = ATgetArgument(t, 3);
                      t = s_90(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_88 = ATgetArgument(t, 0);
                          m_88 = ATgetArgument(t, 1);
                          j_88 = ATgetArgument(t, 2);
                          i_88 = ATgetArgument(t, 3);
                          {
                            ATerm s_34 = t;
                            int t_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = t_90(t);
                                ;
                                LocalPopChoice(t_34);
                              }
                            else
                              {
                                t = s_34;
                                t = u_90(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              l_88 = ATgetArgument(t, 0);
                              m_88 = ATgetArgument(t, 1);
                              j_88 = ATgetArgument(t, 2);
                              t = v_90(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_88 = ATgetArgument(t, 0);
                                  m_88 = ATgetArgument(t, 1);
                                  j_88 = ATgetArgument(t, 2);
                                  t = w_90(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_88 = ATgetArgument(t, 0);
                                      m_88 = ATgetArgument(t, 1);
                                      t = x_90(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_88 = ATgetArgument(t, 0);
                                          m_88 = ATgetArgument(t, 1);
                                          t = y_90(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_88 = ATgetArgument(t, 0);
                                              m_88 = ATgetArgument(t, 1);
                                              t = z_90(t);
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
  ATerm j_91 = NULL,k_91 = NULL;
  ATerm l_91 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  if(((j_91 != NULL) && (j_91 != t)))
    _fail(t);
  else
    j_91 = t;
  t = not_null(j_91);
  if(match_cons(t, sym_Where_1))
    {
      k_91 = ATgetArgument(t, 0);
      t = not_null(k_91);
      if(match_cons(t, sym_Fail_0))
        {
          t = l_91(t);
        }
      else
        {
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
  ATerm t_91 = NULL,z_91 = NULL,a_92 = NULL;
  ATerm c_92 (ATerm t)
  {
    ATerm b_92 = NULL;
    t = not_null(z_91);
    if(((b_92 != NULL) && (b_92 != t)))
      _fail(t);
    else
      b_92 = t;
    t = not_null(b_92);
    return(t);
  }
  if(((t_91 != NULL) && (t_91 != t)))
    _fail(t);
  else
    t_91 = t;
  t = not_null(t_91);
  if(match_cons(t, sym_LChoice_2))
    {
      z_91 = ATgetArgument(t, 0);
      a_92 = ATgetArgument(t, 1);
      t = not_null(a_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = c_92(t);
        }
      else
        {
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
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  ATerm k_92 (ATerm t)
  {
    ATerm j_92 = NULL;
    t = not_null(i_92);
    if(((j_92 != NULL) && (j_92 != t)))
      _fail(t);
    else
      j_92 = t;
    t = not_null(j_92);
    return(t);
  }
  if(((g_92 != NULL) && (g_92 != t)))
    _fail(t);
  else
    g_92 = t;
  t = not_null(g_92);
  if(match_cons(t, sym_LChoice_2))
    {
      h_92 = ATgetArgument(t, 0);
      i_92 = ATgetArgument(t, 1);
      t = not_null(h_92);
      if(match_cons(t, sym_Fail_0))
        {
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
ATerm F12_0_0 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  ATerm s_92 (ATerm t)
  {
    ATerm r_92 = NULL;
    t = not_null(p_92);
    if(((r_92 != NULL) && (r_92 != t)))
      _fail(t);
    else
      r_92 = t;
    t = not_null(r_92);
    return(t);
  }
  if(((o_92 != NULL) && (o_92 != t)))
    _fail(t);
  else
    o_92 = t;
  t = not_null(o_92);
  if(match_cons(t, sym_Choice_2))
    {
      p_92 = ATgetArgument(t, 0);
      q_92 = ATgetArgument(t, 1);
      t = not_null(q_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = s_92(t);
        }
      else
        {
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
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
  ATerm c_93 (ATerm t)
  {
    ATerm b_93 = NULL;
    t = not_null(a_93);
    if(((b_93 != NULL) && (b_93 != t)))
      _fail(t);
    else
      b_93 = t;
    t = not_null(b_93);
    return(t);
  }
  if(((y_92 != NULL) && (y_92 != t)))
    _fail(t);
  else
    y_92 = t;
  t = not_null(y_92);
  if(match_cons(t, sym_Choice_2))
    {
      z_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
      t = not_null(z_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = c_93(t);
        }
      else
        {
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
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
  ATerm m_93 (ATerm t)
  {
    ATerm j_93 = NULL,k_93 = NULL;
    t = not_null(h_93);
    if(((j_93 != NULL) && (j_93 != t)))
      _fail(t);
    else
      j_93 = t;
    t = not_null(i_93);
    if(((k_93 != NULL) && (k_93 != t)))
      _fail(t);
    else
      k_93 = t;
    t = not_null(g_93);
    t = not_null(k_93);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm l_93 = NULL;
        if(((l_93 != NULL) && (l_93 != t)))
          _fail(t);
        else
          l_93 = t;
        t = not_null(l_93);
        if(match_cons(t, sym_Fail_0))
          {
            t = not_null(l_93);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(m_4, t);
    }
    t = term_p_34;
    return(t);
  }
  if(((g_93 != NULL) && (g_93 != t)))
    _fail(t);
  else
    g_93 = t;
  t = not_null(g_93);
  if(match_cons(t, sym_Cong_2))
    {
      h_93 = ATgetArgument(t, 0);
      i_93 = ATgetArgument(t, 1);
      t = m_93(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0_0 (ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  ATerm u_93 (ATerm t)
  {
    ATerm t_93 = NULL;
    t = not_null(r_93);
    if(((t_93 != NULL) && (t_93 != t)))
      _fail(t);
    else
      t_93 = t;
    t = term_p_34;
    return(t);
  }
  if(((q_93 != NULL) && (q_93 != t)))
    _fail(t);
  else
    q_93 = t;
  t = not_null(q_93);
  if(match_cons(t, sym_Path_2))
    {
      r_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
      t = not_null(s_93);
      if(match_cons(t, sym_Fail_0))
        {
          t = u_93(t);
        }
      else
        {
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
  ATerm y_93 = NULL,z_93 = NULL;
  ATerm a_94 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  if(((y_93 != NULL) && (y_93 != t)))
    _fail(t);
  else
    y_93 = t;
  t = not_null(y_93);
  if(match_cons(t, sym_One_1))
    {
      z_93 = ATgetArgument(t, 0);
      t = not_null(z_93);
      if(match_cons(t, sym_Fail_0))
        {
          t = a_94(t);
        }
      else
        {
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
  ATerm e_94 = NULL,j_94 = NULL;
  ATerm k_94 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  if(((e_94 != NULL) && (e_94 != t)))
    _fail(t);
  else
    e_94 = t;
  t = not_null(e_94);
  if(match_cons(t, sym_Some_1))
    {
      j_94 = ATgetArgument(t, 0);
      t = not_null(j_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = k_94(t);
        }
      else
        {
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
  ATerm p_94 = NULL,r_94 = NULL,s_94 = NULL;
  ATerm u_94 (ATerm t)
  {
    ATerm t_94 = NULL;
    t = not_null(r_94);
    if(((t_94 != NULL) && (t_94 != t)))
      _fail(t);
    else
      t_94 = t;
    t = term_p_34;
    return(t);
  }
  if(((p_94 != NULL) && (p_94 != t)))
    _fail(t);
  else
    p_94 = t;
  t = not_null(p_94);
  if(match_cons(t, sym_Rec_2))
    {
      r_94 = ATgetArgument(t, 0);
      s_94 = ATgetArgument(t, 1);
      t = not_null(s_94);
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
ATerm F5_0_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  ATerm c_95 (ATerm t)
  {
    ATerm b_95 = NULL;
    t = not_null(z_94);
    if(((b_95 != NULL) && (b_95 != t)))
      _fail(t);
    else
      b_95 = t;
    t = term_p_34;
    return(t);
  }
  if(((y_94 != NULL) && (y_94 != t)))
    _fail(t);
  else
    y_94 = t;
  t = not_null(y_94);
  if(match_cons(t, sym_Scope_2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      t = not_null(a_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = c_95(t);
        }
      else
        {
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
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  ATerm k_95 (ATerm t)
  {
    ATerm j_95 = NULL;
    t = not_null(i_95);
    if(((j_95 != NULL) && (j_95 != t)))
      _fail(t);
    else
      j_95 = t;
    t = term_p_34;
    return(t);
  }
  if(((g_95 != NULL) && (g_95 != t)))
    _fail(t);
  else
    g_95 = t;
  t = not_null(g_95);
  if(match_cons(t, sym_Seq_2))
    {
      h_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
      t = not_null(h_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = k_95(t);
        }
      else
        {
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
  ATerm o_95 = NULL,p_95 = NULL;
  ATerm s_95 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  if(((o_95 != NULL) && (o_95 != t)))
    _fail(t);
  else
    o_95 = t;
  t = not_null(o_95);
  if(match_cons(t, sym_Not_1))
    {
      p_95 = ATgetArgument(t, 0);
      t = not_null(p_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = s_95(t);
        }
      else
        {
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
  ATerm y_95 = NULL,z_95 = NULL;
  ATerm a_96 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  if(((y_95 != NULL) && (y_95 != t)))
    _fail(t);
  else
    y_95 = t;
  t = not_null(y_95);
  if(match_cons(t, sym_Test_1))
    {
      z_95 = ATgetArgument(t, 0);
      t = not_null(z_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = a_96(t);
        }
      else
        {
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
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0_0(t);
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
            t = F2_0_0(t);
            ;
            LocalPopChoice(x_34);
          }
        else
          {
            t = w_34;
            {
              ATerm y_34 = t;
              int z_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0_0(t);
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
                        t = F5_0_0(t);
                        ;
                        LocalPopChoice(b_35);
                      }
                    else
                      {
                        t = a_35;
                        {
                          ATerm c_35 = t;
                          int d_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0_0(t);
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
                                    t = F7_0_0(t);
                                    ;
                                    LocalPopChoice(f_35);
                                  }
                                else
                                  {
                                    t = e_35;
                                    {
                                      ATerm g_35 = t;
                                      int h_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0_0(t);
                                          ;
                                          LocalPopChoice(h_35);
                                        }
                                      else
                                        {
                                          t = g_35;
                                          {
                                            ATerm o_37 = t;
                                            int p_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0_0(t);
                                                ;
                                                LocalPopChoice(p_37);
                                              }
                                            else
                                              {
                                                t = o_37;
                                                {
                                                  ATerm q_37 = t;
                                                  int r_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_37);
                                                    }
                                                  else
                                                    {
                                                      t = q_37;
                                                      {
                                                        ATerm s_37 = t;
                                                        int t_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0_0(t);
                                                            ;
                                                            LocalPopChoice(t_37);
                                                          }
                                                        else
                                                          {
                                                            t = s_37;
                                                            {
                                                              ATerm u_37 = t;
                                                              int v_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_37);
                                                                }
                                                              else
                                                                {
                                                                  t = u_37;
                                                                  {
                                                                    ATerm w_37 = t;
                                                                    int x_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0_0(t);
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
                                                                              t = F14_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(z_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_37;
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
  ATerm g_96 = NULL,h_96 = NULL;
  ATerm i_96 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  if(((g_96 != NULL) && (g_96 != t)))
    _fail(t);
  else
    g_96 = t;
  t = not_null(g_96);
  if(match_cons(t, sym_Match_1))
    {
      h_96 = ATgetArgument(t, 0);
      t = not_null(h_96);
      if(match_cons(t, sym_Wld_0))
        {
          t = i_96(t);
        }
      else
        {
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
  ATerm m_96 = NULL,n_96 = NULL;
  ATerm o_96 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  if(((m_96 != NULL) && (m_96 != t)))
    _fail(t);
  else
    m_96 = t;
  t = not_null(m_96);
  if(match_cons(t, sym_Where_1))
    {
      n_96 = ATgetArgument(t, 0);
      t = not_null(n_96);
      if(match_cons(t, sym_Id_0))
        {
          t = o_96(t);
        }
      else
        {
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
  ATerm s_96 = NULL,t_96 = NULL;
  ATerm u_96 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  if(((s_96 != NULL) && (s_96 != t)))
    _fail(t);
  else
    s_96 = t;
  t = not_null(s_96);
  if(match_cons(t, sym_All_1))
    {
      t_96 = ATgetArgument(t, 0);
      t = not_null(t_96);
      if(match_cons(t, sym_Id_0))
        {
          t = u_96(t);
        }
      else
        {
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
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  ATerm c_97 (ATerm t)
  {
    ATerm b_97 = NULL;
    t = not_null(z_96);
    if(((b_97 != NULL) && (b_97 != t)))
      _fail(t);
    else
      b_97 = t;
    t = term_q_34;
    return(t);
  }
  if(((y_96 != NULL) && (y_96 != t)))
    _fail(t);
  else
    y_96 = t;
  t = not_null(y_96);
  if(match_cons(t, sym_Rec_2))
    {
      z_96 = ATgetArgument(t, 0);
      a_97 = ATgetArgument(t, 1);
      t = not_null(a_97);
      if(match_cons(t, sym_Id_0))
        {
          t = c_97(t);
        }
      else
        {
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
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL;
  ATerm k_97 (ATerm t)
  {
    ATerm j_97 = NULL;
    t = not_null(h_97);
    if(((j_97 != NULL) && (j_97 != t)))
      _fail(t);
    else
      j_97 = t;
    t = term_q_34;
    return(t);
  }
  if(((g_97 != NULL) && (g_97 != t)))
    _fail(t);
  else
    g_97 = t;
  t = not_null(g_97);
  if(match_cons(t, sym_Scope_2))
    {
      h_97 = ATgetArgument(t, 0);
      i_97 = ATgetArgument(t, 1);
      t = not_null(i_97);
      if(match_cons(t, sym_Id_0))
        {
          t = k_97(t);
        }
      else
        {
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
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL;
  ATerm w_97 (ATerm t)
  {
    ATerm r_97 = NULL;
    t = not_null(q_97);
    if(((r_97 != NULL) && (r_97 != t)))
      _fail(t);
    else
      r_97 = t;
    t = term_q_34;
    return(t);
  }
  if(((o_97 != NULL) && (o_97 != t)))
    _fail(t);
  else
    o_97 = t;
  t = not_null(o_97);
  if(match_cons(t, sym_LChoice_2))
    {
      p_97 = ATgetArgument(t, 0);
      q_97 = ATgetArgument(t, 1);
      t = not_null(p_97);
      if(match_cons(t, sym_Id_0))
        {
          t = w_97(t);
        }
      else
        {
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
  ATerm a_98 = NULL,c_98 = NULL,d_98 = NULL;
  ATerm f_98 (ATerm t)
  {
    ATerm e_98 = NULL;
    t = not_null(c_98);
    if(((e_98 != NULL) && (e_98 != t)))
      _fail(t);
    else
      e_98 = t;
    t = not_null(e_98);
    return(t);
  }
  if(((a_98 != NULL) && (a_98 != t)))
    _fail(t);
  else
    a_98 = t;
  t = not_null(a_98);
  if(match_cons(t, sym_Seq_2))
    {
      c_98 = ATgetArgument(t, 0);
      d_98 = ATgetArgument(t, 1);
      t = not_null(d_98);
      if(match_cons(t, sym_Id_0))
        {
          t = f_98(t);
        }
      else
        {
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
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL;
  ATerm p_98 (ATerm t)
  {
    ATerm o_98 = NULL;
    t = not_null(n_98);
    if(((o_98 != NULL) && (o_98 != t)))
      _fail(t);
    else
      o_98 = t;
    t = not_null(o_98);
    return(t);
  }
  if(((l_98 != NULL) && (l_98 != t)))
    _fail(t);
  else
    l_98 = t;
  t = not_null(l_98);
  if(match_cons(t, sym_Seq_2))
    {
      m_98 = ATgetArgument(t, 0);
      n_98 = ATgetArgument(t, 1);
      t = not_null(m_98);
      if(match_cons(t, sym_Id_0))
        {
          t = p_98(t);
        }
      else
        {
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
  ATerm w_98 = NULL,x_98 = NULL;
  ATerm d_99 (ATerm t)
  {
    t = term_p_34;
    return(t);
  }
  if(((w_98 != NULL) && (w_98 != t)))
    _fail(t);
  else
    w_98 = t;
  t = not_null(w_98);
  if(match_cons(t, sym_Not_1))
    {
      x_98 = ATgetArgument(t, 0);
      t = not_null(x_98);
      if(match_cons(t, sym_Id_0))
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
  return(t);
}
ATerm I1_0_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL;
  ATerm p_99 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  if(((n_99 != NULL) && (n_99 != t)))
    _fail(t);
  else
    n_99 = t;
  t = not_null(n_99);
  if(match_cons(t, sym_Test_1))
    {
      o_99 = ATgetArgument(t, 0);
      t = not_null(o_99);
      if(match_cons(t, sym_Id_0))
        {
          t = p_99(t);
        }
      else
        {
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
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0_0(t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0_0(t);
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
                  t = I3_0_0(t);
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
                        t = I4_0_0(t);
                        ;
                        LocalPopChoice(h_38);
                      }
                    else
                      {
                        t = g_38;
                        {
                          ATerm i_38 = t;
                          int j_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0_0(t);
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
                                    t = I8_0_0(t);
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
                                          t = I9_0_0(t);
                                          ;
                                          LocalPopChoice(n_38);
                                        }
                                      else
                                        {
                                          t = m_38;
                                          {
                                            ATerm o_38 = t;
                                            int p_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0_0(t);
                                                ;
                                                LocalPopChoice(p_38);
                                              }
                                            else
                                              {
                                                t = o_38;
                                                {
                                                  ATerm q_38 = t;
                                                  int r_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_38);
                                                    }
                                                  else
                                                    {
                                                      t = q_38;
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
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            {
              ATerm w_38 = t;
              int x_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(z_38);
                      }
                    else
                      {
                        t = y_38;
                        {
                          ATerm a_39 = t;
                          int b_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
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
                                    t = EmptyScope_0_0(t);
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
                                          t = MatchingCongruence_0_0(t);
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
                                                t = TransformingAnnoCongruence_0_0(t);
                                                ;
                                                LocalPopChoice(h_39);
                                              }
                                            else
                                              {
                                                t = g_39;
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
ATerm repeat_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm q_99 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = j_127(t);
      t = q_99(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    return(t);
  }
  t = q_99(t);
  return(t);
}
ATerm downup_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  t = q_110(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = downup_1_0(q_110, t);
      return(t);
    }
    t = SRTS_all(o_4, t);
    t = q_110(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(p_4, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = simplify0_0_0(t);
    {
      ATerm r_4 (ATerm t)
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        return(t);
      }
      t = try_1_0(r_4, t);
    }
    return(t);
  }
  t = map_1_0(q_4, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  ATerm l_100 (ATerm t)
  {
    ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,h_100 = NULL;
    ATerm n_100 (ATerm t)
    {
      ATerm i_100 = NULL,j_100 = NULL;
      t = not_null(h_100);
      if(((i_100 != NULL) && (i_100 != t)))
        _fail(t);
      else
        i_100 = t;
      t = not_null(h_100);
      {
        ATerm k_100 = NULL;
        ATerm o_100 (ATerm t)
        {
          t = not_null(k_100);
          if(((j_100 != NULL) && (j_100 != t)))
            _fail(t);
          else
            j_100 = t;
          t = not_null(k_100);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_100)), not_null(f_100));
        if(((k_100 != NULL) && (k_100 != t)))
          _fail(t);
        else
          k_100 = t;
        t = o_100(t);
        t = not_null(j_100);
      }
      return(t);
    }
    t = not_null(y_99);
    if(((d_100 != NULL) && (d_100 != t)))
      _fail(t);
    else
      d_100 = t;
    t = not_null(z_99);
    if(((e_100 != NULL) && (e_100 != t)))
      _fail(t);
    else
      e_100 = t;
    t = not_null(y_99);
    {
      ATerm g_100 = NULL;
      ATerm m_100 (ATerm t)
      {
        t = not_null(g_100);
        if(((f_100 != NULL) && (f_100 != t)))
          _fail(t);
        else
          f_100 = t;
        t = not_null(g_100);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_100));
      if(((g_100 != NULL) && (g_100 != t)))
        _fail(t);
      else
        g_100 = t;
      t = m_100(t);
      t = not_null(e_100);
      t = l_94(t);
      if(((h_100 != NULL) && (h_100 != t)))
        _fail(t);
      else
        h_100 = t;
      t = n_100(t);
    }
    return(t);
  }
  if(((y_99 != NULL) && (y_99 != t)))
    _fail(t);
  else
    y_99 = t;
  t = not_null(y_99);
  if(match_cons(t, sym_Strategies_1))
    {
      z_99 = ATgetArgument(t, 0);
      t = l_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm u_100 = NULL,v_100 = NULL;
  ATerm e_101 (ATerm t)
  {
    ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL,a_101 = NULL;
    ATerm g_101 (ATerm t)
    {
      ATerm b_101 = NULL,c_101 = NULL;
      t = not_null(a_101);
      if(((b_101 != NULL) && (b_101 != t)))
        _fail(t);
      else
        b_101 = t;
      t = not_null(a_101);
      {
        ATerm d_101 = NULL;
        ATerm h_101 (ATerm t)
        {
          t = not_null(d_101);
          if(((c_101 != NULL) && (c_101 != t)))
            _fail(t);
          else
            c_101 = t;
          t = not_null(d_101);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_101)), not_null(y_100));
        if(((d_101 != NULL) && (d_101 != t)))
          _fail(t);
        else
          d_101 = t;
        t = h_101(t);
        t = not_null(c_101);
      }
      return(t);
    }
    t = not_null(u_100);
    if(((w_100 != NULL) && (w_100 != t)))
      _fail(t);
    else
      w_100 = t;
    t = not_null(v_100);
    if(((x_100 != NULL) && (x_100 != t)))
      _fail(t);
    else
      x_100 = t;
    t = not_null(u_100);
    {
      ATerm z_100 = NULL;
      ATerm f_101 (ATerm t)
      {
        t = not_null(z_100);
        if(((y_100 != NULL) && (y_100 != t)))
          _fail(t);
        else
          y_100 = t;
        t = not_null(z_100);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_100));
      if(((z_100 != NULL) && (z_100 != t)))
        _fail(t);
      else
        z_100 = t;
      t = f_101(t);
      t = not_null(x_100);
      t = q_94(t);
      if(((a_101 != NULL) && (a_101 != t)))
        _fail(t);
      else
        a_101 = t;
      t = g_101(t);
    }
    return(t);
  }
  if(((u_100 != NULL) && (u_100 != t)))
    _fail(t);
  else
    u_100 = t;
  t = not_null(u_100);
  if(match_cons(t, sym_Specification_1))
    {
      v_100 = ATgetArgument(t, 0);
      t = e_101(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inline_strategies_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = Strategies_1_0(inline_sdefs_0_0, t);
        return(t);
      }
      t = Cons_2_0(u_4, Nil_0_0, t);
      return(t);
    }
    t = Cons_2_0(_id, t_4, t);
    return(t);
  }
  t = Specification_1_0(s_4, t);
  return(t);
}
ATerm _2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
  ATerm j_102 (ATerm t)
  {
    ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL,d_102 = NULL;
    ATerm l_102 (ATerm t)
    {
      ATerm e_102 = NULL,f_102 = NULL;
      ATerm m_102 (ATerm t)
      {
        ATerm g_102 = NULL,h_102 = NULL;
        t = not_null(f_102);
        if(((g_102 != NULL) && (g_102 != t)))
          _fail(t);
        else
          g_102 = t;
        t = not_null(f_102);
        {
          ATerm i_102 = NULL;
          ATerm n_102 (ATerm t)
          {
            t = not_null(i_102);
            if(((h_102 != NULL) && (h_102 != t)))
              _fail(t);
            else
              h_102 = t;
            t = not_null(i_102);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_102), not_null(g_102)), not_null(b_102));
          if(((i_102 != NULL) && (i_102 != t)))
            _fail(t);
          else
            i_102 = t;
          t = n_102(t);
          t = not_null(h_102);
        }
        return(t);
      }
      t = not_null(d_102);
      if(((e_102 != NULL) && (e_102 != t)))
        _fail(t);
      else
        e_102 = t;
      t = not_null(a_102);
      t = x_92(t);
      if(((f_102 != NULL) && (f_102 != t)))
        _fail(t);
      else
        f_102 = t;
      t = m_102(t);
      return(t);
    }
    t = not_null(v_101);
    if(((y_101 != NULL) && (y_101 != t)))
      _fail(t);
    else
      y_101 = t;
    t = not_null(w_101);
    if(((z_101 != NULL) && (z_101 != t)))
      _fail(t);
    else
      z_101 = t;
    t = not_null(x_101);
    if(((a_102 != NULL) && (a_102 != t)))
      _fail(t);
    else
      a_102 = t;
    t = not_null(v_101);
    {
      ATerm c_102 = NULL;
      ATerm k_102 (ATerm t)
      {
        t = not_null(c_102);
        if(((b_102 != NULL) && (b_102 != t)))
          _fail(t);
        else
          b_102 = t;
        t = not_null(c_102);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_101));
      if(((c_102 != NULL) && (c_102 != t)))
        _fail(t);
      else
        c_102 = t;
      t = k_102(t);
      t = not_null(z_101);
      t = w_92(t);
      if(((d_102 != NULL) && (d_102 != t)))
        _fail(t);
      else
        d_102 = t;
      t = l_102(t);
    }
    return(t);
  }
  if(((v_101 != NULL) && (v_101 != t)))
    _fail(t);
  else
    v_101 = t;
  t = not_null(v_101);
  if(match_cons(t, sym__2))
    {
      w_101 = ATgetArgument(t, 0);
      x_101 = ATgetArgument(t, 1);
      t = j_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_39;
  i_39 = t;
  {
    ATerm p_102 = NULL;
    ATerm q_102 = NULL;
    ATerm r_102 (ATerm t)
    {
      t = not_null(q_102);
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = not_null(q_102);
      return(t);
    }
    t = term_v_7;
    t = whoami_0_0(t);
    if(((q_102 != NULL) && (q_102 != t)))
      _fail(t);
    else
      q_102 = t;
    t = r_102(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_39), not_null(p_102)), term_o_39));
    t = printnl_0_0(t);
    t = term_b_18;
    t = exit_0_0(t);
  }
  t = i_39;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL;
  ATerm z_102 (ATerm t)
  {
    ATerm x_102 = NULL,y_102 = NULL;
    t = not_null(v_102);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    t = not_null(w_102);
    if(((y_102 != NULL) && (y_102 != t)))
      _fail(t);
    else
      y_102 = t;
    t = not_null(u_102);
    {
      ATerm q_39;
      q_39 = t;
      t = SSL_printnl(not_null(x_102), not_null(y_102));
      t = q_39;
    }
    return(t);
  }
  if(((u_102 != NULL) && (u_102 != t)))
    _fail(t);
  else
    u_102 = t;
  t = not_null(u_102);
  if(match_cons(t, sym__2))
    {
      v_102 = ATgetArgument(t, 0);
      w_102 = ATgetArgument(t, 1);
      t = z_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm b_103 = NULL;
  ATerm d_103 (ATerm t)
  {
    ATerm c_103 = NULL;
    t = not_null(b_103);
    if(((c_103 != NULL) && (c_103 != t)))
      _fail(t);
    else
      c_103 = t;
    t = not_null(b_103);
    t = SSL_implode_string(not_null(c_103));
    return(t);
  }
  if(((b_103 != NULL) && (b_103 != t)))
    _fail(t);
  else
    b_103 = t;
  t = d_103(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      {
        ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
        ATerm m_103 (ATerm t)
        {
          ATerm j_103 = NULL,k_103 = NULL;
          t = not_null(h_103);
          if(((j_103 != NULL) && (j_103 != t)))
            _fail(t);
          else
            j_103 = t;
          t = not_null(i_103);
          if(((k_103 != NULL) && (k_103 != t)))
            _fail(t);
          else
            k_103 = t;
          t = not_null(j_103);
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(k_103);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(v_4, t);
          }
          return(t);
        }
        if(((g_103 != NULL) && (g_103 != t)))
          _fail(t);
        else
          g_103 = t;
        t = not_null(g_103);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_103 = ATgetFirst((ATermList) t);
            i_103 = (ATerm) ATgetNext((ATermList) t);
            t = m_103(t);
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
  ATerm s_103 = NULL;
  ATerm a_104 (ATerm t)
  {
    ATerm t_103 = NULL,u_103 = NULL;
    t = not_null(s_103);
    if(((t_103 != NULL) && (t_103 != t)))
      _fail(t);
    else
      t_103 = t;
    t = not_null(s_103);
    {
      ATerm v_103 = NULL;
      ATerm b_104 (ATerm t)
      {
        ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL;
        ATerm c_104 (ATerm t)
        {
          t = not_null(z_103);
          if(((u_103 != NULL) && (u_103 != t)))
            _fail(t);
          else
            u_103 = t;
          t = not_null(x_103);
          return(t);
        }
        t = not_null(v_103);
        if(((w_103 != NULL) && (w_103 != t)))
          _fail(t);
        else
          w_103 = t;
        t = not_null(v_103);
        t = SSL_explode_term(not_null(w_103));
        if(((x_103 != NULL) && (x_103 != t)))
          _fail(t);
        else
          x_103 = t;
        t = not_null(x_103);
        if(match_cons(t, sym__2))
          {
            y_103 = ATgetArgument(t, 0);
            z_103 = ATgetArgument(t, 1);
            t = not_null(y_103);
            if(match_string(t, ""))
              {
                t = c_104(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(t_103);
      if(((v_103 != NULL) && (v_103 != t)))
        _fail(t);
      else
        v_103 = t;
      t = b_104(t);
      t = not_null(u_103);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((s_103 != NULL) && (s_103 != t)))
    _fail(t);
  else
    s_103 = t;
  t = a_104(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_117 (ATerm), ATerm t)
{
  ATerm d_104 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_104, t);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = Nil_0_0(t);
        t = f_117(t);
      }
    return(t);
  }
  t = d_104(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
  ATerm l_104 (ATerm t)
  {
    ATerm j_104 = NULL,k_104 = NULL;
    t = not_null(h_104);
    if(((k_104 != NULL) && (k_104 != t)))
      _fail(t);
    else
      k_104 = t;
    t = not_null(i_104);
    if(((j_104 != NULL) && (j_104 != t)))
      _fail(t);
    else
      j_104 = t;
    t = not_null(k_104);
    {
      ATerm w_4 (ATerm t)
      {
        t = not_null(j_104);
        return(t);
      }
      t = at_end_1_0(w_4, t);
    }
    return(t);
  }
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  t = not_null(g_104);
  if(match_cons(t, sym__2))
    {
      h_104 = ATgetArgument(t, 0);
      i_104 = ATgetArgument(t, 1);
      t = l_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm n_104 = NULL;
  ATerm p_104 (ATerm t)
  {
    ATerm o_104 = NULL;
    t = not_null(n_104);
    if(((o_104 != NULL) && (o_104 != t)))
      _fail(t);
    else
      o_104 = t;
    t = not_null(n_104);
    t = SSL_explode_string(not_null(o_104));
    return(t);
  }
  if(((n_104 != NULL) && (n_104 != t)))
    _fail(t);
  else
    n_104 = t;
  t = p_104(t);
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
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_4, t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
              ATerm h_105 (ATerm t)
              {
                ATerm z_104 = NULL;
                t = not_null(x_104);
                if(((z_104 != NULL) && (z_104 != t)))
                  _fail(t);
                else
                  z_104 = t;
                t = not_null(z_104);
                return(t);
              }
              ATerm i_105 (ATerm t)
              {
                ATerm a_105 = NULL;
                t = not_null(x_104);
                if(((a_105 != NULL) && (a_105 != t)))
                  _fail(t);
                else
                  a_105 = t;
                t = not_null(a_105);
                {
                  ATerm b_40 = t;
                  int c_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_40);
                    }
                  else
                    {
                      t = b_40;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = term_d_40;
                          return(t);
                        }
                        t = debug_1_0(y_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm j_105 (ATerm t)
              {
                ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL,f_105 = NULL;
                t = not_null(x_104);
                if(((b_105 != NULL) && (b_105 != t)))
                  _fail(t);
                else
                  b_105 = t;
                t = not_null(y_104);
                if(((c_105 != NULL) && (c_105 != t)))
                  _fail(t);
                else
                  c_105 = t;
                t = not_null(w_104);
                {
                  ATerm e_40;
                  e_40 = t;
                  {
                    ATerm e_105 = NULL;
                    ATerm k_105 (ATerm t)
                    {
                      t = not_null(e_105);
                      if(((d_105 != NULL) && (d_105 != t)))
                        _fail(t);
                      else
                        d_105 = t;
                      t = not_null(e_105);
                      return(t);
                    }
                    t = not_null(b_105);
                    t = eval_config_0_0(t);
                    if(((e_105 != NULL) && (e_105 != t)))
                      _fail(t);
                    else
                      e_105 = t;
                    t = k_105(t);
                  }
                  t = e_40;
                  {
                    ATerm g_105 = NULL;
                    ATerm l_105 (ATerm t)
                    {
                      t = not_null(g_105);
                      if(((f_105 != NULL) && (f_105 != t)))
                        _fail(t);
                      else
                        f_105 = t;
                      t = not_null(g_105);
                      return(t);
                    }
                    t = not_null(c_105);
                    t = eval_config_0_0(t);
                    if(((g_105 != NULL) && (g_105 != t)))
                      _fail(t);
                    else
                      g_105 = t;
                    t = l_105(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_105), not_null(f_105));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((w_104 != NULL) && (w_104 != t)))
                _fail(t);
              else
                w_104 = t;
              t = not_null(w_104);
              if(match_cons(t, sym_Path_1))
                {
                  x_104 = ATgetArgument(t, 0);
                  t = h_105(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_104 = ATgetArgument(t, 0);
                      t = i_105(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_104 = ATgetArgument(t, 0);
                          y_104 = ATgetArgument(t, 1);
                          t = j_105(t);
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
  ATerm o_105 = NULL;
  ATerm s_105 (ATerm t)
  {
    ATerm p_105 = NULL;
    t = not_null(o_105);
    if(((p_105 != NULL) && (p_105 != t)))
      _fail(t);
    else
      p_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_40, not_null(p_105));
    t = table_get_0_0(t);
    {
      ATerm a_5 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm g_40;
          g_40 = t;
          {
            ATerm q_105 = NULL;
            ATerm r_105 = NULL;
            ATerm t_105 (ATerm t)
            {
              t = not_null(r_105);
              if(((q_105 != NULL) && (q_105 != t)))
                _fail(t);
              else
                q_105 = t;
              t = not_null(r_105);
              return(t);
            }
            if(((r_105 != NULL) && (r_105 != t)))
              _fail(t);
            else
              r_105 = t;
            t = t_105(t);
            t = (ATerm) ATmakeAppl(sym__3, term_f_40, not_null(p_105), not_null(q_105));
            t = table_put_0_0(t);
          }
          t = g_40;
        }
        return(t);
      }
      t = try_1_0(a_5, t);
    }
    return(t);
  }
  if(((o_105 != NULL) && (o_105 != t)))
    _fail(t);
  else
    o_105 = t;
  t = s_105(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm h_40;
    h_40 = t;
    {
      ATerm v_105 = NULL;
      ATerm w_105 = NULL;
      ATerm x_105 (ATerm t)
      {
        t = not_null(w_105);
        if(((v_105 != NULL) && (v_105 != t)))
          _fail(t);
        else
          v_105 = t;
        t = not_null(w_105);
        return(t);
      }
      t = term_i_40;
      t = get_config_0_0(t);
      if(((w_105 != NULL) && (w_105 != t)))
        _fail(t);
      else
        w_105 = t;
      t = x_105(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), term_j_40);
      t = geq_0_0(t);
    }
    t = h_40;
    t = t_130(t);
    return(t);
  }
  t = try_1_0(b_5, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
  ATerm k_106 (ATerm t)
  {
    ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
    t = not_null(d_106);
    if(((g_106 != NULL) && (g_106 != t)))
      _fail(t);
    else
      g_106 = t;
    t = not_null(f_106);
    if(((h_106 != NULL) && (h_106 != t)))
      _fail(t);
    else
      h_106 = t;
    t = not_null(c_106);
    t = SSL_fputc(not_null(g_106), not_null(h_106));
    {
      ATerm j_106 = NULL;
      ATerm l_106 (ATerm t)
      {
        t = not_null(j_106);
        if(((i_106 != NULL) && (i_106 != t)))
          _fail(t);
        else
          i_106 = t;
        t = not_null(j_106);
        return(t);
      }
      if(((j_106 != NULL) && (j_106 != t)))
        _fail(t);
      else
        j_106 = t;
      t = l_106(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_106));
    }
    return(t);
  }
  if(((c_106 != NULL) && (c_106 != t)))
    _fail(t);
  else
    c_106 = t;
  t = not_null(c_106);
  if(match_cons(t, sym__2))
    {
      d_106 = ATgetArgument(t, 0);
      e_106 = ATgetArgument(t, 1);
      t = not_null(e_106);
      if(match_cons(t, sym_Stream_1))
        {
          f_106 = ATgetArgument(t, 0);
          t = k_106(t);
        }
      else
        {
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
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL;
  ATerm y_106 (ATerm t)
  {
    ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
    t = not_null(s_106);
    if(((u_106 != NULL) && (u_106 != t)))
      _fail(t);
    else
      u_106 = t;
    t = not_null(t_106);
    if(((v_106 != NULL) && (v_106 != t)))
      _fail(t);
    else
      v_106 = t;
    t = not_null(q_106);
    t = SSL_write_term_to_stream_text(not_null(u_106), not_null(v_106));
    {
      ATerm x_106 = NULL;
      ATerm z_106 (ATerm t)
      {
        t = not_null(x_106);
        if(((w_106 != NULL) && (w_106 != t)))
          _fail(t);
        else
          w_106 = t;
        t = not_null(x_106);
        return(t);
      }
      if(((x_106 != NULL) && (x_106 != t)))
        _fail(t);
      else
        x_106 = t;
      t = z_106(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_106));
    }
    return(t);
  }
  if(((q_106 != NULL) && (q_106 != t)))
    _fail(t);
  else
    q_106 = t;
  t = not_null(q_106);
  if(match_cons(t, sym__2))
    {
      r_106 = ATgetArgument(t, 0);
      t_106 = ATgetArgument(t, 1);
      t = not_null(r_106);
      if(match_cons(t, sym_Stream_1))
        {
          s_106 = ATgetArgument(t, 0);
          t = y_106(t);
        }
      else
        {
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
  ATerm c_5 (ATerm t)
  {
    ATerm d_107 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm e_107 = NULL;
      ATerm f_107 (ATerm t)
      {
        t = not_null(e_107);
        if(((d_107 != NULL) && (d_107 != t)))
          _fail(t);
        else
          d_107 = t;
        t = not_null(e_107);
        return(t);
      }
      if(((e_107 != NULL) && (e_107 != t)))
        _fail(t);
      else
        e_107 = t;
      t = f_107(t);
      t = (ATerm) ATmakeAppl(sym__2, term_u_30, not_null(d_107));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(c_5, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  ATerm s_107 (ATerm t)
  {
    ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL;
    t = not_null(m_107);
    if(((o_107 != NULL) && (o_107 != t)))
      _fail(t);
    else
      o_107 = t;
    t = not_null(n_107);
    if(((p_107 != NULL) && (p_107 != t)))
      _fail(t);
    else
      p_107 = t;
    t = not_null(k_107);
    t = SSL_write_term_to_stream_baf(not_null(o_107), not_null(p_107));
    {
      ATerm r_107 = NULL;
      ATerm t_107 (ATerm t)
      {
        t = not_null(r_107);
        if(((q_107 != NULL) && (q_107 != t)))
          _fail(t);
        else
          q_107 = t;
        t = not_null(r_107);
        return(t);
      }
      if(((r_107 != NULL) && (r_107 != t)))
        _fail(t);
      else
        r_107 = t;
      t = t_107(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_107));
    }
    return(t);
  }
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  t = not_null(k_107);
  if(match_cons(t, sym__2))
    {
      l_107 = ATgetArgument(t, 0);
      n_107 = ATgetArgument(t, 1);
      t = not_null(l_107);
      if(match_cons(t, sym_Stream_1))
        {
          m_107 = ATgetArgument(t, 0);
          t = s_107(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_137 (ATerm), ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
  ATerm h_108 (ATerm t)
  {
    ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL,f_108 = NULL;
    t = not_null(z_107);
    if(((b_108 != NULL) && (b_108 != t)))
      _fail(t);
    else
      b_108 = t;
    t = not_null(a_108);
    if(((c_108 != NULL) && (c_108 != t)))
      _fail(t);
    else
      c_108 = t;
    t = not_null(b_108);
    {
      ATerm e_108 = NULL;
      ATerm i_108 (ATerm t)
      {
        t = not_null(e_108);
        if(((d_108 != NULL) && (d_108 != t)))
          _fail(t);
        else
          d_108 = t;
        t = not_null(e_108);
        return(t);
      }
      if(((e_108 != NULL) && (e_108 != t)))
        _fail(t);
      else
        e_108 = t;
      t = i_108(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_108), term_k_40);
      t = open_stream_0_0(t);
      {
        ATerm g_108 = NULL;
        ATerm j_108 (ATerm t)
        {
          t = not_null(g_108);
          if(((f_108 != NULL) && (f_108 != t)))
            _fail(t);
          else
            f_108 = t;
          t = not_null(g_108);
          return(t);
        }
        if(((g_108 != NULL) && (g_108 != t)))
          _fail(t);
        else
          g_108 = t;
        t = j_108(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_108), not_null(c_108));
        t = x_137(t);
        t = fclose_0_0(t);
        t = not_null(c_108);
      }
    }
    return(t);
  }
  if(((y_107 != NULL) && (y_107 != t)))
    _fail(t);
  else
    y_107 = t;
  t = not_null(y_107);
  if(match_cons(t, sym__2))
    {
      z_107 = ATgetArgument(t, 0);
      a_108 = ATgetArgument(t, 1);
      t = h_108(t);
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
  ATerm o_108 = NULL;
  ATerm l_40;
  l_40 = t;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_5 (ATerm t)
          {
            ATerm p_108 = NULL,q_108 = NULL;
            ATerm w_108 (ATerm t)
            {
              t = not_null(q_108);
              if(((o_108 != NULL) && (o_108 != t)))
                _fail(t);
              else
                o_108 = t;
              t = not_null(p_108);
              return(t);
            }
            if(((p_108 != NULL) && (p_108 != t)))
              _fail(t);
            else
              p_108 = t;
            t = not_null(p_108);
            if(match_cons(t, sym_Output_1))
              {
                q_108 = ATgetArgument(t, 0);
                t = w_108(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(h_5, t);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          {
            ATerm r_108 = NULL;
            ATerm x_108 (ATerm t)
            {
              t = not_null(r_108);
              if(((o_108 != NULL) && (o_108 != t)))
                _fail(t);
              else
                o_108 = t;
              t = not_null(r_108);
              return(t);
            }
            t = term_o_40;
            if(((r_108 != NULL) && (r_108 != t)))
              _fail(t);
            else
              r_108 = t;
            t = x_108(t);
          }
        }
      return(t);
    }
    t = _2_0(g_5, _id, t);
  }
  t = l_40;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        t = not_null(o_108);
        return(t);
      }
      t = split_2_0(j_5, _id, t);
      return(t);
    }
    t = _2_0(_id, i_5, t);
    {
      ATerm p_40 = t;
      int q_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_5 (ATerm t)
          {
            ATerm l_5 (ATerm t)
            {
              ATerm s_108 = NULL;
              if(((s_108 != NULL) && (s_108 != t)))
                _fail(t);
              else
                s_108 = t;
              t = not_null(s_108);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(s_108);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(l_5, t);
            return(t);
          }
          t = _2_0(k_5, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(q_40);
        }
      else
        {
          t = p_40;
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
ATerm apply_strategy_1_0 (ATerm m_132 (ATerm), ATerm t)
{
  ATerm b_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  ATerm j_109 (ATerm t)
  {
    ATerm g_109 = NULL,h_109 = NULL;
    t = not_null(e_109);
    if(((g_109 != NULL) && (g_109 != t)))
      _fail(t);
    else
      g_109 = t;
    t = not_null(f_109);
    if(((h_109 != NULL) && (h_109 != t)))
      _fail(t);
    else
      h_109 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_109)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_109))), not_null(h_109));
    return(t);
  }
  ATerm r_40;
  r_40 = t;
  t = dtime_0_0(t);
  t = r_40;
  t = m_132(t);
  {
    ATerm s_40;
    s_40 = t;
    {
      ATerm c_109 = NULL;
      ATerm i_109 (ATerm t)
      {
        t = not_null(c_109);
        if(((b_109 != NULL) && (b_109 != t)))
          _fail(t);
        else
          b_109 = t;
        t = not_null(c_109);
        return(t);
      }
      t = dtime_0_0(t);
      if(((c_109 != NULL) && (c_109 != t)))
        _fail(t);
      else
        c_109 = t;
      t = i_109(t);
    }
    t = s_40;
    if(((d_109 != NULL) && (d_109 != t)))
      _fail(t);
    else
      d_109 = t;
    t = not_null(d_109);
    if(match_cons(t, sym__2))
      {
        e_109 = ATgetArgument(t, 0);
        f_109 = ATgetArgument(t, 1);
        t = j_109(t);
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
  ATerm n_109 = NULL,w_109 = NULL;
  ATerm b_110 (ATerm t)
  {
    ATerm x_109 = NULL;
    t = not_null(n_109);
    if(((x_109 != NULL) && (x_109 != t)))
      _fail(t);
    else
      x_109 = t;
    t = not_null(w_109);
    t = SSL_fclose(not_null(x_109));
    return(t);
  }
  ATerm c_110 (ATerm t)
  {
    ATerm a_110 = NULL;
    t = not_null(w_109);
    if(((a_110 != NULL) && (a_110 != t)))
      _fail(t);
    else
      a_110 = t;
    t = not_null(w_109);
    t = SSL_fclose(not_null(a_110));
    return(t);
  }
  if(((w_109 != NULL) && (w_109 != t)))
    _fail(t);
  else
    w_109 = t;
  t = not_null(w_109);
  if(match_cons(t, sym_Stream_1))
    {
      n_109 = ATgetArgument(t, 0);
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_110(t);
            ;
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            t = c_110(t);
          }
      }
    }
  else
    {
      t = c_110(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL;
  ATerm i_110 (ATerm t)
  {
    ATerm h_110 = NULL;
    t = not_null(g_110);
    if(((h_110 != NULL) && (h_110 != t)))
      _fail(t);
    else
      h_110 = t;
    t = not_null(f_110);
    t = SSL_read_term_from_stream(not_null(h_110));
    return(t);
  }
  if(((f_110 != NULL) && (f_110 != t)))
    _fail(t);
  else
    f_110 = t;
  t = not_null(f_110);
  if(match_cons(t, sym_Stream_1))
    {
      g_110 = ATgetArgument(t, 0);
      t = i_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm v_40;
  v_40 = t;
  {
    ATerm l_110 = NULL,n_110 = NULL;
    ATerm w_40;
    w_40 = t;
    {
      ATerm m_110 = NULL;
      ATerm r_110 (ATerm t)
      {
        t = not_null(m_110);
        if(((l_110 != NULL) && (l_110 != t)))
          _fail(t);
        else
          l_110 = t;
        t = not_null(m_110);
        return(t);
      }
      t = j_137(t);
      if(((m_110 != NULL) && (m_110 != t)))
        _fail(t);
      else
        m_110 = t;
      t = r_110(t);
    }
    t = w_40;
    {
      ATerm p_110 = NULL;
      ATerm s_110 (ATerm t)
      {
        t = not_null(p_110);
        if(((n_110 != NULL) && (n_110 != t)))
          _fail(t);
        else
          n_110 = t;
        t = not_null(p_110);
        return(t);
      }
      if(((p_110 != NULL) && (p_110 != t)))
        _fail(t);
      else
        p_110 = t;
      t = s_110(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_110)), not_null(l_110)));
      t = printnl_0_0(t);
    }
  }
  t = v_40;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  ATerm d_111 (ATerm t)
  {
    ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL;
    t = not_null(x_110);
    if(((z_110 != NULL) && (z_110 != t)))
      _fail(t);
    else
      z_110 = t;
    t = not_null(y_110);
    if(((a_111 != NULL) && (a_111 != t)))
      _fail(t);
    else
      a_111 = t;
    t = not_null(w_110);
    t = SSL_fopen(not_null(z_110), not_null(a_111));
    {
      ATerm c_111 = NULL;
      ATerm e_111 (ATerm t)
      {
        t = not_null(c_111);
        if(((b_111 != NULL) && (b_111 != t)))
          _fail(t);
        else
          b_111 = t;
        t = not_null(c_111);
        return(t);
      }
      if(((c_111 != NULL) && (c_111 != t)))
        _fail(t);
      else
        c_111 = t;
      t = e_111(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_111));
    }
    return(t);
  }
  if(((w_110 != NULL) && (w_110 != t)))
    _fail(t);
  else
    w_110 = t;
  t = not_null(w_110);
  if(match_cons(t, sym__2))
    {
      x_110 = ATgetArgument(t, 0);
      y_110 = ATgetArgument(t, 1);
      t = d_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm g_111 = NULL;
  ATerm i_111 (ATerm t)
  {
    ATerm h_111 = NULL;
    t = not_null(g_111);
    if(((h_111 != NULL) && (h_111 != t)))
      _fail(t);
    else
      h_111 = t;
    t = not_null(g_111);
    t = SSL_is_string(not_null(h_111));
    return(t);
  }
  if(((g_111 != NULL) && (g_111 != t)))
    _fail(t);
  else
    g_111 = t;
  t = i_111(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_111 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_111 = NULL;
    ATerm m_111 (ATerm t)
    {
      t = not_null(l_111);
      if(((k_111 != NULL) && (k_111 != t)))
        _fail(t);
      else
        k_111 = t;
      t = not_null(l_111);
      return(t);
    }
    if(((l_111 != NULL) && (l_111 != t)))
      _fail(t);
    else
      l_111 = t;
    t = m_111(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_111));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_111 = NULL;
  t = SSL_stdout_stream();
  {
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
    if(((p_111 != NULL) && (p_111 != t)))
      _fail(t);
    else
      p_111 = t;
    t = q_111(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_111));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_111 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm v_111 = NULL;
    ATerm w_111 (ATerm t)
    {
      t = not_null(v_111);
      if(((u_111 != NULL) && (u_111 != t)))
        _fail(t);
      else
        u_111 = t;
      t = not_null(v_111);
      return(t);
    }
    if(((v_111 != NULL) && (v_111 != t)))
      _fail(t);
    else
      v_111 = t;
    t = w_111(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_111));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_112 = NULL;
  ATerm c_112 (ATerm t)
  {
    t = not_null(b_112);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm d_112 (ATerm t)
  {
    t = not_null(b_112);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm e_112 (ATerm t)
  {
    t = not_null(b_112);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((b_112 != NULL) && (b_112 != t)))
    _fail(t);
  else
    b_112 = t;
  t = not_null(b_112);
  if(match_cons(t, sym_stderr_0))
    {
      t = c_112(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_112(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = e_112(t);
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
  ATerm l_112 = NULL;
  ATerm w_112 (ATerm t)
  {
    ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
    t = not_null(l_112);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    t = not_null(l_112);
    {
      ATerm p_112 = NULL;
      ATerm x_112 (ATerm t)
      {
        ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
        ATerm y_112 (ATerm t)
        {
          t = not_null(u_112);
          if(((o_112 != NULL) && (o_112 != t)))
            _fail(t);
          else
            o_112 = t;
          t = not_null(v_112);
          if(((n_112 != NULL) && (n_112 != t)))
            _fail(t);
          else
            n_112 = t;
          t = not_null(r_112);
          return(t);
        }
        t = not_null(p_112);
        if(((q_112 != NULL) && (q_112 != t)))
          _fail(t);
        else
          q_112 = t;
        t = not_null(p_112);
        t = SSL_explode_term(not_null(q_112));
        if(((r_112 != NULL) && (r_112 != t)))
          _fail(t);
        else
          r_112 = t;
        t = not_null(r_112);
        if(match_cons(t, sym__2))
          {
            s_112 = ATgetArgument(t, 0);
            t_112 = ATgetArgument(t, 1);
            t = not_null(s_112);
            if(match_string(t, ""))
              {
                t = not_null(t_112);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_112 = ATgetFirst((ATermList) t);
                    v_112 = (ATerm) ATgetNext((ATermList) t);
                    t = y_112(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(m_112);
      if(((p_112 != NULL) && (p_112 != t)))
        _fail(t);
      else
        p_112 = t;
      t = x_112(t);
      t = not_null(o_112);
    }
    return(t);
  }
  if(((l_112 != NULL) && (l_112 != t)))
    _fail(t);
  else
    l_112 = t;
  t = w_112(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
  ATerm k_113 (ATerm t)
  {
    t = not_null(d_113);
    {
      ATerm x_40 = t;
      int y_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(y_40);
        }
      else
        {
          t = x_40;
          {
            ATerm z_40 = t;
            int a_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm h_113 = NULL,i_113 = NULL;
                  ATerm l_113 (ATerm t)
                  {
                    ATerm j_113 = NULL;
                    t = not_null(i_113);
                    if(((j_113 != NULL) && (j_113 != t)))
                      _fail(t);
                    else
                      j_113 = t;
                    t = not_null(j_113);
                    return(t);
                  }
                  if(((h_113 != NULL) && (h_113 != t)))
                    _fail(t);
                  else
                    h_113 = t;
                  t = not_null(h_113);
                  if(match_cons(t, sym_Path_1))
                    {
                      i_113 = ATgetArgument(t, 0);
                      t = l_113(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(m_5, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(a_41);
              }
            else
              {
                t = z_40;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((d_113 != NULL) && (d_113 != t)))
    _fail(t);
  else
    d_113 = t;
  t = not_null(d_113);
  if(match_cons(t, sym__2))
    {
      e_113 = ATgetArgument(t, 0);
      f_113 = ATgetArgument(t, 1);
      t = k_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_113 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_113 = NULL;
      ATerm p_113 = NULL;
      ATerm s_113 (ATerm t)
      {
        t = not_null(p_113);
        if(((o_113 != NULL) && (o_113 != t)))
          _fail(t);
        else
          o_113 = t;
        t = not_null(p_113);
        return(t);
      }
      if(((p_113 != NULL) && (p_113 != t)))
        _fail(t);
      else
        p_113 = t;
      t = s_113(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_113), term_x_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm n_5 (ATerm t)
        {
          t = term_j_42;
          return(t);
        }
        t = debug_1_0(n_5, t);
        _fail(t);
      }
    }
  {
    ATerm k_42;
    k_42 = t;
    {
      ATerm r_113 = NULL;
      ATerm t_113 (ATerm t)
      {
        t = not_null(r_113);
        if(((q_113 != NULL) && (q_113 != t)))
          _fail(t);
        else
          q_113 = t;
        t = not_null(r_113);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((r_113 != NULL) && (r_113 != t)))
        _fail(t);
      else
        r_113 = t;
      t = t_113(t);
    }
    t = k_42;
    t = fclose_0_0(t);
    t = not_null(q_113);
  }
  return(t);
}
ATerm split_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm y_113 = NULL,c_114 = NULL;
  ATerm m_42;
  m_42 = t;
  {
    ATerm z_113 = NULL;
    ATerm e_114 (ATerm t)
    {
      t = not_null(z_113);
      if(((y_113 != NULL) && (y_113 != t)))
        _fail(t);
      else
        y_113 = t;
      t = not_null(z_113);
      return(t);
    }
    t = a_114(t);
    if(((z_113 != NULL) && (z_113 != t)))
      _fail(t);
    else
      z_113 = t;
    t = e_114(t);
  }
  t = m_42;
  {
    ATerm d_114 = NULL;
    ATerm f_114 (ATerm t)
    {
      t = not_null(d_114);
      if(((c_114 != NULL) && (c_114 != t)))
        _fail(t);
      else
        c_114 = t;
      t = not_null(d_114);
      return(t);
    }
    t = b_114(t);
    if(((d_114 != NULL) && (d_114 != t)))
      _fail(t);
    else
      d_114 = t;
    t = f_114(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_113), not_null(c_114));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm j_114 = NULL;
  ATerm n_42;
  n_42 = t;
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 (ATerm t)
        {
          ATerm k_114 = NULL,l_114 = NULL;
          ATerm n_114 (ATerm t)
          {
            t = not_null(l_114);
            if(((j_114 != NULL) && (j_114 != t)))
              _fail(t);
            else
              j_114 = t;
            t = not_null(k_114);
            return(t);
          }
          if(((k_114 != NULL) && (k_114 != t)))
            _fail(t);
          else
            k_114 = t;
          t = not_null(k_114);
          if(match_cons(t, sym_Input_1))
            {
              l_114 = ATgetArgument(t, 0);
              t = n_114(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(o_5, t);
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        {
          ATerm m_114 = NULL;
          ATerm o_114 (ATerm t)
          {
            t = not_null(m_114);
            if(((j_114 != NULL) && (j_114 != t)))
              _fail(t);
            else
              j_114 = t;
            t = not_null(m_114);
            return(t);
          }
          t = term_b_43;
          if(((m_114 != NULL) && (m_114 != t)))
            _fail(t);
          else
            m_114 = t;
          t = o_114(t);
        }
      }
  }
  t = n_42;
  {
    ATerm p_5 (ATerm t)
    {
      t = not_null(j_114);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, p_5, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_114 = NULL;
    if(((r_114 != NULL) && (r_114 != t)))
      _fail(t);
    else
      r_114 = t;
    t = not_null(r_114);
    if(match_string(t, "-k"))
      {
        t = not_null(r_114);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(r_114);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm c_43;
    c_43 = t;
    {
      ATerm s_114 = NULL;
      ATerm t_114 = NULL;
      ATerm u_114 (ATerm t)
      {
        t = not_null(t_114);
        if(((s_114 != NULL) && (s_114 != t)))
          _fail(t);
        else
          s_114 = t;
        t = not_null(t_114);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((t_114 != NULL) && (t_114 != t)))
        _fail(t);
      else
        t_114 = t;
      t = u_114(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_43, not_null(s_114));
      t = set_config_0_0(t);
    }
    t = c_43;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_n_43;
    return(t);
  }
  t = ArgOption_3_0(q_5, r_5, s_5, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm w_114 = NULL;
  ATerm y_114 (ATerm t)
  {
    ATerm x_114 = NULL;
    t = not_null(w_114);
    if(((x_114 != NULL) && (x_114 != t)))
      _fail(t);
    else
      x_114 = t;
    t = not_null(w_114);
    t = SSL_string_to_int(not_null(x_114));
    return(t);
  }
  if(((w_114 != NULL) && (w_114 != t)))
    _fail(t);
  else
    w_114 = t;
  t = y_114(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm k_115 = NULL;
        if(((k_115 != NULL) && (k_115 != t)))
          _fail(t);
        else
          k_115 = t;
        t = not_null(k_115);
        if(match_string(t, "-S"))
          {
            t = not_null(k_115);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(k_115);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_q_43;
        t = set_config_0_0(t);
        t = term_d_44;
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = term_e_44;
        return(t);
      }
      t = Option_3_0(t_5, u_5, v_5, t);
      ;
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              ATerm l_115 = NULL;
              if(((l_115 != NULL) && (l_115 != t)))
                _fail(t);
              else
                l_115 = t;
              t = not_null(l_115);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(l_115);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              ATerm o_115 = NULL;
              ATerm n_44;
              n_44 = t;
              {
                ATerm m_115 = NULL;
                ATerm n_115 = NULL;
                ATerm r_115 (ATerm t)
                {
                  t = not_null(n_115);
                  if(((m_115 != NULL) && (m_115 != t)))
                    _fail(t);
                  else
                    m_115 = t;
                  t = not_null(n_115);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((n_115 != NULL) && (n_115 != t)))
                  _fail(t);
                else
                  n_115 = t;
                t = r_115(t);
                t = (ATerm) ATmakeAppl(sym__2, term_i_40, not_null(m_115));
                t = set_config_0_0(t);
              }
              t = n_44;
              {
                ATerm p_115 = NULL;
                ATerm s_115 (ATerm t)
                {
                  t = not_null(p_115);
                  if(((o_115 != NULL) && (o_115 != t)))
                    _fail(t);
                  else
                    o_115 = t;
                  t = not_null(p_115);
                  return(t);
                }
                if(((p_115 != NULL) && (p_115 != t)))
                  _fail(t);
                else
                  p_115 = t;
                t = s_115(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_115));
              }
              return(t);
            }
            ATerm y_5 (ATerm t)
            {
              t = term_o_44;
              return(t);
            }
            t = ArgOption_3_0(w_5, x_5, y_5, t);
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
            {
              ATerm z_5 (ATerm t)
              {
                ATerm q_115 = NULL;
                if(((q_115 != NULL) && (q_115 != t)))
                  _fail(t);
                else
                  q_115 = t;
                t = not_null(q_115);
                if(match_string(t, "-s"))
                  {
                    t = not_null(q_115);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                t = term_q_44;
                t = set_config_0_0(t);
                t = term_t_44;
                return(t);
              }
              ATerm b_6 (ATerm t)
              {
                t = term_u_44;
                return(t);
              }
              t = Option_3_0(z_5, a_6, b_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(w_44);
    }
  else
    {
      t = v_44;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm w_115 = NULL;
    if(((w_115 != NULL) && (w_115 != t)))
      _fail(t);
    else
      w_115 = t;
    t = not_null(w_115);
    if(match_string(t, "-o"))
      {
        t = not_null(w_115);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(w_115);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm z_115 = NULL;
    ATerm d_45;
    d_45 = t;
    {
      ATerm x_115 = NULL;
      ATerm y_115 = NULL;
      ATerm b_116 (ATerm t)
      {
        t = not_null(y_115);
        if(((x_115 != NULL) && (x_115 != t)))
          _fail(t);
        else
          x_115 = t;
        t = not_null(y_115);
        return(t);
      }
      if(((y_115 != NULL) && (y_115 != t)))
        _fail(t);
      else
        y_115 = t;
      t = b_116(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_45, not_null(x_115));
      t = set_config_0_0(t);
    }
    t = d_45;
    {
      ATerm a_116 = NULL;
      ATerm c_116 (ATerm t)
      {
        t = not_null(a_116);
        if(((z_115 != NULL) && (z_115 != t)))
          _fail(t);
        else
          z_115 = t;
        t = not_null(a_116);
        return(t);
      }
      if(((a_116 != NULL) && (a_116 != t)))
        _fail(t);
      else
        a_116 = t;
      t = c_116(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_115));
    }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_m_45;
    return(t);
  }
  t = ArgOption_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = n_45;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm e_116 = NULL;
          if(((e_116 != NULL) && (e_116 != t)))
            _fail(t);
          else
            e_116 = t;
          t = not_null(e_116);
          if(match_string(t, "-b"))
            {
              t = not_null(e_116);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = term_y_45;
          t = set_config_0_0(t);
          t = term_z_45;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_l_46;
          return(t);
        }
        t = Option_3_0(f_6, g_6, h_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_116 = NULL,l_116 = NULL,m_116 = NULL,o_116 = NULL,r_116 = NULL;
  ATerm x_116 (ATerm t)
  {
    t = not_null(k_116);
    t = register_usage_1_0(l_0, t);
    return(t);
  }
  ATerm y_116 (ATerm t)
  {
    ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL;
    t = not_null(l_116);
    if(((s_116 != NULL) && (s_116 != t)))
      _fail(t);
    else
      s_116 = t;
    t = not_null(o_116);
    if(((t_116 != NULL) && (t_116 != t)))
      _fail(t);
    else
      t_116 = t;
    t = not_null(r_116);
    if(((u_116 != NULL) && (u_116 != t)))
      _fail(t);
    else
      u_116 = t;
    t = not_null(k_116);
    {
      ATerm m_46;
      m_46 = t;
      t = not_null(s_116);
      t = h_0(t);
      t = m_46;
      {
        ATerm w_116 = NULL;
        ATerm b_117 (ATerm t)
        {
          t = not_null(w_116);
          if(((v_116 != NULL) && (v_116 != t)))
            _fail(t);
          else
            v_116 = t;
          t = not_null(w_116);
          return(t);
        }
        t = not_null(t_116);
        t = i_0(t);
        if(((w_116 != NULL) && (w_116 != t)))
          _fail(t);
        else
          w_116 = t;
        t = b_117(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(u_116)), not_null(v_116));
      }
    }
    return(t);
  }
  if(((k_116 != NULL) && (k_116 != t)))
    _fail(t);
  else
    k_116 = t;
  t = not_null(k_116);
  if(match_string(t, "register-usage-info"))
    {
      t = x_116(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_116 = ATgetFirst((ATermList) t);
          m_116 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_116);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_116 = ATgetFirst((ATermList) t);
              r_116 = (ATerm) ATgetNext((ATermList) t);
              t = y_116(t);
            }
          else
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
  ATerm i_6 (ATerm t)
  {
    ATerm h_117 = NULL;
    if(((h_117 != NULL) && (h_117 != t)))
      _fail(t);
    else
      h_117 = t;
    t = not_null(h_117);
    if(match_string(t, "-i"))
      {
        t = not_null(h_117);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(h_117);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    ATerm k_117 = NULL;
    ATerm n_46;
    n_46 = t;
    {
      ATerm i_117 = NULL;
      ATerm j_117 = NULL;
      ATerm m_117 (ATerm t)
      {
        t = not_null(j_117);
        if(((i_117 != NULL) && (i_117 != t)))
          _fail(t);
        else
          i_117 = t;
        t = not_null(j_117);
        return(t);
      }
      if(((j_117 != NULL) && (j_117 != t)))
        _fail(t);
      else
        j_117 = t;
      t = m_117(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_46, not_null(i_117));
      t = set_config_0_0(t);
    }
    t = n_46;
    {
      ATerm l_117 = NULL;
      ATerm n_117 (ATerm t)
      {
        t = not_null(l_117);
        if(((k_117 != NULL) && (k_117 != t)))
          _fail(t);
        else
          k_117 = t;
        t = not_null(l_117);
        return(t);
      }
      if(((l_117 != NULL) && (l_117 != t)))
        _fail(t);
      else
        l_117 = t;
      t = n_117(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_117));
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_p_46;
    return(t);
  }
  t = ArgOption_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      {
        ATerm t_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(u_46);
          }
        else
          {
            t = t_46;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_117 = NULL;
  t = report_run_time_0_0(t);
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
    t = term_v_7;
    t = whoami_0_0(t);
    if(((q_117 != NULL) && (q_117 != t)))
      _fail(t);
    else
      q_117 = t;
    t = r_117(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATinsert(ATempty, term_e_47), not_null(p_117)));
    t = printnl_0_0(t);
    t = term_b_18;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_47;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm t_117 = NULL;
  ATerm v_117 (ATerm t)
  {
    ATerm u_117 = NULL;
    t = not_null(t_117);
    if(((u_117 != NULL) && (u_117 != t)))
      _fail(t);
    else
      u_117 = t;
    t = not_null(t_117);
    t = SSL_TicksToSeconds(not_null(u_117));
    return(t);
  }
  if(((t_117 != NULL) && (t_117 != t)))
    _fail(t);
  else
    t_117 = t;
  t = v_117(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  ATerm d_118 (ATerm t)
  {
    ATerm b_118 = NULL,c_118 = NULL;
    t = not_null(z_117);
    if(((b_118 != NULL) && (b_118 != t)))
      _fail(t);
    else
      b_118 = t;
    t = not_null(a_118);
    if(((c_118 != NULL) && (c_118 != t)))
      _fail(t);
    else
      c_118 = t;
    t = not_null(y_117);
    {
      ATerm g_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(b_118), not_null(c_118));
          ;
          LocalPopChoice(h_47);
        }
      else
        {
          t = g_47;
          t = SSL_addr(not_null(b_118), not_null(c_118));
        }
    }
    return(t);
  }
  if(((y_117 != NULL) && (y_117 != t)))
    _fail(t);
  else
    y_117 = t;
  t = not_null(y_117);
  if(match_cons(t, sym__2))
    {
      z_117 = ATgetArgument(t, 0);
      a_118 = ATgetArgument(t, 1);
      t = d_118(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t)
{
  ATerm i_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = o_121(t);
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = i_47;
      {
        ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL;
        ATerm o_118 (ATerm t)
        {
          ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL;
          t = not_null(i_118);
          if(((k_118 != NULL) && (k_118 != t)))
            _fail(t);
          else
            k_118 = t;
          t = not_null(j_118);
          if(((l_118 != NULL) && (l_118 != t)))
            _fail(t);
          else
            l_118 = t;
          t = not_null(h_118);
          {
            ATerm n_118 = NULL;
            ATerm p_118 (ATerm t)
            {
              t = not_null(n_118);
              if(((m_118 != NULL) && (m_118 != t)))
                _fail(t);
              else
                m_118 = t;
              t = not_null(n_118);
              return(t);
            }
            t = not_null(l_118);
            t = foldr_2_0(o_121, p_121, t);
            if(((n_118 != NULL) && (n_118 != t)))
              _fail(t);
            else
              n_118 = t;
            t = p_118(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_118), not_null(m_118));
            t = p_121(t);
          }
          return(t);
        }
        if(((h_118 != NULL) && (h_118 != t)))
          _fail(t);
        else
          h_118 = t;
        t = not_null(h_118);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_118 = ATgetFirst((ATermList) t);
            j_118 = (ATerm) ATgetNext((ATermList) t);
            t = o_118(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t)
{
  ATerm u_118 = NULL;
  ATerm i_119 (ATerm t)
  {
    ATerm v_118 = NULL,w_118 = NULL;
    t = not_null(u_118);
    if(((v_118 != NULL) && (v_118 != t)))
      _fail(t);
    else
      v_118 = t;
    t = not_null(u_118);
    {
      ATerm z_118 = NULL;
      ATerm j_119 (ATerm t)
      {
        ATerm a_119 = NULL,d_119 = NULL,e_119 = NULL,h_119 = NULL;
        ATerm k_119 (ATerm t)
        {
          t = not_null(h_119);
          if(((w_118 != NULL) && (w_118 != t)))
            _fail(t);
          else
            w_118 = t;
          t = not_null(d_119);
          return(t);
        }
        t = not_null(z_118);
        if(((a_119 != NULL) && (a_119 != t)))
          _fail(t);
        else
          a_119 = t;
        t = not_null(z_118);
        t = SSL_explode_term(not_null(a_119));
        if(((d_119 != NULL) && (d_119 != t)))
          _fail(t);
        else
          d_119 = t;
        t = not_null(d_119);
        if(match_cons(t, sym__2))
          {
            e_119 = ATgetArgument(t, 0);
            h_119 = ATgetArgument(t, 1);
            t = k_119(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(v_118);
      if(((z_118 != NULL) && (z_118 != t)))
        _fail(t);
      else
        z_118 = t;
      t = j_119(t);
      t = not_null(w_118);
      t = foldr_2_0(m_119, n_119, t);
    }
    return(t);
  }
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  t = i_119(t);
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
    ATerm l_6 (ATerm t)
    {
      t = term_a_18;
      return(t);
    }
    t = crush_2_0(l_6, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  ATerm x_119 (ATerm t)
  {
    ATerm v_119 = NULL,w_119 = NULL;
    t = not_null(t_119);
    if(((v_119 != NULL) && (v_119 != t)))
      _fail(t);
    else
      v_119 = t;
    t = not_null(u_119);
    if(((w_119 != NULL) && (w_119 != t)))
      _fail(t);
    else
      w_119 = t;
    t = not_null(s_119);
    {
      ATerm n_47;
      n_47 = t;
      {
        ATerm o_47 = t;
        int p_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(v_119), not_null(w_119));
            ;
            LocalPopChoice(p_47);
          }
        else
          {
            t = o_47;
            t = SSL_gtr(not_null(v_119), not_null(w_119));
          }
      }
      t = n_47;
    }
    return(t);
  }
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  t = not_null(s_119);
  if(match_cons(t, sym__2))
    {
      t_119 = ATgetArgument(t, 0);
      u_119 = ATgetArgument(t, 1);
      t = x_119(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_120 = NULL;
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL;
      ATerm e_120 (ATerm t)
      {
        t = not_null(c_120);
        if(((a_120 != NULL) && (a_120 != t)))
          _fail(t);
        else
          a_120 = t;
        t = not_null(d_120);
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
      t = not_null(b_120);
      if(match_cons(t, sym__2))
        {
          c_120 = ATgetArgument(t, 0);
          d_120 = ATgetArgument(t, 1);
          t = e_120(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_47);
    }
  else
    {
      t = q_47;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm l_48;
    l_48 = t;
    {
      ATerm g_120 = NULL;
      ATerm h_120 = NULL;
      ATerm i_120 (ATerm t)
      {
        t = not_null(h_120);
        if(((g_120 != NULL) && (g_120 != t)))
          _fail(t);
        else
          g_120 = t;
        t = not_null(h_120);
        return(t);
      }
      t = term_i_40;
      t = get_config_0_0(t);
      if(((h_120 != NULL) && (h_120 != t)))
        _fail(t);
      else
        h_120 = t;
      t = i_120(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_120), term_b_18);
      t = geq_0_0(t);
    }
    t = l_48;
    t = s_130(t);
    return(t);
  }
  t = try_1_0(m_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm l_120 = NULL,n_120 = NULL;
    ATerm m_48;
    m_48 = t;
    {
      ATerm m_120 = NULL;
      ATerm p_120 (ATerm t)
      {
        t = not_null(m_120);
        if(((l_120 != NULL) && (l_120 != t)))
          _fail(t);
        else
          l_120 = t;
        t = not_null(m_120);
        return(t);
      }
      t = run_time_0_0(t);
      if(((m_120 != NULL) && (m_120 != t)))
        _fail(t);
      else
        m_120 = t;
      t = p_120(t);
    }
    t = m_48;
    {
      ATerm o_120 = NULL;
      ATerm q_120 (ATerm t)
      {
        t = not_null(o_120);
        if(((n_120 != NULL) && (n_120 != t)))
          _fail(t);
        else
          n_120 = t;
        t = not_null(o_120);
        return(t);
      }
      t = term_v_7;
      t = whoami_0_0(t);
      if(((o_120 != NULL) && (o_120 != t)))
        _fail(t);
      else
        o_120 = t;
      t = q_120(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_48), not_null(l_120)), term_n_48), not_null(n_120)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(n_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_a_18;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm v_120 = NULL;
  ATerm b_121 (ATerm t)
  {
    ATerm w_120 = NULL,x_120 = NULL,z_120 = NULL;
    t = not_null(v_120);
    if(((w_120 != NULL) && (w_120 != t)))
      _fail(t);
    else
      w_120 = t;
    t = not_null(v_120);
    {
      ATerm p_48;
      p_48 = t;
      {
        ATerm y_120 = NULL;
        ATerm c_121 (ATerm t)
        {
          t = not_null(y_120);
          if(((x_120 != NULL) && (x_120 != t)))
            _fail(t);
          else
            x_120 = t;
          t = not_null(y_120);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_120));
        if(((y_120 != NULL) && (y_120 != t)))
          _fail(t);
        else
          y_120 = t;
        t = c_121(t);
      }
      t = p_48;
      {
        ATerm a_121 = NULL;
        ATerm e_121 (ATerm t)
        {
          t = not_null(a_121);
          if(((z_120 != NULL) && (z_120 != t)))
            _fail(t);
          else
            z_120 = t;
          t = not_null(a_121);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_120));
        if(((a_121 != NULL) && (a_121 != t)))
          _fail(t);
        else
          a_121 = t;
        t = e_121(t);
        t = not_null(z_120);
      }
    }
    return(t);
  }
  if(((v_120 != NULL) && (v_120 != t)))
    _fail(t);
  else
    v_120 = t;
  t = not_null(v_120);
  if(match_cons(t, sym_Version_0))
    {
      t = b_121(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_133 (ATerm), ATerm t)
{
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_48;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_48);
    }
  else
    {
      t = q_48;
      {
        ATerm o_6 (ATerm t)
        {
          ATerm t_48 = t;
          int u_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(u_48);
            }
          else
            {
              t = t_48;
              {
                ATerm v_48 = t;
                int w_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_48);
                  }
                else
                  {
                    t = v_48;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(o_6, t);
      }
    }
  t = k_133(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_121 = NULL;
  ATerm i_121 (ATerm t)
  {
    ATerm h_121 = NULL;
    t = not_null(g_121);
    if(((h_121 != NULL) && (h_121 != t)))
      _fail(t);
    else
      h_121 = t;
    t = not_null(g_121);
    t = SSL_table_create(not_null(h_121));
    return(t);
  }
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  t = i_121(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm k_121 = NULL;
  ATerm m_121 (ATerm t)
  {
    ATerm l_121 = NULL;
    t = not_null(k_121);
    if(((l_121 != NULL) && (l_121 != t)))
      _fail(t);
    else
      l_121 = t;
    t = not_null(k_121);
    {
      ATerm x_48;
      x_48 = t;
      t = term_y_48;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_y_48, term_z_48, not_null(l_121));
      t = table_put_0_0(t);
      t = x_48;
    }
    return(t);
  }
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  t = m_121(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_121 = NULL;
  ATerm v_121 (ATerm t)
  {
    ATerm u_121 = NULL;
    t = not_null(t_121);
    if(((u_121 != NULL) && (u_121 != t)))
      _fail(t);
    else
      u_121 = t;
    t = not_null(t_121);
    t = SSL_table_destroy(not_null(u_121));
    return(t);
  }
  if(((t_121 != NULL) && (t_121 != t)))
    _fail(t);
  else
    t_121 = t;
  t = v_121(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm x_121 = NULL;
  ATerm z_121 (ATerm t)
  {
    ATerm y_121 = NULL;
    t = not_null(x_121);
    if(((y_121 != NULL) && (y_121 != t)))
      _fail(t);
    else
      y_121 = t;
    t = not_null(x_121);
    t = SSL_exit(not_null(y_121));
    return(t);
  }
  if(((x_121 != NULL) && (x_121 != t)))
    _fail(t);
  else
    x_121 = t;
  t = z_121(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm a_122 (ATerm t)
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
        t = Cons_2_0(p_116, a_122, t);
      }
    return(t);
  }
  t = a_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
  ATerm s_122 (ATerm t)
  {
    ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL;
    t = not_null(h_122);
    if(((k_122 != NULL) && (k_122 != t)))
      _fail(t);
    else
      k_122 = t;
    t = not_null(i_122);
    if(((l_122 != NULL) && (l_122 != t)))
      _fail(t);
    else
      l_122 = t;
    t = not_null(l_122);
    {
      ATerm t_49;
      t_49 = t;
      {
        ATerm n_122 = NULL,p_122 = NULL,r_122 = NULL;
        ATerm c_123 (ATerm t)
        {
          t = not_null(r_122);
          if(((m_122 != NULL) && (m_122 != t)))
            _fail(t);
          else
            m_122 = t;
          t = not_null(r_122);
          return(t);
        }
        ATerm u_49;
        u_49 = t;
        {
          ATerm o_122 = NULL;
          ATerm u_122 (ATerm t)
          {
            t = not_null(o_122);
            if(((n_122 != NULL) && (n_122 != t)))
              _fail(t);
            else
              n_122 = t;
            t = not_null(o_122);
            return(t);
          }
          t = f_0(t);
          if(((o_122 != NULL) && (o_122 != t)))
            _fail(t);
          else
            o_122 = t;
          t = u_122(t);
        }
        t = u_49;
        {
          ATerm q_122 = NULL;
          ATerm a_123 (ATerm t)
          {
            t = not_null(q_122);
            if(((p_122 != NULL) && (p_122 != t)))
              _fail(t);
            else
              p_122 = t;
            t = not_null(q_122);
            return(t);
          }
          t = not_null(k_122);
          t = e_0(t);
          if(((q_122 != NULL) && (q_122 != t)))
            _fail(t);
          else
            q_122 = t;
          t = a_123(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(n_122)), not_null(p_122));
          if(((r_122 != NULL) && (r_122 != t)))
            _fail(t);
          else
            r_122 = t;
          t = c_123(t);
        }
      }
      t = t_49;
      {
        ATerm p_6 (ATerm t)
        {
          t = not_null(m_122);
          return(t);
        }
        t = reverse_acc_2_0(e_0, p_6, t);
      }
    }
    return(t);
  }
  ATerm t_122 (ATerm t)
  {
    t = term_v_7;
    t = f_0(t);
    return(t);
  }
  if(((j_122 != NULL) && (j_122 != t)))
    _fail(t);
  else
    j_122 = t;
  t = not_null(j_122);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_122 = ATgetFirst((ATermList) t);
      i_122 = (ATerm) ATgetNext((ATermList) t);
      t = s_122(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_122(t);
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
  ATerm q_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, q_6, t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL;
  ATerm z_123 (ATerm t)
  {
    ATerm k_123 = NULL,l_123 = NULL,m_123 = NULL,o_123 = NULL;
    ATerm d_124 (ATerm t)
    {
      ATerm w_123 = NULL,x_123 = NULL;
      t = not_null(o_123);
      if(((w_123 != NULL) && (w_123 != t)))
        _fail(t);
      else
        w_123 = t;
      t = not_null(o_123);
      {
        ATerm y_123 = NULL;
        ATerm e_124 (ATerm t)
        {
          t = not_null(y_123);
          if(((x_123 != NULL) && (x_123 != t)))
            _fail(t);
          else
            x_123 = t;
          t = not_null(y_123);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_123)), not_null(m_123));
        if(((y_123 != NULL) && (y_123 != t)))
          _fail(t);
        else
          y_123 = t;
        t = e_124(t);
        t = not_null(x_123);
      }
      return(t);
    }
    t = not_null(i_123);
    if(((k_123 != NULL) && (k_123 != t)))
      _fail(t);
    else
      k_123 = t;
    t = not_null(j_123);
    if(((l_123 != NULL) && (l_123 != t)))
      _fail(t);
    else
      l_123 = t;
    t = not_null(i_123);
    {
      ATerm n_123 = NULL;
      ATerm c_124 (ATerm t)
      {
        t = not_null(n_123);
        if(((m_123 != NULL) && (m_123 != t)))
          _fail(t);
        else
          m_123 = t;
        t = not_null(n_123);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_123));
      if(((n_123 != NULL) && (n_123 != t)))
        _fail(t);
      else
        n_123 = t;
      t = c_124(t);
      t = not_null(l_123);
      t = b_107(t);
      if(((o_123 != NULL) && (o_123 != t)))
        _fail(t);
      else
        o_123 = t;
      t = d_124(t);
    }
    return(t);
  }
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  t = not_null(i_123);
  if(match_cons(t, sym_Program_1))
    {
      j_123 = ATgetArgument(t, 0);
      t = z_123(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_124 = NULL;
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_124 = NULL;
      ATerm t_124 (ATerm t)
      {
        t = not_null(n_124);
        if(((m_124 != NULL) && (m_124 != t)))
          _fail(t);
        else
          m_124 = t;
        t = not_null(n_124);
        return(t);
      }
      t = term_f_47;
      t = get_config_0_0(t);
      if(((n_124 != NULL) && (n_124 != t)))
        _fail(t);
      else
        n_124 = t;
      t = t_124(t);
      ;
      LocalPopChoice(y_49);
    }
  else
    {
      t = x_49;
      {
        ATerm r_6 (ATerm t)
        {
          ATerm s_6 (ATerm t)
          {
            ATerm o_124 = NULL;
            ATerm u_124 (ATerm t)
            {
              t = not_null(o_124);
              if(((m_124 != NULL) && (m_124 != t)))
                _fail(t);
              else
                m_124 = t;
              t = not_null(o_124);
              return(t);
            }
            if(((o_124 != NULL) && (o_124 != t)))
              _fail(t);
            else
              o_124 = t;
            t = u_124(t);
            return(t);
          }
          t = Program_1_0(s_6, t);
          return(t);
        }
        t = option_defined_1_0(r_6, t);
      }
    }
  {
    ATerm t_6 (ATerm t)
    {
      ATerm u_6 (ATerm t)
      {
        t = not_null(m_124);
        return(t);
      }
      t = short_description_1_0(u_6, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(t_6, t);
    t = term_z_49;
    t = echo_0_0(t);
    t = term_c_50;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm p_124 = NULL;
        ATerm q_124 = NULL;
        ATerm v_124 (ATerm t)
        {
          t = not_null(q_124);
          if(((p_124 != NULL) && (p_124 != t)))
            _fail(t);
          else
            p_124 = t;
          t = not_null(q_124);
          return(t);
        }
        if(((q_124 != NULL) && (q_124 != t)))
          _fail(t);
        else
          q_124 = t;
        t = v_124(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_124)), term_d_50);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(v_6, t);
      {
        ATerm w_6 (ATerm t)
        {
          ATerm r_124 = NULL;
          ATerm s_124 = NULL;
          ATerm w_124 (ATerm t)
          {
            t = not_null(s_124);
            if(((r_124 != NULL) && (r_124 != t)))
              _fail(t);
            else
              r_124 = t;
            t = not_null(s_124);
            return(t);
          }
          ATerm x_6 (ATerm t)
          {
            t = not_null(m_124);
            return(t);
          }
          t = long_description_1_0(x_6, t);
          if(((s_124 != NULL) && (s_124 != t)))
            _fail(t);
          else
            s_124 = t;
          t = w_124(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(r_124)), term_e_50);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(w_6, t);
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
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(g_50);
    }
  else
    {
      t = f_50;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL;
  ATerm n_125 (ATerm t)
  {
    ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL,j_125 = NULL;
    ATerm p_125 (ATerm t)
    {
      ATerm k_125 = NULL,l_125 = NULL;
      t = not_null(j_125);
      if(((k_125 != NULL) && (k_125 != t)))
        _fail(t);
      else
        k_125 = t;
      t = not_null(j_125);
      {
        ATerm m_125 = NULL;
        ATerm q_125 (ATerm t)
        {
          t = not_null(m_125);
          if(((l_125 != NULL) && (l_125 != t)))
            _fail(t);
          else
            l_125 = t;
          t = not_null(m_125);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_125)), not_null(h_125));
        if(((m_125 != NULL) && (m_125 != t)))
          _fail(t);
        else
          m_125 = t;
        t = q_125(t);
        t = not_null(l_125);
      }
      return(t);
    }
    t = not_null(d_125);
    if(((f_125 != NULL) && (f_125 != t)))
      _fail(t);
    else
      f_125 = t;
    t = not_null(e_125);
    if(((g_125 != NULL) && (g_125 != t)))
      _fail(t);
    else
      g_125 = t;
    t = not_null(d_125);
    {
      ATerm i_125 = NULL;
      ATerm o_125 (ATerm t)
      {
        t = not_null(i_125);
        if(((h_125 != NULL) && (h_125 != t)))
          _fail(t);
        else
          h_125 = t;
        t = not_null(i_125);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_125));
      if(((i_125 != NULL) && (i_125 != t)))
        _fail(t);
      else
        i_125 = t;
      t = o_125(t);
      t = not_null(g_125);
      t = c_107(t);
      if(((j_125 != NULL) && (j_125 != t)))
        _fail(t);
      else
        j_125 = t;
      t = p_125(t);
    }
    return(t);
  }
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  t = not_null(d_125);
  if(match_cons(t, sym_Undefined_1))
    {
      e_125 = ATgetArgument(t, 0);
      t = n_125(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm r_125 (ATerm t)
  {
    ATerm a_51 = t;
    int b_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_116, _id, t);
        ;
        LocalPopChoice(b_51);
      }
    else
      {
        t = a_51;
        t = Cons_2_0(_id, r_125, t);
      }
    return(t);
  }
  t = r_125(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  t = fetch_1_0(k_134, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL;
  if(((x_125 != NULL) && (x_125 != t)))
    _fail(t);
  else
    x_125 = t;
  t = not_null(x_125);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(x_125);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_125 = ATgetFirst((ATermList) t);
          z_125 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(x_125);
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
  ATerm c_51;
  c_51 = t;
  {
    ATerm c_126 = NULL;
    ATerm f_126 = NULL;
    ATerm h_126 (ATerm t)
    {
      t = not_null(f_126);
      if(((c_126 != NULL) && (c_126 != t)))
        _fail(t);
      else
        c_126 = t;
      t = not_null(f_126);
      return(t);
    }
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(e_51);
      }
    else
      {
        t = d_51;
        {
          ATerm d_126 = NULL;
          ATerm e_126 = NULL;
          ATerm g_126 (ATerm t)
          {
            t = not_null(e_126);
            if(((d_126 != NULL) && (d_126 != t)))
              _fail(t);
            else
              d_126 = t;
            t = not_null(e_126);
            return(t);
          }
          if(((e_126 != NULL) && (e_126 != t)))
            _fail(t);
          else
            e_126 = t;
          t = g_126(t);
          t = (ATerm) ATinsert(ATempty, not_null(d_126));
        }
      }
    if(((f_126 != NULL) && (f_126 != t)))
      _fail(t);
    else
      f_126 = t;
    t = h_126(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_40, not_null(c_126));
    t = printnl_0_0(t);
  }
  t = c_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_47;
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
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm m_126 = NULL;
  ATerm s_126 (ATerm t)
  {
    ATerm n_126 = NULL,o_126 = NULL,q_126 = NULL;
    t = not_null(m_126);
    if(((n_126 != NULL) && (n_126 != t)))
      _fail(t);
    else
      n_126 = t;
    t = not_null(m_126);
    {
      ATerm v_51;
      v_51 = t;
      {
        ATerm p_126 = NULL;
        ATerm t_126 (ATerm t)
        {
          t = not_null(p_126);
          if(((o_126 != NULL) && (o_126 != t)))
            _fail(t);
          else
            o_126 = t;
          t = not_null(p_126);
          return(t);
        }
        t = SSLgetAnnotations(not_null(n_126));
        if(((p_126 != NULL) && (p_126 != t)))
          _fail(t);
        else
          p_126 = t;
        t = t_126(t);
      }
      t = v_51;
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
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_126));
        if(((r_126 != NULL) && (r_126 != t)))
          _fail(t);
        else
          r_126 = t;
        t = u_126(t);
        t = not_null(q_126);
      }
    }
    return(t);
  }
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  t = not_null(m_126);
  if(match_cons(t, sym_Help_0))
    {
      t = s_126(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_113(t);
      ;
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 (ATerm t)
      {
        ATerm x_126 = NULL;
        if(((x_126 != NULL) && (x_126 != t)))
          _fail(t);
        else
          x_126 = t;
        t = not_null(x_126);
        if(match_string(t, "--about"))
          {
            t = not_null(x_126);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_d_52;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        t = term_v_52;
        return(t);
      }
      t = Option_3_0(y_6, z_6, a_7, t);
      ;
      LocalPopChoice(z_51);
    }
  else
    {
      t = y_51;
      {
        ATerm b_7 (ATerm t)
        {
          ATerm y_126 = NULL;
          if(((y_126 != NULL) && (y_126 != t)))
            _fail(t);
          else
            y_126 = t;
          t = not_null(y_126);
          if(match_string(t, "--version"))
            {
              t = not_null(y_126);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_d_52;
          t = set_config_0_0(t);
          t = term_x_52;
          t = set_config_0_0(t);
          t = term_y_52;
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = term_z_52;
          return(t);
        }
        t = Option_3_0(b_7, c_7, d_7, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
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
    t = SSL_table_get(not_null(e_127), not_null(f_127));
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
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL;
  ATerm v_127 (ATerm t)
  {
    ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL;
    t = not_null(n_127);
    if(((r_127 != NULL) && (r_127 != t)))
      _fail(t);
    else
      r_127 = t;
    t = not_null(o_127);
    if(((s_127 != NULL) && (s_127 != t)))
      _fail(t);
    else
      s_127 = t;
    t = not_null(p_127);
    if(((q_127 != NULL) && (q_127 != t)))
      _fail(t);
    else
      q_127 = t;
    t = not_null(m_127);
    {
      ATerm a_53;
      a_53 = t;
      {
        ATerm t_127 = NULL;
        ATerm u_127 = NULL;
        ATerm w_127 (ATerm t)
        {
          t = not_null(u_127);
          if(((t_127 != NULL) && (t_127 != t)))
            _fail(t);
          else
            t_127 = t;
          t = not_null(u_127);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_127), not_null(s_127));
        {
          ATerm c_53 = t;
          int d_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(d_53);
            }
          else
            {
              t = c_53;
              t = (ATerm) ATempty;
            }
          if(((u_127 != NULL) && (u_127 != t)))
            _fail(t);
          else
            u_127 = t;
          t = w_127(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_127), not_null(s_127), (ATerm) ATinsert(CheckATermList(not_null(t_127)), not_null(q_127)));
        t = table_put_0_0(t);
      }
      t = a_53;
    }
    return(t);
  }
  if(((m_127 != NULL) && (m_127 != t)))
    _fail(t);
  else
    m_127 = t;
  t = not_null(m_127);
  if(match_cons(t, sym__3))
    {
      n_127 = ATgetArgument(t, 0);
      o_127 = ATgetArgument(t, 1);
      p_127 = ATgetArgument(t, 2);
      t = v_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm e_128 = NULL;
  ATerm f_128 = NULL;
  ATerm g_128 (ATerm t)
  {
    t = not_null(f_128);
    if(((e_128 != NULL) && (e_128 != t)))
      _fail(t);
    else
      e_128 = t;
    t = not_null(f_128);
    return(t);
  }
  t = term_v_7;
  t = p_135(t);
  if(((f_128 != NULL) && (f_128 != t)))
    _fail(t);
  else
    f_128 = t;
  t = g_128(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_50, term_b_50, not_null(e_128));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
  ATerm s_128 (ATerm t)
  {
    t = not_null(l_128);
    t = register_usage_1_0(c_0, t);
    return(t);
  }
  ATerm t_128 (ATerm t)
  {
    ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
    t = not_null(m_128);
    if(((o_128 != NULL) && (o_128 != t)))
      _fail(t);
    else
      o_128 = t;
    t = not_null(n_128);
    if(((p_128 != NULL) && (p_128 != t)))
      _fail(t);
    else
      p_128 = t;
    t = not_null(l_128);
    {
      ATerm i_53;
      i_53 = t;
      t = not_null(o_128);
      t = a_0(t);
      t = i_53;
      {
        ATerm r_128 = NULL;
        ATerm u_128 (ATerm t)
        {
          t = not_null(r_128);
          if(((q_128 != NULL) && (q_128 != t)))
            _fail(t);
          else
            q_128 = t;
          t = not_null(r_128);
          return(t);
        }
        t = term_v_7;
        t = b_0(t);
        if(((r_128 != NULL) && (r_128 != t)))
          _fail(t);
        else
          r_128 = t;
        t = u_128(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(p_128)), not_null(q_128));
      }
    }
    return(t);
  }
  if(((l_128 != NULL) && (l_128 != t)))
    _fail(t);
  else
    l_128 = t;
  t = not_null(l_128);
  if(match_string(t, "register-usage-info"))
    {
      t = s_128(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_128 = ATgetFirst((ATermList) t);
          n_128 = (ATerm) ATgetNext((ATermList) t);
          t = t_128(t);
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
  ATerm e_7 (ATerm t)
  {
    ATerm w_128 = NULL;
    if(((w_128 != NULL) && (w_128 != t)))
      _fail(t);
    else
      w_128 = t;
    t = not_null(w_128);
    if(match_string(t, "--help"))
      {
        t = not_null(w_128);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(w_128);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(w_128);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_j_53;
    t = set_config_0_0(t);
    t = term_k_53;
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_l_53;
    return(t);
  }
  t = Option_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
  ATerm e_129 (ATerm t)
  {
    ATerm c_129 = NULL,d_129 = NULL;
    t = not_null(a_129);
    if(((c_129 != NULL) && (c_129 != t)))
      _fail(t);
    else
      c_129 = t;
    t = not_null(b_129);
    if(((d_129 != NULL) && (d_129 != t)))
      _fail(t);
    else
      d_129 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(d_129)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_129)));
    return(t);
  }
  if(((z_128 != NULL) && (z_128 != t)))
    _fail(t);
  else
    z_128 = t;
  t = not_null(z_128);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_129 = ATgetFirst((ATermList) t);
      b_129 = (ATerm) ATgetNext((ATermList) t);
      t = e_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm t)
{
  ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL;
  ATerm z_129 (ATerm t)
  {
    ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,t_129 = NULL;
    ATerm b_130 (ATerm t)
    {
      ATerm u_129 = NULL,v_129 = NULL;
      ATerm c_130 (ATerm t)
      {
        ATerm w_129 = NULL,x_129 = NULL;
        t = not_null(v_129);
        if(((w_129 != NULL) && (w_129 != t)))
          _fail(t);
        else
          w_129 = t;
        t = not_null(v_129);
        {
          ATerm y_129 = NULL;
          ATerm d_130 (ATerm t)
          {
            t = not_null(y_129);
            if(((x_129 != NULL) && (x_129 != t)))
              _fail(t);
            else
              x_129 = t;
            t = not_null(y_129);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_129)), not_null(u_129)), not_null(r_129));
          if(((y_129 != NULL) && (y_129 != t)))
            _fail(t);
          else
            y_129 = t;
          t = d_130(t);
          t = not_null(x_129);
        }
        return(t);
      }
      t = not_null(t_129);
      if(((u_129 != NULL) && (u_129 != t)))
        _fail(t);
      else
        u_129 = t;
      t = not_null(q_129);
      t = g_94(t);
      if(((v_129 != NULL) && (v_129 != t)))
        _fail(t);
      else
        v_129 = t;
      t = c_130(t);
      return(t);
    }
    t = not_null(l_129);
    if(((o_129 != NULL) && (o_129 != t)))
      _fail(t);
    else
      o_129 = t;
    t = not_null(m_129);
    if(((p_129 != NULL) && (p_129 != t)))
      _fail(t);
    else
      p_129 = t;
    t = not_null(n_129);
    if(((q_129 != NULL) && (q_129 != t)))
      _fail(t);
    else
      q_129 = t;
    t = not_null(l_129);
    {
      ATerm s_129 = NULL;
      ATerm a_130 (ATerm t)
      {
        t = not_null(s_129);
        if(((r_129 != NULL) && (r_129 != t)))
          _fail(t);
        else
          r_129 = t;
        t = not_null(s_129);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_129));
      if(((s_129 != NULL) && (s_129 != t)))
        _fail(t);
      else
        s_129 = t;
      t = a_130(t);
      t = not_null(p_129);
      t = f_94(t);
      if(((t_129 != NULL) && (t_129 != t)))
        _fail(t);
      else
        t_129 = t;
      t = b_130(t);
    }
    return(t);
  }
  if(((l_129 != NULL) && (l_129 != t)))
    _fail(t);
  else
    l_129 = t;
  t = not_null(l_129);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_129 = ATgetFirst((ATermList) t);
      n_129 = (ATerm) ATgetNext((ATermList) t);
      t = z_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm i_130 = NULL;
  ATerm o_130 (ATerm t)
  {
    ATerm j_130 = NULL,k_130 = NULL,m_130 = NULL;
    t = not_null(i_130);
    if(((j_130 != NULL) && (j_130 != t)))
      _fail(t);
    else
      j_130 = t;
    t = not_null(i_130);
    {
      ATerm m_53;
      m_53 = t;
      {
        ATerm l_130 = NULL;
        ATerm p_130 (ATerm t)
        {
          t = not_null(l_130);
          if(((k_130 != NULL) && (k_130 != t)))
            _fail(t);
          else
            k_130 = t;
          t = not_null(l_130);
          return(t);
        }
        t = SSLgetAnnotations(not_null(j_130));
        if(((l_130 != NULL) && (l_130 != t)))
          _fail(t);
        else
          l_130 = t;
        t = p_130(t);
      }
      t = m_53;
      {
        ATerm n_130 = NULL;
        ATerm q_130 (ATerm t)
        {
          t = not_null(n_130);
          if(((m_130 != NULL) && (m_130 != t)))
            _fail(t);
          else
            m_130 = t;
          t = not_null(n_130);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(k_130));
        if(((n_130 != NULL) && (n_130 != t)))
          _fail(t);
        else
          n_130 = t;
        t = q_130(t);
        t = not_null(m_130);
      }
    }
    return(t);
  }
  if(((i_130 != NULL) && (i_130 != t)))
    _fail(t);
  else
    i_130 = t;
  t = not_null(i_130);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
  ATerm a_131 (ATerm t)
  {
    ATerm y_130 = NULL,z_130 = NULL;
    t = not_null(w_130);
    if(((y_130 != NULL) && (y_130 != t)))
      _fail(t);
    else
      y_130 = t;
    t = not_null(x_130);
    if(((z_130 != NULL) && (z_130 != t)))
      _fail(t);
    else
      z_130 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_f_40, not_null(y_130), not_null(z_130));
    t = table_put_0_0(t);
    return(t);
  }
  if(((v_130 != NULL) && (v_130 != t)))
    _fail(t);
  else
    v_130 = t;
  t = not_null(v_130);
  if(match_cons(t, sym__2))
    {
      w_130 = ATgetArgument(t, 0);
      x_130 = ATgetArgument(t, 1);
      t = a_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm n_53;
  n_53 = t;
  {
    ATerm h_7 (ATerm t)
    {
      t = term_o_53;
      t = n_135(t);
      return(t);
    }
    t = try_1_0(h_7, t);
  }
  t = n_53;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm f_131 = NULL;
      ATerm p_53;
      p_53 = t;
      {
        ATerm d_131 = NULL;
        ATerm e_131 = NULL;
        ATerm h_131 (ATerm t)
        {
          t = not_null(e_131);
          if(((d_131 != NULL) && (d_131 != t)))
            _fail(t);
          else
            d_131 = t;
          t = not_null(e_131);
          return(t);
        }
        if(((e_131 != NULL) && (e_131 != t)))
          _fail(t);
        else
          e_131 = t;
        t = h_131(t);
        t = (ATerm) ATmakeAppl(sym__2, term_f_47, not_null(d_131));
        t = set_config_0_0(t);
      }
      t = p_53;
      {
        ATerm g_131 = NULL;
        ATerm i_131 (ATerm t)
        {
          t = not_null(g_131);
          if(((f_131 != NULL) && (f_131 != t)))
            _fail(t);
          else
            f_131 = t;
          t = not_null(g_131);
          return(t);
        }
        if(((g_131 != NULL) && (g_131 != t)))
          _fail(t);
        else
          g_131 = t;
        t = i_131(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_131));
      }
      return(t);
    }
    ATerm j_7 (ATerm t)
    {
      ATerm q_53 = t;
      int r_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(w_53);
            }
          else
            {
              t = s_53;
              t = n_135(t);
              t = Cons_2_0(_id, j_7, t);
            }
          ;
          LocalPopChoice(r_53);
        }
      else
        {
          t = q_53;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(i_7, j_7, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL;
  ATerm x_53;
  x_53 = t;
  {
    ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL;
    ATerm t_131 (ATerm t)
    {
      t = not_null(q_131);
      if(((m_131 != NULL) && (m_131 != t)))
        _fail(t);
      else
        m_131 = t;
      t = not_null(r_131);
      if(((n_131 != NULL) && (n_131 != t)))
        _fail(t);
      else
        n_131 = t;
      t = not_null(s_131);
      if(((o_131 != NULL) && (o_131 != t)))
        _fail(t);
      else
        o_131 = t;
      t = not_null(p_131);
      t = SSL_table_put(not_null(m_131), not_null(n_131), not_null(o_131));
      return(t);
    }
    if(((p_131 != NULL) && (p_131 != t)))
      _fail(t);
    else
      p_131 = t;
    t = not_null(p_131);
    if(match_cons(t, sym__3))
      {
        q_131 = ATgetArgument(t, 0);
        r_131 = ATgetArgument(t, 1);
        s_131 = ATgetArgument(t, 2);
        t = t_131(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = x_53;
  return(t);
}
ATerm parse_options_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm v_131 = NULL;
  ATerm y_53;
  y_53 = t;
  t = term_z_53;
  t = table_put_0_0(t);
  t = y_53;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm a_54 = t;
      int b_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_135(t);
          ;
          LocalPopChoice(b_54);
        }
      else
        {
          t = a_54;
          {
            ATerm g_54 = t;
            int h_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_54);
              }
            else
              {
                t = g_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_7, t);
    {
      ATerm l_7 (ATerm t)
      {
        ATerm p_54 = t;
        int q_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_54;
            r_54 = t;
            {
              ATerm s_54 = t;
              int t_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_48;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(t_54);
                }
              else
                {
                  t = s_54;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = r_54;
            t = system_usage_0_0(t);
            t = term_a_18;
            t = exit_0_0(t);
            ;
            LocalPopChoice(q_54);
          }
        else
          {
            t = p_54;
            {
              ATerm h_55 = t;
              int i_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_55;
                  j_55 = t;
                  t = term_c_52;
                  t = get_config_0_0(t);
                  t = j_55;
                  t = system_about_0_0(t);
                  t = term_a_18;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(i_55);
                }
              else
                {
                  t = h_55;
                  {
                    ATerm m_7 (ATerm t)
                    {
                      ATerm n_7 (ATerm t)
                      {
                        ATerm w_131 = NULL;
                        ATerm x_131 (ATerm t)
                        {
                          t = not_null(w_131);
                          if(((v_131 != NULL) && (v_131 != t)))
                            _fail(t);
                          else
                            v_131 = t;
                          t = not_null(w_131);
                          return(t);
                        }
                        if(((w_131 != NULL) && (w_131 != t)))
                          _fail(t);
                        else
                          w_131 = t;
                        t = x_131(t);
                        return(t);
                      }
                      t = Undefined_1_0(n_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(m_7, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_131)), term_k_55));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_b_18;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(l_7, t);
      {
        ATerm l_55;
        l_55 = t;
        t = term_a_50;
        t = table_destroy_0_0(t);
        t = l_55;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm t)
{
  t = parse_options_1_0(m_133, t);
  t = store_options_0_0(t);
  t = o_133(t);
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_133, t);
        ;
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
        {
          ATerm p_55 = t;
          int q_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_55);
            }
          else
            {
              t = p_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm r_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_133(t);
        ;
        LocalPopChoice(s_55);
      }
    else
      {
        t = r_55;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_7, d_133, e_133, r_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm t_55;
      t_55 = t;
      {
        ATerm z_131 = NULL;
        ATerm a_132 = NULL;
        ATerm b_132 (ATerm t)
        {
          t = not_null(a_132);
          if(((z_131 != NULL) && (z_131 != t)))
            _fail(t);
          else
            z_131 = t;
          t = not_null(a_132);
          return(t);
        }
        t = term_f_47;
        t = get_config_0_0(t);
        if(((a_132 != NULL) && (a_132 != t)))
          _fail(t);
        else
          a_132 = t;
        t = b_132(t);
        t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATempty, not_null(z_131)));
        t = printnl_0_0(t);
      }
      t = t_55;
      return(t);
    }
    t = if_verbose2_1_0(t_7, t);
    return(t);
  }
  t = iowrap_4_0(v_132, w_132, x_132, s_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_132, u_132, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = _2_0(_id, q_132, t);
    return(t);
  }
  t = iowrap_2_0(u_7, _fail, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  t = iowrap_1_0(inline_strategies_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = inline_0_0(t);
  return(t);
}
