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
ATerm term_y_39;
ATerm term_l_39;
ATerm term_a_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_n_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_u_32;
ATerm term_s_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_y_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_v_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_q_20;
ATerm term_z_19;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_r_16;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Op_2, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_n_29, term_h_14);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_14);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_s_7);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_s_7);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_s_37);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_s_7);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__2, term_n_38, term_s_7);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_s_7);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__3, term_r_37, term_s_37, (ATerm) ATempty);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_122 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_110 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_109 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_99 (ATerm), ATerm q_99 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm));
ATerm Let_2 (ATerm, ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_109 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm z_97 (ATerm));
ATerm RDefT_4 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm z_118 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_119 (ATerm), ATerm e_119 (ATerm));
ATerm diff_1 (ATerm, ATerm v_118 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_127 (ATerm), ATerm x_127 (ATerm));
ATerm for_3 (ATerm, ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm y_123 (ATerm), ATerm z_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm s_123 (ATerm), ATerm t_123 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_124 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_124 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_124 (ATerm));
ATerm rename_4 (ATerm, ATerm n_123 (ATerm, ATerm (ATerm)), ATerm o_123 (ATerm), ATerm p_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_123 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm length_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_122 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_113 (ATerm), ATerm u_113 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_122 (ATerm));
ATerm scope_2 (ATerm, ATerm v_122 (ATerm), ATerm w_122 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_122 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm q_121 (ATerm));
ATerm crush_3 (ATerm, ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_98 (ATerm), ATerm h_98 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_94 (ATerm), ATerm g_94 (ATerm));
ATerm Match_1 (ATerm, ATerm z_98 (ATerm));
ATerm Seq_2 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm Scope_2 (ATerm, ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm Build_1 (ATerm, ATerm a_99 (ATerm));
ATerm SVar_1 (ATerm, ATerm r_98 (ATerm));
ATerm CallT_3 (ATerm, ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_111 (ATerm));
ATerm SDefT_4 (ATerm, ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm));
ATerm zip_1 (ATerm, ATerm d_115 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm z_95 (ATerm), ATerm a_96 (ATerm));
ATerm PrimT_3 (ATerm, ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm));
ATerm Explode_2 (ATerm, ATerm s_95 (ATerm), ATerm t_95 (ATerm));
ATerm Op_2 (ATerm, ATerm o_95 (ATerm), ATerm p_95 (ATerm));
ATerm pat_td_1 (ATerm, ATerm x_135 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm o_0 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm h_127 (ATerm));
ATerm downup_1 (ATerm, ATerm o_110 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_94 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_94 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_117 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_130 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm v_137 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_132 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_137 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_113 (ATerm), ATerm z_113 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_121 (ATerm), ATerm n_121 (ATerm));
ATerm crush_2 (ATerm, ATerm k_119 (ATerm), ATerm l_119 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_130 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_133 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_135 (ATerm));
ATerm map_1 (ATerm, ATerm n_116 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_135 (ATerm));
ATerm Program_1 (ATerm, ATerm z_106 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_116 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_134 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_113 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_135 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_94 (ATerm), ATerm e_94 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_135 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_135 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_132 (ATerm), ATerm s_132 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_132 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm z_4 = NULL,d_5 = NULL,e_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym__2))
    {
      d_5 = ATgetArgument(z_4, 0);
      e_5 = ATgetArgument(z_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(e_5));
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
ATerm rewrite_1 (ATerm t, ATerm z_122 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm s_8 = NULL;
  g_8 = t;
  {
    ATerm t_8 = NULL;
    t = term_s_7;
    {
      t = z_122(t);
      {
        t_8 = t;
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), not_null(g_8));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  f_9 = t;
  d_9 :
  if(match_cons(f_9, sym_CallT_3))
    {
      g_9 = ATgetArgument(f_9, 0);
      i_9 = ATgetArgument(f_9, 1);
      j_9 = ATgetArgument(f_9, 2);
      e_9 :
      if(match_cons(g_9, sym_SVar_1))
        {
          h_9 = ATgetArgument(g_9, 0);
          {
            ATerm o_9 = NULL;
            ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_9)), (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_t_7;
                return(t);
              }
              t = rewrite_1(t, f_0);
              {
                p_9 = t;
                b_9 :
                if(match_cons(p_9, sym_Defined_2))
                  {
                    q_9 = ATgetArgument(p_9, 0);
                    r_9 = ATgetArgument(p_9, 1);
                    c_9 :
                    if(match_string(q_9, "n_0"))
                      {
                        if(((o_9 != NULL) && (o_9 != r_9)))
                          _fail(r_9);
                        else
                          o_9 = r_9;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_9)), not_null(i_9), not_null(j_9));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  c_10 = t;
  y_9 :
  if(match_cons(c_10, sym_CallT_3))
    {
      d_10 = ATgetArgument(c_10, 0);
      f_10 = ATgetArgument(c_10, 1);
      g_10 = ATgetArgument(c_10, 2);
      z_9 :
      if(match_cons(d_10, sym_SVar_1))
        {
          e_10 = ATgetArgument(d_10, 0);
          a_10 :
          if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
            {
              b_10 :
              if(((ATgetType(g_10) == AT_LIST) && ATisEmpty(g_10)))
                {
                  {
                    ATerm j_10 = NULL;
                    ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
                    t = not_null(c_10);
                    {
                      ATerm h_0 (ATerm t)
                      {
                        t = term_u_7;
                        return(t);
                      }
                      t = rewrite_1(t, h_0);
                      {
                        k_10 = t;
                        w_9 :
                        if(match_cons(k_10, sym_Defined_2))
                          {
                            l_10 = ATgetArgument(k_10, 0);
                            m_10 = ATgetArgument(k_10, 1);
                            x_9 :
                            if(match_string(l_10, "k_0"))
                              {
                                if(((j_10 != NULL) && (j_10 != m_10)))
                                  _fail(m_10);
                                else
                                  j_10 = m_10;
                              }
                            else
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
                      t = not_null(j_10);
                      t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm m_110 (ATerm))
{
  t = m_110(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, m_110);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  g_11 = t;
  r_10 :
  if(match_cons(g_11, sym__2))
    {
      h_11 = ATgetArgument(g_11, 0);
      o_11 = ATgetArgument(g_11, 1);
      s_10 :
      if(match_cons(h_11, sym_VarDec_2))
        {
          i_11 = ATgetArgument(h_11, 0);
          j_11 = ATgetArgument(h_11, 1);
          t_10 :
          if(match_cons(j_11, sym_FunType_2))
            {
              k_11 = ATgetArgument(j_11, 0);
              n_11 = ATgetArgument(j_11, 1);
              u_10 :
              if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
                {
                  l_11 = ATgetFirst((ATermList) k_11);
                  m_11 = (ATerm) ATgetNext((ATermList) k_11);
                  v_10 :
                  if(((ATgetType(m_11) == AT_LIST) && !(ATisEmpty(m_11))))
                    {
                      a_11 = ATgetFirst((ATermList) m_11);
                      b_11 = (ATerm) ATgetNext((ATermList) m_11);
                      w_10 :
                      if(match_cons(o_11, sym_CallT_3))
                        {
                          c_11 = ATgetArgument(o_11, 0);
                          e_11 = ATgetArgument(o_11, 1);
                          f_11 = ATgetArgument(o_11, 2);
                          x_10 :
                          if(match_cons(c_11, sym_SVar_1))
                            {
                              d_11 = ATgetArgument(c_11, 0);
                              y_10 :
                              if(((ATgetType(e_11) == AT_LIST) && ATisEmpty(e_11)))
                                {
                                  z_10 :
                                  if(((ATgetType(f_11) == AT_LIST) && ATisEmpty(f_11)))
                                    {
                                      {
                                        ATerm v_7;
                                        v_7 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_7, not_null(d_11)));
                                          {
                                            ATerm r_0 (ATerm t)
                                            {
                                              t = term_t_7;
                                              return(t);
                                            }
                                            t = assert_1(t, r_0);
                                          }
                                        }
                                        t = v_7;
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(m_11) == AT_LIST) && ATisEmpty(m_11)))
                        {
                          {
                            ATerm x_7;
                            x_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_7, not_null(o_11)));
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_u_7;
                                  return(t);
                                }
                                t = assert_1(t, s_0);
                              }
                            }
                            t = x_7;
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
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  ATerm t_0 (ATerm t)
  {
    t = term_u_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_t_7;
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      a_12 = t;
      w_11 :
      if(match_cons(a_12, sym__3))
        {
          b_12 = ATgetArgument(a_12, 0);
          c_12 = ATgetArgument(a_12, 1);
          d_12 = ATgetArgument(a_12, 2);
          {
            if(((x_11 != NULL) && (x_11 != b_12)))
              _fail(b_12);
            else
              x_11 = b_12;
            {
              if(((y_11 != NULL) && (y_11 != c_12)))
                _fail(c_12);
              else
                y_11 = c_12;
              {
                if(((z_11 != NULL) && (z_11 != d_12)))
                  _fail(d_12);
                else
                  z_11 = d_12;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(y_11));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(z_11);
                      {
                        ATerm x_0 (ATerm t)
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm z_7 = t;
                            int a_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(a_8);
                              }
                            else
                              {
                                t = z_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, y_0);
                          return(t);
                        }
                        t = topdown_1(t, x_0);
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
    t = scope_2(t, v_0, w_0);
    return(t);
  }
  t = scope_2(t, t_0, u_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
    {
      i_12 = ATgetFirst((ATermList) h_12);
      j_12 = (ATerm) ATgetNext((ATermList) h_12);
      t = not_null(i_12);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_109 (ATerm))
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        t = split_2(t, _id, q_109);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
            q_12 = t;
            o_12 :
            if(match_cons(q_12, sym__2))
              {
                r_12 = ATgetArgument(q_12, 0);
                w_12 = ATgetArgument(q_12, 1);
                p_12 :
                if(match_cons(r_12, sym_SDef_3))
                  {
                    s_12 = ATgetArgument(r_12, 0);
                    t_12 = ATgetArgument(r_12, 1);
                    u_12 = ATgetArgument(r_12, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_12), not_null(t_12), not_null(u_12));
                  }
                else
                  {
                    if(match_cons(r_12, sym_SDefT_4))
                      {
                        s_12 = ATgetArgument(r_12, 0);
                        t_12 = ATgetArgument(r_12, 1);
                        u_12 = ATgetArgument(r_12, 2);
                        v_12 = ATgetArgument(r_12, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(w_12), not_null(t_12), not_null(u_12), not_null(v_12));
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
          t = zip_1(t, a_1);
        }
        return(t);
      }
      t = Let_2(t, z_0, _id);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              t = split_2(t, _id, q_109);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, b_1, _id);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm f_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = split_2(t, _id, q_109);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, c_1, _id, _id);
                  ;
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = f_8;
                  {
                    ATerm i_8 = t;
                    int j_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = split_2(t, _id, q_109);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, d_1, _id, _id);
                        ;
                        LocalPopChoice(j_8);
                      }
                    else
                      {
                        t = i_8;
                        {
                          ATerm e_1 (ATerm t)
                          {
                            t = q_109(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, e_1, _id);
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
ATerm Rec_2 (ATerm t, ATerm p_99 (ATerm), ATerm q_99 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym_Rec_2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        ATerm s_13 = NULL,u_13 = NULL;
        ATerm t_13 = NULL;
        t = SSLgetAnnotations(not_null(m_13));
        {
          t_13 = t;
          if(((s_13 != NULL) && (s_13 != t_13)))
            _fail(t_13);
          else
            s_13 = t_13;
        }
        {
          t = not_null(n_13);
          {
            ATerm w_13 = NULL;
            t = p_99(t);
            {
              u_13 = t;
              {
                t = not_null(o_13);
                {
                  ATerm y_13 = NULL;
                  t = q_99(t);
                  {
                    w_13 = t;
                    {
                      ATerm z_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_13), not_null(w_13)), not_null(s_13));
                      {
                        z_13 = t;
                        if(((y_13 != NULL) && (y_13 != z_13)))
                          _fail(z_13);
                        else
                          y_13 = z_13;
                      }
                      t = not_null(y_13);
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
ATerm SDef_3 (ATerm t, ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_SDef_3))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      p_14 = ATgetArgument(m_14, 2);
      {
        ATerm u_14 = NULL,w_14 = NULL;
        ATerm v_14 = NULL;
        t = SSLgetAnnotations(not_null(m_14));
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
        {
          t = not_null(n_14);
          {
            ATerm y_14 = NULL;
            t = h_101(t);
            {
              w_14 = t;
              {
                t = not_null(o_14);
                {
                  ATerm a_15 = NULL;
                  t = i_101(t);
                  {
                    y_14 = t;
                    {
                      t = not_null(p_14);
                      {
                        ATerm c_15 = NULL;
                        t = j_101(t);
                        {
                          a_15 = t;
                          {
                            ATerm d_15 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(w_14), not_null(y_14), not_null(a_15)), not_null(u_14));
                            {
                              d_15 = t;
                              if(((c_15 != NULL) && (c_15 != d_15)))
                                _fail(d_15);
                              else
                                c_15 = d_15;
                            }
                            t = not_null(c_15);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_Let_2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm w_15 = NULL,y_15 = NULL;
        ATerm x_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
        {
          t = not_null(r_15);
          {
            ATerm a_16 = NULL;
            t = s_98(t);
            {
              y_15 = t;
              {
                t = not_null(s_15);
                {
                  ATerm c_16 = NULL;
                  t = t_98(t);
                  {
                    a_16 = t;
                    {
                      ATerm d_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(y_15), not_null(a_16)), not_null(w_15));
                      {
                        d_16 = t;
                        if(((c_16 != NULL) && (c_16 != d_16)))
                          _fail(d_16);
                        else
                          c_16 = d_16;
                      }
                      t = not_null(c_16);
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
ATerm sboundin_3 (ATerm t, ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm))
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_109, r_109);
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
            t = SDef_3(t, t_109, t_109, r_109);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm o_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, t_109, t_109, t_109, r_109);
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
                  t = Rec_2(t, t_109, r_109);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_RDefT_4))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      o_16 = ATgetArgument(l_16, 2);
      p_16 = ATgetArgument(l_16, 3);
      {
        t = not_null(n_16);
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_SDefT_4))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      a_17 = ATgetArgument(x_16, 2);
      b_17 = ATgetArgument(x_16, 3);
      {
        t = not_null(z_16);
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_Rec_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_SDef_3))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      u_17 = ATgetArgument(r_17, 2);
      {
        t = not_null(t_17);
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_Let_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        t = not_null(f_18);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
            j_18 = t;
            c_18 :
            if(match_cons(j_18, sym_SDef_3))
              {
                k_18 = ATgetArgument(j_18, 0);
                l_18 = ATgetArgument(j_18, 1);
                m_18 = ATgetArgument(j_18, 2);
                t = not_null(k_18);
              }
            else
              {
                if(match_cons(j_18, sym_SDefT_4))
                  {
                    k_18 = ATgetArgument(j_18, 0);
                    l_18 = ATgetArgument(j_18, 1);
                    m_18 = ATgetArgument(j_18, 2);
                    n_18 = ATgetArgument(j_18, 3);
                    t = not_null(k_18);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, f_1);
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
  ATerm g_1 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm u_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(v_8);
            }
          else
            {
              t = u_8;
              {
                ATerm w_8 = t;
                int x_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(x_8);
                  }
                else
                  {
                    t = w_8;
                    {
                      ATerm y_8 = t;
                      int z_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(z_8);
                        }
                      else
                        {
                          t = y_8;
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
  t = rename_4(t, SVar_1, g_1, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  x_18 = t;
  v_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      b_19 = ATgetArgument(x_18, 1);
      w_18 :
      if(match_cons(y_18, sym_DefaultVarDec_1))
        {
          z_18 = ATgetArgument(y_18, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(b_19));
        }
      else
        {
          if(match_cons(y_18, sym_VarDec_2))
            {
              z_18 = ATgetArgument(y_18, 0);
              a_19 = ATgetArgument(y_18, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_19), not_null(a_19));
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
ATerm tpaste_1 (ATerm t, ATerm m_109 (ATerm))
{
  ATerm a_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_109, _id);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = a_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = split_2(t, _id, m_109);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, h_1, _id);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm i_1 (ATerm t)
              {
                t = split_2(t, _id, m_109);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, i_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_DynamicRules_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm s_19 = NULL,u_19 = NULL;
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        {
          t = not_null(p_19);
          {
            ATerm w_19 = NULL;
            t = z_97(t);
            {
              u_19 = t;
              {
                ATerm x_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_19)), not_null(s_19));
                {
                  x_19 = t;
                  if(((w_19 != NULL) && (w_19 != x_19)))
                    _fail(x_19);
                  else
                    w_19 = x_19;
                }
                t = not_null(w_19);
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
ATerm RDefT_4 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_RDefT_4))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      n_20 = ATgetArgument(k_20, 2);
      o_20 = ATgetArgument(k_20, 3);
      {
        ATerm u_20 = NULL,w_20 = NULL;
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
        {
          t = not_null(l_20);
          {
            ATerm y_20 = NULL;
            t = q_97(t);
            {
              w_20 = t;
              {
                t = not_null(m_20);
                {
                  ATerm a_21 = NULL;
                  t = r_97(t);
                  {
                    y_20 = t;
                    {
                      t = not_null(n_20);
                      {
                        ATerm c_21 = NULL;
                        t = s_97(t);
                        {
                          a_21 = t;
                          {
                            t = not_null(o_20);
                            {
                              ATerm e_21 = NULL;
                              t = t_97(t);
                              {
                                c_21 = t;
                                {
                                  ATerm f_21 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(w_20), not_null(y_20), not_null(a_21), not_null(c_21)), not_null(u_20));
                                  {
                                    f_21 = t;
                                    if(((e_21 != NULL) && (e_21 != f_21)))
                                      _fail(f_21);
                                    else
                                      e_21 = f_21;
                                  }
                                  t = not_null(e_21);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm tboundin_3 (ATerm t, ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm))
{
  ATerm n_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_109, n_109);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = n_9;
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, p_109, p_109, p_109, n_109);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            {
              ATerm v_9 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, p_109, p_109, p_109, n_109);
                  ;
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = v_9;
                  t = DynamicRules_1(t, n_109);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym_RDefT_4))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      s_21 = ATgetArgument(p_21, 2);
      t_21 = ATgetArgument(p_21, 3);
      {
        t = not_null(s_21);
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
  ATerm j_1 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
    d_22 = t;
    b_22 :
    if(match_cons(d_22, sym_VarDec_2))
      {
        e_22 = ATgetArgument(d_22, 0);
        c_22 = ATgetArgument(d_22, 1);
        t = not_null(e_22);
      }
    else
      {
        if(match_cons(d_22, sym_DefaultVarDec_1))
          {
            e_22 = ATgetArgument(d_22, 0);
            t = not_null(e_22);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, j_1);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_SDefT_4))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      o_22 = ATgetArgument(l_22, 2);
      p_22 = ATgetArgument(l_22, 3);
      {
        t = not_null(o_22);
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
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_DynamicRules_1))
    {
      y_22 = ATgetArgument(x_22, 0);
      {
        t = not_null(y_22);
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
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_Var_1))
    {
      e_23 = ATgetArgument(d_23, 0);
      t = (ATerm) ATinsert(ATempty, not_null(e_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_118 (ATerm))
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      {
        t = not_null(k_23);
        {
          ATerm p_23 (ATerm t)
          {
            ATerm i_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_23);
                ;
                LocalPopChoice(n_10);
              }
            else
              {
                t = i_10;
                {
                  ATerm o_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = not_null(l_23);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_118, k_1);
                      t = p_23(t);
                      ;
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = o_10;
                      t = Cons_2(t, _id, p_23);
                    }
                }
              }
            return(t);
          }
          t = p_23(t);
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
ATerm eq_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym__2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      if(((t_23 != NULL) && (t_23 != u_23)))
        _fail(u_23);
      else
        t_23 = u_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_119 (ATerm), ATerm e_119 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
    {
      b_24 = ATgetFirst((ATermList) a_24);
      c_24 = (ATerm) ATgetNext((ATermList) a_24);
      {
        t = e_119(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm f_24 = NULL;
            f_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(f_24));
              t = d_119(t);
            }
            return(t);
          }
          t = fetch_1(t, l_1);
        }
        t = not_null(c_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm v_118 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      {
        t = not_null(m_24);
        {
          ATerm r_24 (ATerm t)
          {
            ATerm q_10 = t;
            int p_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(p_11);
              }
            else
              {
                t = q_10;
                {
                  ATerm q_11 = t;
                  int r_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_1 (ATerm t)
                      {
                        t = not_null(n_24);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_118, m_1);
                      t = r_24(t);
                      ;
                      LocalPopChoice(r_11);
                    }
                  else
                    {
                      t = q_11;
                      t = Cons_2(t, _id, r_24);
                    }
                }
              }
            return(t);
          }
          t = r_24(t);
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  v_24 = t;
  t_24 :
  if(match_cons(v_24, sym__2))
    {
      w_24 = ATgetArgument(v_24, 0);
      x_24 = ATgetArgument(v_24, 1);
      u_24 :
      if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
        {
          y_24 = ATgetFirst((ATermList) x_24);
          z_24 = (ATerm) ATgetNext((ATermList) x_24);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_24)), not_null(y_24)), not_null(z_24));
        }
      else
        {
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
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  o_25 = t;
  m_25 :
  if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
    {
      p_25 = ATgetFirst((ATermList) o_25);
      s_25 = (ATerm) ATgetNext((ATermList) o_25);
      n_25 :
      if(match_cons(p_25, sym__2))
        {
          q_25 = ATgetArgument(p_25, 0);
          r_25 = ATgetArgument(p_25, 1);
          {
            ATerm w_25 = NULL,x_25 = NULL,d_26 = NULL,j_26 = NULL;
            ATerm s_11;
            s_11 = t;
            {
              ATerm y_25 = NULL;
              ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
              t = not_null(r_25);
              {
                y_25 = t;
                {
                  t = SSL_explode_term(not_null(y_25));
                  {
                    a_26 = t;
                    h_25 :
                    if(match_cons(a_26, sym__2))
                      {
                        b_26 = ATgetArgument(a_26, 0);
                        c_26 = ATgetArgument(a_26, 1);
                        {
                          if(((w_25 != NULL) && (w_25 != b_26)))
                            _fail(b_26);
                          else
                            w_25 = b_26;
                          if(((x_25 != NULL) && (x_25 != c_26)))
                            _fail(c_26);
                          else
                            x_25 = c_26;
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
            t = s_11;
            {
              ATerm t_11;
              t_11 = t;
              {
                ATerm e_26 = NULL;
                ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
                t = not_null(q_25);
                {
                  e_26 = t;
                  {
                    t = SSL_explode_term(not_null(e_26));
                    {
                      g_26 = t;
                      k_25 :
                      if(match_cons(g_26, sym__2))
                        {
                          h_26 = ATgetArgument(g_26, 0);
                          i_26 = ATgetArgument(g_26, 1);
                          {
                            if(((w_25 != NULL) && (w_25 != h_26)))
                              _fail(h_26);
                            else
                              w_25 = h_26;
                            if(((d_26 != NULL) && (d_26 != i_26)))
                              _fail(i_26);
                            else
                              d_26 = i_26;
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
              t = t_11;
              {
                ATerm k_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), not_null(x_25));
                {
                  t = zip_1(t, _id);
                  {
                    k_26 = t;
                    if(((j_26 != NULL) && (j_26 != k_26)))
                      _fail(k_26);
                    else
                      j_26 = k_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(s_25));
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
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  u_26 = t;
  s_26 :
  if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
    {
      v_26 = ATgetFirst((ATermList) u_26);
      y_26 = (ATerm) ATgetNext((ATermList) u_26);
      t_26 :
      if(match_cons(v_26, sym__2))
        {
          w_26 = ATgetArgument(v_26, 0);
          x_26 = ATgetArgument(v_26, 1);
          {
            ATerm a_27 = NULL;
            if(((w_26 != NULL) && (w_26 != x_26)))
              _fail(x_26);
            else
              w_26 = x_26;
            {
              if(((a_27 != NULL) && (a_27 != y_26)))
                _fail(y_26);
              else
                a_27 = y_26;
              t = not_null(a_27);
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
ATerm while_not_2 (ATerm t, ATerm w_127 (ATerm), ATerm x_127 (ATerm))
{
  ATerm c_27 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_127(t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          t = x_127(t);
          t = c_27(t);
        }
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm))
{
  t = z_127(t);
  t = while_not_2(t, a_128, b_128);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm e_27 = NULL;
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_27));
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, q_1);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, n_1, o_1, p_1);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_27 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_125(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_27 = NULL;
              ATerm b_13;
              b_13 = t;
              {
                ATerm j_27 = NULL;
                t = r_125(t);
                {
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                }
              }
              t = b_13;
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = not_null(i_27);
                    return(t);
                  }
                  t = split_2(t, k_27, t_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm s_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_125(t, r_1, k_27, s_1);
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, u_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              {
                ATerm v_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, v_1, union_0, k_27);
              }
            }
        }
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
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
              t = Bind4_0(t);
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
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = g_13;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, w_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  o_27 :
  if(match_cons(t_27, sym_LRule_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      p_27 :
      if(match_cons(u_27, sym_Rule_3))
        {
          q_27 = ATgetArgument(u_27, 0);
          r_27 = ATgetArgument(u_27, 1);
          s_27 = ATgetArgument(u_27, 2);
          {
            t = not_null(q_27);
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
      if(match_cons(t_27, sym_Scope_2))
        {
          u_27 = ATgetArgument(t_27, 0);
          v_27 = ATgetArgument(t_27, 1);
          t = not_null(u_27);
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
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Var_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_28 = NULL,w_28 = NULL;
            ATerm v_28 = NULL;
            t = SSLgetAnnotations(not_null(q_28));
            {
              v_28 = t;
              if(((u_28 != NULL) && (u_28 != v_28)))
                _fail(v_28);
              else
                u_28 = v_28;
            }
            {
              t = not_null(r_28);
              {
                ATerm y_28 = NULL;
                t = p_0(t);
                {
                  w_28 = t;
                  {
                    ATerm z_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_28)), not_null(u_28));
                    {
                      z_28 = t;
                      if(((y_28 != NULL) && (y_28 != z_28)))
                        _fail(z_28);
                      else
                        y_28 = z_28;
                    }
                    t = not_null(y_28);
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm k_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_29 = NULL,e_29 = NULL;
                  ATerm d_29 = NULL;
                  t = SSLgetAnnotations(not_null(q_28));
                  {
                    d_29 = t;
                    if(((c_29 != NULL) && (c_29 != d_29)))
                      _fail(d_29);
                    else
                      c_29 = d_29;
                  }
                  {
                    t = not_null(r_28);
                    {
                      ATerm g_29 = NULL;
                      t = p_0(t);
                      {
                        e_29 = t;
                        {
                          ATerm h_29 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_29)), not_null(c_29));
                          {
                            h_29 = t;
                            if(((g_29 != NULL) && (g_29 != h_29)))
                              _fail(h_29);
                            else
                              g_29 = h_29;
                          }
                          t = not_null(g_29);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm k_29 = NULL,m_29 = NULL;
                    ATerm l_29 = NULL;
                    t = SSLgetAnnotations(not_null(q_28));
                    {
                      l_29 = t;
                      if(((k_29 != NULL) && (k_29 != l_29)))
                        _fail(l_29);
                      else
                        k_29 = l_29;
                    }
                    {
                      t = not_null(r_28);
                      {
                        ATerm o_29 = NULL;
                        t = p_0(t);
                        {
                          m_29 = t;
                          {
                            ATerm p_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_29)), not_null(k_29));
                            {
                              p_29 = t;
                              if(((o_29 != NULL) && (o_29 != p_29)))
                                _fail(p_29);
                              else
                                o_29 = p_29;
                            }
                            t = not_null(o_29);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm y_123 (ATerm), ATerm z_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym__3))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      j_30 = ATgetArgument(g_30, 2);
      {
        t = not_null(h_30);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm n_30 = NULL;
            n_30 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(j_30));
              t = y_123(t);
            }
            return(t);
          }
          ATerm y_1 (ATerm t)
          {
            ATerm p_30 = NULL;
            p_30 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), not_null(i_30));
              t = y_123(t);
            }
            return(t);
          }
          t = z_123(t, x_1, y_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_123 (ATerm), ATerm t_123 (ATerm, ATerm (ATerm)))
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym__2))
    {
      c_31 = ATgetArgument(b_31, 0);
      d_31 = ATgetArgument(b_31, 1);
      {
        ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,o_31 = NULL;
        ATerm q_13;
        q_13 = t;
        {
          ATerm j_31 = NULL;
          t = not_null(c_31);
          {
            ATerm k_31 = NULL;
            t = s_123(t);
            {
              j_31 = t;
              {
                if(((g_31 != NULL) && (g_31 != j_31)))
                  _fail(j_31);
                else
                  g_31 = j_31;
                {
                  ATerm l_31 = NULL,n_31 = NULL;
                  t = map_1(t, new_0);
                  {
                    k_31 = t;
                    {
                      if(((h_31 != NULL) && (h_31 != k_31)))
                        _fail(k_31);
                      else
                        h_31 = k_31;
                      {
                        ATerm m_31 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), not_null(h_31));
                        {
                          t = zip_1(t, _id);
                          {
                            m_31 = t;
                            if(((l_31 != NULL) && (l_31 != m_31)))
                              _fail(m_31);
                            else
                              l_31 = m_31;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(d_31));
                          {
                            t = conc_0(t);
                            {
                              n_31 = t;
                              if(((i_31 != NULL) && (i_31 != n_31)))
                                _fail(n_31);
                              else
                                i_31 = n_31;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_13;
        {
          ATerm p_31 = NULL;
          t = not_null(c_31);
          {
            ATerm z_1 (ATerm t)
            {
              t = not_null(h_31);
              return(t);
            }
            t = t_123(t, z_1);
            {
              p_31 = t;
              if(((o_31 != NULL) && (o_31 != p_31)))
                _fail(p_31);
              else
                o_31 = p_31;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), not_null(d_31), not_null(i_31));
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
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  x_31 :
  if(match_cons(z_31, sym__2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      y_31 :
      if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
        {
          c_32 = ATgetFirst((ATermList) b_32);
          d_32 = (ATerm) ATgetNext((ATermList) b_32);
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), not_null(d_32));
        }
      else
        {
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
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  l_32 = t;
  i_32 :
  if(match_cons(l_32, sym__2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      j_32 :
      if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
        {
          o_32 = ATgetFirst((ATermList) n_32);
          r_32 = (ATerm) ATgetNext((ATermList) n_32);
          k_32 :
          if(match_cons(o_32, sym__2))
            {
              p_32 = ATgetArgument(o_32, 0);
              q_32 = ATgetArgument(o_32, 1);
              {
                ATerm t_32 = NULL;
                if(((m_32 != NULL) && (m_32 != p_32)))
                  _fail(p_32);
                else
                  m_32 = p_32;
                {
                  if(((t_32 != NULL) && (t_32 != q_32)))
                    _fail(q_32);
                  else
                    t_32 = q_32;
                  t = not_null(t_32);
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
  ATerm r_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = r_13;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_124 (ATerm, ATerm (ATerm)))
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym__2))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      {
        t = not_null(z_32);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              t = not_null(a_33);
              return(t);
            }
            t = split_2(t, _id, b_2);
            t = lookup_0(t);
            return(t);
          }
          t = d_124(t, a_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm w_124 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym__2))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      {
        t = not_null(i_33);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm m_33 = NULL;
            m_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(j_33));
              t = w_124(t);
            }
            return(t);
          }
          t = _all(t, c_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm g_124 (ATerm))
{
  ATerm q_33 (ATerm t)
  {
    ATerm x_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_124(t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = x_13;
        t = all_dist_1(t, q_33);
      }
    return(t);
  }
  t = q_33(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_123 (ATerm, ATerm (ATerm)), ATerm o_123 (ATerm), ATerm p_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_123 (ATerm, ATerm (ATerm)))
{
  ATerm s_33 = NULL;
  s_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), (ATerm) ATempty);
    {
      ATerm v_33 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, n_123);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                t = RnBinding_2(t, o_123, q_123);
                t = DistBinding_2(t, v_33, p_123);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, d_2);
        return(t);
      }
      t = v_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, e_2, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_h_14;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_i_14;
    return(t);
  }
  t = foldr_3(t, f_2, add_0, g_2);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  ATerm m_41 (ATerm t)
  {
    ATerm p_35 = NULL;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, h_2);
      {
        p_35 = t;
        c_34 :
        if(match_cons(p_35, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_14;
    return(t);
  }
  ATerm n_41 (ATerm t)
  {
    ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    t = not_null(i_35);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, i_2);
      {
        x_35 = t;
        k_34 :
        if(match_cons(x_35, sym_Defined_2))
          {
            y_35 = ATgetArgument(x_35, 0);
            z_35 = ATgetArgument(x_35, 1);
            l_34 :
            if(match_string(y_35, "g_0"))
              {
                ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
                if(((s_35 != NULL) && (s_35 != z_35)))
                  _fail(z_35);
                else
                  s_35 = z_35;
                {
                  t = not_null(s_35);
                  {
                    t = strename_0(t);
                    {
                      a_36 = t;
                      j_34 :
                      if(match_cons(a_36, sym_SDefT_4))
                        {
                          b_36 = ATgetArgument(a_36, 0);
                          c_36 = ATgetArgument(a_36, 1);
                          d_36 = ATgetArgument(a_36, 2);
                          e_36 = ATgetArgument(a_36, 3);
                          {
                            ATerm f_36 = NULL,l_36 = NULL;
                            if(((k_35 != NULL) && (k_35 != b_36)))
                              _fail(b_36);
                            else
                              k_35 = b_36;
                            {
                              if(((u_35 != NULL) && (u_35 != c_36)))
                                _fail(c_36);
                              else
                                u_35 = c_36;
                              {
                                if(((v_35 != NULL) && (v_35 != d_36)))
                                  _fail(d_36);
                                else
                                  v_35 = d_36;
                                {
                                  if(((t_35 != NULL) && (t_35 != e_36)))
                                    _fail(e_36);
                                  else
                                    t_35 = e_36;
                                  {
                                    ATerm g_36 = NULL,i_36 = NULL,k_36 = NULL;
                                    ATerm q_14;
                                    q_14 = t;
                                    {
                                      ATerm h_36 = NULL;
                                      t = not_null(u_35);
                                      {
                                        t = length_0(t);
                                        {
                                          h_36 = t;
                                          if(((g_36 != NULL) && (g_36 != h_36)))
                                            _fail(h_36);
                                          else
                                            g_36 = h_36;
                                        }
                                      }
                                    }
                                    t = q_14;
                                    {
                                      ATerm j_36 = NULL;
                                      t = not_null(v_35);
                                      {
                                        t = length_0(t);
                                        {
                                          j_36 = t;
                                          if(((i_36 != NULL) && (i_36 != j_36)))
                                            _fail(j_36);
                                          else
                                            i_36 = j_36;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_36), not_null(i_36));
                                        {
                                          t = add_0(t);
                                          {
                                            k_36 = t;
                                            if(((f_36 != NULL) && (f_36 != k_36)))
                                              _fail(k_36);
                                            else
                                              f_36 = k_36;
                                          }
                                        }
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), term_h_14);
                                      {
                                        t = gt_0(t);
                                        {
                                          t = new_0(t);
                                          {
                                            l_36 = t;
                                            {
                                              if(((w_35 != NULL) && (w_35 != l_36)))
                                                _fail(l_36);
                                              else
                                                w_35 = l_36;
                                              {
                                                ATerm r_14;
                                                r_14 = t;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty), term_k_14);
                                                  {
                                                    ATerm j_2 (ATerm t)
                                                    {
                                                      t = term_j_14;
                                                      return(t);
                                                    }
                                                    t = assert_1(t, j_2);
                                                  }
                                                }
                                                t = r_14;
                                              }
                                            }
                                          }
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
            else
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(w_35), not_null(u_35), not_null(v_35), not_null(t_35))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_35)), (ATerm)ATempty, (ATerm) ATempty));
    return(t);
  }
  ATerm o_41 (ATerm t)
  {
    ATerm o_36 = NULL;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, k_2);
      {
        o_36 = t;
        n_34 :
        if(match_cons(o_36, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_14;
    return(t);
  }
  ATerm p_41 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
    ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm l_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, l_2);
      {
        a_37 = t;
        z_34 :
        if(match_cons(a_37, sym_Defined_2))
          {
            b_37 = ATgetArgument(a_37, 0);
            c_37 = ATgetArgument(a_37, 1);
            a_35 :
            if(match_string(b_37, "d_0"))
              {
                ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
                if(((t_36 != NULL) && (t_36 != c_37)))
                  _fail(c_37);
                else
                  t_36 = c_37;
                {
                  t = not_null(t_36);
                  {
                    t = strename_0(t);
                    {
                      d_37 = t;
                      y_34 :
                      if(match_cons(d_37, sym_SDefT_4))
                        {
                          e_37 = ATgetArgument(d_37, 0);
                          f_37 = ATgetArgument(d_37, 1);
                          g_37 = ATgetArgument(d_37, 2);
                          h_37 = ATgetArgument(d_37, 3);
                          {
                            ATerm i_37 = NULL;
                            if(((k_35 != NULL) && (k_35 != e_37)))
                              _fail(e_37);
                            else
                              k_35 = e_37;
                            {
                              if(((u_36 != NULL) && (u_36 != f_37)))
                                _fail(f_37);
                              else
                                u_36 = f_37;
                              {
                                if(((w_36 != NULL) && (w_36 != g_37)))
                                  _fail(g_37);
                                else
                                  w_36 = g_37;
                                {
                                  if(((v_36 != NULL) && (v_36 != h_37)))
                                    _fail(h_37);
                                  else
                                    v_36 = h_37;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(u_36), not_null(l_35), not_null(v_36));
                                    {
                                      ATerm i_39 = NULL;
                                      t = substitute_args_0(t);
                                      {
                                        i_37 = t;
                                        {
                                          if(((y_36 != NULL) && (y_36 != i_37)))
                                            _fail(i_37);
                                          else
                                            y_36 = i_37;
                                          {
                                            t = not_null(w_36);
                                            {
                                              ATerm j_39 = NULL,g_41 = NULL;
                                              ATerm m_2 (ATerm t)
                                              {
                                                ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
                                                j_37 = t;
                                                s_34 :
                                                if(match_cons(j_37, sym_VarDec_2))
                                                  {
                                                    k_37 = ATgetArgument(j_37, 0);
                                                    l_37 = ATgetArgument(j_37, 1);
                                                    t = not_null(k_37);
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                                return(t);
                                              }
                                              t = map_1(t, m_2);
                                              {
                                                i_39 = t;
                                                {
                                                  if(((x_36 != NULL) && (x_36 != i_39)))
                                                    _fail(i_39);
                                                  else
                                                    x_36 = i_39;
                                                  {
                                                    ATerm f_41 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), not_null(x_36));
                                                    {
                                                      ATerm n_2 (ATerm t)
                                                      {
                                                        ATerm k_39 = NULL,b_41 = NULL,c_41 = NULL;
                                                        k_39 = t;
                                                        v_34 :
                                                        if(match_cons(k_39, sym__2))
                                                          {
                                                            b_41 = ATgetArgument(k_39, 0);
                                                            c_41 = ATgetArgument(k_39, 1);
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_41)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_41))));
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = zip_1(t, n_2);
                                                      {
                                                        f_41 = t;
                                                        if(((j_39 != NULL) && (j_39 != f_41)))
                                                          _fail(f_41);
                                                        else
                                                          j_39 = f_41;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_39)), not_null(y_36)));
                                                      {
                                                        g_41 = t;
                                                        {
                                                          if(((z_36 != NULL) && (z_36 != g_41)))
                                                            _fail(g_41);
                                                          else
                                                            z_36 = g_41;
                                                          {
                                                            ATerm s_14;
                                                            s_14 = t;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty), term_k_14);
                                                              {
                                                                ATerm o_2 (ATerm t)
                                                                {
                                                                  t = term_j_14;
                                                                  return(t);
                                                                }
                                                                t = assert_1(t, o_2);
                                                              }
                                                            }
                                                            t = s_14;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
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
            else
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
    t = not_null(z_36);
    return(t);
  }
  ATerm q_41 (ATerm t)
  {
    ATerm l_41 = NULL;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_35)), (ATerm)ATempty, (ATerm) ATempty);
    {
      ATerm p_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        l_41 = t;
        c_35 :
        if(match_cons(l_41, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_k_14;
    return(t);
  }
  i_35 = t;
  d_35 :
  if(match_cons(i_35, sym_CallT_3))
    {
      j_35 = ATgetArgument(i_35, 0);
      l_35 = ATgetArgument(i_35, 1);
      m_35 = ATgetArgument(i_35, 2);
      e_35 :
      if(match_cons(j_35, sym_SVar_1))
        {
          k_35 = ATgetArgument(j_35, 0);
          f_35 :
          if(((ATgetType(m_35) == AT_LIST) && ATisEmpty(m_35)))
            {
              g_35 :
              if(((ATgetType(l_35) == AT_LIST) && ATisEmpty(l_35)))
                {
                  {
                    ATerm t_14 = t;
                    int x_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_41(t);
                        ;
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = t_14;
                        {
                          ATerm z_14 = t;
                          int b_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_41(t);
                              ;
                              LocalPopChoice(b_15);
                            }
                          else
                            {
                              t = z_14;
                              {
                                ATerm e_15 = t;
                                int f_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = o_41(t);
                                    ;
                                    LocalPopChoice(f_15);
                                  }
                                else
                                  {
                                    t = e_15;
                                    {
                                      ATerm g_15 = t;
                                      int h_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_41(t);
                                          ;
                                          LocalPopChoice(h_15);
                                        }
                                      else
                                        {
                                          t = g_15;
                                          t = q_41(t);
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
                  ATerm i_15 = t;
                  int j_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_41(t);
                      ;
                      LocalPopChoice(j_15);
                    }
                  else
                    {
                      t = i_15;
                      {
                        ATerm k_15 = t;
                        int l_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_41(t);
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
                                  t = p_41(t);
                                  ;
                                  LocalPopChoice(n_15);
                                }
                              else
                                {
                                  t = m_15;
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
              h_35 :
              {
                ATerm o_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_41(t);
                    ;
                    LocalPopChoice(t_15);
                  }
                else
                  {
                    t = o_15;
                    {
                      ATerm u_15 = t;
                      int v_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_41(t);
                          ;
                          LocalPopChoice(v_15);
                        }
                      else
                        {
                          t = u_15;
                          {
                            ATerm z_15 = t;
                            int b_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_41(t);
                                ;
                                LocalPopChoice(b_16);
                              }
                            else
                              {
                                t = z_15;
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_SDefT_4))
    {
      o_42 = ATgetArgument(n_42, 0);
      p_42 = ATgetArgument(n_42, 1);
      q_42 = ATgetArgument(n_42, 2);
      r_42 = ATgetArgument(n_42, 3);
      {
        ATerm e_16;
        e_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_42)), (ATerm)ATempty, (ATerm) ATempty), term_k_14);
          {
            ATerm q_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = assert_1(t, q_2);
          }
        }
        t = e_16;
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
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
    {
      x_42 = ATgetFirst((ATermList) w_42);
      y_42 = (ATerm) ATgetNext((ATermList) w_42);
      t = not_null(y_42);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym__2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        ATerm f_16;
        f_16 = t;
        {
          ATerm j_43 = NULL;
          ATerm k_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_43), not_null(g_43));
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_16);
              }
            else
              {
                t = g_16;
                t = (ATerm) ATempty;
              }
            {
              k_43 = t;
              if(((j_43 != NULL) && (j_43 != k_43)))
                _fail(k_43);
              else
                j_43 = k_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_43), not_null(g_43), not_null(j_43));
            t = table_put_0(t);
          }
        }
        t = f_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_122 (ATerm))
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  ATerm i_16;
  i_16 = t;
  {
    ATerm u_43 = NULL;
    ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
    t = u_122(t);
    {
      u_43 = t;
      {
        if(((t_43 != NULL) && (t_43 != u_43)))
          _fail(u_43);
        else
          t_43 = u_43;
        {
          ATerm j_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), term_r_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = j_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_43 = t;
            q_43 :
            if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
              {
                w_43 = ATgetFirst((ATermList) v_43);
                x_43 = (ATerm) ATgetNext((ATermList) v_43);
                {
                  if(((s_43 != NULL) && (s_43 != w_43)))
                    _fail(w_43);
                  else
                    s_43 = w_43;
                  {
                    if(((r_43 != NULL) && (r_43 != x_43)))
                      _fail(x_43);
                    else
                      r_43 = x_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_43), term_r_16, not_null(r_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_43);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm y_43 = NULL;
                              y_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), not_null(y_43));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = i_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_113 (ATerm), ATerm u_113 (ATerm))
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_113(t);
      t = u_113(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        t = u_113(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_122 (ATerm))
{
  ATerm f_44 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm g_44 = NULL;
    ATerm h_44 = NULL;
    t = t_122(t);
    {
      g_44 = t;
      {
        if(((f_44 != NULL) && (f_44 != g_44)))
          _fail(g_44);
        else
          f_44 = g_44;
        {
          ATerm i_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), term_r_16);
          {
            ATerm v_16 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_17);
              }
            else
              {
                t = v_16;
                t = (ATerm) ATempty;
              }
            {
              i_44 = t;
              if(((h_44 != NULL) && (h_44 != i_44)))
                _fail(i_44);
              else
                h_44 = i_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_44), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(h_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_122 (ATerm), ATerm w_122 (ATerm))
{
  t = begin_scope_1(t, v_122);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, v_122);
      return(t);
    }
    t = restore_always_2(t, w_122, s_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, t_2, u_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_122 (ATerm))
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  v_44 = t;
  q_44 :
  if(match_cons(v_44, sym__2))
    {
      w_44 = ATgetArgument(v_44, 0);
      x_44 = ATgetArgument(v_44, 1);
      {
        ATerm a_45 = NULL,d_45 = NULL,e_45 = NULL;
        ATerm f_17;
        f_17 = t;
        {
          ATerm f_45 = NULL;
          ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
          t = x_122(t);
          {
            f_45 = t;
            {
              if(((a_45 != NULL) && (a_45 != f_45)))
                _fail(f_45);
              else
                a_45 = f_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_45), not_null(w_44), not_null(x_44));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_17 = t;
                    int h_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), term_r_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_17);
                      }
                    else
                      {
                        t = g_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_45 = t;
                      p_44 :
                      if(((ATgetType(g_45) == AT_LIST) && !(ATisEmpty(g_45))))
                        {
                          h_45 = ATgetFirst((ATermList) g_45);
                          i_45 = (ATerm) ATgetNext((ATermList) g_45);
                          {
                            if(((d_45 != NULL) && (d_45 != h_45)))
                              _fail(h_45);
                            else
                              d_45 = h_45;
                            {
                              if(((e_45 != NULL) && (e_45 != i_45)))
                                _fail(i_45);
                              else
                                e_45 = i_45;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_45), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(e_45)), (ATerm) ATinsert(CheckATermList(not_null(d_45)), not_null(w_44))));
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
        t = f_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym_SDefT_4))
    {
      p_45 = ATgetArgument(o_45, 0);
      q_45 = ATgetArgument(o_45, 1);
      r_45 = ATgetArgument(o_45, 2);
      s_45 = ATgetArgument(o_45, 3);
      {
        ATerm m_17;
        m_17 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_n_17, not_null(o_45)));
          {
            ATerm v_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = assert_1(t, v_2);
          }
        }
        t = m_17;
        {
          ATerm o_17;
          o_17 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_p_17, not_null(o_45)));
            {
              ATerm w_2 (ATerm t)
              {
                t = term_j_14;
                return(t);
              }
              t = assert_1(t, w_2);
            }
          }
          t = o_17;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm v_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_17;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm q_121 (ATerm))
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_121(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
        a_46 = t;
        z_45 :
        if(((ATgetType(a_46) == AT_LIST) && !(ATisEmpty(a_46))))
          {
            b_46 = ATgetFirst((ATermList) a_46);
            c_46 = (ATerm) ATgetNext((ATermList) a_46);
            {
              ATerm f_46 = NULL,h_46 = NULL;
              ATerm y_17;
              y_17 = t;
              {
                ATerm g_46 = NULL;
                t = not_null(b_46);
                {
                  t = q_121(t);
                  {
                    g_46 = t;
                    if(((f_46 != NULL) && (f_46 != g_46)))
                      _fail(g_46);
                    else
                      f_46 = g_46;
                  }
                }
              }
              t = y_17;
              {
                ATerm i_46 = NULL;
                t = not_null(c_46);
                {
                  t = foldr_3(t, o_121, p_121, q_121);
                  {
                    i_46 = t;
                    if(((h_46 != NULL) && (h_46 != i_46)))
                      _fail(i_46);
                    else
                      h_46 = i_46;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), not_null(h_46));
                  t = p_121(t);
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
ATerm crush_3 (ATerm t, ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm))
{
  ATerm v_46 = NULL;
  ATerm x_46 = NULL;
  v_46 = t;
  {
    ATerm y_46 = NULL;
    ATerm a_47 = NULL,b_47 = NULL,h_47 = NULL;
    t = not_null(v_46);
    {
      y_46 = t;
      {
        t = SSL_explode_term(not_null(y_46));
        {
          a_47 = t;
          u_46 :
          if(match_cons(a_47, sym__2))
            {
              b_47 = ATgetArgument(a_47, 0);
              h_47 = ATgetArgument(a_47, 1);
              if(((x_46 != NULL) && (x_46 != h_47)))
                _fail(h_47);
              else
                x_46 = h_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_46);
      t = foldr_3(t, m_119, n_119, o_119);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        t = term_i_14;
        return(t);
      }
      t = crush_3(t, x_2, add_0, term_size_0);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm l_47 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            t = term_i_14;
            return(t);
          }
          t = crush_3(t, y_2, add_0, l_47);
          return(t);
        }
        t = l_47(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym_LChoice_2))
    {
      t_47 = ATgetArgument(s_47, 0);
      u_47 = ATgetArgument(s_47, 1);
      {
        ATerm y_47 = NULL,a_48 = NULL;
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
        {
          t = not_null(t_47);
          {
            ATerm c_48 = NULL;
            t = i_99(t);
            {
              a_48 = t;
              {
                t = not_null(u_47);
                {
                  ATerm e_48 = NULL;
                  t = j_99(t);
                  {
                    c_48 = t;
                    {
                      ATerm f_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(a_48), not_null(c_48)), not_null(y_47));
                      {
                        f_48 = t;
                        if(((e_48 != NULL) && (e_48 != f_48)))
                          _fail(f_48);
                        else
                          e_48 = f_48;
                      }
                      t = not_null(e_48);
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
ATerm Choice_2 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  z_48 :
  if(match_cons(a_49, sym_Choice_2))
    {
      b_49 = ATgetArgument(a_49, 0);
      c_49 = ATgetArgument(a_49, 1);
      {
        ATerm g_49 = NULL,i_49 = NULL;
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(a_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
        {
          t = not_null(b_49);
          {
            ATerm k_49 = NULL;
            t = g_98(t);
            {
              i_49 = t;
              {
                t = not_null(c_49);
                {
                  ATerm m_49 = NULL;
                  t = h_98(t);
                  {
                    k_49 = t;
                    {
                      ATerm n_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(i_49), not_null(k_49)), not_null(g_49));
                      {
                        n_49 = t;
                        if(((m_49 != NULL) && (m_49 != n_49)))
                          _fail(n_49);
                        else
                          m_49 = n_49;
                      }
                      t = not_null(m_49);
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
ATerm Cong_2 (ATerm t, ATerm f_94 (ATerm), ATerm g_94 (ATerm))
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym_Cong_2))
    {
      i_50 = ATgetArgument(h_50, 0);
      j_50 = ATgetArgument(h_50, 1);
      {
        ATerm n_50 = NULL,p_50 = NULL;
        ATerm o_50 = NULL;
        t = SSLgetAnnotations(not_null(h_50));
        {
          o_50 = t;
          if(((n_50 != NULL) && (n_50 != o_50)))
            _fail(o_50);
          else
            n_50 = o_50;
        }
        {
          t = not_null(i_50);
          {
            ATerm r_50 = NULL;
            t = f_94(t);
            {
              p_50 = t;
              {
                t = not_null(j_50);
                {
                  ATerm t_50 = NULL;
                  t = g_94(t);
                  {
                    r_50 = t;
                    {
                      ATerm u_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(p_50), not_null(r_50)), not_null(n_50));
                      {
                        u_50 = t;
                        if(((t_50 != NULL) && (t_50 != u_50)))
                          _fail(u_50);
                        else
                          t_50 = u_50;
                      }
                      t = not_null(t_50);
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
ATerm Match_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm f_51 = NULL,g_51 = NULL;
  f_51 = t;
  e_51 :
  if(match_cons(f_51, sym_Match_1))
    {
      g_51 = ATgetArgument(f_51, 0);
      {
        ATerm j_51 = NULL,l_51 = NULL;
        ATerm k_51 = NULL;
        t = SSLgetAnnotations(not_null(f_51));
        {
          k_51 = t;
          if(((j_51 != NULL) && (j_51 != k_51)))
            _fail(k_51);
          else
            j_51 = k_51;
        }
        {
          t = not_null(g_51);
          {
            ATerm n_51 = NULL;
            t = z_98(t);
            {
              l_51 = t;
              {
                ATerm o_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_51)), not_null(j_51));
                {
                  o_51 = t;
                  if(((n_51 != NULL) && (n_51 != o_51)))
                    _fail(o_51);
                  else
                    n_51 = o_51;
                }
                t = not_null(n_51);
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
ATerm Seq_2 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  z_51 :
  if(match_cons(c_52, sym_Seq_2))
    {
      d_52 = ATgetArgument(c_52, 0);
      e_52 = ATgetArgument(c_52, 1);
      {
        ATerm i_52 = NULL,k_52 = NULL;
        ATerm j_52 = NULL;
        t = SSLgetAnnotations(not_null(c_52));
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
        {
          t = not_null(d_52);
          {
            ATerm m_52 = NULL;
            t = g_99(t);
            {
              k_52 = t;
              {
                t = not_null(e_52);
                {
                  ATerm o_52 = NULL;
                  t = h_99(t);
                  {
                    m_52 = t;
                    {
                      ATerm p_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(k_52), not_null(m_52)), not_null(i_52));
                      {
                        p_52 = t;
                        if(((o_52 != NULL) && (o_52 != p_52)))
                          _fail(p_52);
                        else
                          o_52 = p_52;
                      }
                      t = not_null(o_52);
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
ATerm Scope_2 (ATerm t, ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Scope_2))
    {
      e_53 = ATgetArgument(d_53, 0);
      f_53 = ATgetArgument(d_53, 1);
      {
        ATerm a_54 = NULL,c_54 = NULL;
        ATerm b_54 = NULL;
        t = SSLgetAnnotations(not_null(d_53));
        {
          b_54 = t;
          if(((a_54 != NULL) && (a_54 != b_54)))
            _fail(b_54);
          else
            a_54 = b_54;
        }
        {
          t = not_null(e_53);
          {
            ATerm g_54 = NULL;
            t = c_99(t);
            {
              c_54 = t;
              {
                t = not_null(f_53);
                {
                  ATerm i_54 = NULL;
                  t = d_99(t);
                  {
                    g_54 = t;
                    {
                      ATerm j_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(c_54), not_null(g_54)), not_null(a_54));
                      {
                        j_54 = t;
                        if(((i_54 != NULL) && (i_54 != j_54)))
                          _fail(j_54);
                        else
                          i_54 = j_54;
                      }
                      t = not_null(i_54);
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
ATerm Build_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm u_54 = NULL,v_54 = NULL;
  u_54 = t;
  t_54 :
  if(match_cons(u_54, sym_Build_1))
    {
      v_54 = ATgetArgument(u_54, 0);
      {
        ATerm y_54 = NULL,a_55 = NULL;
        ATerm z_54 = NULL;
        t = SSLgetAnnotations(not_null(u_54));
        {
          z_54 = t;
          if(((y_54 != NULL) && (y_54 != z_54)))
            _fail(z_54);
          else
            y_54 = z_54;
        }
        {
          t = not_null(v_54);
          {
            ATerm c_55 = NULL;
            t = a_99(t);
            {
              a_55 = t;
              {
                ATerm d_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_55)), not_null(y_54));
                {
                  d_55 = t;
                  if(((c_55 != NULL) && (c_55 != d_55)))
                    _fail(d_55);
                  else
                    c_55 = d_55;
                }
                t = not_null(c_55);
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
ATerm SVar_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm u_55 = NULL,v_55 = NULL;
  u_55 = t;
  t_55 :
  if(match_cons(u_55, sym_SVar_1))
    {
      v_55 = ATgetArgument(u_55, 0);
      {
        ATerm j_56 = NULL,n_56 = NULL;
        ATerm m_56 = NULL;
        t = SSLgetAnnotations(not_null(u_55));
        {
          m_56 = t;
          if(((j_56 != NULL) && (j_56 != m_56)))
            _fail(m_56);
          else
            j_56 = m_56;
        }
        {
          t = not_null(v_55);
          {
            ATerm p_56 = NULL;
            t = r_98(t);
            {
              n_56 = t;
              {
                ATerm q_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(n_56)), not_null(j_56));
                {
                  q_56 = t;
                  if(((p_56 != NULL) && (p_56 != q_56)))
                    _fail(q_56);
                  else
                    p_56 = q_56;
                }
                t = not_null(p_56);
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
ATerm CallT_3 (ATerm t, ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm))
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  f_57 = t;
  e_57 :
  if(match_cons(f_57, sym_CallT_3))
    {
      g_57 = ATgetArgument(f_57, 0);
      h_57 = ATgetArgument(f_57, 1);
      i_57 = ATgetArgument(f_57, 2);
      {
        ATerm o_57 = NULL,q_57 = NULL;
        ATerm p_57 = NULL;
        t = SSLgetAnnotations(not_null(f_57));
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
        {
          t = not_null(g_57);
          {
            ATerm s_57 = NULL;
            t = w_98(t);
            {
              q_57 = t;
              {
                t = not_null(h_57);
                {
                  ATerm u_57 = NULL;
                  t = x_98(t);
                  {
                    s_57 = t;
                    {
                      t = not_null(i_57);
                      {
                        ATerm w_57 = NULL;
                        t = y_98(t);
                        {
                          u_57 = t;
                          {
                            ATerm x_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(q_57), not_null(s_57), not_null(u_57)), not_null(o_57));
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
                      }
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
ATerm Fail_0 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym_Fail_0))
    {
      ATerm k_58 = NULL,m_58 = NULL;
      ATerm b_18;
      b_18 = t;
      {
        ATerm l_58 = NULL;
        t = SSLgetAnnotations(not_null(i_58));
        {
          l_58 = t;
          if(((k_58 != NULL) && (k_58 != l_58)))
            _fail(l_58);
          else
            k_58 = l_58;
        }
      }
      t = b_18;
      {
        ATerm n_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(k_58));
        {
          n_58 = t;
          if(((m_58 != NULL) && (m_58 != n_58)))
            _fail(n_58);
          else
            m_58 = n_58;
        }
        t = not_null(m_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Id_0))
    {
      ATerm x_58 = NULL,z_58 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm y_58 = NULL;
        t = SSLgetAnnotations(not_null(v_58));
        {
          y_58 = t;
          if(((x_58 != NULL) && (x_58 != y_58)))
            _fail(y_58);
          else
            x_58 = y_58;
        }
      }
      t = h_18;
      {
        ATerm a_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_58));
        {
          a_59 = t;
          if(((z_58 != NULL) && (z_58 != a_59)))
            _fail(a_59);
          else
            z_58 = a_59;
        }
        t = not_null(z_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm e_59 (ATerm t)
  {
    ATerm i_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = i_18;
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm r_18 = t;
                int s_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = CallT_3(t, z_2, _id, _id);
                    ;
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    {
                      ATerm t_18 = t;
                      int u_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          ;
                          LocalPopChoice(u_18);
                        }
                      else
                        {
                          t = t_18;
                          {
                            ATerm c_19 = t;
                            int d_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                ;
                                LocalPopChoice(d_19);
                              }
                            else
                              {
                                t = c_19;
                                {
                                  ATerm e_19 = t;
                                  int f_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm a_3 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, a_3, _id);
                                      ;
                                      LocalPopChoice(f_19);
                                    }
                                  else
                                    {
                                      t = e_19;
                                      {
                                        ATerm g_19 = t;
                                        int h_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_3 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, b_3);
                                            ;
                                            LocalPopChoice(h_19);
                                          }
                                        else
                                          {
                                            t = g_19;
                                            {
                                              ATerm i_19 = t;
                                              int j_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_3 (ATerm t)
                                                  {
                                                    ATerm d_3 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, d_3, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, c_3);
                                                  ;
                                                  LocalPopChoice(j_19);
                                                }
                                              else
                                                {
                                                  t = i_19;
                                                  {
                                                    ATerm k_19 = t;
                                                    int l_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_3 (ATerm t)
                                                        {
                                                          ATerm f_3 (ATerm t)
                                                          {
                                                            ATerm g_3 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, g_3, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, f_3);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, e_3, _id);
                                                        ;
                                                        LocalPopChoice(l_19);
                                                      }
                                                    else
                                                      {
                                                        t = k_19;
                                                        {
                                                          ATerm m_19 = t;
                                                          int q_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              ;
                                                              LocalPopChoice(q_19);
                                                            }
                                                          else
                                                            {
                                                              t = m_19;
                                                              {
                                                                ATerm r_19 = t;
                                                                int v_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, e_59, e_59);
                                                                    ;
                                                                    LocalPopChoice(v_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_19;
                                                                    t = LChoice_2(t, e_59, e_59);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
    ATerm y_19;
    y_19 = t;
    {
      ATerm h_3 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = split_2(t, term_size_0, h_3);
      t = leq_0(t);
    }
    t = y_19;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_111 (ATerm))
{
  ATerm f_59 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_111(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = _one(t, f_59);
      }
    return(t);
  }
  t = f_59(t);
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm))
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  o_59 = t;
  n_59 :
  if(match_cons(o_59, sym_SDefT_4))
    {
      p_59 = ATgetArgument(o_59, 0);
      q_59 = ATgetArgument(o_59, 1);
      r_59 = ATgetArgument(o_59, 2);
      s_59 = ATgetArgument(o_59, 3);
      {
        ATerm y_59 = NULL,a_60 = NULL;
        ATerm z_59 = NULL;
        t = SSLgetAnnotations(not_null(o_59));
        {
          z_59 = t;
          if(((y_59 != NULL) && (y_59 != z_59)))
            _fail(z_59);
          else
            y_59 = z_59;
        }
        {
          t = not_null(p_59);
          {
            ATerm c_60 = NULL;
            t = k_101(t);
            {
              a_60 = t;
              {
                t = not_null(q_59);
                {
                  ATerm e_60 = NULL;
                  t = l_101(t);
                  {
                    c_60 = t;
                    {
                      t = not_null(r_59);
                      {
                        ATerm g_60 = NULL;
                        t = m_101(t);
                        {
                          e_60 = t;
                          {
                            t = not_null(s_59);
                            {
                              ATerm i_60 = NULL;
                              t = n_101(t);
                              {
                                g_60 = t;
                                {
                                  ATerm j_60 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(a_60), not_null(c_60), not_null(e_60), not_null(g_60)), not_null(y_59));
                                  {
                                    j_60 = t;
                                    if(((i_60 != NULL) && (i_60 != j_60)))
                                      _fail(j_60);
                                    else
                                      i_60 = j_60;
                                  }
                                  t = not_null(i_60);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm inlineable_0 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm a_61 = NULL;
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        z_60 = t;
        r_60 :
        if(!(match_string(z_60, "main_0_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
    {
      a_61 = t;
      if(((y_60 != NULL) && (y_60 != a_61)))
        _fail(a_61);
      else
        y_60 = a_61;
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm d_20;
    d_20 = t;
    {
      ATerm e_20 = t;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
            b_61 = t;
            u_60 :
            if(match_cons(b_61, sym_CallT_3))
              {
                c_61 = ATgetArgument(b_61, 0);
                e_61 = ATgetArgument(b_61, 1);
                f_61 = ATgetArgument(b_61, 2);
                v_60 :
                if(match_cons(c_61, sym_SVar_1))
                  {
                    d_61 = ATgetArgument(c_61, 0);
                    w_60 :
                    if(((ATgetType(e_61) == AT_LIST) && ATisEmpty(e_61)))
                      {
                        x_60 :
                        if(((ATgetType(f_61) == AT_LIST) && ATisEmpty(f_61)))
                          {
                            if(((y_60 != NULL) && (y_60 != d_61)))
                              _fail(d_61);
                            else
                              y_60 = d_61;
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_20;
        }
    }
    t = d_20;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDefT_4(t, i_3, _id, _id, j_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  y_61 :
  if(match_cons(c_62, sym_Cong_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,h_63 = NULL,j_63 = NULL,l_63 = NULL;
        ATerm f_20;
        f_20 = t;
        {
          ATerm n_62 = NULL;
          t = not_null(e_62);
          {
            ATerm q_62 = NULL;
            t = map_1(t, new_0);
            {
              n_62 = t;
              {
                if(((k_62 != NULL) && (k_62 != n_62)))
                  _fail(n_62);
                else
                  k_62 = n_62;
                {
                  t = not_null(k_62);
                  {
                    ATerm r_62 = NULL;
                    ATerm l_3 (ATerm t)
                    {
                      ATerm o_62 = NULL;
                      ATerm p_62 = NULL;
                      p_62 = t;
                      if(((o_62 != NULL) && (o_62 != p_62)))
                        _fail(p_62);
                      else
                        o_62 = p_62;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_62));
                      return(t);
                    }
                    t = map_1(t, l_3);
                    {
                      q_62 = t;
                      {
                        if(((h_62 != NULL) && (h_62 != q_62)))
                          _fail(q_62);
                        else
                          h_62 = q_62;
                        {
                          ATerm s_62 = NULL;
                          t = new_0(t);
                          {
                            r_62 = t;
                            {
                              if(((i_62 != NULL) && (i_62 != r_62)))
                                _fail(r_62);
                              else
                                i_62 = r_62;
                              {
                                t = not_null(e_62);
                                {
                                  ATerm v_62 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    s_62 = t;
                                    {
                                      if(((l_62 != NULL) && (l_62 != s_62)))
                                        _fail(s_62);
                                      else
                                        l_62 = s_62;
                                      {
                                        t = not_null(l_62);
                                        {
                                          ATerm w_62 = NULL,g_63 = NULL;
                                          ATerm m_3 (ATerm t)
                                          {
                                            ATerm t_62 = NULL;
                                            ATerm u_62 = NULL;
                                            u_62 = t;
                                            if(((t_62 != NULL) && (t_62 != u_62)))
                                              _fail(u_62);
                                            else
                                              t_62 = u_62;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_62));
                                            return(t);
                                          }
                                          t = map_1(t, m_3);
                                          {
                                            v_62 = t;
                                            {
                                              if(((j_62 != NULL) && (j_62 != v_62)))
                                                _fail(v_62);
                                              else
                                                j_62 = v_62;
                                              {
                                                ATerm x_62 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), not_null(l_62));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    x_62 = t;
                                                    if(((w_62 != NULL) && (w_62 != x_62)))
                                                      _fail(x_62);
                                                    else
                                                      w_62 = x_62;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_62), not_null(e_62));
                                                  {
                                                    ATerm n_3 (ATerm t)
                                                    {
                                                      ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
                                                      y_62 = t;
                                                      s_61 :
                                                      if(match_cons(y_62, sym__2))
                                                        {
                                                          z_62 = ATgetArgument(y_62, 0);
                                                          c_63 = ATgetArgument(y_62, 1);
                                                          t_61 :
                                                          if(match_cons(z_62, sym__2))
                                                            {
                                                              a_63 = ATgetArgument(z_62, 0);
                                                              b_63 = ATgetArgument(z_62, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_63))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_63)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, n_3);
                                                    {
                                                      g_63 = t;
                                                      if(((m_62 != NULL) && (m_62 != g_63)))
                                                        _fail(g_63);
                                                      else
                                                        m_62 = g_63;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = f_20;
        {
          ATerm g_20;
          g_20 = t;
          {
            ATerm i_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), not_null(l_62));
            {
              t = conc_0(t);
              {
                i_63 = t;
                if(((h_63 != NULL) && (h_63 != i_63)))
                  _fail(i_63);
                else
                  h_63 = i_63;
              }
            }
          }
          t = g_20;
          {
            ATerm h_20;
            h_20 = t;
            {
              ATerm k_63 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_62), not_null(h_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))));
              {
                t = Mapp2_0(t);
                {
                  k_63 = t;
                  if(((j_63 != NULL) && (j_63 != k_63)))
                    _fail(k_63);
                  else
                    j_63 = k_63;
                }
              }
            }
            t = h_20;
            {
              ATerm m_63 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_62), not_null(j_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_62))));
              {
                t = Bapp2_0(t);
                {
                  m_63 = t;
                  if(((l_63 != NULL) && (l_63 != m_63)))
                    _fail(m_63);
                  else
                    l_63 = m_63;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_63)), not_null(i_62)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_62)), not_null(l_63))));
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
  ATerm z_64 = NULL,a_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym_Build_1))
    {
      a_65 = ATgetArgument(z_64, 0);
      {
        ATerm i_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
            ATerm g_65 = NULL;
            ATerm k_65 = NULL;
            t = new_0(t);
            {
              g_65 = t;
              {
                if(((e_65 != NULL) && (e_65 != g_65)))
                  _fail(g_65);
                else
                  e_65 = g_65;
                {
                  t = not_null(a_65);
                  {
                    ATerm o_3 (ATerm t)
                    {
                      ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
                      h_65 = t;
                      o_64 :
                      if(match_cons(h_65, sym_Anno_2))
                        {
                          i_65 = ATgetArgument(h_65, 0);
                          j_65 = ATgetArgument(h_65, 1);
                          {
                            if(((c_65 != NULL) && (c_65 != i_65)))
                              _fail(i_65);
                            else
                              c_65 = i_65;
                            {
                              if(((d_65 != NULL) && (d_65 != j_65)))
                                _fail(j_65);
                              else
                                d_65 = j_65;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_65));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, o_3);
                    {
                      k_65 = t;
                      if(((f_65 != NULL) && (f_65 != k_65)))
                        _fail(k_65);
                      else
                        f_65 = k_65;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_65)), not_null(c_65))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_65))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_65))));
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = i_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_65 = NULL,t_65 = NULL,u_65 = NULL;
                  ATerm v_65 = NULL;
                  ATerm z_65 = NULL;
                  t = new_0(t);
                  {
                    v_65 = t;
                    {
                      if(((t_65 != NULL) && (t_65 != v_65)))
                        _fail(v_65);
                      else
                        t_65 = v_65;
                      {
                        t = not_null(a_65);
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm x_65 = NULL,y_65 = NULL;
                            x_65 = t;
                            s_64 :
                            if(match_cons(x_65, sym_RootApp_1))
                              {
                                y_65 = ATgetArgument(x_65, 0);
                                {
                                  if(((m_65 != NULL) && (m_65 != y_65)))
                                    _fail(y_65);
                                  else
                                    m_65 = y_65;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_65));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, p_3);
                          {
                            z_65 = t;
                            if(((u_65 != NULL) && (u_65 != z_65)))
                              _fail(z_65);
                            else
                              u_65 = z_65;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_65))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_65))));
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  {
                    ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
                    ATerm f_66 = NULL;
                    ATerm j_66 = NULL;
                    t = new_0(t);
                    {
                      f_66 = t;
                      {
                        if(((d_66 != NULL) && (d_66 != f_66)))
                          _fail(f_66);
                        else
                          d_66 = f_66;
                        {
                          t = not_null(a_65);
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
                              g_66 = t;
                              w_64 :
                              if(match_cons(g_66, sym_App_2))
                                {
                                  h_66 = ATgetArgument(g_66, 0);
                                  i_66 = ATgetArgument(g_66, 1);
                                  {
                                    if(((b_66 != NULL) && (b_66 != h_66)))
                                      _fail(h_66);
                                    else
                                      b_66 = h_66;
                                    {
                                      if(((c_66 != NULL) && (c_66 != i_66)))
                                        _fail(i_66);
                                      else
                                        c_66 = i_66;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_66));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, q_3);
                            {
                              j_66 = t;
                              if(((e_66 != NULL) && (e_66 != j_66)))
                                _fail(j_66);
                              else
                                e_66 = j_66;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_66), not_null(c_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_66)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_66))));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  x_66 :
  if(match_cons(y_66, sym__2))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_67)), not_null(z_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
  i_67 = t;
  f_67 :
  if(match_cons(i_67, sym__2))
    {
      j_67 = ATgetArgument(i_67, 0);
      m_67 = ATgetArgument(i_67, 1);
      g_67 :
      if(((ATgetType(j_67) == AT_LIST) && !(ATisEmpty(j_67))))
        {
          k_67 = ATgetFirst((ATermList) j_67);
          l_67 = (ATerm) ATgetNext((ATermList) j_67);
          h_67 :
          if(((ATgetType(m_67) == AT_LIST) && !(ATisEmpty(m_67))))
            {
              n_67 = ATgetFirst((ATermList) m_67);
              o_67 = (ATerm) ATgetNext((ATermList) m_67);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_67), not_null(n_67)), (ATerm) ATmakeAppl(sym__2, not_null(l_67), not_null(o_67)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  v_67 :
  if(match_cons(y_67, sym__2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      w_67 :
      if(((ATgetType(z_67) == AT_LIST) && ATisEmpty(z_67)))
        {
          x_67 :
          if(((ATgetType(a_68) == AT_LIST) && ATisEmpty(a_68)))
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
ATerm genzip_4 (ATerm t, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm))
{
  ATerm c_68 (ATerm t)
  {
    ATerm t_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_114(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = t_20;
        {
          t = z_114(t);
          {
            t = _2(t, b_115, c_68);
            t = a_115(t);
          }
        }
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_115 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_115);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,z_69 = NULL,a_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_69 = t;
  d_69 :
  if(match_cons(k_69, sym_Call_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      n_69 = ATgetArgument(k_69, 1);
      e_69 :
      if(match_cons(l_69, sym_SVar_1))
        {
          m_69 = ATgetArgument(l_69, 0);
          f_69 :
          if(match_string(m_69, "Anno_Cong__"))
            {
              g_69 :
              if(((ATgetType(n_69) == AT_LIST) && !(ATisEmpty(n_69))))
                {
                  o_69 = ATgetFirst((ATermList) n_69);
                  k_70 = (ATerm) ATgetNext((ATermList) n_69);
                  h_69 :
                  if(match_cons(o_69, sym_Cong_2))
                    {
                      z_69 = ATgetArgument(o_69, 0);
                      a_70 = ATgetArgument(o_69, 1);
                      i_69 :
                      if(((ATgetType(k_70) == AT_LIST) && !(ATisEmpty(k_70))))
                        {
                          l_70 = ATgetFirst((ATermList) k_70);
                          m_70 = (ATerm) ATgetNext((ATermList) k_70);
                          j_69 :
                          if(((ATgetType(m_70) == AT_LIST) && ATisEmpty(m_70)))
                            {
                              {
                                ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,c_72 = NULL,e_72 = NULL,g_72 = NULL;
                                ATerm z_20;
                                z_20 = t;
                                {
                                  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(a_70)), not_null(l_70));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      f_71 = t;
                                      z_68 :
                                      if(((ATgetType(f_71) == AT_LIST) && !(ATisEmpty(f_71))))
                                        {
                                          g_71 = ATgetFirst((ATermList) f_71);
                                          h_71 = (ATerm) ATgetNext((ATermList) f_71);
                                          {
                                            ATerm k_71 = NULL;
                                            if(((y_70 != NULL) && (y_70 != g_71)))
                                              _fail(g_71);
                                            else
                                              y_70 = g_71;
                                            {
                                              if(((c_71 != NULL) && (c_71 != h_71)))
                                                _fail(h_71);
                                              else
                                                c_71 = h_71;
                                              {
                                                ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
                                                ATerm r_3 (ATerm t)
                                                {
                                                  ATerm i_71 = NULL;
                                                  ATerm j_71 = NULL;
                                                  j_71 = t;
                                                  if(((i_71 != NULL) && (i_71 != j_71)))
                                                    _fail(j_71);
                                                  else
                                                    i_71 = j_71;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_71));
                                                  return(t);
                                                }
                                                t = map_1(t, r_3);
                                                {
                                                  k_71 = t;
                                                  {
                                                    if(((z_70 != NULL) && (z_70 != k_71)))
                                                      _fail(k_71);
                                                    else
                                                      z_70 = k_71;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(a_70)), not_null(l_70));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          l_71 = t;
                                                          y_68 :
                                                          if(((ATgetType(l_71) == AT_LIST) && !(ATisEmpty(l_71))))
                                                            {
                                                              m_71 = ATgetFirst((ATermList) l_71);
                                                              n_71 = (ATerm) ATgetNext((ATermList) l_71);
                                                              {
                                                                ATerm q_71 = NULL;
                                                                if(((a_71 != NULL) && (a_71 != m_71)))
                                                                  _fail(m_71);
                                                                else
                                                                  a_71 = m_71;
                                                                {
                                                                  if(((d_71 != NULL) && (d_71 != n_71)))
                                                                    _fail(n_71);
                                                                  else
                                                                    d_71 = n_71;
                                                                  {
                                                                    ATerm r_71 = NULL,b_72 = NULL;
                                                                    ATerm s_3 (ATerm t)
                                                                    {
                                                                      ATerm o_71 = NULL;
                                                                      ATerm p_71 = NULL;
                                                                      p_71 = t;
                                                                      if(((o_71 != NULL) && (o_71 != p_71)))
                                                                        _fail(p_71);
                                                                      else
                                                                        o_71 = p_71;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_71));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, s_3);
                                                                    {
                                                                      q_71 = t;
                                                                      {
                                                                        if(((b_71 != NULL) && (b_71 != q_71)))
                                                                          _fail(q_71);
                                                                        else
                                                                          b_71 = q_71;
                                                                        {
                                                                          ATerm s_71 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(d_71));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              s_71 = t;
                                                                              if(((r_71 != NULL) && (r_71 != s_71)))
                                                                                _fail(s_71);
                                                                              else
                                                                                r_71 = s_71;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_71), (ATerm) ATinsert(CheckATermList(not_null(a_70)), not_null(l_70)));
                                                                            {
                                                                              ATerm t_3 (ATerm t)
                                                                              {
                                                                                ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
                                                                                t_71 = t;
                                                                                v_68 :
                                                                                if(match_cons(t_71, sym__2))
                                                                                  {
                                                                                    u_71 = ATgetArgument(t_71, 0);
                                                                                    x_71 = ATgetArgument(t_71, 1);
                                                                                    w_68 :
                                                                                    if(match_cons(u_71, sym__2))
                                                                                      {
                                                                                        v_71 = ATgetArgument(u_71, 0);
                                                                                        w_71 = ATgetArgument(u_71, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_71), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, t_3);
                                                                              {
                                                                                b_72 = t;
                                                                                if(((e_71 != NULL) && (e_71 != b_72)))
                                                                                  _fail(b_72);
                                                                                else
                                                                                  e_71 = b_72;
                                                                              }
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
                                t = z_20;
                                {
                                  ATerm b_21;
                                  b_21 = t;
                                  {
                                    ATerm d_72 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), not_null(d_71));
                                    {
                                      t = conc_0(t);
                                      {
                                        d_72 = t;
                                        if(((c_72 != NULL) && (c_72 != d_72)))
                                          _fail(d_72);
                                        else
                                          c_72 = d_72;
                                      }
                                    }
                                  }
                                  t = b_21;
                                  {
                                    ATerm d_21;
                                    d_21 = t;
                                    {
                                      ATerm f_72 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(z_69), not_null(z_70)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_70))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          f_72 = t;
                                          if(((e_72 != NULL) && (e_72 != f_72)))
                                            _fail(f_72);
                                          else
                                            e_72 = f_72;
                                        }
                                      }
                                    }
                                    t = d_21;
                                    {
                                      ATerm h_72 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(z_69), not_null(b_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_71))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          h_72 = t;
                                          if(((g_72 != NULL) && (g_72 != h_72)))
                                            _fail(h_72);
                                          else
                                            g_72 = h_72;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(c_72)), not_null(a_71)), not_null(y_70)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_71)), not_null(g_72))));
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
ATerm As_2 (ATerm t, ATerm z_95 (ATerm), ATerm a_96 (ATerm))
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_cons(b_73, sym_As_2))
    {
      c_73 = ATgetArgument(b_73, 0);
      d_73 = ATgetArgument(b_73, 1);
      {
        ATerm m_73 = NULL,o_73 = NULL;
        ATerm n_73 = NULL;
        t = SSLgetAnnotations(not_null(b_73));
        {
          n_73 = t;
          if(((m_73 != NULL) && (m_73 != n_73)))
            _fail(n_73);
          else
            m_73 = n_73;
        }
        {
          t = not_null(c_73);
          {
            ATerm z_73 = NULL;
            t = z_95(t);
            {
              o_73 = t;
              {
                t = not_null(d_73);
                {
                  ATerm b_74 = NULL;
                  t = a_96(t);
                  {
                    z_73 = t;
                    {
                      ATerm c_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(o_73), not_null(z_73)), not_null(m_73));
                      {
                        c_74 = t;
                        if(((b_74 != NULL) && (b_74 != c_74)))
                          _fail(c_74);
                        else
                          b_74 = c_74;
                      }
                      t = not_null(b_74);
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
ATerm PrimT_3 (ATerm t, ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm))
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  d_75 = t;
  c_75 :
  if(match_cons(d_75, sym_PrimT_3))
    {
      e_75 = ATgetArgument(d_75, 0);
      f_75 = ATgetArgument(d_75, 1);
      g_75 = ATgetArgument(d_75, 2);
      {
        ATerm z_76 = NULL,b_77 = NULL;
        ATerm a_77 = NULL;
        t = SSLgetAnnotations(not_null(d_75));
        {
          a_77 = t;
          if(((z_76 != NULL) && (z_76 != a_77)))
            _fail(a_77);
          else
            z_76 = a_77;
        }
        {
          t = not_null(e_75);
          {
            ATerm d_77 = NULL;
            t = y_99(t);
            {
              b_77 = t;
              {
                t = not_null(f_75);
                {
                  ATerm f_77 = NULL;
                  t = z_99(t);
                  {
                    d_77 = t;
                    {
                      t = not_null(g_75);
                      {
                        ATerm h_77 = NULL;
                        t = a_100(t);
                        {
                          f_77 = t;
                          {
                            ATerm i_77 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(b_77), not_null(d_77), not_null(f_77)), not_null(z_76));
                            {
                              i_77 = t;
                              if(((h_77 != NULL) && (h_77 != i_77)))
                                _fail(i_77);
                              else
                                h_77 = i_77;
                            }
                            t = not_null(h_77);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm s_95 (ATerm), ATerm t_95 (ATerm))
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  v_77 = t;
  u_77 :
  if(match_cons(v_77, sym_Explode_2))
    {
      w_77 = ATgetArgument(v_77, 0);
      x_77 = ATgetArgument(v_77, 1);
      {
        ATerm b_78 = NULL,d_78 = NULL;
        ATerm c_78 = NULL;
        t = SSLgetAnnotations(not_null(v_77));
        {
          c_78 = t;
          if(((b_78 != NULL) && (b_78 != c_78)))
            _fail(c_78);
          else
            b_78 = c_78;
        }
        {
          t = not_null(w_77);
          {
            ATerm f_78 = NULL;
            t = s_95(t);
            {
              d_78 = t;
              {
                t = not_null(x_77);
                {
                  ATerm h_78 = NULL;
                  t = t_95(t);
                  {
                    f_78 = t;
                    {
                      ATerm i_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(d_78), not_null(f_78)), not_null(b_78));
                      {
                        i_78 = t;
                        if(((h_78 != NULL) && (h_78 != i_78)))
                          _fail(i_78);
                        else
                          h_78 = i_78;
                      }
                      t = not_null(h_78);
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
ATerm Op_2 (ATerm t, ATerm o_95 (ATerm), ATerm p_95 (ATerm))
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
  u_78 = t;
  t_78 :
  if(match_cons(u_78, sym_Op_2))
    {
      v_78 = ATgetArgument(u_78, 0);
      w_78 = ATgetArgument(u_78, 1);
      {
        ATerm a_79 = NULL,c_79 = NULL;
        ATerm b_79 = NULL;
        t = SSLgetAnnotations(not_null(u_78));
        {
          b_79 = t;
          if(((a_79 != NULL) && (a_79 != b_79)))
            _fail(b_79);
          else
            a_79 = b_79;
        }
        {
          t = not_null(v_78);
          {
            ATerm e_79 = NULL;
            t = o_95(t);
            {
              c_79 = t;
              {
                t = not_null(w_78);
                {
                  ATerm g_79 = NULL;
                  t = p_95(t);
                  {
                    e_79 = t;
                    {
                      ATerm i_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(c_79), not_null(e_79)), not_null(a_79));
                      {
                        i_79 = t;
                        if(((g_79 != NULL) && (g_79 != i_79)))
                          _fail(i_79);
                        else
                          g_79 = i_79;
                      }
                      t = not_null(g_79);
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
ATerm pat_td_1 (ATerm t, ATerm x_135 (ATerm))
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_135(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                t = pat_td_1(t, x_135);
                return(t);
              }
              t = fetch_1(t, v_3);
              return(t);
            }
            t = Op_2(t, _id, u_3);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = pat_td_1(t, x_135);
                    return(t);
                  }
                  t = Explode_2(t, _id, w_3);
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
                        ATerm x_3 (ATerm t)
                        {
                          t = pat_td_1(t, x_135);
                          return(t);
                        }
                        t = Explode_2(t, x_3, _id);
                        ;
                        LocalPopChoice(n_21);
                      }
                    else
                      {
                        t = m_21;
                        {
                          ATerm u_21 = t;
                          int v_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = pat_td_1(t, x_135);
                                  return(t);
                                }
                                t = fetch_1(t, z_3);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, y_3);
                              ;
                              LocalPopChoice(v_21);
                            }
                          else
                            {
                              t = u_21;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1(t, x_135);
                                  return(t);
                                }
                                t = As_2(t, _id, a_4);
                              }
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL;
  e_80 = t;
  d_80 :
  if(match_cons(e_80, sym_Match_1))
    {
      f_80 = ATgetArgument(e_80, 0);
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
            ATerm l_80 = NULL;
            ATerm p_80 = NULL;
            t = new_0(t);
            {
              l_80 = t;
              {
                if(((j_80 != NULL) && (j_80 != l_80)))
                  _fail(l_80);
                else
                  j_80 = l_80;
                {
                  t = not_null(f_80);
                  {
                    ATerm b_4 (ATerm t)
                    {
                      ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
                      m_80 = t;
                      t_79 :
                      if(match_cons(m_80, sym_Anno_2))
                        {
                          n_80 = ATgetArgument(m_80, 0);
                          o_80 = ATgetArgument(m_80, 1);
                          {
                            if(((h_80 != NULL) && (h_80 != n_80)))
                              _fail(n_80);
                            else
                              h_80 = n_80;
                            {
                              if(((i_80 != NULL) && (i_80 != o_80)))
                                _fail(o_80);
                              else
                                i_80 = o_80;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_80)), not_null(h_80));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, b_4);
                    {
                      p_80 = t;
                      if(((k_80 != NULL) && (k_80 != p_80)))
                        _fail(p_80);
                      else
                        k_80 = p_80;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_80)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_80)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_80))))));
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            {
              ATerm z_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
                  ATerm u_80 = NULL;
                  ATerm x_80 = NULL;
                  t = new_0(t);
                  {
                    u_80 = t;
                    {
                      if(((s_80 != NULL) && (s_80 != u_80)))
                        _fail(u_80);
                      else
                        s_80 = u_80;
                      {
                        t = not_null(f_80);
                        {
                          ATerm c_4 (ATerm t)
                          {
                            ATerm v_80 = NULL,w_80 = NULL;
                            v_80 = t;
                            x_79 :
                            if(match_cons(v_80, sym_RootApp_1))
                              {
                                w_80 = ATgetArgument(v_80, 0);
                                {
                                  if(((r_80 != NULL) && (r_80 != w_80)))
                                    _fail(w_80);
                                  else
                                    r_80 = w_80;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_80));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, c_4);
                          {
                            x_80 = t;
                            if(((t_80 != NULL) && (t_80 != x_80)))
                              _fail(x_80);
                            else
                              t_80 = x_80;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_80))), not_null(r_80))));
                  ;
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = z_21;
                  {
                    ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
                    ATerm d_81 = NULL;
                    ATerm h_81 = NULL;
                    t = new_0(t);
                    {
                      d_81 = t;
                      {
                        if(((b_81 != NULL) && (b_81 != d_81)))
                          _fail(d_81);
                        else
                          b_81 = d_81;
                        {
                          t = not_null(f_80);
                          {
                            ATerm d_4 (ATerm t)
                            {
                              ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
                              e_81 = t;
                              b_80 :
                              if(match_cons(e_81, sym_App_2))
                                {
                                  f_81 = ATgetArgument(e_81, 0);
                                  g_81 = ATgetArgument(e_81, 1);
                                  {
                                    if(((a_81 != NULL) && (a_81 != f_81)))
                                      _fail(f_81);
                                    else
                                      a_81 = f_81;
                                    {
                                      if(((z_80 != NULL) && (z_80 != g_81)))
                                        _fail(g_81);
                                      else
                                        z_80 = g_81;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_81));
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
                              h_81 = t;
                              if(((c_81 != NULL) && (c_81 != h_81)))
                                _fail(h_81);
                              else
                                c_81 = h_81;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_81))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_80)), not_null(a_81)))));
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym_Cong_2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      {
        ATerm f_82 = NULL;
        ATerm j_82 = NULL;
        t = not_null(c_82);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm g_82 = NULL,h_82 = NULL;
            h_82 = t;
            x_81 :
            if(match_cons(h_82, sym_Match_1))
              {
                g_82 = ATgetArgument(h_82, 0);
                t = not_null(g_82);
              }
            else
              {
                if(match_cons(h_82, sym_Id_0))
                  {
                    t = term_f_22;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, e_4);
          {
            j_82 = t;
            if(((f_82 != NULL) && (f_82 != j_82)))
              _fail(j_82);
            else
              f_82 = j_82;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(b_82), not_null(f_82)));
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
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
  r_82 = t;
  p_82 :
  if(match_cons(r_82, sym_Scope_2))
    {
      s_82 = ATgetArgument(r_82, 0);
      t_82 = ATgetArgument(r_82, 1);
      q_82 :
      if(((ATgetType(s_82) == AT_LIST) && ATisEmpty(s_82)))
        {
          t = not_null(t_82);
        }
      else
        {
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
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL;
  g_85 = t;
  c_83 :
  if(match_cons(g_85, sym_Where_1))
    {
      h_85 = ATgetArgument(g_85, 0);
      d_83 :
      if(match_cons(h_85, sym_Seq_2))
        {
          f_85 = ATgetArgument(h_85, 0);
          b_85 = ATgetArgument(h_85, 1);
          e_83 :
          if(match_cons(f_85, sym_Where_1))
            {
              a_85 = ATgetArgument(f_85, 0);
              g_83 :
              if(match_cons(b_85, sym_Seq_2))
                {
                  c_85 = ATgetArgument(b_85, 0);
                  e_85 = ATgetArgument(b_85, 1);
                  s_83 :
                  if(match_cons(c_85, sym_Build_1))
                    {
                      d_85 = ATgetArgument(c_85, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_85)), not_null(e_85))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_85, sym_Where_1))
            {
              f_85 = ATgetArgument(h_85, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_85));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(g_85, sym_Test_1))
        {
          h_85 = ATgetArgument(g_85, 0);
          t_83 :
          if(match_cons(h_85, sym_Test_1))
            {
              f_85 = ATgetArgument(h_85, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_85));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_85, sym_Not_1))
            {
              h_85 = ATgetArgument(g_85, 0);
              z_84 :
              if(match_cons(h_85, sym_Not_1))
                {
                  f_85 = ATgetArgument(h_85, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_85));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(g_85, sym_LChoice_2))
                {
                  h_85 = ATgetArgument(g_85, 0);
                  i_85 = ATgetArgument(g_85, 1);
                  {
                    if(((h_85 != NULL) && (h_85 != i_85)))
                      _fail(i_85);
                    else
                      h_85 = i_85;
                    t = not_null(h_85);
                  }
                }
              else
                {
                  if(match_cons(g_85, sym_Choice_2))
                    {
                      h_85 = ATgetArgument(g_85, 0);
                      i_85 = ATgetArgument(g_85, 1);
                      {
                        if(((h_85 != NULL) && (h_85 != i_85)))
                          _fail(i_85);
                        else
                          h_85 = i_85;
                        t = not_null(h_85);
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
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL;
  e_86 = t;
  a_86 :
  if(match_cons(e_86, sym_LChoice_2))
    {
      f_86 = ATgetArgument(e_86, 0);
      i_86 = ATgetArgument(e_86, 1);
      b_86 :
      if(match_cons(f_86, sym_LChoice_2))
        {
          g_86 = ATgetArgument(f_86, 0);
          h_86 = ATgetArgument(f_86, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_86), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_86), not_null(i_86)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(e_86, sym_Seq_2))
        {
          f_86 = ATgetArgument(e_86, 0);
          i_86 = ATgetArgument(e_86, 1);
          c_86 :
          if(match_cons(f_86, sym_Seq_2))
            {
              g_86 = ATgetArgument(f_86, 0);
              h_86 = ATgetArgument(f_86, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_86), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_86), not_null(i_86)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_86, sym_Choice_2))
            {
              f_86 = ATgetArgument(e_86, 0);
              i_86 = ATgetArgument(e_86, 1);
              d_86 :
              if(match_cons(f_86, sym_Choice_2))
                {
                  g_86 = ATgetArgument(f_86, 0);
                  h_86 = ATgetArgument(f_86, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_86), (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_86), not_null(i_86)));
                }
              else
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
  ATerm x_86 = NULL,y_86 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym_DefaultVarDec_1))
    {
      y_86 = ATgetArgument(x_86, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_86), term_i_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym_DefaultVarDec_1))
    {
      e_87 = ATgetArgument(d_87, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_22), term_i_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm j_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, o_0, _id);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            t = map1_1(t, o_0);
            return(t);
          }
          t = try_1(t, g_4);
          return(t);
        }
        t = Cons_2(t, _id, f_4);
      }
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = j_22;
      {
        ATerm h_4 (ATerm t)
        {
          t = map1_1(t, o_0);
          return(t);
        }
        t = Cons_2(t, _id, h_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  c_88 :
  if(match_cons(k_88, sym_Lets_2))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_88), not_null(m_88));
    }
  else
    {
      if(match_cons(k_88, sym_LChoices_1))
        {
          l_88 = ATgetArgument(k_88, 0);
          d_88 :
          if(((ATgetType(l_88) == AT_LIST) && !(ATisEmpty(l_88))))
            {
              g_88 = ATgetFirst((ATermList) l_88);
              h_88 = (ATerm) ATgetNext((ATermList) l_88);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_88), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_88)));
            }
          else
            {
              if(((ATgetType(l_88) == AT_LIST) && ATisEmpty(l_88)))
                {
                  t = term_r_22;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(k_88, sym_Choices_1))
            {
              l_88 = ATgetArgument(k_88, 0);
              e_88 :
              if(((ATgetType(l_88) == AT_LIST) && !(ATisEmpty(l_88))))
                {
                  g_88 = ATgetFirst((ATermList) l_88);
                  h_88 = (ATerm) ATgetNext((ATermList) l_88);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_88), (ATerm) ATmakeAppl(sym_Choices_1, not_null(h_88)));
                }
              else
                {
                  if(((ATgetType(l_88) == AT_LIST) && ATisEmpty(l_88)))
                    {
                      t = term_r_22;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(k_88, sym_Seqs_1))
                {
                  l_88 = ATgetArgument(k_88, 0);
                  f_88 :
                  if(((ATgetType(l_88) == AT_LIST) && !(ATisEmpty(l_88))))
                    {
                      g_88 = ATgetFirst((ATermList) l_88);
                      h_88 = (ATerm) ATgetNext((ATermList) l_88);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_88), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_88)));
                    }
                  else
                    {
                      if(((ATgetType(l_88) == AT_LIST) && ATisEmpty(l_88)))
                        {
                          t = term_s_22;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(k_88, sym_RDefT_4))
                    {
                      l_88 = ATgetArgument(k_88, 0);
                      m_88 = ATgetArgument(k_88, 1);
                      j_88 = ATgetArgument(k_88, 2);
                      i_88 = ATgetArgument(k_88, 3);
                      {
                        ATerm f_89 = NULL,g_89 = NULL;
                        ATerm h_89 = NULL;
                        t = not_null(m_88);
                        {
                          ATerm i_89 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            h_89 = t;
                            {
                              if(((f_89 != NULL) && (f_89 != h_89)))
                                _fail(h_89);
                              else
                                f_89 = h_89;
                              {
                                t = not_null(j_88);
                                {
                                  ATerm i_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, i_4);
                                  {
                                    i_89 = t;
                                    if(((g_89 != NULL) && (g_89 != i_89)))
                                      _fail(i_89);
                                    else
                                      g_89 = i_89;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(l_88), not_null(f_89), not_null(g_89), not_null(i_88));
                      }
                    }
                  else
                    {
                      if(match_cons(k_88, sym_SDefT_4))
                        {
                          l_88 = ATgetArgument(k_88, 0);
                          m_88 = ATgetArgument(k_88, 1);
                          j_88 = ATgetArgument(k_88, 2);
                          i_88 = ATgetArgument(k_88, 3);
                          {
                            ATerm t_22 = t;
                            int u_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_89 = NULL,o_89 = NULL;
                                ATerm p_89 = NULL;
                                t = not_null(j_88);
                                {
                                  ATerm q_89 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    p_89 = t;
                                    {
                                      if(((n_89 != NULL) && (n_89 != p_89)))
                                        _fail(p_89);
                                      else
                                        n_89 = p_89;
                                      {
                                        t = not_null(m_88);
                                        {
                                          ATerm j_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, j_4);
                                          {
                                            q_89 = t;
                                            if(((o_89 != NULL) && (o_89 != q_89)))
                                              _fail(q_89);
                                            else
                                              o_89 = q_89;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_88), not_null(o_89), not_null(n_89), not_null(i_88));
                                ;
                                LocalPopChoice(u_22);
                              }
                            else
                              {
                                t = t_22;
                                {
                                  ATerm v_89 = NULL,w_89 = NULL;
                                  ATerm x_89 = NULL;
                                  t = not_null(m_88);
                                  {
                                    ATerm y_89 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      x_89 = t;
                                      {
                                        if(((v_89 != NULL) && (v_89 != x_89)))
                                          _fail(x_89);
                                        else
                                          v_89 = x_89;
                                        {
                                          t = not_null(j_88);
                                          {
                                            ATerm k_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, k_4);
                                            {
                                              y_89 = t;
                                              if(((w_89 != NULL) && (w_89 != y_89)))
                                                _fail(y_89);
                                              else
                                                w_89 = y_89;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_88), not_null(v_89), not_null(w_89), not_null(i_88));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(k_88, sym_InfixApp_3))
                            {
                              l_88 = ATgetArgument(k_88, 0);
                              m_88 = ATgetArgument(k_88, 1);
                              j_88 = ATgetArgument(k_88, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_88), (ATerm) ATmakeAppl(sym_Op_2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_88)), not_null(l_88))));
                            }
                          else
                            {
                              if(match_cons(k_88, sym_BAM_3))
                                {
                                  l_88 = ATgetArgument(k_88, 0);
                                  m_88 = ATgetArgument(k_88, 1);
                                  j_88 = ATgetArgument(k_88, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_88))), not_null(l_88)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_88))));
                                }
                              else
                                {
                                  if(match_cons(k_88, sym_AM_2))
                                    {
                                      l_88 = ATgetArgument(k_88, 0);
                                      m_88 = ATgetArgument(k_88, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_88), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_88)));
                                    }
                                  else
                                    {
                                      if(match_cons(k_88, sym_MA_2))
                                        {
                                          l_88 = ATgetArgument(k_88, 0);
                                          m_88 = ATgetArgument(k_88, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_88)), not_null(m_88));
                                        }
                                      else
                                        {
                                          if(match_cons(k_88, sym_BA_2))
                                            {
                                              l_88 = ATgetArgument(k_88, 0);
                                              m_88 = ATgetArgument(k_88, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_88)), not_null(l_88));
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
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  h_91 :
  if(match_cons(j_91, sym_Where_1))
    {
      k_91 = ATgetArgument(j_91, 0);
      i_91 :
      if(match_cons(k_91, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
  y_91 = t;
  r_91 :
  if(match_cons(y_91, sym_LChoice_2))
    {
      z_91 = ATgetArgument(y_91, 0);
      a_92 = ATgetArgument(y_91, 1);
      x_91 :
      if(match_cons(a_92, sym_Fail_0))
        {
          t = not_null(z_91);
        }
      else
        {
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
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  g_92 = t;
  e_92 :
  if(match_cons(g_92, sym_LChoice_2))
    {
      h_92 = ATgetArgument(g_92, 0);
      i_92 = ATgetArgument(g_92, 1);
      f_92 :
      if(match_cons(h_92, sym_Fail_0))
        {
          t = not_null(i_92);
        }
      else
        {
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
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  o_92 = t;
  m_92 :
  if(match_cons(o_92, sym_Choice_2))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      n_92 :
      if(match_cons(q_92, sym_Fail_0))
        {
          t = not_null(p_92);
        }
      else
        {
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
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
  y_92 = t;
  w_92 :
  if(match_cons(y_92, sym_Choice_2))
    {
      z_92 = ATgetArgument(y_92, 0);
      a_93 = ATgetArgument(y_92, 1);
      x_92 :
      if(match_cons(z_92, sym_Fail_0))
        {
          t = not_null(a_93);
        }
      else
        {
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
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
  g_93 = t;
  f_93 :
  if(match_cons(g_93, sym_Cong_2))
    {
      h_93 = ATgetArgument(g_93, 0);
      i_93 = ATgetArgument(g_93, 1);
      {
        t = not_null(i_93);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm l_93 = NULL;
            l_93 = t;
            e_93 :
            if(!(match_cons(l_93, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, l_4);
        }
        t = term_r_22;
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
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  q_93 = t;
  o_93 :
  if(match_cons(q_93, sym_Path_2))
    {
      r_93 = ATgetArgument(q_93, 0);
      s_93 = ATgetArgument(q_93, 1);
      p_93 :
      if(match_cons(s_93, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm y_93 = NULL,z_93 = NULL;
  y_93 = t;
  w_93 :
  if(match_cons(y_93, sym_One_1))
    {
      z_93 = ATgetArgument(y_93, 0);
      x_93 :
      if(match_cons(z_93, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm i_94 = NULL,k_94 = NULL;
  i_94 = t;
  c_94 :
  if(match_cons(i_94, sym_Some_1))
    {
      k_94 = ATgetArgument(i_94, 0);
      h_94 :
      if(match_cons(k_94, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  n_94 :
  if(match_cons(q_94, sym_Rec_2))
    {
      r_94 = ATgetArgument(q_94, 0);
      s_94 = ATgetArgument(q_94, 1);
      p_94 :
      if(match_cons(s_94, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  w_94 :
  if(match_cons(y_94, sym_Scope_2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      x_94 :
      if(match_cons(a_95, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  e_95 :
  if(match_cons(g_95, sym_Seq_2))
    {
      h_95 = ATgetArgument(g_95, 0);
      i_95 = ATgetArgument(g_95, 1);
      f_95 :
      if(match_cons(h_95, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm q_95 = NULL,r_95 = NULL;
  q_95 = t;
  m_95 :
  if(match_cons(q_95, sym_Not_1))
    {
      r_95 = ATgetArgument(q_95, 0);
      n_95 :
      if(match_cons(r_95, sym_Fail_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm y_95 = NULL,b_96 = NULL;
  y_95 = t;
  w_95 :
  if(match_cons(y_95, sym_Test_1))
    {
      b_96 = ATgetArgument(y_95, 0);
      x_95 :
      if(match_cons(b_96, sym_Fail_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = b_23;
            {
              ATerm g_23 = t;
              int h_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(h_23);
                }
              else
                {
                  t = g_23;
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(n_23);
                      }
                    else
                      {
                        t = m_23;
                        {
                          ATerm o_23 = t;
                          int q_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(q_23);
                            }
                          else
                            {
                              t = o_23;
                              {
                                ATerm v_23 = t;
                                int w_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(w_23);
                                  }
                                else
                                  {
                                    t = v_23;
                                    {
                                      ATerm x_23 = t;
                                      int y_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(y_23);
                                        }
                                      else
                                        {
                                          t = x_23;
                                          {
                                            ATerm d_24 = t;
                                            int e_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(e_24);
                                              }
                                            else
                                              {
                                                t = d_24;
                                                {
                                                  ATerm g_24 = t;
                                                  int h_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(h_24);
                                                    }
                                                  else
                                                    {
                                                      t = g_24;
                                                      {
                                                        ATerm i_24 = t;
                                                        int j_24 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(j_24);
                                                          }
                                                        else
                                                          {
                                                            t = i_24;
                                                            {
                                                              ATerm o_24 = t;
                                                              int p_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_24);
                                                                }
                                                              else
                                                                {
                                                                  t = o_24;
                                                                  {
                                                                    ATerm q_24 = t;
                                                                    int s_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(s_24);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_24;
                                                                        {
                                                                          ATerm a_25 = t;
                                                                          int b_25 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(b_25);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_25;
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
  ATerm g_96 = NULL,h_96 = NULL;
  g_96 = t;
  e_96 :
  if(match_cons(g_96, sym_Match_1))
    {
      h_96 = ATgetArgument(g_96, 0);
      f_96 :
      if(match_cons(h_96, sym_Wld_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm m_96 = NULL,n_96 = NULL;
  m_96 = t;
  k_96 :
  if(match_cons(m_96, sym_Where_1))
    {
      n_96 = ATgetArgument(m_96, 0);
      l_96 :
      if(match_cons(n_96, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm s_96 = NULL,t_96 = NULL;
  s_96 = t;
  q_96 :
  if(match_cons(s_96, sym_All_1))
    {
      t_96 = ATgetArgument(s_96, 0);
      r_96 :
      if(match_cons(t_96, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  y_96 = t;
  w_96 :
  if(match_cons(y_96, sym_Rec_2))
    {
      z_96 = ATgetArgument(y_96, 0);
      a_97 = ATgetArgument(y_96, 1);
      x_96 :
      if(match_cons(a_97, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL;
  g_97 = t;
  e_97 :
  if(match_cons(g_97, sym_Scope_2))
    {
      h_97 = ATgetArgument(g_97, 0);
      i_97 = ATgetArgument(g_97, 1);
      f_97 :
      if(match_cons(i_97, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm o_97 = NULL,p_97 = NULL,u_97 = NULL;
  o_97 = t;
  m_97 :
  if(match_cons(o_97, sym_LChoice_2))
    {
      p_97 = ATgetArgument(o_97, 0);
      u_97 = ATgetArgument(o_97, 1);
      n_97 :
      if(match_cons(p_97, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
  b_98 = t;
  y_97 :
  if(match_cons(b_98, sym_Seq_2))
    {
      c_98 = ATgetArgument(b_98, 0);
      d_98 = ATgetArgument(b_98, 1);
      a_98 :
      if(match_cons(d_98, sym_Id_0))
        {
          t = not_null(c_98);
        }
      else
        {
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
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL;
  l_98 = t;
  j_98 :
  if(match_cons(l_98, sym_Seq_2))
    {
      m_98 = ATgetArgument(l_98, 0);
      n_98 = ATgetArgument(l_98, 1);
      k_98 :
      if(match_cons(m_98, sym_Id_0))
        {
          t = not_null(n_98);
        }
      else
        {
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
  ATerm b_99 = NULL,e_99 = NULL;
  b_99 = t;
  u_98 :
  if(match_cons(b_99, sym_Not_1))
    {
      e_99 = ATgetArgument(b_99, 0);
      v_98 :
      if(match_cons(e_99, sym_Id_0))
        {
          t = term_r_22;
        }
      else
        {
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
  ATerm n_99 = NULL,o_99 = NULL;
  n_99 = t;
  l_99 :
  if(match_cons(n_99, sym_Test_1))
    {
      o_99 = ATgetArgument(n_99, 0);
      m_99 :
      if(match_cons(o_99, sym_Id_0))
        {
          t = term_s_22;
        }
      else
        {
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
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm g_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = g_25;
                  {
                    ATerm j_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = j_25;
                        {
                          ATerm t_25 = t;
                          int u_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(u_25);
                            }
                          else
                            {
                              t = t_25;
                              {
                                ATerm v_25 = t;
                                int z_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(z_25);
                                  }
                                else
                                  {
                                    t = v_25;
                                    {
                                      ATerm f_26 = t;
                                      int l_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(l_26);
                                        }
                                      else
                                        {
                                          t = f_26;
                                          {
                                            ATerm m_26 = t;
                                            int n_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(n_26);
                                              }
                                            else
                                              {
                                                t = m_26;
                                                {
                                                  ATerm o_26 = t;
                                                  int p_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(p_26);
                                                    }
                                                  else
                                                    {
                                                      t = o_26;
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
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm z_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = z_26;
            {
              ATerm d_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = d_27;
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        {
                          ATerm l_27 = t;
                          int m_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(m_27);
                            }
                          else
                            {
                              t = l_27;
                              {
                                ATerm n_27 = t;
                                int w_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(w_27);
                                  }
                                else
                                  {
                                    t = n_27;
                                    {
                                      ATerm x_27 = t;
                                      int y_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          ;
                                          LocalPopChoice(y_27);
                                        }
                                      else
                                        {
                                          t = x_27;
                                          {
                                            ATerm z_27 = t;
                                            int a_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(a_28);
                                              }
                                            else
                                              {
                                                t = z_27;
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
ATerm repeat_1 (ATerm t, ATerm h_127 (ATerm))
{
  ATerm s_99 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      t = h_127(t);
      t = s_99(t);
      return(t);
    }
    t = try_1(t, m_4);
    return(t);
  }
  t = s_99(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm o_110 (ATerm))
{
  t = o_110(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = downup_1(t, o_110);
      return(t);
    }
    t = _all(t, n_4);
    t = o_110(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, o_4);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm q_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, q_4);
    }
    return(t);
  }
  t = map_1(t, p_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_94 (ATerm))
{
  ATerm b_100 = NULL,c_100 = NULL;
  b_100 = t;
  x_99 :
  if(match_cons(b_100, sym_Strategies_1))
    {
      c_100 = ATgetArgument(b_100, 0);
      {
        ATerm f_100 = NULL,h_100 = NULL;
        ATerm g_100 = NULL;
        t = SSLgetAnnotations(not_null(b_100));
        {
          g_100 = t;
          if(((f_100 != NULL) && (f_100 != g_100)))
            _fail(g_100);
          else
            f_100 = g_100;
        }
        {
          t = not_null(c_100);
          {
            ATerm j_100 = NULL;
            t = j_94(t);
            {
              h_100 = t;
              {
                ATerm k_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_100)), not_null(f_100));
                {
                  k_100 = t;
                  if(((j_100 != NULL) && (j_100 != k_100)))
                    _fail(k_100);
                  else
                    j_100 = k_100;
                }
                t = not_null(j_100);
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
ATerm Specification_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm u_100 = NULL,v_100 = NULL;
  u_100 = t;
  t_100 :
  if(match_cons(u_100, sym_Specification_1))
    {
      v_100 = ATgetArgument(u_100, 0);
      {
        ATerm y_100 = NULL,a_101 = NULL;
        ATerm z_100 = NULL;
        t = SSLgetAnnotations(not_null(u_100));
        {
          z_100 = t;
          if(((y_100 != NULL) && (y_100 != z_100)))
            _fail(z_100);
          else
            y_100 = z_100;
        }
        {
          t = not_null(v_100);
          {
            ATerm c_101 = NULL;
            t = o_94(t);
            {
              a_101 = t;
              {
                ATerm d_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(a_101)), not_null(y_100));
                {
                  d_101 = t;
                  if(((c_101 != NULL) && (c_101 != d_101)))
                    _fail(d_101);
                  else
                    c_101 = d_101;
                }
                t = not_null(c_101);
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
ATerm inline_strategies_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm t_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, t_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, s_4);
    return(t);
  }
  t = Specification_1(t, r_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
  v_101 = t;
  u_101 :
  if(match_cons(v_101, sym__2))
    {
      w_101 = ATgetArgument(v_101, 0);
      x_101 = ATgetArgument(v_101, 1);
      {
        ATerm b_102 = NULL,d_102 = NULL;
        ATerm c_102 = NULL;
        t = SSLgetAnnotations(not_null(v_101));
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
        {
          t = not_null(w_101);
          {
            ATerm f_102 = NULL;
            t = u_92(t);
            {
              d_102 = t;
              {
                t = not_null(x_101);
                {
                  ATerm h_102 = NULL;
                  t = v_92(t);
                  {
                    f_102 = t;
                    {
                      ATerm i_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_102), not_null(f_102)), not_null(b_102));
                      {
                        i_102 = t;
                        if(((h_102 != NULL) && (h_102 != i_102)))
                          _fail(i_102);
                        else
                          h_102 = i_102;
                      }
                      t = not_null(h_102);
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
  ATerm b_28;
  b_28 = t;
  {
    ATerm p_102 = NULL;
    ATerm q_102 = NULL;
    t = term_s_7;
    {
      t = whoami_0(t);
      {
        q_102 = t;
        if(((p_102 != NULL) && (p_102 != q_102)))
          _fail(q_102);
        else
          p_102 = q_102;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), not_null(p_102)), term_d_28));
      {
        t = printnl_0(t);
        {
          t = term_i_14;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_28;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL;
  u_102 = t;
  t_102 :
  if(match_cons(u_102, sym__2))
    {
      v_102 = ATgetArgument(u_102, 0);
      w_102 = ATgetArgument(u_102, 1);
      {
        ATerm f_28;
        f_28 = t;
        t = SSL_printnl(not_null(v_102), not_null(w_102));
        t = f_28;
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
  ATerm b_103 = NULL;
  b_103 = t;
  t = SSL_implode_string(not_null(b_103));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
        g_103 = t;
        f_103 :
        if(((ATgetType(g_103) == AT_LIST) && !(ATisEmpty(g_103))))
          {
            h_103 = ATgetFirst((ATermList) g_103);
            i_103 = (ATerm) ATgetNext((ATermList) g_103);
            {
              t = not_null(h_103);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(i_103);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_4);
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
  ATerm s_103 = NULL;
  ATerm u_103 = NULL;
  s_103 = t;
  {
    ATerm v_103 = NULL;
    ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
    t = not_null(s_103);
    {
      v_103 = t;
      {
        t = SSL_explode_term(not_null(v_103));
        {
          x_103 = t;
          q_103 :
          if(match_cons(x_103, sym__2))
            {
              y_103 = ATgetArgument(x_103, 0);
              z_103 = ATgetArgument(x_103, 1);
              r_103 :
              if(match_string(y_103, ""))
                {
                  if(((u_103 != NULL) && (u_103 != z_103)))
                    _fail(z_103);
                  else
                    u_103 = z_103;
                }
              else
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
      t = not_null(u_103);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_117 (ATerm))
{
  ATerm d_104 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_104);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        {
          t = Nil_0(t);
          t = d_117(t);
        }
      }
    return(t);
  }
  t = d_104(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
  g_104 = t;
  f_104 :
  if(match_cons(g_104, sym__2))
    {
      h_104 = ATgetArgument(g_104, 0);
      i_104 = ATgetArgument(g_104, 1);
      {
        t = not_null(h_104);
        {
          ATerm v_4 (ATerm t)
          {
            t = not_null(i_104);
            return(t);
          }
          t = at_end_1(t, v_4);
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
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_104 = NULL;
  n_104 = t;
  t = SSL_explode_string(not_null(n_104));
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
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_4);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = o_28;
            {
              ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
              w_104 = t;
              v_104 :
              if(match_cons(w_104, sym_Path_1))
                {
                  x_104 = ATgetArgument(w_104, 0);
                  t = not_null(x_104);
                }
              else
                {
                  if(match_cons(w_104, sym_Var_1))
                    {
                      x_104 = ATgetArgument(w_104, 0);
                      {
                        t = not_null(x_104);
                        {
                          ATerm t_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = t_28;
                              {
                                ATerm x_4 (ATerm t)
                                {
                                  t = term_a_29;
                                  return(t);
                                }
                                t = debug_1(t, x_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_104, sym_Prefix_2))
                        {
                          x_104 = ATgetArgument(w_104, 0);
                          y_104 = ATgetArgument(w_104, 1);
                          {
                            ATerm d_105 = NULL,f_105 = NULL;
                            ATerm b_29;
                            b_29 = t;
                            {
                              ATerm e_105 = NULL;
                              t = not_null(x_104);
                              {
                                t = eval_config_0(t);
                                {
                                  e_105 = t;
                                  if(((d_105 != NULL) && (d_105 != e_105)))
                                    _fail(e_105);
                                  else
                                    d_105 = e_105;
                                }
                              }
                            }
                            t = b_29;
                            {
                              ATerm g_105 = NULL;
                              t = not_null(y_104);
                              {
                                t = eval_config_0(t);
                                {
                                  g_105 = t;
                                  if(((f_105 != NULL) && (f_105 != g_105)))
                                    _fail(g_105);
                                  else
                                    f_105 = g_105;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_105), not_null(f_105));
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
  ATerm o_105 = NULL;
  o_105 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_29, not_null(o_105));
    {
      t = table_get_0(t);
      {
        ATerm a_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_29;
            i_29 = t;
            {
              ATerm q_105 = NULL;
              ATerm r_105 = NULL;
              r_105 = t;
              if(((q_105 != NULL) && (q_105 != r_105)))
                _fail(r_105);
              else
                q_105 = r_105;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_29, not_null(o_105), not_null(q_105));
                t = table_put_0(t);
              }
            }
            t = i_29;
          }
          return(t);
        }
        t = try_1(t, a_5);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_130 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm j_29;
    j_29 = t;
    {
      ATerm v_105 = NULL;
      ATerm w_105 = NULL;
      t = term_n_29;
      {
        t = get_config_0(t);
        {
          w_105 = t;
          if(((v_105 != NULL) && (v_105 != w_105)))
            _fail(w_105);
          else
            v_105 = w_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), term_q_29);
        t = geq_0(t);
      }
    }
    t = j_29;
    t = r_130(t);
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
  c_106 = t;
  a_106 :
  if(match_cons(c_106, sym__2))
    {
      d_106 = ATgetArgument(c_106, 0);
      e_106 = ATgetArgument(c_106, 1);
      b_106 :
      if(match_cons(e_106, sym_Stream_1))
        {
          f_106 = ATgetArgument(e_106, 0);
          {
            ATerm i_106 = NULL;
            t = SSL_fputc(not_null(d_106), not_null(f_106));
            {
              ATerm j_106 = NULL;
              j_106 = t;
              if(((i_106 != NULL) && (i_106 != j_106)))
                _fail(j_106);
              else
                i_106 = j_106;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_106));
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
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL;
  q_106 = t;
  o_106 :
  if(match_cons(q_106, sym__2))
    {
      r_106 = ATgetArgument(q_106, 0);
      t_106 = ATgetArgument(q_106, 1);
      p_106 :
      if(match_cons(r_106, sym_Stream_1))
        {
          s_106 = ATgetArgument(r_106, 0);
          {
            ATerm w_106 = NULL;
            t = SSL_write_term_to_stream_text(not_null(s_106), not_null(t_106));
            {
              ATerm x_106 = NULL;
              x_106 = t;
              if(((w_106 != NULL) && (w_106 != x_106)))
                _fail(x_106);
              else
                w_106 = x_106;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_106));
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
  ATerm c_5 (ATerm t)
  {
    ATerm d_107 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm e_107 = NULL;
      e_107 = t;
      if(((d_107 != NULL) && (d_107 != e_107)))
        _fail(e_107);
      else
        d_107 = e_107;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(d_107));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_5);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  k_107 = t;
  i_107 :
  if(match_cons(k_107, sym__2))
    {
      l_107 = ATgetArgument(k_107, 0);
      n_107 = ATgetArgument(k_107, 1);
      j_107 :
      if(match_cons(l_107, sym_Stream_1))
        {
          m_107 = ATgetArgument(l_107, 0);
          {
            ATerm q_107 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(m_107), not_null(n_107));
            {
              ATerm r_107 = NULL;
              r_107 = t;
              if(((q_107 != NULL) && (q_107 != r_107)))
                _fail(r_107);
              else
                q_107 = r_107;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_107));
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
ATerm WriteToFile_1 (ATerm t, ATerm v_137 (ATerm))
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
  y_107 = t;
  x_107 :
  if(match_cons(y_107, sym__2))
    {
      z_107 = ATgetArgument(y_107, 0);
      a_108 = ATgetArgument(y_107, 1);
      {
        ATerm d_108 = NULL,f_108 = NULL;
        t = not_null(z_107);
        {
          ATerm e_108 = NULL;
          e_108 = t;
          if(((d_108 != NULL) && (d_108 != e_108)))
            _fail(e_108);
          else
            d_108 = e_108;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_108), term_r_29);
            {
              t = open_stream_0(t);
              {
                ATerm g_108 = NULL;
                g_108 = t;
                if(((f_108 != NULL) && (f_108 != g_108)))
                  _fail(g_108);
                else
                  f_108 = g_108;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_108), not_null(a_108));
                  {
                    t = v_137(t);
                    {
                      t = fclose_0(t);
                      t = not_null(a_108);
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
  ATerm o_108 = NULL;
  ATerm s_29;
  s_29 = t;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            ATerm p_108 = NULL,q_108 = NULL;
            p_108 = t;
            l_108 :
            if(match_cons(p_108, sym_Output_1))
              {
                q_108 = ATgetArgument(p_108, 0);
                if(((o_108 != NULL) && (o_108 != q_108)))
                  _fail(q_108);
                else
                  o_108 = q_108;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_5);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm u_108 = NULL;
            t = term_v_29;
            {
              u_108 = t;
              if(((o_108 != NULL) && (o_108 != u_108)))
                _fail(u_108);
              else
                o_108 = u_108;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_5, _id);
  }
  t = s_29;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm i_5 (ATerm t)
      {
        t = not_null(o_108);
        return(t);
      }
      t = split_2(t, i_5, _id);
      return(t);
    }
    t = _2(t, _id, h_5);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_5 (ATerm t)
          {
            ATerm k_5 (ATerm t)
            {
              ATerm v_108 = NULL;
              v_108 = t;
              n_108 :
              if(!(match_cons(v_108, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_5);
            return(t);
          }
          t = _2(t, j_5, WriteToBinaryFile_0);
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
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
  ATerm b_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  ATerm y_29;
  y_29 = t;
  t = dtime_0(t);
  t = y_29;
  {
    t = k_132(t);
    {
      ATerm z_29;
      z_29 = t;
      {
        ATerm c_109 = NULL;
        t = dtime_0(t);
        {
          c_109 = t;
          if(((b_109 != NULL) && (b_109 != c_109)))
            _fail(c_109);
          else
            b_109 = c_109;
        }
      }
      t = z_29;
      {
        d_109 = t;
        a_109 :
        if(match_cons(d_109, sym__2))
          {
            e_109 = ATgetArgument(d_109, 0);
            f_109 = ATgetArgument(d_109, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_109)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_109))), not_null(f_109));
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
  ATerm v_109 = NULL,w_109 = NULL;
  ATerm c_110 (ATerm t)
  {
    t = SSL_fclose(not_null(w_109));
    return(t);
  }
  w_109 = t;
  u_109 :
  if(match_cons(w_109, sym_Stream_1))
    {
      v_109 = ATgetArgument(w_109, 0);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_109));
            ;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL;
  f_110 = t;
  e_110 :
  if(match_cons(f_110, sym_Stream_1))
    {
      g_110 = ATgetArgument(f_110, 0);
      t = SSL_read_term_from_stream(not_null(g_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_137 (ATerm))
{
  ATerm c_30;
  c_30 = t;
  {
    ATerm l_110 = NULL,p_110 = NULL;
    ATerm d_30;
    d_30 = t;
    {
      ATerm n_110 = NULL;
      t = h_137(t);
      {
        n_110 = t;
        if(((l_110 != NULL) && (l_110 != n_110)))
          _fail(n_110);
        else
          l_110 = n_110;
      }
    }
    t = d_30;
    {
      ATerm q_110 = NULL;
      q_110 = t;
      if(((p_110 != NULL) && (p_110 != q_110)))
        _fail(q_110);
      else
        p_110 = q_110;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(l_110)));
        t = printnl_0(t);
      }
    }
  }
  t = c_30;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  w_110 = t;
  v_110 :
  if(match_cons(w_110, sym__2))
    {
      x_110 = ATgetArgument(w_110, 0);
      y_110 = ATgetArgument(w_110, 1);
      {
        ATerm b_111 = NULL;
        t = SSL_fopen(not_null(x_110), not_null(y_110));
        {
          ATerm c_111 = NULL;
          c_111 = t;
          if(((b_111 != NULL) && (b_111 != c_111)))
            _fail(c_111);
          else
            b_111 = c_111;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_111));
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
  ATerm g_111 = NULL;
  g_111 = t;
  t = SSL_is_string(not_null(g_111));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm k_111 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_111 = NULL;
    l_111 = t;
    if(((k_111 != NULL) && (k_111 != l_111)))
      _fail(l_111);
    else
      k_111 = l_111;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_111));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm o_111 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm p_111 = NULL;
    p_111 = t;
    if(((o_111 != NULL) && (o_111 != p_111)))
      _fail(p_111);
    else
      o_111 = p_111;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_111));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm u_111 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm v_111 = NULL;
    v_111 = t;
    if(((u_111 != NULL) && (u_111 != v_111)))
      _fail(v_111);
    else
      u_111 = v_111;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_111));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm b_112 = NULL;
  b_112 = t;
  a_112 :
  if(match_cons(b_112, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(b_112, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(b_112, sym_stdin_0))
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
  ATerm l_112 = NULL;
  ATerm n_112 = NULL,o_112 = NULL;
  l_112 = t;
  {
    ATerm p_112 = NULL;
    ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
    t = not_null(l_112);
    {
      p_112 = t;
      {
        t = SSL_explode_term(not_null(p_112));
        {
          r_112 = t;
          i_112 :
          if(match_cons(r_112, sym__2))
            {
              s_112 = ATgetArgument(r_112, 0);
              t_112 = ATgetArgument(r_112, 1);
              j_112 :
              if(match_string(s_112, ""))
                {
                  k_112 :
                  if(((ATgetType(t_112) == AT_LIST) && !(ATisEmpty(t_112))))
                    {
                      u_112 = ATgetFirst((ATermList) t_112);
                      v_112 = (ATerm) ATgetNext((ATermList) t_112);
                      {
                        if(((o_112 != NULL) && (o_112 != u_112)))
                          _fail(u_112);
                        else
                          o_112 = u_112;
                        if(((n_112 != NULL) && (n_112 != v_112)))
                          _fail(v_112);
                        else
                          n_112 = v_112;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(o_112);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm d_113 = NULL,f_113 = NULL,g_113 = NULL;
  d_113 = t;
  c_113 :
  if(match_cons(d_113, sym__2))
    {
      f_113 = ATgetArgument(d_113, 0);
      g_113 = ATgetArgument(d_113, 1);
      {
        ATerm e_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = e_30;
            {
              ATerm l_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm h_113 = NULL,i_113 = NULL;
                    h_113 = t;
                    b_113 :
                    if(match_cons(h_113, sym_Path_1))
                      {
                        i_113 = ATgetArgument(h_113, 0);
                        t = not_null(i_113);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_5, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
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
  ATerm q_113 = NULL;
  ATerm o_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_113 = NULL;
      ATerm p_113 = NULL;
      p_113 = t;
      if(((o_113 != NULL) && (o_113 != p_113)))
        _fail(p_113);
      else
        o_113 = p_113;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_113), term_r_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = o_30;
      {
        ATerm m_5 (ATerm t)
        {
          t = term_s_30;
          return(t);
        }
        t = debug_1(t, m_5);
        _fail(t);
      }
    }
  {
    ATerm t_30;
    t_30 = t;
    {
      ATerm r_113 = NULL;
      t = read_from_stream_0(t);
      {
        r_113 = t;
        if(((q_113 != NULL) && (q_113 != r_113)))
          _fail(r_113);
        else
          q_113 = r_113;
      }
    }
    t = t_30;
    {
      t = fclose_0(t);
      t = not_null(q_113);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_113 (ATerm), ATerm z_113 (ATerm))
{
  ATerm a_114 = NULL,c_114 = NULL;
  ATerm u_30;
  u_30 = t;
  {
    ATerm b_114 = NULL;
    t = y_113(t);
    {
      b_114 = t;
      if(((a_114 != NULL) && (a_114 != b_114)))
        _fail(b_114);
      else
        a_114 = b_114;
    }
  }
  t = u_30;
  {
    ATerm d_114 = NULL;
    t = z_113(t);
    {
      d_114 = t;
      if(((c_114 != NULL) && (c_114 != d_114)))
        _fail(d_114);
      else
        c_114 = d_114;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_114), not_null(c_114));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_114 = NULL;
  ATerm v_30;
  v_30 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 (ATerm t)
        {
          ATerm k_114 = NULL,l_114 = NULL;
          k_114 = t;
          h_114 :
          if(match_cons(k_114, sym_Input_1))
            {
              l_114 = ATgetArgument(k_114, 0);
              if(((j_114 != NULL) && (j_114 != l_114)))
                _fail(l_114);
              else
                j_114 = l_114;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_5);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm m_114 = NULL;
          t = term_y_30;
          {
            m_114 = t;
            if(((j_114 != NULL) && (j_114 != m_114)))
              _fail(m_114);
            else
              j_114 = m_114;
          }
        }
      }
  }
  t = v_30;
  {
    ATerm o_5 (ATerm t)
    {
      t = not_null(j_114);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_5);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm r_114 = NULL;
    r_114 = t;
    p_114 :
    if(!(match_string(r_114, "-k")))
      {
        if(!(match_string(r_114, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm z_30;
    z_30 = t;
    {
      ATerm s_114 = NULL;
      ATerm t_114 = NULL;
      t = string_to_int_0(t);
      {
        t_114 = t;
        if(((s_114 != NULL) && (s_114 != t_114)))
          _fail(t_114);
        else
          s_114 = t_114;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(s_114));
        t = set_config_0(t);
      }
    }
    t = z_30;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_f_31;
    return(t);
  }
  t = ArgOption_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_114 = NULL;
  w_114 = t;
  t = SSL_string_to_int(not_null(w_114));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm k_115 = NULL;
        k_115 = t;
        f_115 :
        if(!(match_string(k_115, "-S")))
          {
            if(!(match_string(k_115, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_s_31;
        t = set_config_0(t);
        t = term_t_31;
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_u_31;
        return(t);
      }
      t = Option_3(t, s_5, t_5, u_5);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              ATerm l_115 = NULL;
              l_115 = t;
              g_115 :
              if(!(match_string(l_115, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              ATerm o_115 = NULL;
              ATerm e_32;
              e_32 = t;
              {
                ATerm m_115 = NULL;
                ATerm n_115 = NULL;
                t = string_to_int_0(t);
                {
                  n_115 = t;
                  if(((m_115 != NULL) && (m_115 != n_115)))
                    _fail(n_115);
                  else
                    m_115 = n_115;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_29, not_null(m_115));
                  t = set_config_0(t);
                }
              }
              t = e_32;
              {
                ATerm p_115 = NULL;
                p_115 = t;
                if(((o_115 != NULL) && (o_115 != p_115)))
                  _fail(p_115);
                else
                  o_115 = p_115;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_115));
              }
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              t = term_f_32;
              return(t);
            }
            t = ArgOption_3(t, v_5, w_5, x_5);
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm y_5 (ATerm t)
              {
                ATerm q_115 = NULL;
                q_115 = t;
                j_115 :
                if(!(match_string(q_115, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_5 (ATerm t)
              {
                t = term_h_32;
                t = set_config_0(t);
                t = term_s_32;
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                t = term_u_32;
                return(t);
              }
              t = Option_3(t, y_5, z_5, a_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm w_115 = NULL;
    w_115 = t;
    t_115 :
    if(!(match_string(w_115, "-o")))
      {
        if(!(match_string(w_115, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm z_115 = NULL;
    ATerm b_33;
    b_33 = t;
    {
      ATerm x_115 = NULL;
      ATerm y_115 = NULL;
      y_115 = t;
      if(((x_115 != NULL) && (x_115 != y_115)))
        _fail(y_115);
      else
        x_115 = y_115;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_33, not_null(x_115));
        t = set_config_0(t);
      }
    }
    t = b_33;
    {
      ATerm a_116 = NULL;
      a_116 = t;
      if(((z_115 != NULL) && (z_115 != a_116)))
        _fail(a_116);
      else
        z_115 = a_116;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_115));
    }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_d_33;
    return(t);
  }
  t = ArgOption_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm e_116 = NULL;
          e_116 = t;
          d_116 :
          if(!(match_string(e_116, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_l_33;
          t = set_config_0(t);
          t = term_n_33;
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = term_o_33;
          return(t);
        }
        t = Option_3(t, e_6, f_6, g_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm k_116 = NULL,m_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL;
  k_116 = t;
  i_116 :
  if(match_string(k_116, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(k_116) == AT_LIST) && !(ATisEmpty(k_116))))
        {
          m_116 = ATgetFirst((ATermList) k_116);
          p_116 = (ATerm) ATgetNext((ATermList) k_116);
          j_116 :
          if(((ATgetType(p_116) == AT_LIST) && !(ATisEmpty(p_116))))
            {
              q_116 = ATgetFirst((ATermList) p_116);
              r_116 = (ATerm) ATgetNext((ATermList) p_116);
              {
                ATerm v_116 = NULL;
                ATerm p_33;
                p_33 = t;
                {
                  t = not_null(m_116);
                  t = j_0(t);
                }
                t = p_33;
                {
                  ATerm w_116 = NULL;
                  t = not_null(q_116);
                  {
                    t = l_0(t);
                    {
                      w_116 = t;
                      if(((v_116 != NULL) && (v_116 != w_116)))
                        _fail(w_116);
                      else
                        v_116 = w_116;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_116)), not_null(v_116));
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
  ATerm h_6 (ATerm t)
  {
    ATerm h_117 = NULL;
    h_117 = t;
    c_117 :
    if(!(match_string(h_117, "-i")))
      {
        if(!(match_string(h_117, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm k_117 = NULL;
    ATerm r_33;
    r_33 = t;
    {
      ATerm i_117 = NULL;
      ATerm j_117 = NULL;
      j_117 = t;
      if(((i_117 != NULL) && (i_117 != j_117)))
        _fail(j_117);
      else
        i_117 = j_117;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_33, not_null(i_117));
        t = set_config_0(t);
      }
    }
    t = r_33;
    {
      ATerm l_117 = NULL;
      l_117 = t;
      if(((k_117 != NULL) && (k_117 != l_117)))
        _fail(l_117);
      else
        k_117 = l_117;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_117));
    }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  t = ArgOption_3(t, h_6, i_6, j_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm p_117 = NULL;
  t = report_run_time_0(t);
  {
    ATerm q_117 = NULL;
    t = term_s_7;
    {
      t = whoami_0(t);
      {
        q_117 = t;
        if(((p_117 != NULL) && (p_117 != q_117)))
          _fail(q_117);
        else
          p_117 = q_117;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), not_null(p_117)));
      {
        t = printnl_0(t);
        {
          t = term_i_14;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_b_34;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_117 = NULL;
  t_117 = t;
  t = SSL_TicksToSeconds(not_null(t_117));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  y_117 = t;
  x_117 :
  if(match_cons(y_117, sym__2))
    {
      z_117 = ATgetArgument(y_117, 0);
      a_118 = ATgetArgument(y_117, 1);
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_117), not_null(a_118));
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            t = SSL_addr(not_null(z_117), not_null(a_118));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_121 (ATerm), ATerm n_121 (ATerm))
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_121(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL;
        h_118 = t;
        g_118 :
        if(((ATgetType(h_118) == AT_LIST) && !(ATisEmpty(h_118))))
          {
            i_118 = ATgetFirst((ATermList) h_118);
            j_118 = (ATerm) ATgetNext((ATermList) h_118);
            {
              ATerm m_118 = NULL;
              ATerm n_118 = NULL;
              t = not_null(j_118);
              {
                t = foldr_2(t, m_121, n_121);
                {
                  n_118 = t;
                  if(((m_118 != NULL) && (m_118 != n_118)))
                    _fail(n_118);
                  else
                    m_118 = n_118;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_118), not_null(m_118));
                t = n_121(t);
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
ATerm crush_2 (ATerm t, ATerm k_119 (ATerm), ATerm l_119 (ATerm))
{
  ATerm u_118 = NULL;
  ATerm y_118 = NULL;
  u_118 = t;
  {
    ATerm b_119 = NULL;
    ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL;
    t = not_null(u_118);
    {
      b_119 = t;
      {
        t = SSL_explode_term(not_null(b_119));
        {
          f_119 = t;
          t_118 :
          if(match_cons(f_119, sym__2))
            {
              g_119 = ATgetArgument(f_119, 0);
              h_119 = ATgetArgument(f_119, 1);
              if(((y_118 != NULL) && (y_118 != h_119)))
                _fail(h_119);
              else
                y_118 = h_119;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_118);
      t = foldr_2(t, k_119, l_119);
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
    ATerm k_6 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = crush_2(t, k_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  s_119 = t;
  r_119 :
  if(match_cons(s_119, sym__2))
    {
      t_119 = ATgetArgument(s_119, 0);
      u_119 = ATgetArgument(s_119, 1);
      {
        ATerm h_34;
        h_34 = t;
        {
          ATerm i_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_119), not_null(u_119));
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = i_34;
              t = SSL_gtr(not_null(t_119), not_null(u_119));
            }
        }
        t = h_34;
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
  ATerm a_120 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL;
      b_120 = t;
      z_119 :
      if(match_cons(b_120, sym__2))
        {
          c_120 = ATgetArgument(b_120, 0);
          d_120 = ATgetArgument(b_120, 1);
          {
            if(((a_120 != NULL) && (a_120 != c_120)))
              _fail(c_120);
            else
              a_120 = c_120;
            if(((a_120 != NULL) && (a_120 != d_120)))
              _fail(d_120);
            else
              a_120 = d_120;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_130 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm q_34;
    q_34 = t;
    {
      ATerm g_120 = NULL;
      ATerm h_120 = NULL;
      t = term_n_29;
      {
        t = get_config_0(t);
        {
          h_120 = t;
          if(((g_120 != NULL) && (g_120 != h_120)))
            _fail(h_120);
          else
            g_120 = h_120;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_120), term_i_14);
        t = geq_0(t);
      }
    }
    t = q_34;
    t = q_130(t);
    return(t);
  }
  t = try_1(t, l_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm l_120 = NULL,n_120 = NULL;
    ATerm r_34;
    r_34 = t;
    {
      ATerm m_120 = NULL;
      t = run_time_0(t);
      {
        m_120 = t;
        if(((l_120 != NULL) && (l_120 != m_120)))
          _fail(m_120);
        else
          l_120 = m_120;
      }
    }
    t = r_34;
    {
      ATerm o_120 = NULL;
      t = term_s_7;
      {
        t = whoami_0(t);
        {
          o_120 = t;
          if(((n_120 != NULL) && (n_120 != o_120)))
            _fail(o_120);
          else
            n_120 = o_120;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), not_null(l_120)), term_t_34), not_null(n_120)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_120 = NULL;
  v_120 = t;
  u_120 :
  if(match_cons(v_120, sym_Version_0))
    {
      ATerm x_120 = NULL,z_120 = NULL;
      ATerm w_34;
      w_34 = t;
      {
        ATerm y_120 = NULL;
        t = SSLgetAnnotations(not_null(v_120));
        {
          y_120 = t;
          if(((x_120 != NULL) && (x_120 != y_120)))
            _fail(y_120);
          else
            x_120 = y_120;
        }
      }
      t = w_34;
      {
        ATerm a_121 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_120));
        {
          a_121 = t;
          if(((z_120 != NULL) && (z_120 != a_121)))
            _fail(a_121);
          else
            z_120 = a_121;
        }
        t = not_null(z_120);
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
  ATerm x_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_35;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = x_34;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm o_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_35);
            }
          else
            {
              t = o_35;
              {
                ATerm r_35 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(m_36);
                  }
                else
                  {
                    t = r_35;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_6);
      }
    }
  t = i_133(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_121 = NULL;
  g_121 = t;
  t = SSL_table_create(not_null(g_121));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_121 = NULL;
  k_121 = t;
  {
    ATerm n_36;
    n_36 = t;
    {
      t = term_p_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_36, term_q_36, not_null(k_121));
          t = table_put_0(t);
        }
      }
    }
    t = n_36;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_121 = NULL;
  t_121 = t;
  t = SSL_table_destroy(not_null(t_121));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_121 = NULL;
  x_121 = t;
  t = SSL_exit(not_null(x_121));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_116 (ATerm))
{
  ATerm a_122 (ATerm t)
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
        t = Cons_2(t, n_116, a_122);
      }
    return(t);
  }
  t = a_122(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
  j_122 = t;
  g_122 :
  if(((ATgetType(j_122) == AT_LIST) && !(ATisEmpty(j_122))))
    {
      h_122 = ATgetFirst((ATermList) j_122);
      i_122 = (ATerm) ATgetNext((ATermList) j_122);
      {
        ATerm m_122 = NULL;
        t = not_null(i_122);
        {
          ATerm m_37;
          m_37 = t;
          {
            ATerm n_122 = NULL,p_122 = NULL,r_122 = NULL;
            ATerm n_37;
            n_37 = t;
            {
              ATerm o_122 = NULL;
              t = i_0(t);
              {
                o_122 = t;
                if(((n_122 != NULL) && (n_122 != o_122)))
                  _fail(o_122);
                else
                  n_122 = o_122;
              }
            }
            t = n_37;
            {
              ATerm q_122 = NULL;
              t = not_null(h_122);
              {
                t = e_0(t);
                {
                  q_122 = t;
                  if(((p_122 != NULL) && (p_122 != q_122)))
                    _fail(q_122);
                  else
                    p_122 = q_122;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_122)), not_null(p_122));
                {
                  r_122 = t;
                  if(((m_122 != NULL) && (m_122 != r_122)))
                    _fail(r_122);
                  else
                    m_122 = r_122;
                }
              }
            }
          }
          t = m_37;
          {
            ATerm o_6 (ATerm t)
            {
              t = not_null(m_122);
              return(t);
            }
            t = reverse_acc_2(t, e_0, o_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_122) == AT_LIST) && ATisEmpty(j_122)))
        {
          {
            t = term_s_7;
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
  ATerm p_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_106 (ATerm))
{
  ATerm i_123 = NULL,j_123 = NULL;
  i_123 = t;
  h_123 :
  if(match_cons(i_123, sym_Program_1))
    {
      j_123 = ATgetArgument(i_123, 0);
      {
        ATerm m_123 = NULL,v_123 = NULL;
        ATerm u_123 = NULL;
        t = SSLgetAnnotations(not_null(i_123));
        {
          u_123 = t;
          if(((m_123 != NULL) && (m_123 != u_123)))
            _fail(u_123);
          else
            m_123 = u_123;
        }
        {
          t = not_null(j_123);
          {
            ATerm x_123 = NULL;
            t = z_106(t);
            {
              v_123 = t;
              {
                ATerm a_124 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_123)), not_null(m_123));
                {
                  a_124 = t;
                  if(((x_123 != NULL) && (x_123 != a_124)))
                    _fail(a_124);
                  else
                    x_123 = a_124;
                }
                t = not_null(x_123);
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
  ATerm m_124 = NULL;
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_124 = NULL;
      t = term_b_34;
      {
        t = get_config_0(t);
        {
          n_124 = t;
          if(((m_124 != NULL) && (m_124 != n_124)))
            _fail(n_124);
          else
            m_124 = n_124;
        }
      }
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm o_124 = NULL;
            o_124 = t;
            if(((m_124 != NULL) && (m_124 != o_124)))
              _fail(o_124);
            else
              m_124 = o_124;
            return(t);
          }
          t = Program_1(t, r_6);
          return(t);
        }
        t = option_defined_1(t, q_6);
      }
    }
  {
    ATerm s_6 (ATerm t)
    {
      ATerm t_6 (ATerm t)
      {
        t = not_null(m_124);
        return(t);
      }
      t = short_description_1(t, t_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_6);
    {
      t = term_q_37;
      {
        t = echo_0(t);
        {
          t = term_t_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm p_124 = NULL;
                  ATerm q_124 = NULL;
                  q_124 = t;
                  if(((p_124 != NULL) && (p_124 != q_124)))
                    _fail(q_124);
                  else
                    p_124 = q_124;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_124)), term_u_37);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_6);
                {
                  ATerm v_6 (ATerm t)
                  {
                    ATerm r_124 = NULL;
                    ATerm s_124 = NULL;
                    ATerm w_6 (ATerm t)
                    {
                      t = not_null(m_124);
                      return(t);
                    }
                    t = long_description_1(t, w_6);
                    {
                      s_124 = t;
                      if(((r_124 != NULL) && (r_124 != s_124)))
                        _fail(s_124);
                      else
                        r_124 = s_124;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_124)), term_v_37);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_6);
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
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_107 (ATerm))
{
  ATerm d_125 = NULL,e_125 = NULL;
  d_125 = t;
  c_125 :
  if(match_cons(d_125, sym_Undefined_1))
    {
      e_125 = ATgetArgument(d_125, 0);
      {
        ATerm h_125 = NULL,j_125 = NULL;
        ATerm i_125 = NULL;
        t = SSLgetAnnotations(not_null(d_125));
        {
          i_125 = t;
          if(((h_125 != NULL) && (h_125 != i_125)))
            _fail(i_125);
          else
            h_125 = i_125;
        }
        {
          t = not_null(e_125);
          {
            ATerm l_125 = NULL;
            t = a_107(t);
            {
              j_125 = t;
              {
                ATerm m_125 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_125)), not_null(h_125));
                {
                  m_125 = t;
                  if(((l_125 != NULL) && (l_125 != m_125)))
                    _fail(m_125);
                  else
                    l_125 = m_125;
                }
                t = not_null(l_125);
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
ATerm fetch_1 (ATerm t, ATerm x_116 (ATerm))
{
  ATerm v_125 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_116, _id);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = Cons_2(t, _id, v_125);
      }
    return(t);
  }
  t = v_125(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_134 (ATerm))
{
  t = fetch_1(t, i_134);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL;
  x_125 = t;
  w_125 :
  if(((ATgetType(x_125) == AT_LIST) && ATisEmpty(x_125)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_125) == AT_LIST) && !(ATisEmpty(x_125))))
        {
          y_125 = ATgetFirst((ATermList) x_125);
          z_125 = (ATerm) ATgetNext((ATermList) x_125);
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
  ATerm a_38;
  a_38 = t;
  {
    ATerm c_126 = NULL;
    ATerm f_126 = NULL;
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm d_126 = NULL;
          ATerm e_126 = NULL;
          e_126 = t;
          if(((d_126 != NULL) && (d_126 != e_126)))
            _fail(e_126);
          else
            d_126 = e_126;
          t = (ATerm) ATinsert(ATempty, not_null(d_126));
        }
      }
    {
      f_126 = t;
      if(((c_126 != NULL) && (c_126 != f_126)))
        _fail(f_126);
      else
        c_126 = f_126;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_29, not_null(c_126));
      t = printnl_0(t);
    }
  }
  t = a_38;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_b_34;
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
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_126 = NULL;
  m_126 = t;
  l_126 :
  if(match_cons(m_126, sym_Help_0))
    {
      ATerm o_126 = NULL,q_126 = NULL;
      ATerm f_38;
      f_38 = t;
      {
        ATerm p_126 = NULL;
        t = SSLgetAnnotations(not_null(m_126));
        {
          p_126 = t;
          if(((o_126 != NULL) && (o_126 != p_126)))
            _fail(p_126);
          else
            o_126 = p_126;
        }
      }
      t = f_38;
      {
        ATerm r_126 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_126));
        {
          r_126 = t;
          if(((q_126 != NULL) && (q_126 != r_126)))
            _fail(r_126);
          else
            q_126 = r_126;
        }
        t = not_null(q_126);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_113 (ATerm))
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_113(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 (ATerm t)
      {
        ATerm x_126 = NULL;
        x_126 = t;
        v_126 :
        if(!(match_string(x_126, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        t = term_l_38;
        t = set_config_0(t);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_m_38;
        return(t);
      }
      t = Option_3(t, x_6, y_6, z_6);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm a_7 (ATerm t)
        {
          ATerm y_126 = NULL;
          y_126 = t;
          w_126 :
          if(!(match_string(y_126, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = term_l_38;
          {
            t = set_config_0(t);
            {
              t = term_o_38;
              t = set_config_0(t);
            }
          }
          t = term_p_38;
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_q_38;
          return(t);
        }
        t = Option_3(t, a_7, b_7, c_7);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL;
  b_127 = t;
  a_127 :
  if(match_cons(b_127, sym__2))
    {
      c_127 = ATgetArgument(b_127, 0);
      d_127 = ATgetArgument(b_127, 1);
      t = SSL_table_get(not_null(c_127), not_null(d_127));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL;
  m_127 = t;
  l_127 :
  if(match_cons(m_127, sym__3))
    {
      n_127 = ATgetArgument(m_127, 0);
      o_127 = ATgetArgument(m_127, 1);
      p_127 = ATgetArgument(m_127, 2);
      {
        ATerm r_38;
        r_38 = t;
        {
          ATerm t_127 = NULL;
          ATerm u_127 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_127), not_null(o_127));
          {
            ATerm s_38 = t;
            int t_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_38);
              }
            else
              {
                t = s_38;
                t = (ATerm) ATempty;
              }
            {
              u_127 = t;
              if(((t_127 != NULL) && (t_127 != u_127)))
                _fail(u_127);
              else
                t_127 = u_127;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_127), not_null(o_127), (ATerm) ATinsert(CheckATermList(not_null(t_127)), not_null(p_127)));
            t = table_put_0(t);
          }
        }
        t = r_38;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_135 (ATerm))
{
  ATerm e_128 = NULL;
  ATerm f_128 = NULL;
  t = term_s_7;
  {
    t = n_135(t);
    {
      f_128 = t;
      if(((e_128 != NULL) && (e_128 != f_128)))
        _fail(f_128);
      else
        e_128 = f_128;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_37, term_s_37, not_null(e_128));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
  l_128 = t;
  k_128 :
  if(match_string(l_128, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(l_128) == AT_LIST) && !(ATisEmpty(l_128))))
        {
          m_128 = ATgetFirst((ATermList) l_128);
          n_128 = (ATerm) ATgetNext((ATermList) l_128);
          {
            ATerm q_128 = NULL;
            ATerm u_38;
            u_38 = t;
            {
              t = not_null(m_128);
              t = a_0(t);
            }
            t = u_38;
            {
              ATerm r_128 = NULL;
              t = term_s_7;
              {
                t = b_0(t);
                {
                  r_128 = t;
                  if(((q_128 != NULL) && (q_128 != r_128)))
                    _fail(r_128);
                  else
                    q_128 = r_128;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_128)), not_null(q_128));
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
  ATerm d_7 (ATerm t)
  {
    ATerm w_128 = NULL;
    w_128 = t;
    v_128 :
    if(!(match_string(w_128, "--help")))
      {
        if(!(match_string(w_128, "-h")))
          {
            if(!(match_string(w_128, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_v_38;
    {
      t = set_config_0(t);
      t = term_w_38;
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_x_38;
    return(t);
  }
  t = Option_3(t, d_7, e_7, f_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
  z_128 = t;
  y_128 :
  if(((ATgetType(z_128) == AT_LIST) && !(ATisEmpty(z_128))))
    {
      a_129 = ATgetFirst((ATermList) z_128);
      b_129 = (ATerm) ATgetNext((ATermList) z_128);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_129)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_129)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_94 (ATerm), ATerm e_94 (ATerm))
{
  ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL;
  l_129 = t;
  k_129 :
  if(((ATgetType(l_129) == AT_LIST) && !(ATisEmpty(l_129))))
    {
      m_129 = ATgetFirst((ATermList) l_129);
      n_129 = (ATerm) ATgetNext((ATermList) l_129);
      {
        ATerm r_129 = NULL,t_129 = NULL;
        ATerm s_129 = NULL;
        t = SSLgetAnnotations(not_null(l_129));
        {
          s_129 = t;
          if(((r_129 != NULL) && (r_129 != s_129)))
            _fail(s_129);
          else
            r_129 = s_129;
        }
        {
          t = not_null(m_129);
          {
            ATerm v_129 = NULL;
            t = d_94(t);
            {
              t_129 = t;
              {
                t = not_null(n_129);
                {
                  ATerm x_129 = NULL;
                  t = e_94(t);
                  {
                    v_129 = t;
                    {
                      ATerm y_129 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_129)), not_null(t_129)), not_null(r_129));
                      {
                        y_129 = t;
                        if(((x_129 != NULL) && (x_129 != y_129)))
                          _fail(y_129);
                        else
                          x_129 = y_129;
                      }
                      t = not_null(x_129);
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
  ATerm i_130 = NULL;
  i_130 = t;
  h_130 :
  if(((ATgetType(i_130) == AT_LIST) && ATisEmpty(i_130)))
    {
      {
        ATerm k_130 = NULL,m_130 = NULL;
        ATerm y_38;
        y_38 = t;
        {
          ATerm l_130 = NULL;
          t = SSLgetAnnotations(not_null(i_130));
          {
            l_130 = t;
            if(((k_130 != NULL) && (k_130 != l_130)))
              _fail(l_130);
            else
              k_130 = l_130;
          }
        }
        t = y_38;
        {
          ATerm n_130 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_130));
          {
            n_130 = t;
            if(((m_130 != NULL) && (m_130 != n_130)))
              _fail(n_130);
            else
              m_130 = n_130;
          }
          t = not_null(m_130);
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
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
  v_130 = t;
  u_130 :
  if(match_cons(v_130, sym__2))
    {
      w_130 = ATgetArgument(v_130, 0);
      x_130 = ATgetArgument(v_130, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_29, not_null(w_130), not_null(x_130));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_135 (ATerm))
{
  ATerm z_38;
  z_38 = t;
  {
    ATerm g_7 (ATerm t)
    {
      t = term_a_39;
      t = l_135(t);
      return(t);
    }
    t = try_1(t, g_7);
  }
  t = z_38;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm f_131 = NULL;
      ATerm b_39;
      b_39 = t;
      {
        ATerm d_131 = NULL;
        ATerm e_131 = NULL;
        e_131 = t;
        if(((d_131 != NULL) && (d_131 != e_131)))
          _fail(e_131);
        else
          d_131 = e_131;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_34, not_null(d_131));
          t = set_config_0(t);
        }
      }
      t = b_39;
      {
        ATerm g_131 = NULL;
        g_131 = t;
        if(((f_131 != NULL) && (f_131 != g_131)))
          _fail(g_131);
        else
          f_131 = g_131;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_131));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm c_39 = t;
      int d_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_39 = t;
          int f_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_39);
            }
          else
            {
              t = e_39;
              {
                t = l_135(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          ;
          LocalPopChoice(d_39);
        }
      else
        {
          t = c_39;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_7, i_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL;
  ATerm g_39;
  g_39 = t;
  {
    ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL;
    p_131 = t;
    l_131 :
    if(match_cons(p_131, sym__3))
      {
        q_131 = ATgetArgument(p_131, 0);
        r_131 = ATgetArgument(p_131, 1);
        s_131 = ATgetArgument(p_131, 2);
        {
          if(((m_131 != NULL) && (m_131 != q_131)))
            _fail(q_131);
          else
            m_131 = q_131;
          {
            if(((n_131 != NULL) && (n_131 != r_131)))
              _fail(r_131);
            else
              n_131 = r_131;
            {
              if(((o_131 != NULL) && (o_131 != s_131)))
                _fail(s_131);
              else
                o_131 = s_131;
              t = SSL_table_put(not_null(m_131), not_null(n_131), not_null(o_131));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_39;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_135 (ATerm))
{
  ATerm v_131 = NULL;
  ATerm h_39;
  h_39 = t;
  {
    t = term_l_39;
    t = table_put_0(t);
  }
  t = h_39;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_135(t);
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
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, j_7);
    {
      ATerm k_7 (ATerm t)
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_39;
            s_39 = t;
            {
              ATerm t_39 = t;
              int u_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_35;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_39);
                }
              else
                {
                  t = t_39;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_39;
            {
              t = system_usage_0(t);
              {
                t = term_h_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            {
              ATerm v_39 = t;
              int w_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_39;
                  x_39 = t;
                  {
                    t = term_k_38;
                    t = get_config_0(t);
                  }
                  t = x_39;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_14;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(w_39);
                }
              else
                {
                  t = v_39;
                  {
                    ATerm l_7 (ATerm t)
                    {
                      ATerm m_7 (ATerm t)
                      {
                        ATerm w_131 = NULL;
                        w_131 = t;
                        if(((v_131 != NULL) && (v_131 != w_131)))
                          _fail(w_131);
                        else
                          v_131 = w_131;
                        return(t);
                      }
                      t = Undefined_1(t, m_7);
                      return(t);
                    }
                    t = option_defined_1(t, l_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_131)), term_y_39));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_i_14;
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
      t = try_1(t, k_7);
      {
        ATerm z_39;
        z_39 = t;
        {
          t = term_r_37;
          t = table_destroy_0(t);
        }
        t = z_39;
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
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_133);
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
                  t = n_133(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(d_40);
                }
              else
                {
                  t = c_40;
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
  ATerm n_7 (ATerm t)
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_133(t);
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_132);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_7, b_133, c_133, o_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      ATerm g_40;
      g_40 = t;
      {
        ATerm z_131 = NULL;
        ATerm a_132 = NULL;
        t = term_b_34;
        {
          t = get_config_0(t);
          {
            a_132 = t;
            if(((z_131 != NULL) && (z_131 != a_132)))
              _fail(a_132);
            else
              z_131 = a_132;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_28, (ATerm) ATinsert(ATempty, not_null(z_131)));
          t = printnl_0(t);
        }
      }
      t = g_40;
      return(t);
    }
    t = if_verbose2_1(t, q_7);
    return(t);
  }
  t = iowrap_4(t, t_132, u_132, v_132, p_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_132 (ATerm), ATerm s_132 (ATerm))
{
  t = iowrap_3(t, r_132, s_132, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_132 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    t = _2(t, _id, o_132);
    return(t);
  }
  t = iowrap_2(t, r_7, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
