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
ATerm term_b_54;
ATerm term_l_53;
ATerm term_x_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_c_50;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_k_47;
ATerm term_g_47;
ATerm term_t_46;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_e_45;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_f_44;
ATerm term_c_44;
ATerm term_s_43;
ATerm term_j_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_e_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_i_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_j_31;
ATerm term_j_28;
ATerm term_r_27;
ATerm term_h_22;
ATerm term_t_21;
ATerm term_g_19;
ATerm term_h_18;
ATerm term_g_17;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATempty);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_j_8);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_8);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_p_42, term_g_17);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym__2, term_f_44, term_g_17);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym__2, term_q_48, term_t_48);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym__2, term_c_50, term_g_17);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym__2, term_y_50, term_g_17);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym__2, term_k_47, term_g_17);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym__3, term_q_48, term_t_48, (ATerm) ATempty);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm spaste_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm);
ATerm Let_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm ReplaceVar_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm);
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm d_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm RnBinding_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm, ATerm (ATerm)), ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm o_124 (ATerm, ATerm (ATerm)), ATerm);
ATerm all_dist_1_0 (ATerm h_125 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm r_124 (ATerm), ATerm);
ATerm rename_4_0 (ATerm y_123 (ATerm, ATerm (ATerm)), ATerm z_123 (ATerm), ATerm a_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_124 (ATerm, ATerm (ATerm)), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm k_123 (ATerm), ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_123 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_123 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm);
ATerm crush_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm);
ATerm Match_1_0 (ATerm k_99 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm Build_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_112 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm TransformingCongruence_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm);
ATerm zip_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm i_136 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm);
ATerm downup_1_0 (ATerm z_110 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm u_94 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm inline_strategies_0_0 (ATerm);
ATerm _2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_117 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_131 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_138 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_132 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm s_137 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_131 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_133 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm u_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm t_135 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm t_134 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm y_135 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_135 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm v_135 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm z_132 (ATerm), ATerm);
ATerm inline_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm l_9 (ATerm t)
  {
    ATerm q_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,h_9 = NULL;
    t = not_null(y_7);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    t = not_null(a_8);
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    t = not_null(o_8);
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = not_null(p_8);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(y_7);
    {
      ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
      ATerm m_9 (ATerm t)
      {
        t = not_null(k_9);
        if(((h_9 != NULL) && (h_9 != t)))
          _fail(t);
        else
          h_9 = t;
        t = not_null(i_9);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_9)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm l_0 (ATerm t)
        {
          t = term_p_7;
          return(t);
        }
        t = rewrite_1_0(l_0, t);
        if(((i_9 != NULL) && (i_9 != t)))
          _fail(t);
        else
          i_9 = t;
        t = not_null(i_9);
        if(match_cons(t, sym_Defined_2))
          {
            j_9 = ATgetArgument(t, 0);
            k_9 = ATgetArgument(t, 1);
            t = not_null(j_9);
            if(match_string(t, "n_0"))
              {
                t = m_9(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_9)), not_null(c_9), not_null(d_9));
    }
    return(t);
  }
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = not_null(y_7);
  if(match_cons(t, sym_CallT_3))
    {
      z_7 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      p_8 = ATgetArgument(t, 2);
      t = not_null(z_7);
      if(match_cons(t, sym_SVar_1))
        {
          a_8 = ATgetArgument(t, 0);
          t = l_9(t);
        }
      else
        {
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  ATerm g_10 (ATerm t)
  {
    ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
    t = not_null(v_9);
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(x_9);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = not_null(v_9);
    {
      ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
      ATerm h_10 (ATerm t)
      {
        t = not_null(f_10);
        if(((c_10 != NULL) && (c_10 != t)))
          _fail(t);
        else
          c_10 = t;
        t = not_null(d_10);
        return(t);
      }
      t = not_null(a_10);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_q_7;
          return(t);
        }
        t = rewrite_1_0(q_0, t);
        if(((d_10 != NULL) && (d_10 != t)))
          _fail(t);
        else
          d_10 = t;
        t = not_null(d_10);
        if(match_cons(t, sym_Defined_2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
            t = not_null(e_10);
            if(match_string(t, "k_0"))
              {
                t = h_10(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(c_10);
      t = strename_0_0(t);
    }
    return(t);
  }
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = not_null(v_9);
  if(match_cons(t, sym_CallT_3))
    {
      w_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
      z_9 = ATgetArgument(t, 2);
      t = not_null(w_9);
      if(match_cons(t, sym_SVar_1))
        {
          x_9 = ATgetArgument(t, 0);
          t = not_null(y_9);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(z_9);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_10(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  t = x_110(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1_0(x_110, t);
      return(t);
    }
    t = SRTS_all(r_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  ATerm m_11 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL;
    t = not_null(b_11);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = not_null(w_10);
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = not_null(z_10);
    {
      ATerm r_7;
      r_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_7, not_null(j_11)));
      {
        ATerm s_0 (ATerm t)
        {
          t = term_p_7;
          return(t);
        }
        t = assert_1_0(s_0, t);
      }
      t = r_7;
    }
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL;
    t = not_null(b_11);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    t = not_null(h_11);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(z_10);
    {
      ATerm t_7;
      t_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_7, not_null(l_11)));
      {
        ATerm t_0 (ATerm t)
        {
          t = term_q_7;
          return(t);
        }
        t = assert_1_0(t_0, t);
      }
      t = t_7;
    }
    return(t);
  }
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = not_null(z_10);
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      t = not_null(a_11);
      if(match_cons(t, sym_VarDec_2))
        {
          b_11 = ATgetArgument(t, 0);
          c_11 = ATgetArgument(t, 1);
          t = not_null(c_11);
          if(match_cons(t, sym_FunType_2))
            {
              d_11 = ATgetArgument(t, 0);
              g_11 = ATgetArgument(t, 1);
              t = not_null(d_11);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_11 = ATgetFirst((ATermList) t);
                  f_11 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(f_11);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_10 = ATgetFirst((ATermList) t);
                      u_10 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(h_11);
                      if(match_cons(t, sym_CallT_3))
                        {
                          v_10 = ATgetArgument(t, 0);
                          x_10 = ATgetArgument(t, 1);
                          y_10 = ATgetArgument(t, 2);
                          t = not_null(v_10);
                          if(match_cons(t, sym_SVar_1))
                            {
                              w_10 = ATgetArgument(t, 0);
                              t = not_null(x_10);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = not_null(y_10);
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
                            }
                          else
                            {
                              _fail(t);
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
                          t = n_11(t);
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
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  ATerm u_0 (ATerm t)
  {
    t = term_q_7;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_p_7;
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
      ATerm x_11 (ATerm t)
      {
        t = not_null(u_11);
        if(((q_11 != NULL) && (q_11 != t)))
          _fail(t);
        else
          q_11 = t;
        t = not_null(v_11);
        if(((r_11 != NULL) && (r_11 != t)))
          _fail(t);
        else
          r_11 = t;
        t = not_null(w_11);
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(r_11));
        t = zip_1_0(substitute_arg_0_0, t);
        t = not_null(s_11);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm v_7 = t;
              int w_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SubsArgCall1_0_0(t);
                  ;
                  LocalPopChoice(w_7);
                }
              else
                {
                  t = v_7;
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
      if(((t_11 != NULL) && (t_11 != t)))
        _fail(t);
      else
        t_11 = t;
      t = not_null(t_11);
      if(match_cons(t, sym__3))
        {
          u_11 = ATgetArgument(t, 0);
          v_11 = ATgetArgument(t, 1);
          w_11 = ATgetArgument(t, 2);
          t = x_11(t);
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
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  ATerm u_14 (ATerm t)
  {
    ATerm c_13 = NULL,d_13 = NULL;
    t = not_null(x_12);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = not_null(z_12);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    t = not_null(x_12);
    {
      ATerm e_13 = NULL;
      ATerm y_14 (ATerm t)
      {
        t = not_null(e_13);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_13)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm a_1 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = rewrite_1_0(a_1, t);
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
        t = not_null(e_13);
        if(match_cons(t, sym_Undefined_0))
          {
            t = y_14(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_b_8;
    }
    return(t);
  }
  ATerm v_14 (ATerm t)
  {
    ATerm f_13 = NULL,g_13 = NULL;
    t = not_null(x_12);
    if(((f_13 != NULL) && (f_13 != t)))
      _fail(t);
    else
      f_13 = t;
    t = not_null(z_12);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = not_null(x_12);
    {
      ATerm h_13 = NULL;
      ATerm z_14 (ATerm t)
      {
        t = not_null(h_13);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_13)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm b_1 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = rewrite_1_0(b_1, t);
        if(((h_13 != NULL) && (h_13 != t)))
          _fail(t);
        else
          h_13 = t;
        t = not_null(h_13);
        if(match_cons(t, sym_Undefined_0))
          {
            t = z_14(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_b_8;
    }
    return(t);
  }
  ATerm w_14 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
    t = not_null(x_12);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(z_12);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = not_null(a_13);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = not_null(b_13);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = not_null(x_12);
    {
      ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
      ATerm a_15 (ATerm t)
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
        ATerm b_15 (ATerm t)
        {
          ATerm b_14 = NULL;
          ATerm c_15 (ATerm t)
          {
            ATerm g_14 = NULL;
            ATerm e_15 (ATerm t)
            {
              ATerm h_14 = NULL,o_14 = NULL;
              ATerm h_15 (ATerm t)
              {
                t = not_null(o_14);
                if(((s_13 != NULL) && (s_13 != t)))
                  _fail(t);
                else
                  s_13 = t;
                t = not_null(o_14);
                {
                  ATerm c_8;
                  c_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_13)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      t = term_x_7;
                      return(t);
                    }
                    t = assert_1_0(c_1, t);
                  }
                  t = c_8;
                }
                return(t);
              }
              t = not_null(g_14);
              if(((q_13 != NULL) && (q_13 != t)))
                _fail(t);
              else
                q_13 = t;
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                ATerm g_15 (ATerm t)
                {
                  t = not_null(n_14);
                  if(((h_14 != NULL) && (h_14 != t)))
                    _fail(t);
                  else
                    h_14 = t;
                  t = not_null(n_14);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), not_null(q_13));
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                    ATerm f_15 (ATerm t)
                    {
                      ATerm l_14 = NULL,m_14 = NULL;
                      t = not_null(j_14);
                      if(((l_14 != NULL) && (l_14 != t)))
                        _fail(t);
                      else
                        l_14 = t;
                      t = not_null(k_14);
                      if(((m_14 != NULL) && (m_14 != t)))
                        _fail(t);
                      else
                        m_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_14)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_14))));
                      return(t);
                    }
                    if(((i_14 != NULL) && (i_14 != t)))
                      _fail(t);
                    else
                      i_14 = t;
                    t = not_null(i_14);
                    if(match_cons(t, sym__2))
                      {
                        j_14 = ATgetArgument(t, 0);
                        k_14 = ATgetArgument(t, 1);
                        t = f_15(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = zip_1_0(d_1, t);
                  if(((n_14 != NULL) && (n_14 != t)))
                    _fail(t);
                  else
                    n_14 = t;
                  t = g_15(t);
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_14)), not_null(r_13)));
                if(((o_14 != NULL) && (o_14 != t)))
                  _fail(t);
                else
                  o_14 = t;
                t = h_15(t);
              }
              return(t);
            }
            t = not_null(b_14);
            if(((r_13 != NULL) && (r_13 != t)))
              _fail(t);
            else
              r_13 = t;
            t = not_null(p_13);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
                ATerm d_15 (ATerm t)
                {
                  ATerm f_14 = NULL;
                  t = not_null(d_14);
                  if(((f_14 != NULL) && (f_14 != t)))
                    _fail(t);
                  else
                    f_14 = t;
                  t = not_null(f_14);
                  return(t);
                }
                if(((c_14 != NULL) && (c_14 != t)))
                  _fail(t);
                else
                  c_14 = t;
                t = not_null(c_14);
                if(match_cons(t, sym_VarDec_2))
                  {
                    d_14 = ATgetArgument(t, 0);
                    e_14 = ATgetArgument(t, 1);
                    t = d_15(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(e_1, t);
              if(((g_14 != NULL) && (g_14 != t)))
                _fail(t);
              else
                g_14 = t;
              t = e_15(t);
            }
            return(t);
          }
          t = not_null(x_13);
          if(((j_13 != NULL) && (j_13 != t)))
            _fail(t);
          else
            j_13 = t;
          t = not_null(y_13);
          if(((n_13 != NULL) && (n_13 != t)))
            _fail(t);
          else
            n_13 = t;
          t = not_null(z_13);
          if(((p_13 != NULL) && (p_13 != t)))
            _fail(t);
          else
            p_13 = t;
          t = not_null(a_14);
          if(((o_13 != NULL) && (o_13 != t)))
            _fail(t);
          else
            o_13 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(n_13), not_null(k_13), not_null(o_13));
          t = substitute_args_0_0(t);
          if(((b_14 != NULL) && (b_14 != t)))
            _fail(t);
          else
            b_14 = t;
          t = c_15(t);
          return(t);
        }
        t = not_null(v_13);
        if(((m_13 != NULL) && (m_13 != t)))
          _fail(t);
        else
          m_13 = t;
        t = not_null(m_13);
        t = strename_0_0(t);
        if(((w_13 != NULL) && (w_13 != t)))
          _fail(t);
        else
          w_13 = t;
        t = not_null(w_13);
        if(match_cons(t, sym_SDefT_4))
          {
            x_13 = ATgetArgument(t, 0);
            y_13 = ATgetArgument(t, 1);
            z_13 = ATgetArgument(t, 2);
            a_14 = ATgetArgument(t, 3);
            t = b_15(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_13)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm f_1 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = rewrite_1_0(f_1, t);
        if(((t_13 != NULL) && (t_13 != t)))
          _fail(t);
        else
          t_13 = t;
        t = not_null(t_13);
        if(match_cons(t, sym_Defined_2))
          {
            u_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
            t = not_null(u_13);
            if(match_string(t, "d_0"))
              {
                t = a_15(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(s_13);
      t = simplify0_0_0(t);
    }
    return(t);
  }
  ATerm x_14 (ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
    t = not_null(x_12);
    if(((p_14 != NULL) && (p_14 != t)))
      _fail(t);
    else
      p_14 = t;
    t = not_null(z_12);
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = not_null(a_13);
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    t = not_null(b_13);
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = not_null(x_12);
    {
      ATerm t_14 = NULL;
      ATerm i_15 (ATerm t)
      {
        t = not_null(t_14);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_14)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm g_1 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = rewrite_1_0(g_1, t);
        if(((t_14 != NULL) && (t_14 != t)))
          _fail(t);
        else
          t_14 = t;
        t = not_null(t_14);
        if(match_cons(t, sym_Undefined_0))
          {
            t = i_15(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_b_8;
    }
    return(t);
  }
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = not_null(x_12);
  if(match_cons(t, sym_CallT_3))
    {
      y_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      b_13 = ATgetArgument(t, 2);
      t = not_null(y_12);
      if(match_cons(t, sym_SVar_1))
        {
          z_12 = ATgetArgument(t, 0);
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_14(t);
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                {
                  ATerm f_8 = t;
                  int g_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_14(t);
                      ;
                      LocalPopChoice(g_8);
                    }
                  else
                    {
                      t = f_8;
                      {
                        ATerm h_8 = t;
                        int i_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_14(t);
                            ;
                            LocalPopChoice(i_8);
                          }
                        else
                          {
                            t = h_8;
                            t = x_14(t);
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
ATerm length_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_j_8;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_k_8;
    return(t);
  }
  t = foldr_3_0(h_1, add_0_0, i_1, t);
  return(t);
}
ATerm spaste_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        t = split_2_0(_id, b_110, t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
            ATerm b_16 (ATerm t)
            {
              ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
              t = not_null(q_15);
              if(((u_15 != NULL) && (u_15 != t)))
                _fail(t);
              else
                u_15 = t;
              t = not_null(r_15);
              if(((v_15 != NULL) && (v_15 != t)))
                _fail(t);
              else
                v_15 = t;
              t = not_null(t_15);
              if(((w_15 != NULL) && (w_15 != t)))
                _fail(t);
              else
                w_15 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_15), not_null(u_15), not_null(v_15));
              return(t);
            }
            ATerm c_16 (ATerm t)
            {
              ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
              t = not_null(q_15);
              if(((x_15 != NULL) && (x_15 != t)))
                _fail(t);
              else
                x_15 = t;
              t = not_null(r_15);
              if(((y_15 != NULL) && (y_15 != t)))
                _fail(t);
              else
                y_15 = t;
              t = not_null(s_15);
              if(((z_15 != NULL) && (z_15 != t)))
                _fail(t);
              else
                z_15 = t;
              t = not_null(t_15);
              if(((a_16 != NULL) && (a_16 != t)))
                _fail(t);
              else
                a_16 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(a_16), not_null(x_15), not_null(y_15), not_null(z_15));
              return(t);
            }
            if(((n_15 != NULL) && (n_15 != t)))
              _fail(t);
            else
              n_15 = t;
            t = not_null(n_15);
            if(match_cons(t, sym__2))
              {
                o_15 = ATgetArgument(t, 0);
                t_15 = ATgetArgument(t, 1);
                t = not_null(o_15);
                if(match_cons(t, sym_SDef_3))
                  {
                    p_15 = ATgetArgument(t, 0);
                    q_15 = ATgetArgument(t, 1);
                    r_15 = ATgetArgument(t, 2);
                    t = b_16(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        p_15 = ATgetArgument(t, 0);
                        q_15 = ATgetArgument(t, 1);
                        r_15 = ATgetArgument(t, 2);
                        s_15 = ATgetArgument(t, 3);
                        t = c_16(t);
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
          t = zip_1_0(k_1, t);
        }
        return(t);
      }
      t = Let_2_0(j_1, _id, t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm n_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = split_2_0(_id, b_110, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, l_1, _id, t);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = n_8;
            {
              ATerm s_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = split_2_0(_id, b_110, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_1, _id, _id, t);
                  ;
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = s_8;
                  {
                    ATerm u_8 = t;
                    int v_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = split_2_0(_id, b_110, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, n_1, _id, _id, t);
                        ;
                        LocalPopChoice(v_8);
                      }
                    else
                      {
                        t = u_8;
                        {
                          ATerm o_1 (ATerm t)
                          {
                            t = b_110(t);
                            t = Hd_0_0(t);
                            return(t);
                          }
                          t = Rec_2_0(o_1, _id, t);
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
ATerm Rec_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  ATerm x_16 (ATerm t)
  {
    ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL;
    ATerm z_16 (ATerm t)
    {
      ATerm s_16 = NULL,t_16 = NULL;
      ATerm a_17 (ATerm t)
      {
        ATerm u_16 = NULL,v_16 = NULL;
        t = not_null(t_16);
        if(((u_16 != NULL) && (u_16 != t)))
          _fail(t);
        else
          u_16 = t;
        t = not_null(t_16);
        {
          ATerm w_16 = NULL;
          ATerm b_17 (ATerm t)
          {
            t = not_null(w_16);
            if(((v_16 != NULL) && (v_16 != t)))
              _fail(t);
            else
              v_16 = t;
            t = not_null(w_16);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_16), not_null(u_16)), not_null(p_16));
          if(((w_16 != NULL) && (w_16 != t)))
            _fail(t);
          else
            w_16 = t;
          t = b_17(t);
          t = not_null(v_16);
        }
        return(t);
      }
      t = not_null(r_16);
      if(((s_16 != NULL) && (s_16 != t)))
        _fail(t);
      else
        s_16 = t;
      t = not_null(o_16);
      t = b_100(t);
      if(((t_16 != NULL) && (t_16 != t)))
        _fail(t);
      else
        t_16 = t;
      t = a_17(t);
      return(t);
    }
    t = not_null(j_16);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = not_null(k_16);
    if(((n_16 != NULL) && (n_16 != t)))
      _fail(t);
    else
      n_16 = t;
    t = not_null(l_16);
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = not_null(j_16);
    {
      ATerm q_16 = NULL;
      ATerm y_16 (ATerm t)
      {
        t = not_null(q_16);
        if(((p_16 != NULL) && (p_16 != t)))
          _fail(t);
        else
          p_16 = t;
        t = not_null(q_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_16));
      if(((q_16 != NULL) && (q_16 != t)))
        _fail(t);
      else
        q_16 = t;
      t = y_16(t);
      t = not_null(n_16);
      t = a_100(t);
      if(((r_16 != NULL) && (r_16 != t)))
        _fail(t);
      else
        r_16 = t;
      t = z_16(t);
    }
    return(t);
  }
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = not_null(j_16);
  if(match_cons(t, sym_Rec_2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      t = x_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  ATerm b_18 (ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,t_17 = NULL;
    ATerm d_18 (ATerm t)
    {
      ATerm u_17 = NULL,v_17 = NULL;
      ATerm e_18 (ATerm t)
      {
        ATerm w_17 = NULL,x_17 = NULL;
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
              t = not_null(a_18);
              if(((z_17 != NULL) && (z_17 != t)))
                _fail(t);
              else
                z_17 = t;
              t = not_null(a_18);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_17), not_null(w_17), not_null(y_17)), not_null(r_17));
            if(((a_18 != NULL) && (a_18 != t)))
              _fail(t);
            else
              a_18 = t;
            t = g_18(t);
            t = not_null(z_17);
          }
          return(t);
        }
        t = not_null(v_17);
        if(((w_17 != NULL) && (w_17 != t)))
          _fail(t);
        else
          w_17 = t;
        t = not_null(q_17);
        t = u_101(t);
        if(((x_17 != NULL) && (x_17 != t)))
          _fail(t);
        else
          x_17 = t;
        t = f_18(t);
        return(t);
      }
      t = not_null(t_17);
      if(((u_17 != NULL) && (u_17 != t)))
        _fail(t);
      else
        u_17 = t;
      t = not_null(p_17);
      t = t_101(t);
      if(((v_17 != NULL) && (v_17 != t)))
        _fail(t);
      else
        v_17 = t;
      t = e_18(t);
      return(t);
    }
    t = not_null(j_17);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = not_null(k_17);
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = not_null(l_17);
    if(((p_17 != NULL) && (p_17 != t)))
      _fail(t);
    else
      p_17 = t;
    t = not_null(m_17);
    if(((q_17 != NULL) && (q_17 != t)))
      _fail(t);
    else
      q_17 = t;
    t = not_null(j_17);
    {
      ATerm s_17 = NULL;
      ATerm c_18 (ATerm t)
      {
        t = not_null(s_17);
        if(((r_17 != NULL) && (r_17 != t)))
          _fail(t);
        else
          r_17 = t;
        t = not_null(s_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_17));
      if(((s_17 != NULL) && (s_17 != t)))
        _fail(t);
      else
        s_17 = t;
      t = c_18(t);
      t = not_null(o_17);
      t = s_101(t);
      if(((t_17 != NULL) && (t_17 != t)))
        _fail(t);
      else
        t_17 = t;
      t = d_18(t);
    }
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
      t = b_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  ATerm b_19 (ATerm t)
  {
    ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,v_18 = NULL;
    ATerm d_19 (ATerm t)
    {
      ATerm w_18 = NULL,x_18 = NULL;
      ATerm e_19 (ATerm t)
      {
        ATerm y_18 = NULL,z_18 = NULL;
        t = not_null(x_18);
        if(((y_18 != NULL) && (y_18 != t)))
          _fail(t);
        else
          y_18 = t;
        t = not_null(x_18);
        {
          ATerm a_19 = NULL;
          ATerm f_19 (ATerm t)
          {
            t = not_null(a_19);
            if(((z_18 != NULL) && (z_18 != t)))
              _fail(t);
            else
              z_18 = t;
            t = not_null(a_19);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_18), not_null(y_18)), not_null(t_18));
          if(((a_19 != NULL) && (a_19 != t)))
            _fail(t);
          else
            a_19 = t;
          t = f_19(t);
          t = not_null(z_18);
        }
        return(t);
      }
      t = not_null(v_18);
      if(((w_18 != NULL) && (w_18 != t)))
        _fail(t);
      else
        w_18 = t;
      t = not_null(s_18);
      t = e_99(t);
      if(((x_18 != NULL) && (x_18 != t)))
        _fail(t);
      else
        x_18 = t;
      t = e_19(t);
      return(t);
    }
    t = not_null(n_18);
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    t = not_null(o_18);
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = not_null(p_18);
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    t = not_null(n_18);
    {
      ATerm u_18 = NULL;
      ATerm c_19 (ATerm t)
      {
        t = not_null(u_18);
        if(((t_18 != NULL) && (t_18 != t)))
          _fail(t);
        else
          t_18 = t;
        t = not_null(u_18);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_18));
      if(((u_18 != NULL) && (u_18 != t)))
        _fail(t);
      else
        u_18 = t;
      t = c_19(t);
      t = not_null(r_18);
      t = d_99(t);
      if(((v_18 != NULL) && (v_18 != t)))
        _fail(t);
      else
        v_18 = t;
      t = d_19(t);
    }
    return(t);
  }
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = not_null(n_18);
  if(match_cons(t, sym_Let_2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
      t = b_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(c_110, c_110, t);
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
            t = SDef_3_0(e_110, e_110, c_110, t);
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm a_9 = t;
              int e_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(e_110, e_110, e_110, c_110, t);
                  ;
                  LocalPopChoice(e_9);
                }
              else
                {
                  t = a_9;
                  t = Rec_2_0(e_110, c_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  ATerm r_19 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
    t = not_null(j_19);
    if(((n_19 != NULL) && (n_19 != t)))
      _fail(t);
    else
      n_19 = t;
    t = not_null(k_19);
    if(((q_19 != NULL) && (q_19 != t)))
      _fail(t);
    else
      q_19 = t;
    t = not_null(l_19);
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = not_null(m_19);
    if(((p_19 != NULL) && (p_19 != t)))
      _fail(t);
    else
      p_19 = t;
    t = not_null(q_19);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  t = not_null(i_19);
  if(match_cons(t, sym_RDefT_4))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
      l_19 = ATgetArgument(t, 2);
      m_19 = ATgetArgument(t, 3);
      t = r_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  ATerm d_20 (ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
    t = not_null(v_19);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = not_null(w_19);
    if(((c_20 != NULL) && (c_20 != t)))
      _fail(t);
    else
      c_20 = t;
    t = not_null(x_19);
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    t = not_null(y_19);
    if(((b_20 != NULL) && (b_20 != t)))
      _fail(t);
    else
      b_20 = t;
    t = not_null(c_20);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  t = not_null(u_19);
  if(match_cons(t, sym_SDefT_4))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      x_19 = ATgetArgument(t, 2);
      y_19 = ATgetArgument(t, 3);
      t = d_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  ATerm l_20 (ATerm t)
  {
    ATerm j_20 = NULL,k_20 = NULL;
    t = not_null(h_20);
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    t = not_null(i_20);
    if(((j_20 != NULL) && (j_20 != t)))
      _fail(t);
    else
      j_20 = t;
    t = (ATerm) ATinsert(ATempty, not_null(k_20));
    return(t);
  }
  if(((g_20 != NULL) && (g_20 != t)))
    _fail(t);
  else
    g_20 = t;
  t = not_null(g_20);
  if(match_cons(t, sym_Rec_2))
    {
      h_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
      t = l_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  ATerm v_20 (ATerm t)
  {
    ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
    t = not_null(p_20);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(q_20);
    if(((u_20 != NULL) && (u_20 != t)))
      _fail(t);
    else
      u_20 = t;
    t = not_null(r_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(u_20);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = not_null(o_20);
  if(match_cons(t, sym_SDef_3))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      r_20 = ATgetArgument(t, 2);
      t = v_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  ATerm n_21 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL;
    t = not_null(c_21);
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = not_null(d_21);
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    t = not_null(f_21);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
        ATerm o_21 (ATerm t)
        {
          ATerm l_21 = NULL;
          t = not_null(h_21);
          if(((l_21 != NULL) && (l_21 != t)))
            _fail(t);
          else
            l_21 = t;
          t = not_null(l_21);
          return(t);
        }
        ATerm p_21 (ATerm t)
        {
          ATerm m_21 = NULL;
          t = not_null(h_21);
          if(((m_21 != NULL) && (m_21 != t)))
            _fail(t);
          else
            m_21 = t;
          t = not_null(m_21);
          return(t);
        }
        if(((g_21 != NULL) && (g_21 != t)))
          _fail(t);
        else
          g_21 = t;
        t = not_null(g_21);
        if(match_cons(t, sym_SDef_3))
          {
            h_21 = ATgetArgument(t, 0);
            i_21 = ATgetArgument(t, 1);
            j_21 = ATgetArgument(t, 2);
            t = o_21(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_21 = ATgetArgument(t, 0);
                i_21 = ATgetArgument(t, 1);
                j_21 = ATgetArgument(t, 2);
                k_21 = ATgetArgument(t, 3);
                t = p_21(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(p_1, t);
    }
    return(t);
  }
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  t = not_null(b_21);
  if(match_cons(t, sym_Let_2))
    {
      c_21 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
      t = n_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm n_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(o_9);
            }
          else
            {
              t = n_9;
              {
                ATerm p_9 = t;
                int q_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(q_9);
                  }
                else
                  {
                    t = p_9;
                    {
                      ATerm r_9 = t;
                      int s_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(s_9);
                        }
                      else
                        {
                          t = r_9;
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
  t = rename_4_0(SVar_1_0, q_1, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ReplaceVar_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm e_22 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL;
    t = not_null(w_21);
    if(((z_21 != NULL) && (z_21 != t)))
      _fail(t);
    else
      z_21 = t;
    t = not_null(y_21);
    if(((a_22 != NULL) && (a_22 != t)))
      _fail(t);
    else
      a_22 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(a_22));
    return(t);
  }
  ATerm f_22 (ATerm t)
  {
    ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
    t = not_null(w_21);
    if(((b_22 != NULL) && (b_22 != t)))
      _fail(t);
    else
      b_22 = t;
    t = not_null(x_21);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = not_null(y_21);
    if(((c_22 != NULL) && (c_22 != t)))
      _fail(t);
    else
      c_22 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_22), not_null(d_22));
    return(t);
  }
  if(((u_21 != NULL) && (u_21 != t)))
    _fail(t);
  else
    u_21 = t;
  t = not_null(u_21);
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
      t = not_null(v_21);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_21 = ATgetArgument(t, 0);
          t = e_22(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              w_21 = ATgetArgument(t, 0);
              x_21 = ATgetArgument(t, 1);
              t = f_22(t);
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
ATerm tpaste_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_109, _id, t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = split_2_0(_id, x_109, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, r_1, _id, t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm s_1 (ATerm t)
              {
                t = split_2_0(_id, x_109, t);
                t = zip_1_0(ReplaceVar_0_0, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, s_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  ATerm v_22 (ATerm t)
  {
    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,r_22 = NULL;
    ATerm x_22 (ATerm t)
    {
      ATerm s_22 = NULL,t_22 = NULL;
      t = not_null(r_22);
      if(((s_22 != NULL) && (s_22 != t)))
        _fail(t);
      else
        s_22 = t;
      t = not_null(r_22);
      {
        ATerm u_22 = NULL;
        ATerm y_22 (ATerm t)
        {
          t = not_null(u_22);
          if(((t_22 != NULL) && (t_22 != t)))
            _fail(t);
          else
            t_22 = t;
          t = not_null(u_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(s_22)), not_null(p_22));
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = y_22(t);
        t = not_null(t_22);
      }
      return(t);
    }
    t = not_null(l_22);
    if(((n_22 != NULL) && (n_22 != t)))
      _fail(t);
    else
      n_22 = t;
    t = not_null(m_22);
    if(((o_22 != NULL) && (o_22 != t)))
      _fail(t);
    else
      o_22 = t;
    t = not_null(l_22);
    {
      ATerm q_22 = NULL;
      ATerm w_22 (ATerm t)
      {
        t = not_null(q_22);
        if(((p_22 != NULL) && (p_22 != t)))
          _fail(t);
        else
          p_22 = t;
        t = not_null(q_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_22));
      if(((q_22 != NULL) && (q_22 != t)))
        _fail(t);
      else
        q_22 = t;
      t = w_22(t);
      t = not_null(o_22);
      t = k_98(t);
      if(((r_22 != NULL) && (r_22 != t)))
        _fail(t);
      else
        r_22 = t;
      t = x_22(t);
    }
    return(t);
  }
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = not_null(l_22);
  if(match_cons(t, sym_DynamicRules_1))
    {
      m_22 = ATgetArgument(t, 0);
      t = v_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  ATerm d_24 (ATerm t)
  {
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,t_23 = NULL;
    ATerm f_24 (ATerm t)
    {
      ATerm u_23 = NULL,v_23 = NULL;
      ATerm g_24 (ATerm t)
      {
        ATerm w_23 = NULL,x_23 = NULL;
        ATerm h_24 (ATerm t)
        {
          ATerm y_23 = NULL,z_23 = NULL;
          ATerm i_24 (ATerm t)
          {
            ATerm a_24 = NULL,b_24 = NULL;
            t = not_null(z_23);
            if(((a_24 != NULL) && (a_24 != t)))
              _fail(t);
            else
              a_24 = t;
            t = not_null(z_23);
            {
              ATerm c_24 = NULL;
              ATerm j_24 (ATerm t)
              {
                t = not_null(c_24);
                if(((b_24 != NULL) && (b_24 != t)))
                  _fail(t);
                else
                  b_24 = t;
                t = not_null(c_24);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(u_23), not_null(w_23), not_null(y_23), not_null(a_24)), not_null(r_23));
              if(((c_24 != NULL) && (c_24 != t)))
                _fail(t);
              else
                c_24 = t;
              t = j_24(t);
              t = not_null(b_24);
            }
            return(t);
          }
          t = not_null(x_23);
          if(((y_23 != NULL) && (y_23 != t)))
            _fail(t);
          else
            y_23 = t;
          t = not_null(q_23);
          t = e_98(t);
          if(((z_23 != NULL) && (z_23 != t)))
            _fail(t);
          else
            z_23 = t;
          t = i_24(t);
          return(t);
        }
        t = not_null(v_23);
        if(((w_23 != NULL) && (w_23 != t)))
          _fail(t);
        else
          w_23 = t;
        t = not_null(p_23);
        t = d_98(t);
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        t = h_24(t);
        return(t);
      }
      t = not_null(t_23);
      if(((u_23 != NULL) && (u_23 != t)))
        _fail(t);
      else
        u_23 = t;
      t = not_null(o_23);
      t = c_98(t);
      if(((v_23 != NULL) && (v_23 != t)))
        _fail(t);
      else
        v_23 = t;
      t = g_24(t);
      return(t);
    }
    t = not_null(h_23);
    if(((m_23 != NULL) && (m_23 != t)))
      _fail(t);
    else
      m_23 = t;
    t = not_null(i_23);
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = not_null(j_23);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = not_null(k_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(l_23);
    if(((q_23 != NULL) && (q_23 != t)))
      _fail(t);
    else
      q_23 = t;
    t = not_null(h_23);
    {
      ATerm s_23 = NULL;
      ATerm e_24 (ATerm t)
      {
        t = not_null(s_23);
        if(((r_23 != NULL) && (r_23 != t)))
          _fail(t);
        else
          r_23 = t;
        t = not_null(s_23);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_23));
      if(((s_23 != NULL) && (s_23 != t)))
        _fail(t);
      else
        s_23 = t;
      t = e_24(t);
      t = not_null(n_23);
      t = b_98(t);
      if(((t_23 != NULL) && (t_23 != t)))
        _fail(t);
      else
        t_23 = t;
      t = f_24(t);
    }
    return(t);
  }
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  t = not_null(h_23);
  if(match_cons(t, sym_RDefT_4))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
      k_23 = ATgetArgument(t, 2);
      l_23 = ATgetArgument(t, 3);
      t = d_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(a_110, y_109, t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(a_110, a_110, a_110, y_109, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(a_110, a_110, a_110, y_109, t);
                  ;
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  t = DynamicRules_1_0(y_109, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  ATerm v_24 (ATerm t)
  {
    ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
    t = not_null(n_24);
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
    t = not_null(o_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(p_24);
    if(((u_24 != NULL) && (u_24 != t)))
      _fail(t);
    else
      u_24 = t;
    t = not_null(q_24);
    if(((t_24 != NULL) && (t_24 != t)))
      _fail(t);
    else
      t_24 = t;
    t = not_null(u_24);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = not_null(m_24);
  if(match_cons(t, sym_RDefT_4))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
      p_24 = ATgetArgument(t, 2);
      q_24 = ATgetArgument(t, 3);
      t = v_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
    ATerm e_25 (ATerm t)
    {
      ATerm c_25 = NULL;
      t = not_null(b_25);
      if(((c_25 != NULL) && (c_25 != t)))
        _fail(t);
      else
        c_25 = t;
      t = not_null(c_25);
      return(t);
    }
    ATerm f_25 (ATerm t)
    {
      ATerm d_25 = NULL;
      t = not_null(b_25);
      if(((d_25 != NULL) && (d_25 != t)))
        _fail(t);
      else
        d_25 = t;
      t = not_null(d_25);
      return(t);
    }
    if(((a_25 != NULL) && (a_25 != t)))
      _fail(t);
    else
      a_25 = t;
    t = not_null(a_25);
    if(match_cons(t, sym_VarDec_2))
      {
        b_25 = ATgetArgument(t, 0);
        z_24 = ATgetArgument(t, 1);
        t = e_25(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            b_25 = ATgetArgument(t, 0);
            t = f_25(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(t_1, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  ATerm r_25 (ATerm t)
  {
    ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
    t = not_null(j_25);
    if(((n_25 != NULL) && (n_25 != t)))
      _fail(t);
    else
      n_25 = t;
    t = not_null(k_25);
    if(((o_25 != NULL) && (o_25 != t)))
      _fail(t);
    else
      o_25 = t;
    t = not_null(l_25);
    if(((q_25 != NULL) && (q_25 != t)))
      _fail(t);
    else
      q_25 = t;
    t = not_null(m_25);
    if(((p_25 != NULL) && (p_25 != t)))
      _fail(t);
    else
      p_25 = t;
    t = not_null(q_25);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = not_null(i_25);
  if(match_cons(t, sym_SDefT_4))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
      l_25 = ATgetArgument(t, 2);
      m_25 = ATgetArgument(t, 3);
      t = r_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  ATerm x_25 (ATerm t)
  {
    ATerm w_25 = NULL;
    t = not_null(v_25);
    if(((w_25 != NULL) && (w_25 != t)))
      _fail(t);
    else
      w_25 = t;
    t = not_null(w_25);
    t = tvars_0_0(t);
    return(t);
  }
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = not_null(u_25);
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_25 = ATgetArgument(t, 0);
      t = x_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  ATerm d_26 (ATerm t)
  {
    ATerm c_26 = NULL;
    t = not_null(b_26);
    if(((c_26 != NULL) && (c_26 != t)))
      _fail(t);
    else
      c_26 = t;
    t = (ATerm) ATinsert(ATempty, not_null(c_26));
    return(t);
  }
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = not_null(a_26);
  if(match_cons(t, sym_Var_1))
    {
      b_26 = ATgetArgument(t, 0);
      t = d_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  ATerm l_26 (ATerm t)
  {
    ATerm j_26 = NULL,k_26 = NULL;
    t = not_null(h_26);
    if(((k_26 != NULL) && (k_26 != t)))
      _fail(t);
    else
      k_26 = t;
    t = not_null(i_26);
    if(((j_26 != NULL) && (j_26 != t)))
      _fail(t);
    else
      j_26 = t;
    t = not_null(k_26);
    {
      ATerm m_26 (ATerm t)
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(j_26);
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            {
              ATerm s_10 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(j_26);
                    return(t);
                  }
                  t = HdMember_p__2_0(k_119, u_1, t);
                  t = m_26(t);
                  ;
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = s_10;
                  t = Cons_2_0(_id, m_26, t);
                }
            }
          }
        return(t);
      }
      t = m_26(t);
    }
    return(t);
  }
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = not_null(g_26);
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
      t = l_26(t);
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
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  ATerm t_26 (ATerm t)
  {
    ATerm s_26 = NULL;
    t = not_null(q_26);
    if(((s_26 != NULL) && (s_26 != t)))
      _fail(t);
    else
      s_26 = t;
    t = not_null(r_26);
    if(((s_26 != NULL) && (s_26 != t)))
      _fail(t);
    else
      s_26 = t;
    t = not_null(p_26);
    return(t);
  }
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = not_null(p_26);
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
      t = t_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  ATerm e_27 (ATerm t)
  {
    ATerm a_27 = NULL,b_27 = NULL;
    t = not_null(y_26);
    if(((b_27 != NULL) && (b_27 != t)))
      _fail(t);
    else
      b_27 = t;
    t = not_null(z_26);
    if(((a_27 != NULL) && (a_27 != t)))
      _fail(t);
    else
      a_27 = t;
    t = not_null(x_26);
    t = p_119(t);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm c_27 = NULL;
        ATerm f_27 (ATerm t)
        {
          ATerm d_27 = NULL;
          t = not_null(c_27);
          if(((d_27 != NULL) && (d_27 != t)))
            _fail(t);
          else
            d_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(d_27));
          t = o_119(t);
          return(t);
        }
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = f_27(t);
        return(t);
      }
      t = fetch_1_0(v_1, t);
    }
    t = not_null(a_27);
    return(t);
  }
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = not_null(x_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_26 = ATgetFirst((ATermList) t);
      z_26 = (ATerm) ATgetNext((ATermList) t);
      t = e_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  ATerm n_27 (ATerm t)
  {
    ATerm l_27 = NULL,m_27 = NULL;
    t = not_null(j_27);
    if(((m_27 != NULL) && (m_27 != t)))
      _fail(t);
    else
      m_27 = t;
    t = not_null(k_27);
    if(((l_27 != NULL) && (l_27 != t)))
      _fail(t);
    else
      l_27 = t;
    t = not_null(m_27);
    {
      ATerm o_27 (ATerm t)
      {
        ATerm p_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = p_11;
            {
              ATerm z_11 = t;
              int a_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(l_27);
                    return(t);
                  }
                  t = HdMember_p__2_0(g_119, w_1, t);
                  t = o_27(t);
                  ;
                  LocalPopChoice(a_12);
                }
              else
                {
                  t = z_11;
                  t = Cons_2_0(_id, o_27, t);
                }
            }
          }
        return(t);
      }
      t = o_27(t);
    }
    return(t);
  }
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = not_null(i_27);
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      t = n_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  ATerm a_28 (ATerm t)
  {
    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
    t = not_null(t_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(v_27);
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = not_null(w_27);
    if(((z_27 != NULL) && (z_27 != t)))
      _fail(t);
    else
      z_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_27)), not_null(x_27)), not_null(z_27));
    return(t);
  }
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  t = not_null(s_27);
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
      t = not_null(u_27);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_27 = ATgetFirst((ATermList) t);
          w_27 = (ATerm) ATgetNext((ATermList) t);
          t = a_28(t);
        }
      else
        {
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  ATerm i_29 (ATerm t)
  {
    ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,a_29 = NULL,g_29 = NULL;
    t = not_null(n_28);
    if(((q_28 != NULL) && (q_28 != t)))
      _fail(t);
    else
      q_28 = t;
    t = not_null(o_28);
    if(((r_28 != NULL) && (r_28 != t)))
      _fail(t);
    else
      r_28 = t;
    t = not_null(p_28);
    if(((s_28 != NULL) && (s_28 != t)))
      _fail(t);
    else
      s_28 = t;
    t = not_null(l_28);
    {
      ATerm b_12;
      b_12 = t;
      {
        ATerm v_28 = NULL;
        ATerm j_29 (ATerm t)
        {
          ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
          ATerm k_29 (ATerm t)
          {
            t = not_null(y_28);
            if(((t_28 != NULL) && (t_28 != t)))
              _fail(t);
            else
              t_28 = t;
            t = not_null(z_28);
            if(((u_28 != NULL) && (u_28 != t)))
              _fail(t);
            else
              u_28 = t;
            t = not_null(x_28);
            return(t);
          }
          t = not_null(v_28);
          if(((w_28 != NULL) && (w_28 != t)))
            _fail(t);
          else
            w_28 = t;
          t = not_null(v_28);
          t = SSL_explode_term(not_null(w_28));
          if(((x_28 != NULL) && (x_28 != t)))
            _fail(t);
          else
            x_28 = t;
          t = not_null(x_28);
          if(match_cons(t, sym__2))
            {
              y_28 = ATgetArgument(t, 0);
              z_28 = ATgetArgument(t, 1);
              t = k_29(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(r_28);
        if(((v_28 != NULL) && (v_28 != t)))
          _fail(t);
        else
          v_28 = t;
        t = j_29(t);
      }
      t = b_12;
      {
        ATerm c_12;
        c_12 = t;
        {
          ATerm b_29 = NULL;
          ATerm l_29 (ATerm t)
          {
            ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
            ATerm m_29 (ATerm t)
            {
              t = not_null(e_29);
              if(((t_28 != NULL) && (t_28 != t)))
                _fail(t);
              else
                t_28 = t;
              t = not_null(f_29);
              if(((a_29 != NULL) && (a_29 != t)))
                _fail(t);
              else
                a_29 = t;
              t = not_null(d_29);
              return(t);
            }
            t = not_null(b_29);
            if(((c_29 != NULL) && (c_29 != t)))
              _fail(t);
            else
              c_29 = t;
            t = not_null(b_29);
            t = SSL_explode_term(not_null(c_29));
            if(((d_29 != NULL) && (d_29 != t)))
              _fail(t);
            else
              d_29 = t;
            t = not_null(d_29);
            if(match_cons(t, sym__2))
              {
                e_29 = ATgetArgument(t, 0);
                f_29 = ATgetArgument(t, 1);
                t = m_29(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(q_28);
          if(((b_29 != NULL) && (b_29 != t)))
            _fail(t);
          else
            b_29 = t;
          t = l_29(t);
        }
        t = c_12;
        {
          ATerm h_29 = NULL;
          ATerm n_29 (ATerm t)
          {
            t = not_null(h_29);
            if(((g_29 != NULL) && (g_29 != t)))
              _fail(t);
            else
              g_29 = t;
            t = not_null(h_29);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(u_28));
          t = zip_1_0(_id, t);
          if(((h_29 != NULL) && (h_29 != t)))
            _fail(t);
          else
            h_29 = t;
          t = n_29(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(s_28));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  t = not_null(l_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(m_28);
      if(match_cons(t, sym__2))
        {
          n_28 = ATgetArgument(t, 0);
          o_28 = ATgetArgument(t, 1);
          t = i_29(t);
        }
      else
        {
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
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  ATerm y_29 (ATerm t)
  {
    ATerm w_29 = NULL,x_29 = NULL;
    t = not_null(t_29);
    if(((w_29 != NULL) && (w_29 != t)))
      _fail(t);
    else
      w_29 = t;
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
    t = not_null(x_29);
    return(t);
  }
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  t = not_null(r_29);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_29 = ATgetFirst((ATermList) t);
      v_29 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(s_29);
      if(match_cons(t, sym__2))
        {
          t_29 = ATgetArgument(t, 0);
          u_29 = ATgetArgument(t, 1);
          t = y_29(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t)
{
  ATerm z_29 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_128(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = i_128(t);
        t = z_29(t);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t)
{
  t = k_128(t);
  t = while_not_2_0(l_128, m_128, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm b_30 = NULL;
        ATerm d_30 (ATerm t)
        {
          ATerm c_30 = NULL;
          t = not_null(b_30);
          if(((c_30 != NULL) && (c_30 != t)))
            _fail(t);
          else
            c_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_30));
          return(t);
        }
        if(((b_30 != NULL) && (b_30 != t)))
          _fail(t);
        else
          b_30 = t;
        t = d_30(t);
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm j_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = j_12;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, a_2, t);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(x_1, y_1, z_1, t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm d_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm h_30 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_126(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_30 = NULL;
              ATerm p_12;
              p_12 = t;
              {
                ATerm g_30 = NULL;
                ATerm i_30 (ATerm t)
                {
                  t = not_null(g_30);
                  if(((f_30 != NULL) && (f_30 != t)))
                    _fail(t);
                  else
                    f_30 = t;
                  t = not_null(g_30);
                  return(t);
                }
                t = c_126(t);
                if(((g_30 != NULL) && (g_30 != t)))
                  _fail(t);
                else
                  g_30 = t;
                t = i_30(t);
              }
              t = p_12;
              {
                ATerm b_2 (ATerm t)
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = not_null(f_30);
                    return(t);
                  }
                  t = split_2_0(h_30, d_2, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm c_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_126(b_2, h_30, c_2, t);
                {
                  ATerm e_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(e_2, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              {
                ATerm f_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(f_2, union_0_0, h_30, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_30(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
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
              t = Bind4_0_0(t);
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
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(v_12);
                  }
                else
                  {
                    t = u_12;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, g_2, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  ATerm y_30 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
    t = not_null(n_30);
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = not_null(o_30);
    if(((t_30 != NULL) && (t_30 != t)))
      _fail(t);
    else
      t_30 = t;
    t = not_null(p_30);
    if(((u_30 != NULL) && (u_30 != t)))
      _fail(t);
    else
      u_30 = t;
    t = not_null(v_30);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm z_30 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL;
    t = not_null(r_30);
    if(((x_30 != NULL) && (x_30 != t)))
      _fail(t);
    else
      x_30 = t;
    t = not_null(s_30);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = not_null(x_30);
    return(t);
  }
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  t = not_null(q_30);
  if(match_cons(t, sym_LRule_1))
    {
      r_30 = ATgetArgument(t, 0);
      t = not_null(r_30);
      if(match_cons(t, sym_Rule_3))
        {
          n_30 = ATgetArgument(t, 0);
          o_30 = ATgetArgument(t, 1);
          p_30 = ATgetArgument(t, 2);
          t = y_30(t);
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
          r_30 = ATgetArgument(t, 0);
          s_30 = ATgetArgument(t, 1);
          t = z_30(t);
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
  ATerm n_31 = NULL,o_31 = NULL;
  ATerm n_32 (ATerm t)
  {
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL;
    ATerm r_32 (ATerm t)
    {
      ATerm u_31 = NULL,v_31 = NULL;
      t = not_null(t_31);
      if(((u_31 != NULL) && (u_31 != t)))
        _fail(t);
      else
        u_31 = t;
      t = not_null(t_31);
      {
        ATerm w_31 = NULL;
        ATerm s_32 (ATerm t)
        {
          t = not_null(w_31);
          if(((v_31 != NULL) && (v_31 != t)))
            _fail(t);
          else
            v_31 = t;
          t = not_null(w_31);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_31)), not_null(r_31));
        if(((w_31 != NULL) && (w_31 != t)))
          _fail(t);
        else
          w_31 = t;
        t = s_32(t);
        t = not_null(v_31);
      }
      return(t);
    }
    t = not_null(n_31);
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = not_null(o_31);
    if(((q_31 != NULL) && (q_31 != t)))
      _fail(t);
    else
      q_31 = t;
    t = not_null(n_31);
    {
      ATerm s_31 = NULL;
      ATerm q_32 (ATerm t)
      {
        t = not_null(s_31);
        if(((r_31 != NULL) && (r_31 != t)))
          _fail(t);
        else
          r_31 = t;
        t = not_null(s_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_31));
      if(((s_31 != NULL) && (s_31 != t)))
        _fail(t);
      else
        s_31 = t;
      t = q_32(t);
      t = not_null(q_31);
      t = p_0(t);
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      t = r_32(t);
    }
    return(t);
  }
  ATerm o_32 (ATerm t)
  {
    ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,b_32 = NULL;
    ATerm u_32 (ATerm t)
    {
      ATerm c_32 = NULL,d_32 = NULL;
      t = not_null(b_32);
      if(((c_32 != NULL) && (c_32 != t)))
        _fail(t);
      else
        c_32 = t;
      t = not_null(b_32);
      {
        ATerm e_32 = NULL;
        ATerm v_32 (ATerm t)
        {
          t = not_null(e_32);
          if(((d_32 != NULL) && (d_32 != t)))
            _fail(t);
          else
            d_32 = t;
          t = not_null(e_32);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_32)), not_null(z_31));
        if(((e_32 != NULL) && (e_32 != t)))
          _fail(t);
        else
          e_32 = t;
        t = v_32(t);
        t = not_null(d_32);
      }
      return(t);
    }
    t = not_null(n_31);
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    t = not_null(o_31);
    if(((y_31 != NULL) && (y_31 != t)))
      _fail(t);
    else
      y_31 = t;
    t = not_null(n_31);
    {
      ATerm a_32 = NULL;
      ATerm t_32 (ATerm t)
      {
        t = not_null(a_32);
        if(((z_31 != NULL) && (z_31 != t)))
          _fail(t);
        else
          z_31 = t;
        t = not_null(a_32);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_31));
      if(((a_32 != NULL) && (a_32 != t)))
        _fail(t);
      else
        a_32 = t;
      t = t_32(t);
      t = not_null(y_31);
      t = p_0(t);
      if(((b_32 != NULL) && (b_32 != t)))
        _fail(t);
      else
        b_32 = t;
      t = u_32(t);
    }
    return(t);
  }
  ATerm p_32 (ATerm t)
  {
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,j_32 = NULL;
    ATerm x_32 (ATerm t)
    {
      ATerm k_32 = NULL,l_32 = NULL;
      t = not_null(j_32);
      if(((k_32 != NULL) && (k_32 != t)))
        _fail(t);
      else
        k_32 = t;
      t = not_null(j_32);
      {
        ATerm m_32 = NULL;
        ATerm y_32 (ATerm t)
        {
          t = not_null(m_32);
          if(((l_32 != NULL) && (l_32 != t)))
            _fail(t);
          else
            l_32 = t;
          t = not_null(m_32);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_32)), not_null(h_32));
        if(((m_32 != NULL) && (m_32 != t)))
          _fail(t);
        else
          m_32 = t;
        t = y_32(t);
        t = not_null(l_32);
      }
      return(t);
    }
    t = not_null(n_31);
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    t = not_null(o_31);
    if(((g_32 != NULL) && (g_32 != t)))
      _fail(t);
    else
      g_32 = t;
    t = not_null(n_31);
    {
      ATerm i_32 = NULL;
      ATerm w_32 (ATerm t)
      {
        t = not_null(i_32);
        if(((h_32 != NULL) && (h_32 != t)))
          _fail(t);
        else
          h_32 = t;
        t = not_null(i_32);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_32));
      if(((i_32 != NULL) && (i_32 != t)))
        _fail(t);
      else
        i_32 = t;
      t = w_32(t);
      t = not_null(g_32);
      t = p_0(t);
      if(((j_32 != NULL) && (j_32 != t)))
        _fail(t);
      else
        j_32 = t;
      t = x_32(t);
    }
    return(t);
  }
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  t = not_null(n_31);
  if(match_cons(t, sym_Var_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm w_12 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_32(t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = w_12;
            {
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_32(t);
                  ;
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  t = p_32(t);
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
ATerm DistBinding_2_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  ATerm o_33 (ATerm t)
  {
    ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
    t = not_null(e_33);
    if(((j_33 != NULL) && (j_33 != t)))
      _fail(t);
    else
      j_33 = t;
    t = not_null(f_33);
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = not_null(g_33);
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = not_null(j_33);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm k_33 = NULL;
        ATerm p_33 (ATerm t)
        {
          ATerm l_33 = NULL;
          t = not_null(k_33);
          if(((l_33 != NULL) && (l_33 != t)))
            _fail(t);
          else
            l_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(h_33));
          t = j_124(t);
          return(t);
        }
        if(((k_33 != NULL) && (k_33 != t)))
          _fail(t);
        else
          k_33 = t;
        t = p_33(t);
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        ATerm m_33 = NULL;
        ATerm q_33 (ATerm t)
        {
          ATerm n_33 = NULL;
          t = not_null(m_33);
          if(((n_33 != NULL) && (n_33 != t)))
            _fail(t);
          else
            n_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(i_33));
          t = j_124(t);
          return(t);
        }
        if(((m_33 != NULL) && (m_33 != t)))
          _fail(t);
        else
          m_33 = t;
        t = q_33(t);
        return(t);
      }
      t = k_124(h_2, i_2, _id, t);
    }
    return(t);
  }
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = not_null(d_33);
  if(match_cons(t, sym__3))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      g_33 = ATgetArgument(t, 2);
      t = o_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  ATerm n_34 (ATerm t)
  {
    ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,l_34 = NULL;
    t = not_null(z_33);
    if(((b_34 != NULL) && (b_34 != t)))
      _fail(t);
    else
      b_34 = t;
    t = not_null(a_34);
    if(((c_34 != NULL) && (c_34 != t)))
      _fail(t);
    else
      c_34 = t;
    t = not_null(y_33);
    {
      ATerm m_15;
      m_15 = t;
      {
        ATerm g_34 = NULL;
        ATerm o_34 (ATerm t)
        {
          ATerm h_34 = NULL;
          ATerm p_34 (ATerm t)
          {
            ATerm i_34 = NULL,k_34 = NULL;
            ATerm r_34 (ATerm t)
            {
              t = not_null(k_34);
              if(((f_34 != NULL) && (f_34 != t)))
                _fail(t);
              else
                f_34 = t;
              t = not_null(k_34);
              return(t);
            }
            t = not_null(h_34);
            if(((e_34 != NULL) && (e_34 != t)))
              _fail(t);
            else
              e_34 = t;
            t = not_null(h_34);
            {
              ATerm j_34 = NULL;
              ATerm q_34 (ATerm t)
              {
                t = not_null(j_34);
                if(((i_34 != NULL) && (i_34 != t)))
                  _fail(t);
                else
                  i_34 = t;
                t = not_null(j_34);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_34), not_null(e_34));
              t = zip_1_0(_id, t);
              if(((j_34 != NULL) && (j_34 != t)))
                _fail(t);
              else
                j_34 = t;
              t = q_34(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(c_34));
              t = conc_0_0(t);
              if(((k_34 != NULL) && (k_34 != t)))
                _fail(t);
              else
                k_34 = t;
              t = r_34(t);
            }
            return(t);
          }
          t = not_null(g_34);
          if(((d_34 != NULL) && (d_34 != t)))
            _fail(t);
          else
            d_34 = t;
          t = not_null(g_34);
          t = map_1_0(new_0_0, t);
          if(((h_34 != NULL) && (h_34 != t)))
            _fail(t);
          else
            h_34 = t;
          t = p_34(t);
          return(t);
        }
        t = not_null(b_34);
        t = d_124(t);
        if(((g_34 != NULL) && (g_34 != t)))
          _fail(t);
        else
          g_34 = t;
        t = o_34(t);
      }
      t = m_15;
      {
        ATerm m_34 = NULL;
        ATerm s_34 (ATerm t)
        {
          t = not_null(m_34);
          if(((l_34 != NULL) && (l_34 != t)))
            _fail(t);
          else
            l_34 = t;
          t = not_null(m_34);
          return(t);
        }
        t = not_null(b_34);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(e_34);
            return(t);
          }
          t = e_124(j_2, t);
          if(((m_34 != NULL) && (m_34 != t)))
            _fail(t);
          else
            m_34 = t;
          t = s_34(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), not_null(c_34), not_null(f_34));
      }
    }
    return(t);
  }
  if(((y_33 != NULL) && (y_33 != t)))
    _fail(t);
  else
    y_33 = t;
  t = not_null(y_33);
  if(match_cons(t, sym__2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      t = n_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  ATerm d_35 (ATerm t)
  {
    ATerm b_35 = NULL,c_35 = NULL;
    t = not_null(x_34);
    if(((b_35 != NULL) && (b_35 != t)))
      _fail(t);
    else
      b_35 = t;
    t = not_null(a_35);
    if(((c_35 != NULL) && (c_35 != t)))
      _fail(t);
    else
      c_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(c_35));
    return(t);
  }
  if(((w_34 != NULL) && (w_34 != t)))
    _fail(t);
  else
    w_34 = t;
  t = not_null(w_34);
  if(match_cons(t, sym__2))
    {
      x_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      t = not_null(y_34);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_34 = ATgetFirst((ATermList) t);
          a_35 = (ATerm) ATgetNext((ATermList) t);
          t = d_35(t);
        }
      else
        {
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
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  ATerm r_35 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL;
    t = not_null(j_35);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    t = not_null(m_35);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    t = not_null(n_35);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = not_null(q_35);
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(i_35);
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
      t = not_null(k_35);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_35 = ATgetFirst((ATermList) t);
          o_35 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(l_35);
          if(match_cons(t, sym__2))
            {
              m_35 = ATgetArgument(t, 0);
              n_35 = ATgetArgument(t, 1);
              t = r_35(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm o_124 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  ATerm a_36 (ATerm t)
  {
    ATerm y_35 = NULL,z_35 = NULL;
    t = not_null(w_35);
    if(((z_35 != NULL) && (z_35 != t)))
      _fail(t);
    else
      z_35 = t;
    t = not_null(x_35);
    if(((y_35 != NULL) && (y_35 != t)))
      _fail(t);
    else
      y_35 = t;
    t = not_null(z_35);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = not_null(y_35);
          return(t);
        }
        t = split_2_0(_id, l_2, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = o_124(k_2, t);
    }
    return(t);
  }
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = not_null(v_35);
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
      t = a_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  ATerm l_36 (ATerm t)
  {
    ATerm h_36 = NULL,i_36 = NULL;
    t = not_null(f_36);
    if(((i_36 != NULL) && (i_36 != t)))
      _fail(t);
    else
      i_36 = t;
    t = not_null(g_36);
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = not_null(i_36);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm j_36 = NULL;
        ATerm m_36 (ATerm t)
        {
          ATerm k_36 = NULL;
          t = not_null(j_36);
          if(((k_36 != NULL) && (k_36 != t)))
            _fail(t);
          else
            k_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(h_36));
          t = h_125(t);
          return(t);
        }
        if(((j_36 != NULL) && (j_36 != t)))
          _fail(t);
        else
          j_36 = t;
        t = m_36(t);
        return(t);
      }
      t = SRTS_all(m_2, t);
    }
    return(t);
  }
  if(((e_36 != NULL) && (e_36 != t)))
    _fail(t);
  else
    e_36 = t;
  t = not_null(e_36);
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      t = l_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm n_36 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_124(t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = all_dist_1_0(n_36, t);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm rename_4_0 (ATerm y_123 (ATerm, ATerm (ATerm)), ATerm z_123 (ATerm), ATerm a_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_124 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm p_36 = NULL;
  ATerm r_36 (ATerm t)
  {
    ATerm q_36 = NULL;
    t = not_null(p_36);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), (ATerm) ATempty);
    {
      ATerm s_36 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(y_123, t);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = RnBinding_2_0(z_123, b_124, t);
              t = DistBinding_2_0(s_36, a_124, t);
            }
          return(t);
        }
        t = env_alltd_1_0(n_2, t);
        return(t);
      }
      t = s_36(t);
    }
    return(t);
  }
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  t = r_36(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, o_2, tboundin_3_0, tpaste_1_0, t);
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  ATerm z_36 (ATerm t)
  {
    ATerm y_36 = NULL;
    t = not_null(w_36);
    if(((y_36 != NULL) && (y_36 != t)))
      _fail(t);
    else
      y_36 = t;
    t = not_null(y_36);
    return(t);
  }
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  t = not_null(v_36);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_36 = ATgetFirst((ATermList) t);
      x_36 = (ATerm) ATgetNext((ATermList) t);
      t = z_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  ATerm h_37 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL;
    t = not_null(d_37);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = not_null(e_37);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(g_37));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  t = not_null(c_37);
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      t = h_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm k_37 = NULL;
  ATerm o_37 (ATerm t)
  {
    ATerm l_37 = NULL,m_37 = NULL;
    t = not_null(k_37);
    if(((l_37 != NULL) && (l_37 != t)))
      _fail(t);
    else
      l_37 = t;
    t = not_null(k_37);
    {
      ATerm n_37 = NULL;
      ATerm p_37 (ATerm t)
      {
        t = not_null(n_37);
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        t = not_null(n_37);
        return(t);
      }
      t = term_g_17;
      t = k_123(t);
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      t = p_37(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(l_37));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = o_37(t);
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  ATerm t_42 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,a_42 = NULL,b_42 = NULL;
    t = not_null(p_41);
    if(((u_41 != NULL) && (u_41 != t)))
      _fail(t);
    else
      u_41 = t;
    t = not_null(r_41);
    if(((v_41 != NULL) && (v_41 != t)))
      _fail(t);
    else
      v_41 = t;
    t = not_null(p_41);
    {
      ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
      ATerm u_42 (ATerm t)
      {
        ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
        ATerm v_42 (ATerm t)
        {
          ATerm k_42 = NULL,s_42 = NULL;
          ATerm z_42 (ATerm t)
          {
            t = not_null(s_42);
            if(((b_42 != NULL) && (b_42 != t)))
              _fail(t);
            else
              b_42 = t;
            t = not_null(s_42);
            {
              ATerm h_17;
              h_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_41)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
              {
                ATerm p_2 (ATerm t)
                {
                  t = term_x_7;
                  return(t);
                }
                t = assert_1_0(p_2, t);
              }
              t = h_17;
            }
            return(t);
          }
          t = not_null(g_42);
          if(((v_41 != NULL) && (v_41 != t)))
            _fail(t);
          else
            v_41 = t;
          t = not_null(h_42);
          if(((y_41 != NULL) && (y_41 != t)))
            _fail(t);
          else
            y_41 = t;
          t = not_null(i_42);
          if(((a_42 != NULL) && (a_42 != t)))
            _fail(t);
          else
            a_42 = t;
          t = not_null(j_42);
          if(((x_41 != NULL) && (x_41 != t)))
            _fail(t);
          else
            x_41 = t;
          t = not_null(f_42);
          {
            ATerm l_42 = NULL,n_42 = NULL,r_42 = NULL;
            ATerm y_42 (ATerm t)
            {
              t = not_null(r_42);
              if(((k_42 != NULL) && (k_42 != t)))
                _fail(t);
              else
                k_42 = t;
              t = not_null(r_42);
              return(t);
            }
            ATerm i_17;
            i_17 = t;
            {
              ATerm m_42 = NULL;
              ATerm w_42 (ATerm t)
              {
                t = not_null(m_42);
                if(((l_42 != NULL) && (l_42 != t)))
                  _fail(t);
                else
                  l_42 = t;
                t = not_null(m_42);
                return(t);
              }
              t = not_null(y_41);
              t = length_0_0(t);
              if(((m_42 != NULL) && (m_42 != t)))
                _fail(t);
              else
                m_42 = t;
              t = w_42(t);
            }
            t = i_17;
            {
              ATerm q_42 = NULL;
              ATerm x_42 (ATerm t)
              {
                t = not_null(q_42);
                if(((n_42 != NULL) && (n_42 != t)))
                  _fail(t);
                else
                  n_42 = t;
                t = not_null(q_42);
                return(t);
              }
              t = not_null(a_42);
              t = length_0_0(t);
              if(((q_42 != NULL) && (q_42 != t)))
                _fail(t);
              else
                q_42 = t;
              t = x_42(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_42), not_null(n_42));
              t = add_0_0(t);
              if(((r_42 != NULL) && (r_42 != t)))
                _fail(t);
              else
                r_42 = t;
              t = y_42(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), term_j_8);
            t = gt_0_0(t);
            t = new_0_0(t);
            if(((s_42 != NULL) && (s_42 != t)))
              _fail(t);
            else
              s_42 = t;
            t = z_42(t);
          }
          return(t);
        }
        t = not_null(e_42);
        if(((w_41 != NULL) && (w_41 != t)))
          _fail(t);
        else
          w_41 = t;
        t = not_null(w_41);
        t = strename_0_0(t);
        if(((f_42 != NULL) && (f_42 != t)))
          _fail(t);
        else
          f_42 = t;
        t = not_null(f_42);
        if(match_cons(t, sym_SDefT_4))
          {
            g_42 = ATgetArgument(t, 0);
            h_42 = ATgetArgument(t, 1);
            i_42 = ATgetArgument(t, 2);
            j_42 = ATgetArgument(t, 3);
            t = v_42(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(u_41);
      {
        ATerm q_2 (ATerm t)
        {
          t = term_h_18;
          return(t);
        }
        t = rewrite_1_0(q_2, t);
        if(((c_42 != NULL) && (c_42 != t)))
          _fail(t);
        else
          c_42 = t;
        t = not_null(c_42);
        if(match_cons(t, sym_Defined_2))
          {
            d_42 = ATgetArgument(t, 0);
            e_42 = ATgetArgument(t, 1);
            t = not_null(d_42);
            if(match_string(t, "g_0"))
              {
                t = u_42(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(b_42), not_null(y_41), not_null(a_42), not_null(x_41))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_42)), (ATerm)ATempty, (ATerm) ATempty));
    }
    return(t);
  }
  if(((p_41 != NULL) && (p_41 != t)))
    _fail(t);
  else
    p_41 = t;
  t = not_null(p_41);
  if(match_cons(t, sym_CallT_3))
    {
      q_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
      t_41 = ATgetArgument(t, 2);
      t = not_null(q_41);
      if(match_cons(t, sym_SVar_1))
        {
          r_41 = ATgetArgument(t, 0);
          t = not_null(s_41);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(t_41);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_42(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  ATerm i_43 (ATerm t)
  {
    ATerm h_43 = NULL;
    t = not_null(d_43);
    if(((h_43 != NULL) && (h_43 != t)))
      _fail(t);
    else
      h_43 = t;
    t = not_null(c_43);
    {
      ATerm i_18;
      i_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_43)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = assert_1_0(r_2, t);
      }
      t = i_18;
    }
    return(t);
  }
  if(((c_43 != NULL) && (c_43 != t)))
    _fail(t);
  else
    c_43 = t;
  t = not_null(c_43);
  if(match_cons(t, sym_SDefT_4))
    {
      d_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
      f_43 = ATgetArgument(t, 2);
      g_43 = ATgetArgument(t, 3);
      t = i_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  ATerm p_43 (ATerm t)
  {
    ATerm o_43 = NULL;
    t = not_null(n_43);
    if(((o_43 != NULL) && (o_43 != t)))
      _fail(t);
    else
      o_43 = t;
    t = not_null(o_43);
    return(t);
  }
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  t = not_null(l_43);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_43 = ATgetFirst((ATermList) t);
      n_43 = (ATerm) ATgetNext((ATermList) t);
      t = p_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  ATerm a_44 (ATerm t)
  {
    ATerm w_43 = NULL,x_43 = NULL;
    t = not_null(u_43);
    if(((w_43 != NULL) && (w_43 != t)))
      _fail(t);
    else
      w_43 = t;
    t = not_null(v_43);
    if(((x_43 != NULL) && (x_43 != t)))
      _fail(t);
    else
      x_43 = t;
    t = not_null(t_43);
    {
      ATerm j_18;
      j_18 = t;
      {
        ATerm y_43 = NULL;
        ATerm z_43 = NULL;
        ATerm b_44 (ATerm t)
        {
          t = not_null(z_43);
          if(((y_43 != NULL) && (y_43 != t)))
            _fail(t);
          else
            y_43 = t;
          t = not_null(z_43);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_43), not_null(x_43));
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = (ATerm) ATempty;
            }
          if(((z_43 != NULL) && (z_43 != t)))
            _fail(t);
          else
            z_43 = t;
          t = b_44(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_43), not_null(x_43), not_null(y_43));
        t = table_put_0_0(t);
      }
      t = j_18;
    }
    return(t);
  }
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  t = not_null(t_43);
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      t = a_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  ATerm m_18;
  m_18 = t;
  {
    ATerm j_44 = NULL;
    ATerm p_44 (ATerm t)
    {
      ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
      ATerm q_44 (ATerm t)
      {
        t = not_null(l_44);
        if(((h_44 != NULL) && (h_44 != t)))
          _fail(t);
        else
          h_44 = t;
        t = not_null(m_44);
        if(((g_44 != NULL) && (g_44 != t)))
          _fail(t);
        else
          g_44 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(i_44), term_g_19, not_null(g_44));
        t = table_put_0_0(t);
        t = not_null(h_44);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm n_44 = NULL;
            ATerm r_44 (ATerm t)
            {
              ATerm o_44 = NULL;
              t = not_null(n_44);
              if(((o_44 != NULL) && (o_44 != t)))
                _fail(t);
              else
                o_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_44), not_null(o_44));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((n_44 != NULL) && (n_44 != t)))
              _fail(t);
            else
              n_44 = t;
            t = r_44(t);
            return(t);
          }
          t = map_1_0(s_2, t);
        }
        return(t);
      }
      t = not_null(j_44);
      if(((i_44 != NULL) && (i_44 != t)))
        _fail(t);
      else
        i_44 = t;
      t = not_null(j_44);
      {
        ATerm h_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_44), term_g_19);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = h_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((k_44 != NULL) && (k_44 != t)))
          _fail(t);
        else
          k_44 = t;
        t = not_null(k_44);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_44 = ATgetFirst((ATermList) t);
            m_44 = (ATerm) ATgetNext((ATermList) t);
            t = q_44(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = f_123(t);
    if(((j_44 != NULL) && (j_44 != t)))
      _fail(t);
    else
      j_44 = t;
    t = p_44(t);
  }
  t = m_18;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  ATerm t_19 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_114(t);
      t = f_114(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = t_19;
      t = f_114(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm u_44 = NULL;
  ATerm f_20;
  f_20 = t;
  {
    ATerm z_44 = NULL;
    ATerm c_45 (ATerm t)
    {
      ATerm a_45 = NULL;
      t = not_null(z_44);
      if(((u_44 != NULL) && (u_44 != t)))
        _fail(t);
      else
        u_44 = t;
      t = not_null(z_44);
      {
        ATerm b_45 = NULL;
        ATerm d_45 (ATerm t)
        {
          t = not_null(b_45);
          if(((a_45 != NULL) && (a_45 != t)))
            _fail(t);
          else
            a_45 = t;
          t = not_null(b_45);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), term_g_19);
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = (ATerm) ATempty;
            }
          if(((b_45 != NULL) && (b_45 != t)))
            _fail(t);
          else
            b_45 = t;
          t = d_45(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_44), term_g_19, (ATerm) ATinsert(CheckATermList(not_null(a_45)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = e_123(t);
    if(((z_44 != NULL) && (z_44 != t)))
      _fail(t);
    else
      z_44 = t;
    t = c_45(t);
  }
  t = f_20;
  return(t);
}
ATerm scope_2_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t)
{
  t = begin_scope_1_0(g_123, t);
  {
    ATerm t_2 (ATerm t)
    {
      t = end_scope_1_0(g_123, t);
      return(t);
    }
    t = restore_always_2_0(h_123, t_2, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0_0(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        {
          ATerm w_2 (ATerm t)
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = InlineCall0_0_0(t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                t = InlineCall_0_0(t);
              }
            return(t);
          }
          t = repeat_1_0(w_2, t);
        }
      }
    t = SRTS_all(inline_sdef_0_0, t);
    return(t);
  }
  t = scope_2_0(u_2, v_2, t);
  return(t);
}
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  ATerm y_45 (ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
    t = not_null(n_45);
    if(((p_45 != NULL) && (p_45 != t)))
      _fail(t);
    else
      p_45 = t;
    t = not_null(o_45);
    if(((q_45 != NULL) && (q_45 != t)))
      _fail(t);
    else
      q_45 = t;
    t = not_null(m_45);
    {
      ATerm a_21;
      a_21 = t;
      {
        ATerm u_45 = NULL;
        ATerm z_45 (ATerm t)
        {
          ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
          ATerm a_46 (ATerm t)
          {
            t = not_null(w_45);
            if(((s_45 != NULL) && (s_45 != t)))
              _fail(t);
            else
              s_45 = t;
            t = not_null(x_45);
            if(((t_45 != NULL) && (t_45 != t)))
              _fail(t);
            else
              t_45 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_45), term_g_19, (ATerm) ATinsert(CheckATermList(not_null(t_45)), (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(p_45))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(u_45);
          if(((r_45 != NULL) && (r_45 != t)))
            _fail(t);
          else
            r_45 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_45), not_null(p_45), not_null(q_45));
          t = table_push_0_0(t);
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), term_g_19);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((v_45 != NULL) && (v_45 != t)))
              _fail(t);
            else
              v_45 = t;
            t = not_null(v_45);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_45 = ATgetFirst((ATermList) t);
                x_45 = (ATerm) ATgetNext((ATermList) t);
                t = a_46(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = i_123(t);
        if(((u_45 != NULL) && (u_45 != t)))
          _fail(t);
        else
          u_45 = t;
        t = z_45(t);
      }
      t = a_21;
    }
    return(t);
  }
  if(((m_45 != NULL) && (m_45 != t)))
    _fail(t);
  else
    m_45 = t;
  t = not_null(m_45);
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
      t = y_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  ATerm k_46 (ATerm t)
  {
    ATerm i_46 = NULL,j_46 = NULL;
    t = not_null(d_46);
    if(((j_46 != NULL) && (j_46 != t)))
      _fail(t);
    else
      j_46 = t;
    t = not_null(e_46);
    if(((i_46 != NULL) && (i_46 != t)))
      _fail(t);
    else
      i_46 = t;
    t = not_null(d_46);
    {
      ATerm s_21;
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_t_21, not_null(j_46)));
      {
        ATerm x_2 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = assert_1_0(x_2, t);
      }
      t = s_21;
      {
        ATerm g_22;
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_22, not_null(j_46)));
        {
          ATerm y_2 (ATerm t)
          {
            t = term_h_18;
            return(t);
          }
          t = assert_1_0(y_2, t);
        }
        t = g_22;
      }
    }
    return(t);
  }
  if(((d_46 != NULL) && (d_46 != t)))
    _fail(t);
  else
    d_46 = t;
  t = not_null(d_46);
  if(match_cons(t, sym_SDefT_4))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
      g_46 = ATgetArgument(t, 2);
      h_46 = ATgetArgument(t, 3);
      t = k_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm i_22 = t;
  if((PushChoice() == 0))
    {
      t = gt_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_22;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = z_121(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
        ATerm d_47 (ATerm t)
        {
          ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,b_47 = NULL;
          t = not_null(v_46);
          if(((x_46 != NULL) && (x_46 != t)))
            _fail(t);
          else
            x_46 = t;
          t = not_null(w_46);
          if(((y_46 != NULL) && (y_46 != t)))
            _fail(t);
          else
            y_46 = t;
          t = not_null(u_46);
          {
            ATerm z_22;
            z_22 = t;
            {
              ATerm a_47 = NULL;
              ATerm e_47 (ATerm t)
              {
                t = not_null(a_47);
                if(((z_46 != NULL) && (z_46 != t)))
                  _fail(t);
                else
                  z_46 = t;
                t = not_null(a_47);
                return(t);
              }
              t = not_null(x_46);
              t = b_122(t);
              if(((a_47 != NULL) && (a_47 != t)))
                _fail(t);
              else
                a_47 = t;
              t = e_47(t);
            }
            t = z_22;
            {
              ATerm c_47 = NULL;
              ATerm f_47 (ATerm t)
              {
                t = not_null(c_47);
                if(((b_47 != NULL) && (b_47 != t)))
                  _fail(t);
                else
                  b_47 = t;
                t = not_null(c_47);
                return(t);
              }
              t = not_null(y_46);
              t = foldr_3_0(z_121, a_122, b_122, t);
              if(((c_47 != NULL) && (c_47 != t)))
                _fail(t);
              else
                c_47 = t;
              t = f_47(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(b_47));
              t = a_122(t);
            }
          }
          return(t);
        }
        if(((u_46 != NULL) && (u_46 != t)))
          _fail(t);
        else
          u_46 = t;
        t = not_null(u_46);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_46 = ATgetFirst((ATermList) t);
            w_46 = (ATerm) ATgetNext((ATermList) t);
            t = d_47(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm p_47 = NULL;
  ATerm x_47 (ATerm t)
  {
    ATerm q_47 = NULL,r_47 = NULL;
    t = not_null(p_47);
    if(((q_47 != NULL) && (q_47 != t)))
      _fail(t);
    else
      q_47 = t;
    t = not_null(p_47);
    {
      ATerm s_47 = NULL;
      ATerm y_47 (ATerm t)
      {
        ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
        ATerm z_47 (ATerm t)
        {
          t = not_null(w_47);
          if(((r_47 != NULL) && (r_47 != t)))
            _fail(t);
          else
            r_47 = t;
          t = not_null(u_47);
          return(t);
        }
        t = not_null(s_47);
        if(((t_47 != NULL) && (t_47 != t)))
          _fail(t);
        else
          t_47 = t;
        t = not_null(s_47);
        t = SSL_explode_term(not_null(t_47));
        if(((u_47 != NULL) && (u_47 != t)))
          _fail(t);
        else
          u_47 = t;
        t = not_null(u_47);
        if(match_cons(t, sym__2))
          {
            v_47 = ATgetArgument(t, 0);
            w_47 = ATgetArgument(t, 1);
            t = z_47(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(q_47);
      if(((s_47 != NULL) && (s_47 != t)))
        _fail(t);
      else
        s_47 = t;
      t = y_47(t);
      t = not_null(r_47);
      t = foldr_3_0(x_119, y_119, z_119, t);
    }
    return(t);
  }
  if(((p_47 != NULL) && (p_47 != t)))
    _fail(t);
  else
    p_47 = t;
  t = x_47(t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        t = term_k_8;
        return(t);
      }
      t = crush_3_0(z_2, add_0_0, term_size_0_0, t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm a_48 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            t = term_k_8;
            return(t);
          }
          t = crush_3_0(a_3, add_0_0, a_48, t);
          return(t);
        }
        t = a_48(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  ATerm j_49 (ATerm t)
  {
    ATerm m_48 = NULL,r_48 = NULL,s_48 = NULL,w_48 = NULL,z_48 = NULL,b_49 = NULL;
    ATerm l_49 (ATerm t)
    {
      ATerm c_49 = NULL,d_49 = NULL;
      ATerm m_49 (ATerm t)
      {
        ATerm e_49 = NULL,f_49 = NULL;
        ATerm n_49 (ATerm t)
        {
          ATerm g_49 = NULL,h_49 = NULL;
          t = not_null(f_49);
          if(((g_49 != NULL) && (g_49 != t)))
            _fail(t);
          else
            g_49 = t;
          t = not_null(f_49);
          {
            ATerm i_49 = NULL;
            ATerm o_49 (ATerm t)
            {
              t = not_null(i_49);
              if(((h_49 != NULL) && (h_49 != t)))
                _fail(t);
              else
                h_49 = t;
              t = not_null(i_49);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(c_49), not_null(e_49), not_null(g_49)), not_null(z_48));
            if(((i_49 != NULL) && (i_49 != t)))
              _fail(t);
            else
              i_49 = t;
            t = o_49(t);
            t = not_null(h_49);
          }
          return(t);
        }
        t = not_null(d_49);
        if(((e_49 != NULL) && (e_49 != t)))
          _fail(t);
        else
          e_49 = t;
        t = not_null(w_48);
        t = z_99(t);
        if(((f_49 != NULL) && (f_49 != t)))
          _fail(t);
        else
          f_49 = t;
        t = n_49(t);
        return(t);
      }
      t = not_null(b_49);
      if(((c_49 != NULL) && (c_49 != t)))
        _fail(t);
      else
        c_49 = t;
      t = not_null(s_48);
      t = y_99(t);
      if(((d_49 != NULL) && (d_49 != t)))
        _fail(t);
      else
        d_49 = t;
      t = m_49(t);
      return(t);
    }
    t = not_null(i_48);
    if(((m_48 != NULL) && (m_48 != t)))
      _fail(t);
    else
      m_48 = t;
    t = not_null(j_48);
    if(((r_48 != NULL) && (r_48 != t)))
      _fail(t);
    else
      r_48 = t;
    t = not_null(k_48);
    if(((s_48 != NULL) && (s_48 != t)))
      _fail(t);
    else
      s_48 = t;
    t = not_null(l_48);
    if(((w_48 != NULL) && (w_48 != t)))
      _fail(t);
    else
      w_48 = t;
    t = not_null(i_48);
    {
      ATerm a_49 = NULL;
      ATerm k_49 (ATerm t)
      {
        t = not_null(a_49);
        if(((z_48 != NULL) && (z_48 != t)))
          _fail(t);
        else
          z_48 = t;
        t = not_null(a_49);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_48));
      if(((a_49 != NULL) && (a_49 != t)))
        _fail(t);
      else
        a_49 = t;
      t = k_49(t);
      t = not_null(r_48);
      t = x_99(t);
      if(((b_49 != NULL) && (b_49 != t)))
        _fail(t);
      else
        b_49 = t;
      t = l_49(t);
    }
    return(t);
  }
  if(((i_48 != NULL) && (i_48 != t)))
    _fail(t);
  else
    i_48 = t;
  t = not_null(i_48);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      j_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
      l_48 = ATgetArgument(t, 2);
      t = j_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  ATerm r_50 (ATerm t)
  {
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,l_50 = NULL;
    ATerm t_50 (ATerm t)
    {
      ATerm m_50 = NULL,n_50 = NULL;
      ATerm u_50 (ATerm t)
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = not_null(n_50);
        if(((o_50 != NULL) && (o_50 != t)))
          _fail(t);
        else
          o_50 = t;
        t = not_null(n_50);
        {
          ATerm q_50 = NULL;
          ATerm v_50 (ATerm t)
          {
            t = not_null(q_50);
            if(((p_50 != NULL) && (p_50 != t)))
              _fail(t);
            else
              p_50 = t;
            t = not_null(q_50);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(m_50), not_null(o_50)), not_null(j_50));
          if(((q_50 != NULL) && (q_50 != t)))
            _fail(t);
          else
            q_50 = t;
          t = v_50(t);
          t = not_null(p_50);
        }
        return(t);
      }
      t = not_null(l_50);
      if(((m_50 != NULL) && (m_50 != t)))
        _fail(t);
      else
        m_50 = t;
      t = not_null(i_50);
      t = u_99(t);
      if(((n_50 != NULL) && (n_50 != t)))
        _fail(t);
      else
        n_50 = t;
      t = u_50(t);
      return(t);
    }
    t = not_null(d_50);
    if(((g_50 != NULL) && (g_50 != t)))
      _fail(t);
    else
      g_50 = t;
    t = not_null(e_50);
    if(((h_50 != NULL) && (h_50 != t)))
      _fail(t);
    else
      h_50 = t;
    t = not_null(f_50);
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = not_null(d_50);
    {
      ATerm k_50 = NULL;
      ATerm s_50 (ATerm t)
      {
        t = not_null(k_50);
        if(((j_50 != NULL) && (j_50 != t)))
          _fail(t);
        else
          j_50 = t;
        t = not_null(k_50);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_50));
      if(((k_50 != NULL) && (k_50 != t)))
        _fail(t);
      else
        k_50 = t;
      t = s_50(t);
      t = not_null(h_50);
      t = t_99(t);
      if(((l_50 != NULL) && (l_50 != t)))
        _fail(t);
      else
        l_50 = t;
      t = t_50(t);
    }
    return(t);
  }
  if(((d_50 != NULL) && (d_50 != t)))
    _fail(t);
  else
    d_50 = t;
  t = not_null(d_50);
  if(match_cons(t, sym_LChoice_2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
      t = r_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  ATerm q_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,k_51 = NULL;
    ATerm s_51 (ATerm t)
    {
      ATerm l_51 = NULL,m_51 = NULL;
      ATerm t_51 (ATerm t)
      {
        ATerm n_51 = NULL,o_51 = NULL;
        t = not_null(m_51);
        if(((n_51 != NULL) && (n_51 != t)))
          _fail(t);
        else
          n_51 = t;
        t = not_null(m_51);
        {
          ATerm p_51 = NULL;
          ATerm u_51 (ATerm t)
          {
            t = not_null(p_51);
            if(((o_51 != NULL) && (o_51 != t)))
              _fail(t);
            else
              o_51 = t;
            t = not_null(p_51);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_51), not_null(n_51)), not_null(i_51));
          if(((p_51 != NULL) && (p_51 != t)))
            _fail(t);
          else
            p_51 = t;
          t = u_51(t);
          t = not_null(o_51);
        }
        return(t);
      }
      t = not_null(k_51);
      if(((l_51 != NULL) && (l_51 != t)))
        _fail(t);
      else
        l_51 = t;
      t = not_null(h_51);
      t = s_98(t);
      if(((m_51 != NULL) && (m_51 != t)))
        _fail(t);
      else
        m_51 = t;
      t = t_51(t);
      return(t);
    }
    t = not_null(c_51);
    if(((f_51 != NULL) && (f_51 != t)))
      _fail(t);
    else
      f_51 = t;
    t = not_null(d_51);
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = not_null(e_51);
    if(((h_51 != NULL) && (h_51 != t)))
      _fail(t);
    else
      h_51 = t;
    t = not_null(c_51);
    {
      ATerm j_51 = NULL;
      ATerm r_51 (ATerm t)
      {
        t = not_null(j_51);
        if(((i_51 != NULL) && (i_51 != t)))
          _fail(t);
        else
          i_51 = t;
        t = not_null(j_51);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_51));
      if(((j_51 != NULL) && (j_51 != t)))
        _fail(t);
      else
        j_51 = t;
      t = r_51(t);
      t = not_null(g_51);
      t = r_98(t);
      if(((k_51 != NULL) && (k_51 != t)))
        _fail(t);
      else
        k_51 = t;
      t = s_51(t);
    }
    return(t);
  }
  if(((c_51 != NULL) && (c_51 != t)))
    _fail(t);
  else
    c_51 = t;
  t = not_null(c_51);
  if(match_cons(t, sym_Choice_2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      t = q_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,g_52 = NULL;
  ATerm s_52 (ATerm t)
  {
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,m_52 = NULL;
    ATerm u_52 (ATerm t)
    {
      ATerm n_52 = NULL,o_52 = NULL;
      ATerm v_52 (ATerm t)
      {
        ATerm p_52 = NULL,q_52 = NULL;
        t = not_null(o_52);
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
        t = not_null(o_52);
        {
          ATerm r_52 = NULL;
          ATerm w_52 (ATerm t)
          {
            t = not_null(r_52);
            if(((q_52 != NULL) && (q_52 != t)))
              _fail(t);
            else
              q_52 = t;
            t = not_null(r_52);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(n_52), not_null(p_52)), not_null(k_52));
          if(((r_52 != NULL) && (r_52 != t)))
            _fail(t);
          else
            r_52 = t;
          t = w_52(t);
          t = not_null(q_52);
        }
        return(t);
      }
      t = not_null(m_52);
      if(((n_52 != NULL) && (n_52 != t)))
        _fail(t);
      else
        n_52 = t;
      t = not_null(j_52);
      t = r_94(t);
      if(((o_52 != NULL) && (o_52 != t)))
        _fail(t);
      else
        o_52 = t;
      t = v_52(t);
      return(t);
    }
    t = not_null(c_52);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(d_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(g_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(c_52);
    {
      ATerm l_52 = NULL;
      ATerm t_52 (ATerm t)
      {
        t = not_null(l_52);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = not_null(l_52);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_52));
      if(((l_52 != NULL) && (l_52 != t)))
        _fail(t);
      else
        l_52 = t;
      t = t_52(t);
      t = not_null(i_52);
      t = q_94(t);
      if(((m_52 != NULL) && (m_52 != t)))
        _fail(t);
      else
        m_52 = t;
      t = u_52(t);
    }
    return(t);
  }
  if(((c_52 != NULL) && (c_52 != t)))
    _fail(t);
  else
    c_52 = t;
  t = not_null(c_52);
  if(match_cons(t, sym_Cong_2))
    {
      d_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      t = s_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  ATerm f_54 (ATerm t)
  {
    ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,v_53 = NULL;
    ATerm h_54 (ATerm t)
    {
      ATerm w_53 = NULL,x_53 = NULL;
      t = not_null(v_53);
      if(((w_53 != NULL) && (w_53 != t)))
        _fail(t);
      else
        w_53 = t;
      t = not_null(v_53);
      {
        ATerm e_54 = NULL;
        ATerm k_54 (ATerm t)
        {
          t = not_null(e_54);
          if(((x_53 != NULL) && (x_53 != t)))
            _fail(t);
          else
            x_53 = t;
          t = not_null(e_54);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_53)), not_null(i_53));
        if(((e_54 != NULL) && (e_54 != t)))
          _fail(t);
        else
          e_54 = t;
        t = k_54(t);
        t = not_null(x_53);
      }
      return(t);
    }
    t = not_null(c_53);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(d_53);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = not_null(c_53);
    {
      ATerm j_53 = NULL;
      ATerm g_54 (ATerm t)
      {
        t = not_null(j_53);
        if(((i_53 != NULL) && (i_53 != t)))
          _fail(t);
        else
          i_53 = t;
        t = not_null(j_53);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_53));
      if(((j_53 != NULL) && (j_53 != t)))
        _fail(t);
      else
        j_53 = t;
      t = g_54(t);
      t = not_null(h_53);
      t = k_99(t);
      if(((v_53 != NULL) && (v_53 != t)))
        _fail(t);
      else
        v_53 = t;
      t = h_54(t);
    }
    return(t);
  }
  if(((c_53 != NULL) && (c_53 != t)))
    _fail(t);
  else
    c_53 = t;
  t = not_null(c_53);
  if(match_cons(t, sym_Match_1))
    {
      d_53 = ATgetArgument(t, 0);
      t = f_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  ATerm f_55 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,z_54 = NULL;
    ATerm h_55 (ATerm t)
    {
      ATerm a_55 = NULL,b_55 = NULL;
      ATerm i_55 (ATerm t)
      {
        ATerm c_55 = NULL,d_55 = NULL;
        t = not_null(b_55);
        if(((c_55 != NULL) && (c_55 != t)))
          _fail(t);
        else
          c_55 = t;
        t = not_null(b_55);
        {
          ATerm e_55 = NULL;
          ATerm q_55 (ATerm t)
          {
            t = not_null(e_55);
            if(((d_55 != NULL) && (d_55 != t)))
              _fail(t);
            else
              d_55 = t;
            t = not_null(e_55);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(a_55), not_null(c_55)), not_null(x_54));
          if(((e_55 != NULL) && (e_55 != t)))
            _fail(t);
          else
            e_55 = t;
          t = q_55(t);
          t = not_null(d_55);
        }
        return(t);
      }
      t = not_null(z_54);
      if(((a_55 != NULL) && (a_55 != t)))
        _fail(t);
      else
        a_55 = t;
      t = not_null(w_54);
      t = s_99(t);
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
      t = i_55(t);
      return(t);
    }
    t = not_null(r_54);
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = not_null(s_54);
    if(((v_54 != NULL) && (v_54 != t)))
      _fail(t);
    else
      v_54 = t;
    t = not_null(t_54);
    if(((w_54 != NULL) && (w_54 != t)))
      _fail(t);
    else
      w_54 = t;
    t = not_null(r_54);
    {
      ATerm y_54 = NULL;
      ATerm g_55 (ATerm t)
      {
        t = not_null(y_54);
        if(((x_54 != NULL) && (x_54 != t)))
          _fail(t);
        else
          x_54 = t;
        t = not_null(y_54);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_54));
      if(((y_54 != NULL) && (y_54 != t)))
        _fail(t);
      else
        y_54 = t;
      t = g_55(t);
      t = not_null(v_54);
      t = r_99(t);
      if(((z_54 != NULL) && (z_54 != t)))
        _fail(t);
      else
        z_54 = t;
      t = h_55(t);
    }
    return(t);
  }
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  t = not_null(r_54);
  if(match_cons(t, sym_Seq_2))
    {
      s_54 = ATgetArgument(t, 0);
      t_54 = ATgetArgument(t, 1);
      t = f_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  ATerm y_56 (ATerm t)
  {
    ATerm a_56 = NULL,h_56 = NULL,n_56 = NULL,q_56 = NULL,s_56 = NULL;
    ATerm d_57 (ATerm t)
    {
      ATerm t_56 = NULL,u_56 = NULL;
      ATerm e_57 (ATerm t)
      {
        ATerm v_56 = NULL,w_56 = NULL;
        t = not_null(u_56);
        if(((v_56 != NULL) && (v_56 != t)))
          _fail(t);
        else
          v_56 = t;
        t = not_null(u_56);
        {
          ATerm x_56 = NULL;
          ATerm f_57 (ATerm t)
          {
            t = not_null(x_56);
            if(((w_56 != NULL) && (w_56 != t)))
              _fail(t);
            else
              w_56 = t;
            t = not_null(x_56);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_56), not_null(v_56)), not_null(q_56));
          if(((x_56 != NULL) && (x_56 != t)))
            _fail(t);
          else
            x_56 = t;
          t = f_57(t);
          t = not_null(w_56);
        }
        return(t);
      }
      t = not_null(s_56);
      if(((t_56 != NULL) && (t_56 != t)))
        _fail(t);
      else
        t_56 = t;
      t = not_null(n_56);
      t = o_99(t);
      if(((u_56 != NULL) && (u_56 != t)))
        _fail(t);
      else
        u_56 = t;
      t = e_57(t);
      return(t);
    }
    t = not_null(x_55);
    if(((a_56 != NULL) && (a_56 != t)))
      _fail(t);
    else
      a_56 = t;
    t = not_null(y_55);
    if(((h_56 != NULL) && (h_56 != t)))
      _fail(t);
    else
      h_56 = t;
    t = not_null(z_55);
    if(((n_56 != NULL) && (n_56 != t)))
      _fail(t);
    else
      n_56 = t;
    t = not_null(x_55);
    {
      ATerm r_56 = NULL;
      ATerm c_57 (ATerm t)
      {
        t = not_null(r_56);
        if(((q_56 != NULL) && (q_56 != t)))
          _fail(t);
        else
          q_56 = t;
        t = not_null(r_56);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_56));
      if(((r_56 != NULL) && (r_56 != t)))
        _fail(t);
      else
        r_56 = t;
      t = c_57(t);
      t = not_null(h_56);
      t = n_99(t);
      if(((s_56 != NULL) && (s_56 != t)))
        _fail(t);
      else
        s_56 = t;
      t = d_57(t);
    }
    return(t);
  }
  if(((x_55 != NULL) && (x_55 != t)))
    _fail(t);
  else
    x_55 = t;
  t = not_null(x_55);
  if(match_cons(t, sym_Scope_2))
    {
      y_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
      t = y_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  ATerm w_57 (ATerm t)
  {
    ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,s_57 = NULL;
    ATerm y_57 (ATerm t)
    {
      ATerm t_57 = NULL,u_57 = NULL;
      t = not_null(s_57);
      if(((t_57 != NULL) && (t_57 != t)))
        _fail(t);
      else
        t_57 = t;
      t = not_null(s_57);
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
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_57)), not_null(q_57));
        if(((v_57 != NULL) && (v_57 != t)))
          _fail(t);
        else
          v_57 = t;
        t = z_57(t);
        t = not_null(u_57);
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
      ATerm r_57 = NULL;
      ATerm x_57 (ATerm t)
      {
        t = not_null(r_57);
        if(((q_57 != NULL) && (q_57 != t)))
          _fail(t);
        else
          q_57 = t;
        t = not_null(r_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_57));
      if(((r_57 != NULL) && (r_57 != t)))
        _fail(t);
      else
        r_57 = t;
      t = x_57(t);
      t = not_null(o_57);
      t = l_99(t);
      if(((s_57 != NULL) && (s_57 != t)))
        _fail(t);
      else
        s_57 = t;
      t = y_57(t);
    }
    return(t);
  }
  if(((l_57 != NULL) && (l_57 != t)))
    _fail(t);
  else
    l_57 = t;
  t = not_null(l_57);
  if(match_cons(t, sym_Build_1))
    {
      m_57 = ATgetArgument(t, 0);
      t = w_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  ATerm p_58 (ATerm t)
  {
    ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,l_58 = NULL;
    ATerm r_58 (ATerm t)
    {
      ATerm m_58 = NULL,n_58 = NULL;
      t = not_null(l_58);
      if(((m_58 != NULL) && (m_58 != t)))
        _fail(t);
      else
        m_58 = t;
      t = not_null(l_58);
      {
        ATerm o_58 = NULL;
        ATerm s_58 (ATerm t)
        {
          t = not_null(o_58);
          if(((n_58 != NULL) && (n_58 != t)))
            _fail(t);
          else
            n_58 = t;
          t = not_null(o_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(m_58)), not_null(j_58));
        if(((o_58 != NULL) && (o_58 != t)))
          _fail(t);
        else
          o_58 = t;
        t = s_58(t);
        t = not_null(n_58);
      }
      return(t);
    }
    t = not_null(f_58);
    if(((h_58 != NULL) && (h_58 != t)))
      _fail(t);
    else
      h_58 = t;
    t = not_null(g_58);
    if(((i_58 != NULL) && (i_58 != t)))
      _fail(t);
    else
      i_58 = t;
    t = not_null(f_58);
    {
      ATerm k_58 = NULL;
      ATerm q_58 (ATerm t)
      {
        t = not_null(k_58);
        if(((j_58 != NULL) && (j_58 != t)))
          _fail(t);
        else
          j_58 = t;
        t = not_null(k_58);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_58));
      if(((k_58 != NULL) && (k_58 != t)))
        _fail(t);
      else
        k_58 = t;
      t = q_58(t);
      t = not_null(i_58);
      t = c_99(t);
      if(((l_58 != NULL) && (l_58 != t)))
        _fail(t);
      else
        l_58 = t;
      t = r_58(t);
    }
    return(t);
  }
  if(((f_58 != NULL) && (f_58 != t)))
    _fail(t);
  else
    f_58 = t;
  t = not_null(f_58);
  if(match_cons(t, sym_SVar_1))
    {
      g_58 = ATgetArgument(t, 0);
      t = p_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  ATerm s_59 (ATerm t)
  {
    ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,k_59 = NULL;
    ATerm u_59 (ATerm t)
    {
      ATerm l_59 = NULL,m_59 = NULL;
      ATerm v_59 (ATerm t)
      {
        ATerm n_59 = NULL,o_59 = NULL;
        ATerm w_59 (ATerm t)
        {
          ATerm p_59 = NULL,q_59 = NULL;
          t = not_null(o_59);
          if(((p_59 != NULL) && (p_59 != t)))
            _fail(t);
          else
            p_59 = t;
          t = not_null(o_59);
          {
            ATerm r_59 = NULL;
            ATerm x_59 (ATerm t)
            {
              t = not_null(r_59);
              if(((q_59 != NULL) && (q_59 != t)))
                _fail(t);
              else
                q_59 = t;
              t = not_null(r_59);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(l_59), not_null(n_59), not_null(p_59)), not_null(i_59));
            if(((r_59 != NULL) && (r_59 != t)))
              _fail(t);
            else
              r_59 = t;
            t = x_59(t);
            t = not_null(q_59);
          }
          return(t);
        }
        t = not_null(m_59);
        if(((n_59 != NULL) && (n_59 != t)))
          _fail(t);
        else
          n_59 = t;
        t = not_null(h_59);
        t = j_99(t);
        if(((o_59 != NULL) && (o_59 != t)))
          _fail(t);
        else
          o_59 = t;
        t = w_59(t);
        return(t);
      }
      t = not_null(k_59);
      if(((l_59 != NULL) && (l_59 != t)))
        _fail(t);
      else
        l_59 = t;
      t = not_null(g_59);
      t = i_99(t);
      if(((m_59 != NULL) && (m_59 != t)))
        _fail(t);
      else
        m_59 = t;
      t = v_59(t);
      return(t);
    }
    t = not_null(a_59);
    if(((e_59 != NULL) && (e_59 != t)))
      _fail(t);
    else
      e_59 = t;
    t = not_null(b_59);
    if(((f_59 != NULL) && (f_59 != t)))
      _fail(t);
    else
      f_59 = t;
    t = not_null(c_59);
    if(((g_59 != NULL) && (g_59 != t)))
      _fail(t);
    else
      g_59 = t;
    t = not_null(d_59);
    if(((h_59 != NULL) && (h_59 != t)))
      _fail(t);
    else
      h_59 = t;
    t = not_null(a_59);
    {
      ATerm j_59 = NULL;
      ATerm t_59 (ATerm t)
      {
        t = not_null(j_59);
        if(((i_59 != NULL) && (i_59 != t)))
          _fail(t);
        else
          i_59 = t;
        t = not_null(j_59);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_59));
      if(((j_59 != NULL) && (j_59 != t)))
        _fail(t);
      else
        j_59 = t;
      t = t_59(t);
      t = not_null(f_59);
      t = h_99(t);
      if(((k_59 != NULL) && (k_59 != t)))
        _fail(t);
      else
        k_59 = t;
      t = u_59(t);
    }
    return(t);
  }
  if(((a_59 != NULL) && (a_59 != t)))
    _fail(t);
  else
    a_59 = t;
  t = not_null(a_59);
  if(match_cons(t, sym_CallT_3))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
      d_59 = ATgetArgument(t, 2);
      t = s_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  ATerm c_60 = NULL;
  ATerm i_60 (ATerm t)
  {
    ATerm d_60 = NULL,e_60 = NULL,g_60 = NULL;
    t = not_null(c_60);
    if(((d_60 != NULL) && (d_60 != t)))
      _fail(t);
    else
      d_60 = t;
    t = not_null(c_60);
    {
      ATerm c_23;
      c_23 = t;
      {
        ATerm f_60 = NULL;
        ATerm j_60 (ATerm t)
        {
          t = not_null(f_60);
          if(((e_60 != NULL) && (e_60 != t)))
            _fail(t);
          else
            e_60 = t;
          t = not_null(f_60);
          return(t);
        }
        t = SSLgetAnnotations(not_null(d_60));
        if(((f_60 != NULL) && (f_60 != t)))
          _fail(t);
        else
          f_60 = t;
        t = j_60(t);
      }
      t = c_23;
      {
        ATerm h_60 = NULL;
        ATerm k_60 (ATerm t)
        {
          t = not_null(h_60);
          if(((g_60 != NULL) && (g_60 != t)))
            _fail(t);
          else
            g_60 = t;
          t = not_null(h_60);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(e_60));
        if(((h_60 != NULL) && (h_60 != t)))
          _fail(t);
        else
          h_60 = t;
        t = k_60(t);
        t = not_null(g_60);
      }
    }
    return(t);
  }
  if(((c_60 != NULL) && (c_60 != t)))
    _fail(t);
  else
    c_60 = t;
  t = not_null(c_60);
  if(match_cons(t, sym_Fail_0))
    {
      t = i_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  ATerm p_60 = NULL;
  ATerm v_60 (ATerm t)
  {
    ATerm q_60 = NULL,r_60 = NULL,t_60 = NULL;
    t = not_null(p_60);
    if(((q_60 != NULL) && (q_60 != t)))
      _fail(t);
    else
      q_60 = t;
    t = not_null(p_60);
    {
      ATerm d_23;
      d_23 = t;
      {
        ATerm s_60 = NULL;
        ATerm w_60 (ATerm t)
        {
          t = not_null(s_60);
          if(((r_60 != NULL) && (r_60 != t)))
            _fail(t);
          else
            r_60 = t;
          t = not_null(s_60);
          return(t);
        }
        t = SSLgetAnnotations(not_null(q_60));
        if(((s_60 != NULL) && (s_60 != t)))
          _fail(t);
        else
          s_60 = t;
        t = w_60(t);
      }
      t = d_23;
      {
        ATerm u_60 = NULL;
        ATerm x_60 (ATerm t)
        {
          t = not_null(u_60);
          if(((t_60 != NULL) && (t_60 != t)))
            _fail(t);
          else
            t_60 = t;
          t = not_null(u_60);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(r_60));
        if(((u_60 != NULL) && (u_60 != t)))
          _fail(t);
        else
          u_60 = t;
        t = x_60(t);
        t = not_null(t_60);
      }
    }
    return(t);
  }
  if(((p_60 != NULL) && (p_60 != t)))
    _fail(t);
  else
    p_60 = t;
  t = not_null(p_60);
  if(match_cons(t, sym_Id_0))
    {
      t = v_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm b_61 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0_0(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          ATerm g_23 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0_0(t);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = g_23;
              {
                ATerm l_24 = t;
                int w_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_3 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(b_3, _id, _id, t);
                    ;
                    LocalPopChoice(w_24);
                  }
                else
                  {
                    t = l_24;
                    {
                      ATerm x_24 = t;
                      int y_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1_0(_id, t);
                          ;
                          LocalPopChoice(y_24);
                        }
                      else
                        {
                          t = x_24;
                          {
                            ATerm g_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1_0(_id, t);
                                ;
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = g_25;
                                {
                                  ATerm s_25 = t;
                                  int t_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_3 (ATerm t)
                                      {
                                        t = Match_1_0(_id, t);
                                        return(t);
                                      }
                                      t = Seq_2_0(c_3, _id, t);
                                      ;
                                      LocalPopChoice(t_25);
                                    }
                                  else
                                    {
                                      t = s_25;
                                      {
                                        ATerm y_25 = t;
                                        int z_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Scope_2_0(_id, d_3, t);
                                            ;
                                            LocalPopChoice(z_25);
                                          }
                                        else
                                          {
                                            t = y_25;
                                            {
                                              ATerm e_26 = t;
                                              int f_26 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_3 (ATerm t)
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      t = Match_1_0(_id, t);
                                                      return(t);
                                                    }
                                                    t = Seq_2_0(f_3, _id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, e_3, t);
                                                  ;
                                                  LocalPopChoice(f_26);
                                                }
                                              else
                                                {
                                                  t = e_26;
                                                  {
                                                    ATerm n_26 = t;
                                                    int o_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_3 (ATerm t)
                                                        {
                                                          ATerm h_3 (ATerm t)
                                                          {
                                                            ATerm i_3 (ATerm t)
                                                            {
                                                              t = Match_1_0(_id, t);
                                                              return(t);
                                                            }
                                                            t = Seq_2_0(i_3, _id, t);
                                                            return(t);
                                                          }
                                                          t = Scope_2_0(_id, h_3, t);
                                                          return(t);
                                                        }
                                                        t = Seq_2_0(g_3, _id, t);
                                                        ;
                                                        LocalPopChoice(o_26);
                                                      }
                                                    else
                                                      {
                                                        t = n_26;
                                                        {
                                                          ATerm u_26 = t;
                                                          int v_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2_0(_id, _id, t);
                                                              ;
                                                              LocalPopChoice(v_26);
                                                            }
                                                          else
                                                            {
                                                              t = u_26;
                                                              {
                                                                ATerm w_26 = t;
                                                                int g_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(b_61, b_61, t);
                                                                    ;
                                                                    LocalPopChoice(g_27);
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_26;
                                                                    {
                                                                      ATerm h_27 = t;
                                                                      int p_27 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(b_61, b_61, t);
                                                                          ;
                                                                          LocalPopChoice(p_27);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_27;
                                                                          t = GuardedLChoice_3_0(b_61, b_61, b_61, t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = b_61(t);
  {
    ATerm q_27;
    q_27 = t;
    {
      ATerm z_60 = NULL;
      ATerm a_61 = NULL;
      ATerm c_61 (ATerm t)
      {
        t = not_null(a_61);
        if(((z_60 != NULL) && (z_60 != t)))
          _fail(t);
        else
          z_60 = t;
        t = not_null(a_61);
        return(t);
      }
      t = term_size_0_0(t);
      if(((a_61 != NULL) && (a_61 != t)))
        _fail(t);
      else
        a_61 = t;
      t = c_61(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), term_r_27);
      t = leq_0_0(t);
    }
    t = q_27;
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm d_61 (ATerm t)
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_112(t);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = SRTS_one(d_61, t);
      }
    return(t);
  }
  t = d_61(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  ATerm l_62 (ATerm t)
  {
    ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,y_61 = NULL;
    ATerm n_62 (ATerm t)
    {
      ATerm z_61 = NULL,a_62 = NULL;
      ATerm o_62 (ATerm t)
      {
        ATerm b_62 = NULL,c_62 = NULL;
        ATerm p_62 (ATerm t)
        {
          ATerm g_62 = NULL,h_62 = NULL;
          ATerm q_62 (ATerm t)
          {
            ATerm i_62 = NULL,j_62 = NULL;
            t = not_null(h_62);
            if(((i_62 != NULL) && (i_62 != t)))
              _fail(t);
            else
              i_62 = t;
            t = not_null(h_62);
            {
              ATerm k_62 = NULL;
              ATerm r_62 (ATerm t)
              {
                t = not_null(k_62);
                if(((j_62 != NULL) && (j_62 != t)))
                  _fail(t);
                else
                  j_62 = t;
                t = not_null(k_62);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(z_61), not_null(b_62), not_null(g_62), not_null(i_62)), not_null(w_61));
              if(((k_62 != NULL) && (k_62 != t)))
                _fail(t);
              else
                k_62 = t;
              t = r_62(t);
              t = not_null(j_62);
            }
            return(t);
          }
          t = not_null(c_62);
          if(((g_62 != NULL) && (g_62 != t)))
            _fail(t);
          else
            g_62 = t;
          t = not_null(v_61);
          t = y_101(t);
          if(((h_62 != NULL) && (h_62 != t)))
            _fail(t);
          else
            h_62 = t;
          t = q_62(t);
          return(t);
        }
        t = not_null(a_62);
        if(((b_62 != NULL) && (b_62 != t)))
          _fail(t);
        else
          b_62 = t;
        t = not_null(u_61);
        t = x_101(t);
        if(((c_62 != NULL) && (c_62 != t)))
          _fail(t);
        else
          c_62 = t;
        t = p_62(t);
        return(t);
      }
      t = not_null(y_61);
      if(((z_61 != NULL) && (z_61 != t)))
        _fail(t);
      else
        z_61 = t;
      t = not_null(t_61);
      t = w_101(t);
      if(((a_62 != NULL) && (a_62 != t)))
        _fail(t);
      else
        a_62 = t;
      t = o_62(t);
      return(t);
    }
    t = not_null(m_61);
    if(((r_61 != NULL) && (r_61 != t)))
      _fail(t);
    else
      r_61 = t;
    t = not_null(n_61);
    if(((s_61 != NULL) && (s_61 != t)))
      _fail(t);
    else
      s_61 = t;
    t = not_null(o_61);
    if(((t_61 != NULL) && (t_61 != t)))
      _fail(t);
    else
      t_61 = t;
    t = not_null(p_61);
    if(((u_61 != NULL) && (u_61 != t)))
      _fail(t);
    else
      u_61 = t;
    t = not_null(q_61);
    if(((v_61 != NULL) && (v_61 != t)))
      _fail(t);
    else
      v_61 = t;
    t = not_null(m_61);
    {
      ATerm x_61 = NULL;
      ATerm m_62 (ATerm t)
      {
        t = not_null(x_61);
        if(((w_61 != NULL) && (w_61 != t)))
          _fail(t);
        else
          w_61 = t;
        t = not_null(x_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_61));
      if(((x_61 != NULL) && (x_61 != t)))
        _fail(t);
      else
        x_61 = t;
      t = m_62(t);
      t = not_null(s_61);
      t = v_101(t);
      if(((y_61 != NULL) && (y_61 != t)))
        _fail(t);
      else
        y_61 = t;
      t = n_62(t);
    }
    return(t);
  }
  if(((m_61 != NULL) && (m_61 != t)))
    _fail(t);
  else
    m_61 = t;
  t = not_null(m_61);
  if(match_cons(t, sym_SDefT_4))
    {
      n_61 = ATgetArgument(t, 0);
      o_61 = ATgetArgument(t, 1);
      p_61 = ATgetArgument(t, 2);
      q_61 = ATgetArgument(t, 3);
      t = l_62(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm z_62 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm b_63 = NULL;
    ATerm h_63 (ATerm t)
    {
      t = not_null(b_63);
      if(((z_62 != NULL) && (z_62 != t)))
        _fail(t);
      else
        z_62 = t;
      t = not_null(b_63);
      return(t);
    }
    ATerm d_28 = t;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL;
        if(((a_63 != NULL) && (a_63 != t)))
          _fail(t);
        else
          a_63 = t;
        t = not_null(a_63);
        if(match_string(t, "main_0_0"))
          {
            t = not_null(a_63);
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
        t = d_28;
      }
    if(((b_63 != NULL) && (b_63 != t)))
      _fail(t);
    else
      b_63 = t;
    t = h_63(t);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm e_28;
    e_28 = t;
    {
      ATerm f_28 = t;
      if((PushChoice() == 0))
        {
          ATerm l_3 (ATerm t)
          {
            ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
            ATerm i_63 (ATerm t)
            {
              t = not_null(e_63);
              if(((z_62 != NULL) && (z_62 != t)))
                _fail(t);
              else
                z_62 = t;
              t = not_null(c_63);
              return(t);
            }
            if(((c_63 != NULL) && (c_63 != t)))
              _fail(t);
            else
              c_63 = t;
            t = not_null(c_63);
            if(match_cons(t, sym_CallT_3))
              {
                d_63 = ATgetArgument(t, 0);
                f_63 = ATgetArgument(t, 1);
                g_63 = ATgetArgument(t, 2);
                t = not_null(d_63);
                if(match_cons(t, sym_SVar_1))
                  {
                    e_63 = ATgetArgument(t, 0);
                    t = not_null(f_63);
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = not_null(g_63);
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = i_63(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = f_28;
        }
    }
    t = e_28;
    t = body_to_inline_0_0(t);
    return(t);
  }
  t = SDefT_4_0(j_3, _id, _id, k_3, t);
  return(t);
}
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm b_64 = NULL,e_64 = NULL,f_64 = NULL;
  ATerm z_65 (ATerm t)
  {
    ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,n_65 = NULL,p_65 = NULL,x_65 = NULL;
    t = not_null(e_64);
    if(((g_64 != NULL) && (g_64 != t)))
      _fail(t);
    else
      g_64 = t;
    t = not_null(f_64);
    if(((h_64 != NULL) && (h_64 != t)))
      _fail(t);
    else
      h_64 = t;
    t = not_null(b_64);
    {
      ATerm g_28;
      g_28 = t;
      {
        ATerm t_64 = NULL;
        ATerm b_66 (ATerm t)
        {
          ATerm w_64 = NULL;
          ATerm d_66 (ATerm t)
          {
            ATerm x_64 = NULL;
            ATerm e_66 (ATerm t)
            {
              ATerm y_64 = NULL;
              ATerm f_66 (ATerm t)
              {
                ATerm b_65 = NULL;
                ATerm h_66 (ATerm t)
                {
                  ATerm c_65 = NULL,m_65 = NULL;
                  ATerm k_66 (ATerm t)
                  {
                    t = not_null(m_65);
                    if(((s_64 != NULL) && (s_64 != t)))
                      _fail(t);
                    else
                      s_64 = t;
                    t = not_null(m_65);
                    return(t);
                  }
                  t = not_null(b_65);
                  if(((k_64 != NULL) && (k_64 != t)))
                    _fail(t);
                  else
                    k_64 = t;
                  t = not_null(b_65);
                  {
                    ATerm d_65 = NULL;
                    ATerm i_66 (ATerm t)
                    {
                      t = not_null(d_65);
                      if(((c_65 != NULL) && (c_65 != t)))
                        _fail(t);
                      else
                        c_65 = t;
                      t = not_null(d_65);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(r_64));
                    t = zip_1_0(_id, t);
                    if(((d_65 != NULL) && (d_65 != t)))
                      _fail(t);
                    else
                      d_65 = t;
                    t = i_66(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_65), not_null(h_64));
                    {
                      ATerm m_3 (ATerm t)
                      {
                        ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
                        ATerm j_66 (ATerm t)
                        {
                          ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
                          t = not_null(g_65);
                          if(((j_65 != NULL) && (j_65 != t)))
                            _fail(t);
                          else
                            j_65 = t;
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
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_65))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_65)))));
                          return(t);
                        }
                        if(((e_65 != NULL) && (e_65 != t)))
                          _fail(t);
                        else
                          e_65 = t;
                        t = not_null(e_65);
                        if(match_cons(t, sym__2))
                          {
                            f_65 = ATgetArgument(t, 0);
                            i_65 = ATgetArgument(t, 1);
                            t = not_null(f_65);
                            if(match_cons(t, sym__2))
                              {
                                g_65 = ATgetArgument(t, 0);
                                h_65 = ATgetArgument(t, 1);
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
                      t = zip_1_0(m_3, t);
                      if(((m_65 != NULL) && (m_65 != t)))
                        _fail(t);
                      else
                        m_65 = t;
                      t = k_66(t);
                    }
                  }
                  return(t);
                }
                t = not_null(y_64);
                if(((r_64 != NULL) && (r_64 != t)))
                  _fail(t);
                else
                  r_64 = t;
                t = not_null(r_64);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm z_64 = NULL;
                    ATerm a_65 = NULL;
                    ATerm g_66 (ATerm t)
                    {
                      t = not_null(a_65);
                      if(((z_64 != NULL) && (z_64 != t)))
                        _fail(t);
                      else
                        z_64 = t;
                      t = not_null(a_65);
                      return(t);
                    }
                    if(((a_65 != NULL) && (a_65 != t)))
                      _fail(t);
                    else
                      a_65 = t;
                    t = g_66(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_64));
                    return(t);
                  }
                  t = map_1_0(n_3, t);
                  if(((b_65 != NULL) && (b_65 != t)))
                    _fail(t);
                  else
                    b_65 = t;
                  t = h_66(t);
                }
                return(t);
              }
              t = not_null(x_64);
              if(((j_64 != NULL) && (j_64 != t)))
                _fail(t);
              else
                j_64 = t;
              t = not_null(h_64);
              t = map_1_0(new_0_0, t);
              if(((y_64 != NULL) && (y_64 != t)))
                _fail(t);
              else
                y_64 = t;
              t = f_66(t);
              return(t);
            }
            t = not_null(w_64);
            if(((i_64 != NULL) && (i_64 != t)))
              _fail(t);
            else
              i_64 = t;
            t = not_null(w_64);
            t = new_0_0(t);
            if(((x_64 != NULL) && (x_64 != t)))
              _fail(t);
            else
              x_64 = t;
            t = e_66(t);
            return(t);
          }
          t = not_null(t_64);
          if(((q_64 != NULL) && (q_64 != t)))
            _fail(t);
          else
            q_64 = t;
          t = not_null(q_64);
          {
            ATerm o_3 (ATerm t)
            {
              ATerm u_64 = NULL;
              ATerm v_64 = NULL;
              ATerm c_66 (ATerm t)
              {
                t = not_null(v_64);
                if(((u_64 != NULL) && (u_64 != t)))
                  _fail(t);
                else
                  u_64 = t;
                t = not_null(v_64);
                return(t);
              }
              if(((v_64 != NULL) && (v_64 != t)))
                _fail(t);
              else
                v_64 = t;
              t = c_66(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_64));
              return(t);
            }
            t = map_1_0(o_3, t);
            if(((w_64 != NULL) && (w_64 != t)))
              _fail(t);
            else
              w_64 = t;
            t = d_66(t);
          }
          return(t);
        }
        t = not_null(h_64);
        t = map_1_0(new_0_0, t);
        if(((t_64 != NULL) && (t_64 != t)))
          _fail(t);
        else
          t_64 = t;
        t = b_66(t);
      }
      t = g_28;
      {
        ATerm h_28;
        h_28 = t;
        {
          ATerm o_65 = NULL;
          ATerm l_66 (ATerm t)
          {
            t = not_null(o_65);
            if(((n_65 != NULL) && (n_65 != t)))
              _fail(t);
            else
              n_65 = t;
            t = not_null(o_65);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(r_64));
          t = conc_0_0(t);
          if(((o_65 != NULL) && (o_65 != t)))
            _fail(t);
          else
            o_65 = t;
          t = l_66(t);
        }
        t = h_28;
        {
          ATerm i_28;
          i_28 = t;
          {
            ATerm q_65 = NULL;
            ATerm m_66 (ATerm t)
            {
              t = not_null(q_65);
              if(((p_65 != NULL) && (p_65 != t)))
                _fail(t);
              else
                p_65 = t;
              t = not_null(q_65);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_64), not_null(i_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_64))));
            t = Mapp2_0_0(t);
            if(((q_65 != NULL) && (q_65 != t)))
              _fail(t);
            else
              q_65 = t;
            t = m_66(t);
          }
          t = i_28;
          {
            ATerm y_65 = NULL;
            ATerm n_66 (ATerm t)
            {
              t = not_null(y_65);
              if(((x_65 != NULL) && (x_65 != t)))
                _fail(t);
              else
                x_65 = t;
              t = not_null(y_65);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_64), not_null(k_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_64))));
            t = Bapp2_0_0(t);
            if(((y_65 != NULL) && (y_65 != t)))
              _fail(t);
            else
              y_65 = t;
            t = n_66(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(n_65)), not_null(j_64)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_64)), not_null(x_65))));
          }
        }
      }
    }
    return(t);
  }
  if(((b_64 != NULL) && (b_64 != t)))
    _fail(t);
  else
    b_64 = t;
  t = not_null(b_64);
  if(match_cons(t, sym_Cong_2))
    {
      e_64 = ATgetArgument(t, 0);
      f_64 = ATgetArgument(t, 1);
      t = z_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  ATerm n_68 (ATerm t)
  {
    ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL;
    t = not_null(f_67);
    if(((g_67 != NULL) && (g_67 != t)))
      _fail(t);
    else
      g_67 = t;
    t = not_null(e_67);
    {
      ATerm l_67 = NULL;
      ATerm q_68 (ATerm t)
      {
        ATerm p_67 = NULL;
        ATerm s_68 (ATerm t)
        {
          t = not_null(p_67);
          if(((k_67 != NULL) && (k_67 != t)))
            _fail(t);
          else
            k_67 = t;
          t = not_null(p_67);
          return(t);
        }
        t = not_null(l_67);
        if(((j_67 != NULL) && (j_67 != t)))
          _fail(t);
        else
          j_67 = t;
        t = not_null(g_67);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
            ATerm r_68 (ATerm t)
            {
              t = not_null(n_67);
              if(((h_67 != NULL) && (h_67 != t)))
                _fail(t);
              else
                h_67 = t;
              t = not_null(o_67);
              if(((i_67 != NULL) && (i_67 != t)))
                _fail(t);
              else
                i_67 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67));
              return(t);
            }
            if(((m_67 != NULL) && (m_67 != t)))
              _fail(t);
            else
              m_67 = t;
            t = not_null(m_67);
            if(match_cons(t, sym_Anno_2))
              {
                n_67 = ATgetArgument(t, 0);
                o_67 = ATgetArgument(t, 1);
                t = r_68(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(p_3, t);
          if(((p_67 != NULL) && (p_67 != t)))
            _fail(t);
          else
            p_67 = t;
          t = s_68(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((l_67 != NULL) && (l_67 != t)))
        _fail(t);
      else
        l_67 = t;
      t = q_68(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_67)), not_null(h_67))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_67))));
    }
    return(t);
  }
  ATerm o_68 (ATerm t)
  {
    ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
    t = not_null(f_67);
    if(((q_67 != NULL) && (q_67 != t)))
      _fail(t);
    else
      q_67 = t;
    t = not_null(e_67);
    {
      ATerm u_67 = NULL;
      ATerm t_68 (ATerm t)
      {
        ATerm x_67 = NULL;
        ATerm z_68 (ATerm t)
        {
          t = not_null(x_67);
          if(((t_67 != NULL) && (t_67 != t)))
            _fail(t);
          else
            t_67 = t;
          t = not_null(x_67);
          return(t);
        }
        t = not_null(u_67);
        if(((s_67 != NULL) && (s_67 != t)))
          _fail(t);
        else
          s_67 = t;
        t = not_null(q_67);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm v_67 = NULL,w_67 = NULL;
            ATerm y_68 (ATerm t)
            {
              t = not_null(w_67);
              if(((r_67 != NULL) && (r_67 != t)))
                _fail(t);
              else
                r_67 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67));
              return(t);
            }
            if(((v_67 != NULL) && (v_67 != t)))
              _fail(t);
            else
              v_67 = t;
            t = not_null(v_67);
            if(match_cons(t, sym_RootApp_1))
              {
                w_67 = ATgetArgument(t, 0);
                t = y_68(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          if(((x_67 != NULL) && (x_67 != t)))
            _fail(t);
          else
            x_67 = t;
          t = z_68(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((u_67 != NULL) && (u_67 != t)))
        _fail(t);
      else
        u_67 = t;
      t = t_68(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_67), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_67))));
    }
    return(t);
  }
  ATerm p_68 (ATerm t)
  {
    ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
    t = not_null(f_67);
    if(((y_67 != NULL) && (y_67 != t)))
      _fail(t);
    else
      y_67 = t;
    t = not_null(e_67);
    {
      ATerm d_68 = NULL;
      ATerm a_69 (ATerm t)
      {
        ATerm m_68 = NULL;
        ATerm c_69 (ATerm t)
        {
          t = not_null(m_68);
          if(((c_68 != NULL) && (c_68 != t)))
            _fail(t);
          else
            c_68 = t;
          t = not_null(m_68);
          return(t);
        }
        t = not_null(d_68);
        if(((b_68 != NULL) && (b_68 != t)))
          _fail(t);
        else
          b_68 = t;
        t = not_null(y_67);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
            ATerm b_69 (ATerm t)
            {
              t = not_null(f_68);
              if(((z_67 != NULL) && (z_67 != t)))
                _fail(t);
              else
                z_67 = t;
              t = not_null(g_68);
              if(((a_68 != NULL) && (a_68 != t)))
                _fail(t);
              else
                a_68 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68));
              return(t);
            }
            if(((e_68 != NULL) && (e_68 != t)))
              _fail(t);
            else
              e_68 = t;
            t = not_null(e_68);
            if(match_cons(t, sym_App_2))
              {
                f_68 = ATgetArgument(t, 0);
                g_68 = ATgetArgument(t, 1);
                t = b_69(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(r_3, t);
          if(((m_68 != NULL) && (m_68 != t)))
            _fail(t);
          else
            m_68 = t;
          t = c_69(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((d_68 != NULL) && (d_68 != t)))
        _fail(t);
      else
        d_68 = t;
      t = a_69(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(z_67), not_null(a_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_68))));
    }
    return(t);
  }
  if(((e_67 != NULL) && (e_67 != t)))
    _fail(t);
  else
    e_67 = t;
  t = not_null(e_67);
  if(match_cons(t, sym_Build_1))
    {
      f_67 = ATgetArgument(t, 0);
      {
        ATerm k_28 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_68(t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = k_28;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_68(t);
                  ;
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  t = p_68(t);
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  ATerm k_69 (ATerm t)
  {
    ATerm i_69 = NULL,j_69 = NULL;
    t = not_null(g_69);
    if(((i_69 != NULL) && (i_69 != t)))
      _fail(t);
    else
      i_69 = t;
    t = not_null(h_69);
    if(((j_69 != NULL) && (j_69 != t)))
      _fail(t);
    else
      j_69 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(j_69)), not_null(i_69));
    return(t);
  }
  if(((f_69 != NULL) && (f_69 != t)))
    _fail(t);
  else
    f_69 = t;
  t = not_null(f_69);
  if(match_cons(t, sym__2))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
      t = k_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,d_70 = NULL,e_70 = NULL,o_70 = NULL;
  ATerm b_71 (ATerm t)
  {
    ATerm p_70 = NULL,q_70 = NULL,z_70 = NULL,a_71 = NULL;
    t = not_null(r_69);
    if(((p_70 != NULL) && (p_70 != t)))
      _fail(t);
    else
      p_70 = t;
    t = not_null(s_69);
    if(((z_70 != NULL) && (z_70 != t)))
      _fail(t);
    else
      z_70 = t;
    t = not_null(e_70);
    if(((q_70 != NULL) && (q_70 != t)))
      _fail(t);
    else
      q_70 = t;
    t = not_null(o_70);
    if(((a_71 != NULL) && (a_71 != t)))
      _fail(t);
    else
      a_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_70), not_null(q_70)), (ATerm) ATmakeAppl(sym__2, not_null(z_70), not_null(a_71)));
    return(t);
  }
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = not_null(p_69);
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      d_70 = ATgetArgument(t, 1);
      t = not_null(q_69);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_69 = ATgetFirst((ATermList) t);
          s_69 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_70);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_70 = ATgetFirst((ATermList) t);
              o_70 = (ATerm) ATgetNext((ATermList) t);
              t = b_71(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  ATerm j_71 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((g_71 != NULL) && (g_71 != t)))
    _fail(t);
  else
    g_71 = t;
  t = not_null(g_71);
  if(match_cons(t, sym__2))
    {
      h_71 = ATgetArgument(t, 0);
      i_71 = ATgetArgument(t, 1);
      t = not_null(h_71);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(i_71);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_71(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t)
{
  ATerm k_71 (ATerm t)
  {
    ATerm a_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = a_30;
        t = k_115(t);
        t = _2_0(m_115, k_71, t);
        t = l_115(t);
      }
    return(t);
  }
  t = k_71(t);
  return(t);
}
ATerm zip_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, o_115, t);
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  ATerm i_75 (ATerm t)
  {
    ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,c_75 = NULL,e_75 = NULL,g_75 = NULL;
    t = not_null(o_72);
    if(((t_72 != NULL) && (t_72 != t)))
      _fail(t);
    else
      t_72 = t;
    t = not_null(p_72);
    if(((u_72 != NULL) && (u_72 != t)))
      _fail(t);
    else
      u_72 = t;
    t = not_null(r_72);
    if(((v_72 != NULL) && (v_72 != t)))
      _fail(t);
    else
      v_72 = t;
    t = not_null(j_72);
    {
      ATerm j_30;
      j_30 = t;
      {
        ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
        ATerm j_75 (ATerm t)
        {
          ATerm i_73 = NULL;
          ATerm l_75 (ATerm t)
          {
            ATerm j_73 = NULL,p_73 = NULL,q_73 = NULL;
            ATerm m_75 (ATerm t)
            {
              ATerm c_74 = NULL;
              ATerm c_77 (ATerm t)
              {
                ATerm d_74 = NULL,b_75 = NULL;
                ATerm f_77 (ATerm t)
                {
                  t = not_null(b_75);
                  if(((c_73 != NULL) && (c_73 != t)))
                    _fail(t);
                  else
                    c_73 = t;
                  t = not_null(b_75);
                  return(t);
                }
                t = not_null(c_74);
                if(((z_72 != NULL) && (z_72 != t)))
                  _fail(t);
                else
                  z_72 = t;
                t = not_null(c_74);
                {
                  ATerm e_74 = NULL;
                  ATerm d_77 (ATerm t)
                  {
                    t = not_null(e_74);
                    if(((d_74 != NULL) && (d_74 != t)))
                      _fail(t);
                    else
                      d_74 = t;
                    t = not_null(e_74);
                    return(t);
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_73), not_null(b_73));
                  t = zip_1_0(_id, t);
                  if(((e_74 != NULL) && (e_74 != t)))
                    _fail(t);
                  else
                    e_74 = t;
                  t = d_77(t);
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), (ATerm) ATinsert(CheckATermList(not_null(u_72)), not_null(v_72)));
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,n_74 = NULL,o_74 = NULL;
                      ATerm e_77 (ATerm t)
                      {
                        ATerm p_74 = NULL,q_74 = NULL,a_75 = NULL;
                        t = not_null(h_74);
                        if(((p_74 != NULL) && (p_74 != t)))
                          _fail(t);
                        else
                          p_74 = t;
                        t = not_null(n_74);
                        if(((q_74 != NULL) && (q_74 != t)))
                          _fail(t);
                        else
                          q_74 = t;
                        t = not_null(o_74);
                        if(((a_75 != NULL) && (a_75 != t)))
                          _fail(t);
                        else
                          a_75 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_74))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_75), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_74)))));
                        return(t);
                      }
                      if(((f_74 != NULL) && (f_74 != t)))
                        _fail(t);
                      else
                        f_74 = t;
                      t = not_null(f_74);
                      if(match_cons(t, sym__2))
                        {
                          g_74 = ATgetArgument(t, 0);
                          o_74 = ATgetArgument(t, 1);
                          t = not_null(g_74);
                          if(match_cons(t, sym__2))
                            {
                              h_74 = ATgetArgument(t, 0);
                              n_74 = ATgetArgument(t, 1);
                              t = e_77(t);
                            }
                          else
                            {
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
                    if(((b_75 != NULL) && (b_75 != t)))
                      _fail(t);
                    else
                      b_75 = t;
                    t = f_77(t);
                  }
                }
                return(t);
              }
              t = not_null(p_73);
              if(((y_72 != NULL) && (y_72 != t)))
                _fail(t);
              else
                y_72 = t;
              t = not_null(q_73);
              if(((b_73 != NULL) && (b_73 != t)))
                _fail(t);
              else
                b_73 = t;
              t = not_null(j_73);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm r_73 = NULL;
                  ATerm s_73 = NULL;
                  ATerm n_75 (ATerm t)
                  {
                    t = not_null(s_73);
                    if(((r_73 != NULL) && (r_73 != t)))
                      _fail(t);
                    else
                      r_73 = t;
                    t = not_null(s_73);
                    return(t);
                  }
                  if(((s_73 != NULL) && (s_73 != t)))
                    _fail(t);
                  else
                    s_73 = t;
                  t = n_75(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_73));
                  return(t);
                }
                t = map_1_0(t_3, t);
                if(((c_74 != NULL) && (c_74 != t)))
                  _fail(t);
                else
                  c_74 = t;
                t = c_77(t);
              }
              return(t);
            }
            t = not_null(i_73);
            if(((x_72 != NULL) && (x_72 != t)))
              _fail(t);
            else
              x_72 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(u_72)), not_null(v_72));
            t = map_1_0(new_0_0, t);
            if(((j_73 != NULL) && (j_73 != t)))
              _fail(t);
            else
              j_73 = t;
            t = not_null(j_73);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_73 = ATgetFirst((ATermList) t);
                q_73 = (ATerm) ATgetNext((ATermList) t);
                t = m_75(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(e_73);
          if(((w_72 != NULL) && (w_72 != t)))
            _fail(t);
          else
            w_72 = t;
          t = not_null(f_73);
          if(((a_73 != NULL) && (a_73 != t)))
            _fail(t);
          else
            a_73 = t;
          t = not_null(d_73);
          {
            ATerm u_3 (ATerm t)
            {
              ATerm g_73 = NULL;
              ATerm h_73 = NULL;
              ATerm k_75 (ATerm t)
              {
                t = not_null(h_73);
                if(((g_73 != NULL) && (g_73 != t)))
                  _fail(t);
                else
                  g_73 = t;
                t = not_null(h_73);
                return(t);
              }
              if(((h_73 != NULL) && (h_73 != t)))
                _fail(t);
              else
                h_73 = t;
              t = k_75(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73));
              return(t);
            }
            t = map_1_0(u_3, t);
            if(((i_73 != NULL) && (i_73 != t)))
              _fail(t);
            else
              i_73 = t;
            t = l_75(t);
          }
          return(t);
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(u_72)), not_null(v_72));
        t = map_1_0(new_0_0, t);
        if(((d_73 != NULL) && (d_73 != t)))
          _fail(t);
        else
          d_73 = t;
        t = not_null(d_73);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_73 = ATgetFirst((ATermList) t);
            f_73 = (ATerm) ATgetNext((ATermList) t);
            t = j_75(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = j_30;
      {
        ATerm k_30;
        k_30 = t;
        {
          ATerm d_75 = NULL;
          ATerm g_77 (ATerm t)
          {
            t = not_null(d_75);
            if(((c_75 != NULL) && (c_75 != t)))
              _fail(t);
            else
              c_75 = t;
            t = not_null(d_75);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_73), not_null(b_73));
          t = conc_0_0(t);
          if(((d_75 != NULL) && (d_75 != t)))
            _fail(t);
          else
            d_75 = t;
          t = g_77(t);
        }
        t = k_30;
        {
          ATerm l_30;
          l_30 = t;
          {
            ATerm f_75 = NULL;
            ATerm h_77 (ATerm t)
            {
              t = not_null(f_75);
              if(((e_75 != NULL) && (e_75 != t)))
                _fail(t);
              else
                e_75 = t;
              t = not_null(f_75);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_72), not_null(x_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72))));
            t = Mapp2_0_0(t);
            if(((f_75 != NULL) && (f_75 != t)))
              _fail(t);
            else
              f_75 = t;
            t = h_77(t);
          }
          t = l_30;
          {
            ATerm h_75 = NULL;
            ATerm i_77 (ATerm t)
            {
              t = not_null(h_75);
              if(((g_75 != NULL) && (g_75 != t)))
                _fail(t);
              else
                g_75 = t;
              t = not_null(h_75);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(t_72), not_null(z_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_72))));
            t = Bapp2_0_0(t);
            if(((h_75 != NULL) && (h_75 != t)))
              _fail(t);
            else
              h_75 = t;
            t = i_77(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(c_75)), not_null(y_72)), not_null(w_72)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_73)), not_null(g_75))));
          }
        }
      }
    }
    return(t);
  }
  if(((j_72 != NULL) && (j_72 != t)))
    _fail(t);
  else
    j_72 = t;
  t = not_null(j_72);
  if(match_cons(t, sym_Call_2))
    {
      k_72 = ATgetArgument(t, 0);
      m_72 = ATgetArgument(t, 1);
      t = not_null(k_72);
      if(match_cons(t, sym_SVar_1))
        {
          l_72 = ATgetArgument(t, 0);
          t = not_null(l_72);
          if(match_string(t, "Anno_Cong__"))
            {
              t = not_null(m_72);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_72 = ATgetFirst((ATermList) t);
                  q_72 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(n_72);
                  if(match_cons(t, sym_Cong_2))
                    {
                      o_72 = ATgetArgument(t, 0);
                      p_72 = ATgetArgument(t, 1);
                      t = not_null(q_72);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          r_72 = ATgetFirst((ATermList) t);
                          s_72 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(s_72);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = i_75(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  ATerm d_78 (ATerm t)
  {
    ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,x_77 = NULL;
    ATerm f_78 (ATerm t)
    {
      ATerm y_77 = NULL,z_77 = NULL;
      ATerm g_78 (ATerm t)
      {
        ATerm a_78 = NULL,b_78 = NULL;
        t = not_null(z_77);
        if(((a_78 != NULL) && (a_78 != t)))
          _fail(t);
        else
          a_78 = t;
        t = not_null(z_77);
        {
          ATerm c_78 = NULL;
          ATerm h_78 (ATerm t)
          {
            t = not_null(c_78);
            if(((b_78 != NULL) && (b_78 != t)))
              _fail(t);
            else
              b_78 = t;
            t = not_null(c_78);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(y_77), not_null(a_78)), not_null(v_77));
          if(((c_78 != NULL) && (c_78 != t)))
            _fail(t);
          else
            c_78 = t;
          t = h_78(t);
          t = not_null(b_78);
        }
        return(t);
      }
      t = not_null(x_77);
      if(((y_77 != NULL) && (y_77 != t)))
        _fail(t);
      else
        y_77 = t;
      t = not_null(u_77);
      t = l_96(t);
      if(((z_77 != NULL) && (z_77 != t)))
        _fail(t);
      else
        z_77 = t;
      t = g_78(t);
      return(t);
    }
    t = not_null(p_77);
    if(((s_77 != NULL) && (s_77 != t)))
      _fail(t);
    else
      s_77 = t;
    t = not_null(q_77);
    if(((t_77 != NULL) && (t_77 != t)))
      _fail(t);
    else
      t_77 = t;
    t = not_null(r_77);
    if(((u_77 != NULL) && (u_77 != t)))
      _fail(t);
    else
      u_77 = t;
    t = not_null(p_77);
    {
      ATerm w_77 = NULL;
      ATerm e_78 (ATerm t)
      {
        t = not_null(w_77);
        if(((v_77 != NULL) && (v_77 != t)))
          _fail(t);
        else
          v_77 = t;
        t = not_null(w_77);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_77));
      if(((w_77 != NULL) && (w_77 != t)))
        _fail(t);
      else
        w_77 = t;
      t = e_78(t);
      t = not_null(t_77);
      t = k_96(t);
      if(((x_77 != NULL) && (x_77 != t)))
        _fail(t);
      else
        x_77 = t;
      t = f_78(t);
    }
    return(t);
  }
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = not_null(p_77);
  if(match_cons(t, sym_As_2))
    {
      q_77 = ATgetArgument(t, 0);
      r_77 = ATgetArgument(t, 1);
      t = d_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  ATerm h_79 (ATerm t)
  {
    ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,z_78 = NULL;
    ATerm j_79 (ATerm t)
    {
      ATerm a_79 = NULL,b_79 = NULL;
      ATerm k_79 (ATerm t)
      {
        ATerm c_79 = NULL,d_79 = NULL;
        ATerm m_79 (ATerm t)
        {
          ATerm e_79 = NULL,f_79 = NULL;
          t = not_null(d_79);
          if(((e_79 != NULL) && (e_79 != t)))
            _fail(t);
          else
            e_79 = t;
          t = not_null(d_79);
          {
            ATerm g_79 = NULL;
            ATerm n_79 (ATerm t)
            {
              t = not_null(g_79);
              if(((f_79 != NULL) && (f_79 != t)))
                _fail(t);
              else
                f_79 = t;
              t = not_null(g_79);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(a_79), not_null(c_79), not_null(e_79)), not_null(x_78));
            if(((g_79 != NULL) && (g_79 != t)))
              _fail(t);
            else
              g_79 = t;
            t = n_79(t);
            t = not_null(f_79);
          }
          return(t);
        }
        t = not_null(b_79);
        if(((c_79 != NULL) && (c_79 != t)))
          _fail(t);
        else
          c_79 = t;
        t = not_null(w_78);
        t = l_100(t);
        if(((d_79 != NULL) && (d_79 != t)))
          _fail(t);
        else
          d_79 = t;
        t = m_79(t);
        return(t);
      }
      t = not_null(z_78);
      if(((a_79 != NULL) && (a_79 != t)))
        _fail(t);
      else
        a_79 = t;
      t = not_null(v_78);
      t = k_100(t);
      if(((b_79 != NULL) && (b_79 != t)))
        _fail(t);
      else
        b_79 = t;
      t = k_79(t);
      return(t);
    }
    t = not_null(p_78);
    if(((t_78 != NULL) && (t_78 != t)))
      _fail(t);
    else
      t_78 = t;
    t = not_null(q_78);
    if(((u_78 != NULL) && (u_78 != t)))
      _fail(t);
    else
      u_78 = t;
    t = not_null(r_78);
    if(((v_78 != NULL) && (v_78 != t)))
      _fail(t);
    else
      v_78 = t;
    t = not_null(s_78);
    if(((w_78 != NULL) && (w_78 != t)))
      _fail(t);
    else
      w_78 = t;
    t = not_null(p_78);
    {
      ATerm y_78 = NULL;
      ATerm i_79 (ATerm t)
      {
        t = not_null(y_78);
        if(((x_78 != NULL) && (x_78 != t)))
          _fail(t);
        else
          x_78 = t;
        t = not_null(y_78);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_78));
      if(((y_78 != NULL) && (y_78 != t)))
        _fail(t);
      else
        y_78 = t;
      t = i_79(t);
      t = not_null(u_78);
      t = j_100(t);
      if(((z_78 != NULL) && (z_78 != t)))
        _fail(t);
      else
        z_78 = t;
      t = j_79(t);
    }
    return(t);
  }
  if(((p_78 != NULL) && (p_78 != t)))
    _fail(t);
  else
    p_78 = t;
  t = not_null(p_78);
  if(match_cons(t, sym_PrimT_3))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
      s_78 = ATgetArgument(t, 2);
      t = h_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  ATerm i_80 (ATerm t)
  {
    ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,c_80 = NULL;
    ATerm k_80 (ATerm t)
    {
      ATerm d_80 = NULL,e_80 = NULL;
      ATerm l_80 (ATerm t)
      {
        ATerm f_80 = NULL,g_80 = NULL;
        t = not_null(e_80);
        if(((f_80 != NULL) && (f_80 != t)))
          _fail(t);
        else
          f_80 = t;
        t = not_null(e_80);
        {
          ATerm h_80 = NULL;
          ATerm m_80 (ATerm t)
          {
            t = not_null(h_80);
            if(((g_80 != NULL) && (g_80 != t)))
              _fail(t);
            else
              g_80 = t;
            t = not_null(h_80);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(d_80), not_null(f_80)), not_null(a_80));
          if(((h_80 != NULL) && (h_80 != t)))
            _fail(t);
          else
            h_80 = t;
          t = m_80(t);
          t = not_null(g_80);
        }
        return(t);
      }
      t = not_null(c_80);
      if(((d_80 != NULL) && (d_80 != t)))
        _fail(t);
      else
        d_80 = t;
      t = not_null(z_79);
      t = e_96(t);
      if(((e_80 != NULL) && (e_80 != t)))
        _fail(t);
      else
        e_80 = t;
      t = l_80(t);
      return(t);
    }
    t = not_null(u_79);
    if(((x_79 != NULL) && (x_79 != t)))
      _fail(t);
    else
      x_79 = t;
    t = not_null(v_79);
    if(((y_79 != NULL) && (y_79 != t)))
      _fail(t);
    else
      y_79 = t;
    t = not_null(w_79);
    if(((z_79 != NULL) && (z_79 != t)))
      _fail(t);
    else
      z_79 = t;
    t = not_null(u_79);
    {
      ATerm b_80 = NULL;
      ATerm j_80 (ATerm t)
      {
        t = not_null(b_80);
        if(((a_80 != NULL) && (a_80 != t)))
          _fail(t);
        else
          a_80 = t;
        t = not_null(b_80);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_79));
      if(((b_80 != NULL) && (b_80 != t)))
        _fail(t);
      else
        b_80 = t;
      t = j_80(t);
      t = not_null(y_79);
      t = d_96(t);
      if(((c_80 != NULL) && (c_80 != t)))
        _fail(t);
      else
        c_80 = t;
      t = k_80(t);
    }
    return(t);
  }
  if(((u_79 != NULL) && (u_79 != t)))
    _fail(t);
  else
    u_79 = t;
  t = not_null(u_79);
  if(match_cons(t, sym_Explode_2))
    {
      v_79 = ATgetArgument(t, 0);
      w_79 = ATgetArgument(t, 1);
      t = i_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  ATerm h_81 (ATerm t)
  {
    ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,b_81 = NULL;
    ATerm j_81 (ATerm t)
    {
      ATerm c_81 = NULL,d_81 = NULL;
      ATerm k_81 (ATerm t)
      {
        ATerm e_81 = NULL,f_81 = NULL;
        t = not_null(d_81);
        if(((e_81 != NULL) && (e_81 != t)))
          _fail(t);
        else
          e_81 = t;
        t = not_null(d_81);
        {
          ATerm g_81 = NULL;
          ATerm l_81 (ATerm t)
          {
            t = not_null(g_81);
            if(((f_81 != NULL) && (f_81 != t)))
              _fail(t);
            else
              f_81 = t;
            t = not_null(g_81);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(c_81), not_null(e_81)), not_null(z_80));
          if(((g_81 != NULL) && (g_81 != t)))
            _fail(t);
          else
            g_81 = t;
          t = l_81(t);
          t = not_null(f_81);
        }
        return(t);
      }
      t = not_null(b_81);
      if(((c_81 != NULL) && (c_81 != t)))
        _fail(t);
      else
        c_81 = t;
      t = not_null(y_80);
      t = a_96(t);
      if(((d_81 != NULL) && (d_81 != t)))
        _fail(t);
      else
        d_81 = t;
      t = k_81(t);
      return(t);
    }
    t = not_null(t_80);
    if(((w_80 != NULL) && (w_80 != t)))
      _fail(t);
    else
      w_80 = t;
    t = not_null(u_80);
    if(((x_80 != NULL) && (x_80 != t)))
      _fail(t);
    else
      x_80 = t;
    t = not_null(v_80);
    if(((y_80 != NULL) && (y_80 != t)))
      _fail(t);
    else
      y_80 = t;
    t = not_null(t_80);
    {
      ATerm a_81 = NULL;
      ATerm i_81 (ATerm t)
      {
        t = not_null(a_81);
        if(((z_80 != NULL) && (z_80 != t)))
          _fail(t);
        else
          z_80 = t;
        t = not_null(a_81);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_80));
      if(((a_81 != NULL) && (a_81 != t)))
        _fail(t);
      else
        a_81 = t;
      t = i_81(t);
      t = not_null(x_80);
      t = z_95(t);
      if(((b_81 != NULL) && (b_81 != t)))
        _fail(t);
      else
        b_81 = t;
      t = j_81(t);
    }
    return(t);
  }
  if(((t_80 != NULL) && (t_80 != t)))
    _fail(t);
  else
    t_80 = t;
  t = not_null(t_80);
  if(match_cons(t, sym_Op_2))
    {
      u_80 = ATgetArgument(t, 0);
      v_80 = ATgetArgument(t, 1);
      t = h_81(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm i_136 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_136(t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = m_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                t = pat_td_1_0(i_136, t);
                return(t);
              }
              t = fetch_1_0(w_3, t);
              return(t);
            }
            t = Op_2_0(_id, v_3, t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = pat_td_1_0(i_136, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, x_3, t);
                  ;
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = d_31;
                  {
                    ATerm f_31 = t;
                    int g_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 (ATerm t)
                        {
                          t = pat_td_1_0(i_136, t);
                          return(t);
                        }
                        t = Explode_2_0(y_3, _id, t);
                        ;
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
                        {
                          ATerm h_31 = t;
                          int i_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1_0(i_136, t);
                                  return(t);
                                }
                                t = fetch_1_0(a_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, z_3, t);
                              ;
                              LocalPopChoice(i_31);
                            }
                          else
                            {
                              t = h_31;
                              {
                                ATerm b_4 (ATerm t)
                                {
                                  t = pat_td_1_0(i_136, t);
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
  ATerm c_82 = NULL,d_82 = NULL;
  ATerm g_83 (ATerm t)
  {
    ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
    t = not_null(d_82);
    if(((e_82 != NULL) && (e_82 != t)))
      _fail(t);
    else
      e_82 = t;
    t = not_null(c_82);
    {
      ATerm j_82 = NULL;
      ATerm k_83 (ATerm t)
      {
        ATerm n_82 = NULL;
        ATerm x_83 (ATerm t)
        {
          t = not_null(n_82);
          if(((i_82 != NULL) && (i_82 != t)))
            _fail(t);
          else
            i_82 = t;
          t = not_null(n_82);
          return(t);
        }
        t = not_null(j_82);
        if(((h_82 != NULL) && (h_82 != t)))
          _fail(t);
        else
          h_82 = t;
        t = not_null(e_82);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
            ATerm w_83 (ATerm t)
            {
              t = not_null(l_82);
              if(((f_82 != NULL) && (f_82 != t)))
                _fail(t);
              else
                f_82 = t;
              t = not_null(m_82);
              if(((g_82 != NULL) && (g_82 != t)))
                _fail(t);
              else
                g_82 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_82)), not_null(f_82));
              return(t);
            }
            if(((k_82 != NULL) && (k_82 != t)))
              _fail(t);
            else
              k_82 = t;
            t = not_null(k_82);
            if(match_cons(t, sym_Anno_2))
              {
                l_82 = ATgetArgument(t, 0);
                m_82 = ATgetArgument(t, 1);
                t = w_83(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(c_4, t);
          if(((n_82 != NULL) && (n_82 != t)))
            _fail(t);
          else
            n_82 = t;
          t = x_83(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((j_82 != NULL) && (j_82 != t)))
        _fail(t);
      else
        j_82 = t;
      t = k_83(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_82)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_31, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_82)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_82))))));
    }
    return(t);
  }
  ATerm h_83 (ATerm t)
  {
    ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
    t = not_null(d_82);
    if(((o_82 != NULL) && (o_82 != t)))
      _fail(t);
    else
      o_82 = t;
    t = not_null(c_82);
    {
      ATerm s_82 = NULL;
      ATerm d_85 (ATerm t)
      {
        ATerm v_82 = NULL;
        ATerm f_85 (ATerm t)
        {
          t = not_null(v_82);
          if(((r_82 != NULL) && (r_82 != t)))
            _fail(t);
          else
            r_82 = t;
          t = not_null(v_82);
          return(t);
        }
        t = not_null(s_82);
        if(((q_82 != NULL) && (q_82 != t)))
          _fail(t);
        else
          q_82 = t;
        t = not_null(o_82);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm t_82 = NULL,u_82 = NULL;
            ATerm e_85 (ATerm t)
            {
              t = not_null(u_82);
              if(((p_82 != NULL) && (p_82 != t)))
                _fail(t);
              else
                p_82 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_82));
              return(t);
            }
            if(((t_82 != NULL) && (t_82 != t)))
              _fail(t);
            else
              t_82 = t;
            t = not_null(t_82);
            if(match_cons(t, sym_RootApp_1))
              {
                u_82 = ATgetArgument(t, 0);
                t = e_85(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(d_4, t);
          if(((v_82 != NULL) && (v_82 != t)))
            _fail(t);
          else
            v_82 = t;
          t = f_85(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((s_82 != NULL) && (s_82 != t)))
        _fail(t);
      else
        s_82 = t;
      t = d_85(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_82))), not_null(p_82))));
    }
    return(t);
  }
  ATerm i_83 (ATerm t)
  {
    ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
    t = not_null(d_82);
    if(((w_82 != NULL) && (w_82 != t)))
      _fail(t);
    else
      w_82 = t;
    t = not_null(c_82);
    {
      ATerm b_83 = NULL;
      ATerm g_85 (ATerm t)
      {
        ATerm f_83 = NULL;
        ATerm i_85 (ATerm t)
        {
          t = not_null(f_83);
          if(((a_83 != NULL) && (a_83 != t)))
            _fail(t);
          else
            a_83 = t;
          t = not_null(f_83);
          return(t);
        }
        t = not_null(b_83);
        if(((z_82 != NULL) && (z_82 != t)))
          _fail(t);
        else
          z_82 = t;
        t = not_null(w_82);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
            ATerm h_85 (ATerm t)
            {
              t = not_null(d_83);
              if(((y_82 != NULL) && (y_82 != t)))
                _fail(t);
              else
                y_82 = t;
              t = not_null(e_83);
              if(((x_82 != NULL) && (x_82 != t)))
                _fail(t);
              else
                x_82 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_82));
              return(t);
            }
            if(((c_83 != NULL) && (c_83 != t)))
              _fail(t);
            else
              c_83 = t;
            t = not_null(c_83);
            if(match_cons(t, sym_App_2))
              {
                d_83 = ATgetArgument(t, 0);
                e_83 = ATgetArgument(t, 1);
                t = h_85(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(e_4, t);
          if(((f_83 != NULL) && (f_83 != t)))
            _fail(t);
          else
            f_83 = t;
          t = i_85(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((b_83 != NULL) && (b_83 != t)))
        _fail(t);
      else
        b_83 = t;
      t = g_85(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_83)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_82))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_82)), not_null(y_82)))));
    }
    return(t);
  }
  if(((c_82 != NULL) && (c_82 != t)))
    _fail(t);
  else
    c_82 = t;
  t = not_null(c_82);
  if(match_cons(t, sym_Match_1))
    {
      d_82 = ATgetArgument(t, 0);
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_83(t);
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            {
              ATerm m_31 = t;
              int z_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_83(t);
                  ;
                  LocalPopChoice(z_32);
                }
              else
                {
                  t = m_31;
                  t = i_83(t);
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
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  ATerm z_85 (ATerm t)
  {
    ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
    t = not_null(q_85);
    if(((s_85 != NULL) && (s_85 != t)))
      _fail(t);
    else
      s_85 = t;
    t = not_null(r_85);
    if(((t_85 != NULL) && (t_85 != t)))
      _fail(t);
    else
      t_85 = t;
    t = not_null(p_85);
    {
      ATerm y_85 = NULL;
      ATerm c_86 (ATerm t)
      {
        t = not_null(y_85);
        if(((u_85 != NULL) && (u_85 != t)))
          _fail(t);
        else
          u_85 = t;
        t = not_null(y_85);
        return(t);
      }
      t = not_null(t_85);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm v_85 = NULL,w_85 = NULL;
          ATerm a_86 (ATerm t)
          {
            ATerm x_85 = NULL;
            t = not_null(v_85);
            if(((x_85 != NULL) && (x_85 != t)))
              _fail(t);
            else
              x_85 = t;
            t = not_null(x_85);
            return(t);
          }
          ATerm b_86 (ATerm t)
          {
            t = term_a_33;
            return(t);
          }
          if(((w_85 != NULL) && (w_85 != t)))
            _fail(t);
          else
            w_85 = t;
          t = not_null(w_85);
          if(match_cons(t, sym_Match_1))
            {
              v_85 = ATgetArgument(t, 0);
              t = a_86(t);
            }
          else
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = b_86(t);
                }
              else
                {
                  _fail(t);
                }
            }
          return(t);
        }
        t = map_1_0(f_4, t);
        if(((y_85 != NULL) && (y_85 != t)))
          _fail(t);
        else
          y_85 = t;
        t = c_86(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_85), not_null(u_85)));
      t = Mapp2_0_0(t);
    }
    return(t);
  }
  if(((p_85 != NULL) && (p_85 != t)))
    _fail(t);
  else
    p_85 = t;
  t = not_null(p_85);
  if(match_cons(t, sym_Cong_2))
    {
      q_85 = ATgetArgument(t, 0);
      r_85 = ATgetArgument(t, 1);
      t = z_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  ATerm k_86 (ATerm t)
  {
    ATerm j_86 = NULL;
    t = not_null(i_86);
    if(((j_86 != NULL) && (j_86 != t)))
      _fail(t);
    else
      j_86 = t;
    t = not_null(j_86);
    return(t);
  }
  if(((g_86 != NULL) && (g_86 != t)))
    _fail(t);
  else
    g_86 = t;
  t = not_null(g_86);
  if(match_cons(t, sym_Scope_2))
    {
      h_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
      t = not_null(h_86);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_86(t);
        }
      else
        {
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
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
  ATerm p_87 (ATerm t)
  {
    ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
    t = not_null(y_86);
    if(((h_87 != NULL) && (h_87 != t)))
      _fail(t);
    else
      h_87 = t;
    t = not_null(b_87);
    if(((i_87 != NULL) && (i_87 != t)))
      _fail(t);
    else
      i_87 = t;
    t = not_null(c_87);
    if(((j_87 != NULL) && (j_87 != t)))
      _fail(t);
    else
      j_87 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_87), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_87)), not_null(j_87))));
    return(t);
  }
  ATerm q_87 (ATerm t)
  {
    ATerm k_87 = NULL;
    t = not_null(d_87);
    if(((k_87 != NULL) && (k_87 != t)))
      _fail(t);
    else
      k_87 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(k_87));
    return(t);
  }
  ATerm r_87 (ATerm t)
  {
    ATerm l_87 = NULL;
    t = not_null(d_87);
    if(((l_87 != NULL) && (l_87 != t)))
      _fail(t);
    else
      l_87 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_87));
    return(t);
  }
  ATerm s_87 (ATerm t)
  {
    ATerm m_87 = NULL;
    t = not_null(d_87);
    if(((m_87 != NULL) && (m_87 != t)))
      _fail(t);
    else
      m_87 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_87));
    return(t);
  }
  ATerm t_87 (ATerm t)
  {
    ATerm n_87 = NULL;
    t = not_null(f_87);
    if(((n_87 != NULL) && (n_87 != t)))
      _fail(t);
    else
      n_87 = t;
    t = not_null(g_87);
    if(((n_87 != NULL) && (n_87 != t)))
      _fail(t);
    else
      n_87 = t;
    t = not_null(n_87);
    return(t);
  }
  ATerm u_87 (ATerm t)
  {
    ATerm o_87 = NULL;
    t = not_null(f_87);
    if(((o_87 != NULL) && (o_87 != t)))
      _fail(t);
    else
      o_87 = t;
    t = not_null(g_87);
    if(((o_87 != NULL) && (o_87 != t)))
      _fail(t);
    else
      o_87 = t;
    t = not_null(o_87);
    return(t);
  }
  if(((e_87 != NULL) && (e_87 != t)))
    _fail(t);
  else
    e_87 = t;
  t = not_null(e_87);
  if(match_cons(t, sym_Where_1))
    {
      f_87 = ATgetArgument(t, 0);
      t = not_null(f_87);
      if(match_cons(t, sym_Seq_2))
        {
          d_87 = ATgetArgument(t, 0);
          z_86 = ATgetArgument(t, 1);
          t = not_null(d_87);
          if(match_cons(t, sym_Where_1))
            {
              y_86 = ATgetArgument(t, 0);
              t = not_null(z_86);
              if(match_cons(t, sym_Seq_2))
                {
                  a_87 = ATgetArgument(t, 0);
                  c_87 = ATgetArgument(t, 1);
                  t = not_null(a_87);
                  if(match_cons(t, sym_Build_1))
                    {
                      b_87 = ATgetArgument(t, 0);
                      t = p_87(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
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
              d_87 = ATgetArgument(t, 0);
              t = s_87(t);
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
          f_87 = ATgetArgument(t, 0);
          t = not_null(f_87);
          if(match_cons(t, sym_Test_1))
            {
              d_87 = ATgetArgument(t, 0);
              t = q_87(t);
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
              f_87 = ATgetArgument(t, 0);
              t = not_null(f_87);
              if(match_cons(t, sym_Not_1))
                {
                  d_87 = ATgetArgument(t, 0);
                  t = r_87(t);
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
                  f_87 = ATgetArgument(t, 0);
                  g_87 = ATgetArgument(t, 1);
                  t = t_87(t);
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      f_87 = ATgetArgument(t, 0);
                      g_87 = ATgetArgument(t, 1);
                      t = u_87(t);
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
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  ATerm q_88 (ATerm t)
  {
    ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
    t = not_null(e_88);
    if(((h_88 != NULL) && (h_88 != t)))
      _fail(t);
    else
      h_88 = t;
    t = not_null(f_88);
    if(((i_88 != NULL) && (i_88 != t)))
      _fail(t);
    else
      i_88 = t;
    t = not_null(g_88);
    if(((j_88 != NULL) && (j_88 != t)))
      _fail(t);
    else
      j_88 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_88), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_88), not_null(j_88)));
    return(t);
  }
  ATerm r_88 (ATerm t)
  {
    ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
    t = not_null(e_88);
    if(((k_88 != NULL) && (k_88 != t)))
      _fail(t);
    else
      k_88 = t;
    t = not_null(f_88);
    if(((l_88 != NULL) && (l_88 != t)))
      _fail(t);
    else
      l_88 = t;
    t = not_null(g_88);
    if(((m_88 != NULL) && (m_88 != t)))
      _fail(t);
    else
      m_88 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_88), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_88), not_null(m_88)));
    return(t);
  }
  ATerm s_88 (ATerm t)
  {
    ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
    t = not_null(e_88);
    if(((n_88 != NULL) && (n_88 != t)))
      _fail(t);
    else
      n_88 = t;
    t = not_null(f_88);
    if(((o_88 != NULL) && (o_88 != t)))
      _fail(t);
    else
      o_88 = t;
    t = not_null(g_88);
    if(((p_88 != NULL) && (p_88 != t)))
      _fail(t);
    else
      p_88 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_88), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_88), not_null(p_88)));
    return(t);
  }
  if(((c_88 != NULL) && (c_88 != t)))
    _fail(t);
  else
    c_88 = t;
  t = not_null(c_88);
  if(match_cons(t, sym_LChoice_2))
    {
      d_88 = ATgetArgument(t, 0);
      g_88 = ATgetArgument(t, 1);
      t = not_null(d_88);
      if(match_cons(t, sym_LChoice_2))
        {
          e_88 = ATgetArgument(t, 0);
          f_88 = ATgetArgument(t, 1);
          t = q_88(t);
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
          d_88 = ATgetArgument(t, 0);
          g_88 = ATgetArgument(t, 1);
          t = not_null(d_88);
          if(match_cons(t, sym_Seq_2))
            {
              e_88 = ATgetArgument(t, 0);
              f_88 = ATgetArgument(t, 1);
              t = r_88(t);
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
              d_88 = ATgetArgument(t, 0);
              g_88 = ATgetArgument(t, 1);
              t = not_null(d_88);
              if(match_cons(t, sym_Choice_2))
                {
                  e_88 = ATgetArgument(t, 0);
                  f_88 = ATgetArgument(t, 1);
                  t = s_88(t);
                }
              else
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
  ATerm v_88 = NULL,w_88 = NULL;
  ATerm y_88 (ATerm t)
  {
    ATerm x_88 = NULL;
    t = not_null(w_88);
    if(((x_88 != NULL) && (x_88 != t)))
      _fail(t);
    else
      x_88 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_88), term_r_33);
    return(t);
  }
  if(((v_88 != NULL) && (v_88 != t)))
    _fail(t);
  else
    v_88 = t;
  t = not_null(v_88);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_88 = ATgetArgument(t, 0);
      t = y_88(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL;
  ATerm k_89 (ATerm t)
  {
    ATerm d_89 = NULL;
    t = not_null(c_89);
    if(((d_89 != NULL) && (d_89 != t)))
      _fail(t);
    else
      d_89 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_89), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_33), term_r_33));
    return(t);
  }
  if(((b_89 != NULL) && (b_89 != t)))
    _fail(t);
  else
    b_89 = t;
  t = not_null(b_89);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_89 = ATgetArgument(t, 0);
      t = k_89(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
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
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
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
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL;
  ATerm s_92 (ATerm t)
  {
    ATerm r_90 = NULL,s_90 = NULL;
    t = not_null(p_90);
    if(((r_90 != NULL) && (r_90 != t)))
      _fail(t);
    else
      r_90 = t;
    t = not_null(q_90);
    if(((s_90 != NULL) && (s_90 != t)))
      _fail(t);
    else
      s_90 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_90), not_null(s_90));
    return(t);
  }
  ATerm t_92 (ATerm t)
  {
    ATerm t_90 = NULL,u_90 = NULL;
    t = not_null(k_90);
    if(((t_90 != NULL) && (t_90 != t)))
      _fail(t);
    else
      t_90 = t;
    t = not_null(l_90);
    if(((u_90 != NULL) && (u_90 != t)))
      _fail(t);
    else
      u_90 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_90), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_90)));
    return(t);
  }
  ATerm u_92 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  ATerm v_92 (ATerm t)
  {
    ATerm v_90 = NULL,w_90 = NULL;
    t = not_null(k_90);
    if(((v_90 != NULL) && (v_90 != t)))
      _fail(t);
    else
      v_90 = t;
    t = not_null(l_90);
    if(((w_90 != NULL) && (w_90 != t)))
      _fail(t);
    else
      w_90 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_90), (ATerm) ATmakeAppl(sym_Choices_1, not_null(w_90)));
    return(t);
  }
  ATerm w_92 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  ATerm x_92 (ATerm t)
  {
    ATerm x_90 = NULL,y_90 = NULL;
    t = not_null(k_90);
    if(((x_90 != NULL) && (x_90 != t)))
      _fail(t);
    else
      x_90 = t;
    t = not_null(l_90);
    if(((y_90 != NULL) && (y_90 != t)))
      _fail(t);
    else
      y_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_90), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_90)));
    return(t);
  }
  ATerm y_92 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  ATerm z_92 (ATerm t)
  {
    ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
    t = not_null(p_90);
    if(((z_90 != NULL) && (z_90 != t)))
      _fail(t);
    else
      z_90 = t;
    t = not_null(q_90);
    if(((a_91 != NULL) && (a_91 != t)))
      _fail(t);
    else
      a_91 = t;
    t = not_null(n_90);
    if(((b_91 != NULL) && (b_91 != t)))
      _fail(t);
    else
      b_91 = t;
    t = not_null(m_90);
    if(((c_91 != NULL) && (c_91 != t)))
      _fail(t);
    else
      c_91 = t;
    t = not_null(o_90);
    {
      ATerm f_91 = NULL;
      ATerm j_93 (ATerm t)
      {
        ATerm g_91 = NULL;
        ATerm k_93 (ATerm t)
        {
          t = not_null(g_91);
          if(((e_91 != NULL) && (e_91 != t)))
            _fail(t);
          else
            e_91 = t;
          t = not_null(g_91);
          return(t);
        }
        t = not_null(f_91);
        if(((d_91 != NULL) && (d_91 != t)))
          _fail(t);
        else
          d_91 = t;
        t = not_null(b_91);
        {
          ATerm j_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(j_4, t);
          if(((g_91 != NULL) && (g_91 != t)))
            _fail(t);
          else
            g_91 = t;
          t = k_93(t);
        }
        return(t);
      }
      t = not_null(a_91);
      t = map1_1_0(MkFunType_0_0, t);
      if(((f_91 != NULL) && (f_91 != t)))
        _fail(t);
      else
        f_91 = t;
      t = j_93(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(z_90), not_null(d_91), not_null(e_91), not_null(c_91));
    }
    return(t);
  }
  ATerm a_93 (ATerm t)
  {
    ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
    t = not_null(p_90);
    if(((h_91 != NULL) && (h_91 != t)))
      _fail(t);
    else
      h_91 = t;
    t = not_null(q_90);
    if(((i_91 != NULL) && (i_91 != t)))
      _fail(t);
    else
      i_91 = t;
    t = not_null(n_90);
    if(((j_91 != NULL) && (j_91 != t)))
      _fail(t);
    else
      j_91 = t;
    t = not_null(m_90);
    if(((k_91 != NULL) && (k_91 != t)))
      _fail(t);
    else
      k_91 = t;
    t = not_null(o_90);
    {
      ATerm n_91 = NULL;
      ATerm l_93 (ATerm t)
      {
        ATerm o_91 = NULL;
        ATerm m_93 (ATerm t)
        {
          t = not_null(o_91);
          if(((m_91 != NULL) && (m_91 != t)))
            _fail(t);
          else
            m_91 = t;
          t = not_null(o_91);
          return(t);
        }
        t = not_null(n_91);
        if(((l_91 != NULL) && (l_91 != t)))
          _fail(t);
        else
          l_91 = t;
        t = not_null(i_91);
        {
          ATerm k_4 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(k_4, t);
          if(((o_91 != NULL) && (o_91 != t)))
            _fail(t);
          else
            o_91 = t;
          t = m_93(t);
        }
        return(t);
      }
      t = not_null(j_91);
      t = map1_1_0(MkConstType_0_0, t);
      if(((n_91 != NULL) && (n_91 != t)))
        _fail(t);
      else
        n_91 = t;
      t = l_93(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_91), not_null(m_91), not_null(l_91), not_null(k_91));
    }
    return(t);
  }
  ATerm b_93 (ATerm t)
  {
    ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
    t = not_null(p_90);
    if(((p_91 != NULL) && (p_91 != t)))
      _fail(t);
    else
      p_91 = t;
    t = not_null(q_90);
    if(((q_91 != NULL) && (q_91 != t)))
      _fail(t);
    else
      q_91 = t;
    t = not_null(n_90);
    if(((r_91 != NULL) && (r_91 != t)))
      _fail(t);
    else
      r_91 = t;
    t = not_null(m_90);
    if(((s_91 != NULL) && (s_91 != t)))
      _fail(t);
    else
      s_91 = t;
    t = not_null(o_90);
    {
      ATerm v_91 = NULL;
      ATerm n_93 (ATerm t)
      {
        ATerm w_91 = NULL;
        ATerm o_93 (ATerm t)
        {
          t = not_null(w_91);
          if(((u_91 != NULL) && (u_91 != t)))
            _fail(t);
          else
            u_91 = t;
          t = not_null(w_91);
          return(t);
        }
        t = not_null(v_91);
        if(((t_91 != NULL) && (t_91 != t)))
          _fail(t);
        else
          t_91 = t;
        t = not_null(r_91);
        {
          ATerm l_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(l_4, t);
          if(((w_91 != NULL) && (w_91 != t)))
            _fail(t);
          else
            w_91 = t;
          t = o_93(t);
        }
        return(t);
      }
      t = not_null(q_91);
      t = map1_1_0(MkFunType_0_0, t);
      if(((v_91 != NULL) && (v_91 != t)))
        _fail(t);
      else
        v_91 = t;
      t = n_93(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(p_91), not_null(t_91), not_null(u_91), not_null(s_91));
    }
    return(t);
  }
  ATerm c_93 (ATerm t)
  {
    ATerm b_92 = NULL,c_92 = NULL,i_92 = NULL;
    t = not_null(p_90);
    if(((c_92 != NULL) && (c_92 != t)))
      _fail(t);
    else
      c_92 = t;
    t = not_null(q_90);
    if(((b_92 != NULL) && (b_92 != t)))
      _fail(t);
    else
      b_92 = t;
    t = not_null(n_90);
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_92), (ATerm) ATmakeAppl(sym_Op_2, term_w_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_92)), not_null(c_92))));
    return(t);
  }
  ATerm d_93 (ATerm t)
  {
    ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
    t = not_null(p_90);
    if(((k_92 != NULL) && (k_92 != t)))
      _fail(t);
    else
      k_92 = t;
    t = not_null(q_90);
    if(((j_92 != NULL) && (j_92 != t)))
      _fail(t);
    else
      j_92 = t;
    t = not_null(n_90);
    if(((l_92 != NULL) && (l_92 != t)))
      _fail(t);
    else
      l_92 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_92))), not_null(k_92)), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_92))));
    return(t);
  }
  ATerm e_93 (ATerm t)
  {
    ATerm m_92 = NULL,n_92 = NULL;
    t = not_null(p_90);
    if(((m_92 != NULL) && (m_92 != t)))
      _fail(t);
    else
      m_92 = t;
    t = not_null(q_90);
    if(((n_92 != NULL) && (n_92 != t)))
      _fail(t);
    else
      n_92 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_92), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_92)));
    return(t);
  }
  ATerm h_93 (ATerm t)
  {
    ATerm o_92 = NULL,p_92 = NULL;
    t = not_null(p_90);
    if(((o_92 != NULL) && (o_92 != t)))
      _fail(t);
    else
      o_92 = t;
    t = not_null(q_90);
    if(((p_92 != NULL) && (p_92 != t)))
      _fail(t);
    else
      p_92 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_92)), not_null(p_92));
    return(t);
  }
  ATerm i_93 (ATerm t)
  {
    ATerm q_92 = NULL,r_92 = NULL;
    t = not_null(p_90);
    if(((r_92 != NULL) && (r_92 != t)))
      _fail(t);
    else
      r_92 = t;
    t = not_null(q_90);
    if(((q_92 != NULL) && (q_92 != t)))
      _fail(t);
    else
      q_92 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_92)), not_null(r_92));
    return(t);
  }
  if(((o_90 != NULL) && (o_90 != t)))
    _fail(t);
  else
    o_90 = t;
  t = not_null(o_90);
  if(match_cons(t, sym_Lets_2))
    {
      p_90 = ATgetArgument(t, 0);
      q_90 = ATgetArgument(t, 1);
      t = s_92(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_90 = ATgetArgument(t, 0);
          t = not_null(p_90);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_90 = ATgetFirst((ATermList) t);
              l_90 = (ATerm) ATgetNext((ATermList) t);
              t = t_92(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_92(t);
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
              p_90 = ATgetArgument(t, 0);
              t = not_null(p_90);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_90 = ATgetFirst((ATermList) t);
                  l_90 = (ATerm) ATgetNext((ATermList) t);
                  t = v_92(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = w_92(t);
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
                  p_90 = ATgetArgument(t, 0);
                  t = not_null(p_90);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_90 = ATgetFirst((ATermList) t);
                      l_90 = (ATerm) ATgetNext((ATermList) t);
                      t = x_92(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = y_92(t);
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
                      p_90 = ATgetArgument(t, 0);
                      q_90 = ATgetArgument(t, 1);
                      n_90 = ATgetArgument(t, 2);
                      m_90 = ATgetArgument(t, 3);
                      t = z_92(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          p_90 = ATgetArgument(t, 0);
                          q_90 = ATgetArgument(t, 1);
                          n_90 = ATgetArgument(t, 2);
                          m_90 = ATgetArgument(t, 3);
                          {
                            ATerm x_33 = t;
                            int t_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_93(t);
                                ;
                                LocalPopChoice(t_34);
                              }
                            else
                              {
                                t = x_33;
                                t = b_93(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              p_90 = ATgetArgument(t, 0);
                              q_90 = ATgetArgument(t, 1);
                              n_90 = ATgetArgument(t, 2);
                              t = c_93(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  p_90 = ATgetArgument(t, 0);
                                  q_90 = ATgetArgument(t, 1);
                                  n_90 = ATgetArgument(t, 2);
                                  t = d_93(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      p_90 = ATgetArgument(t, 0);
                                      q_90 = ATgetArgument(t, 1);
                                      t = e_93(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          p_90 = ATgetArgument(t, 0);
                                          q_90 = ATgetArgument(t, 1);
                                          t = h_93(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              p_90 = ATgetArgument(t, 0);
                                              q_90 = ATgetArgument(t, 1);
                                              t = i_93(t);
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
  ATerm s_93 = NULL,t_93 = NULL;
  ATerm u_93 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  if(((s_93 != NULL) && (s_93 != t)))
    _fail(t);
  else
    s_93 = t;
  t = not_null(s_93);
  if(match_cons(t, sym_Where_1))
    {
      t_93 = ATgetArgument(t, 0);
      t = not_null(t_93);
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
ATerm F14_0_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  ATerm c_94 (ATerm t)
  {
    ATerm b_94 = NULL;
    t = not_null(z_93);
    if(((b_94 != NULL) && (b_94 != t)))
      _fail(t);
    else
      b_94 = t;
    t = not_null(b_94);
    return(t);
  }
  if(((y_93 != NULL) && (y_93 != t)))
    _fail(t);
  else
    y_93 = t;
  t = not_null(y_93);
  if(match_cons(t, sym_LChoice_2))
    {
      z_93 = ATgetArgument(t, 0);
      a_94 = ATgetArgument(t, 1);
      t = not_null(a_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = c_94(t);
        }
      else
        {
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
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  ATerm k_94 (ATerm t)
  {
    ATerm j_94 = NULL;
    t = not_null(i_94);
    if(((j_94 != NULL) && (j_94 != t)))
      _fail(t);
    else
      j_94 = t;
    t = not_null(j_94);
    return(t);
  }
  if(((g_94 != NULL) && (g_94 != t)))
    _fail(t);
  else
    g_94 = t;
  t = not_null(g_94);
  if(match_cons(t, sym_LChoice_2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
      t = not_null(h_94);
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
ATerm F12_0_0 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,v_94 = NULL;
  ATerm x_94 (ATerm t)
  {
    ATerm w_94 = NULL;
    t = not_null(t_94);
    if(((w_94 != NULL) && (w_94 != t)))
      _fail(t);
    else
      w_94 = t;
    t = not_null(w_94);
    return(t);
  }
  if(((s_94 != NULL) && (s_94 != t)))
    _fail(t);
  else
    s_94 = t;
  t = not_null(s_94);
  if(match_cons(t, sym_Choice_2))
    {
      t_94 = ATgetArgument(t, 0);
      v_94 = ATgetArgument(t, 1);
      t = not_null(v_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = x_94(t);
        }
      else
        {
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
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
  ATerm g_95 (ATerm t)
  {
    ATerm f_95 = NULL;
    t = not_null(e_95);
    if(((f_95 != NULL) && (f_95 != t)))
      _fail(t);
    else
      f_95 = t;
    t = not_null(f_95);
    return(t);
  }
  if(((c_95 != NULL) && (c_95 != t)))
    _fail(t);
  else
    c_95 = t;
  t = not_null(c_95);
  if(match_cons(t, sym_Choice_2))
    {
      d_95 = ATgetArgument(t, 0);
      e_95 = ATgetArgument(t, 1);
      t = not_null(d_95);
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
ATerm F10_0_0 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  ATerm q_95 (ATerm t)
  {
    ATerm n_95 = NULL,o_95 = NULL;
    t = not_null(l_95);
    if(((n_95 != NULL) && (n_95 != t)))
      _fail(t);
    else
      n_95 = t;
    t = not_null(m_95);
    if(((o_95 != NULL) && (o_95 != t)))
      _fail(t);
    else
      o_95 = t;
    t = not_null(k_95);
    t = not_null(o_95);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm p_95 = NULL;
        if(((p_95 != NULL) && (p_95 != t)))
          _fail(t);
        else
          p_95 = t;
        t = not_null(p_95);
        if(match_cons(t, sym_Fail_0))
          {
            t = not_null(p_95);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(m_4, t);
    }
    t = term_u_33;
    return(t);
  }
  if(((k_95 != NULL) && (k_95 != t)))
    _fail(t);
  else
    k_95 = t;
  t = not_null(k_95);
  if(match_cons(t, sym_Cong_2))
    {
      l_95 = ATgetArgument(t, 0);
      m_95 = ATgetArgument(t, 1);
      t = q_95(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  ATerm y_95 (ATerm t)
  {
    ATerm x_95 = NULL;
    t = not_null(v_95);
    if(((x_95 != NULL) && (x_95 != t)))
      _fail(t);
    else
      x_95 = t;
    t = term_u_33;
    return(t);
  }
  if(((u_95 != NULL) && (u_95 != t)))
    _fail(t);
  else
    u_95 = t;
  t = not_null(u_95);
  if(match_cons(t, sym_Path_2))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
      t = not_null(w_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = y_95(t);
        }
      else
        {
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
  ATerm g_96 = NULL,h_96 = NULL;
  ATerm i_96 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  if(((g_96 != NULL) && (g_96 != t)))
    _fail(t);
  else
    g_96 = t;
  t = not_null(g_96);
  if(match_cons(t, sym_One_1))
    {
      h_96 = ATgetArgument(t, 0);
      t = not_null(h_96);
      if(match_cons(t, sym_Fail_0))
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
ATerm F7_0_0 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  ATerm q_96 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = not_null(o_96);
  if(match_cons(t, sym_Some_1))
    {
      p_96 = ATgetArgument(t, 0);
      t = not_null(p_96);
      if(match_cons(t, sym_Fail_0))
        {
          t = q_96(t);
        }
      else
        {
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
  ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
  ATerm y_96 (ATerm t)
  {
    ATerm x_96 = NULL;
    t = not_null(v_96);
    if(((x_96 != NULL) && (x_96 != t)))
      _fail(t);
    else
      x_96 = t;
    t = term_u_33;
    return(t);
  }
  if(((u_96 != NULL) && (u_96 != t)))
    _fail(t);
  else
    u_96 = t;
  t = not_null(u_96);
  if(match_cons(t, sym_Rec_2))
    {
      v_96 = ATgetArgument(t, 0);
      w_96 = ATgetArgument(t, 1);
      t = not_null(w_96);
      if(match_cons(t, sym_Fail_0))
        {
          t = y_96(t);
        }
      else
        {
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
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
  ATerm g_97 (ATerm t)
  {
    ATerm f_97 = NULL;
    t = not_null(d_97);
    if(((f_97 != NULL) && (f_97 != t)))
      _fail(t);
    else
      f_97 = t;
    t = term_u_33;
    return(t);
  }
  if(((c_97 != NULL) && (c_97 != t)))
    _fail(t);
  else
    c_97 = t;
  t = not_null(c_97);
  if(match_cons(t, sym_Scope_2))
    {
      d_97 = ATgetArgument(t, 0);
      e_97 = ATgetArgument(t, 1);
      t = not_null(e_97);
      if(match_cons(t, sym_Fail_0))
        {
          t = g_97(t);
        }
      else
        {
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
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
  ATerm o_97 (ATerm t)
  {
    ATerm n_97 = NULL;
    t = not_null(m_97);
    if(((n_97 != NULL) && (n_97 != t)))
      _fail(t);
    else
      n_97 = t;
    t = term_u_33;
    return(t);
  }
  if(((k_97 != NULL) && (k_97 != t)))
    _fail(t);
  else
    k_97 = t;
  t = not_null(k_97);
  if(match_cons(t, sym_Seq_2))
    {
      l_97 = ATgetArgument(t, 0);
      m_97 = ATgetArgument(t, 1);
      t = not_null(l_97);
      if(match_cons(t, sym_Fail_0))
        {
          t = o_97(t);
        }
      else
        {
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
  ATerm s_97 = NULL,t_97 = NULL;
  ATerm u_97 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  if(((s_97 != NULL) && (s_97 != t)))
    _fail(t);
  else
    s_97 = t;
  t = not_null(s_97);
  if(match_cons(t, sym_Not_1))
    {
      t_97 = ATgetArgument(t, 0);
      t = not_null(t_97);
      if(match_cons(t, sym_Fail_0))
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
ATerm F1_0_0 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL;
  ATerm a_98 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = not_null(y_97);
  if(match_cons(t, sym_Test_1))
    {
      z_97 = ATgetArgument(t, 0);
      t = not_null(z_97);
      if(match_cons(t, sym_Fail_0))
        {
          t = a_98(t);
        }
      else
        {
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
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0_0(t);
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
                  t = F3_0_0(t);
                  ;
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  {
                    ATerm s_35 = t;
                    int t_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0_0(t);
                        ;
                        LocalPopChoice(t_35);
                      }
                    else
                      {
                        t = s_35;
                        {
                          ATerm u_35 = t;
                          int b_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0_0(t);
                              ;
                              LocalPopChoice(b_36);
                            }
                          else
                            {
                              t = u_35;
                              {
                                ATerm c_36 = t;
                                int d_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0_0(t);
                                    ;
                                    LocalPopChoice(d_36);
                                  }
                                else
                                  {
                                    t = c_36;
                                    {
                                      ATerm o_36 = t;
                                      int t_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0_0(t);
                                          ;
                                          LocalPopChoice(t_36);
                                        }
                                      else
                                        {
                                          t = o_36;
                                          {
                                            ATerm u_36 = t;
                                            int a_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0_0(t);
                                                ;
                                                LocalPopChoice(a_37);
                                              }
                                            else
                                              {
                                                t = u_36;
                                                {
                                                  ATerm b_37 = t;
                                                  int i_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0_0(t);
                                                      ;
                                                      LocalPopChoice(i_37);
                                                    }
                                                  else
                                                    {
                                                      t = b_37;
                                                      {
                                                        ATerm j_37 = t;
                                                        int q_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0_0(t);
                                                            ;
                                                            LocalPopChoice(q_37);
                                                          }
                                                        else
                                                          {
                                                            t = j_37;
                                                            {
                                                              ATerm r_37 = t;
                                                              int s_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_37);
                                                                }
                                                              else
                                                                {
                                                                  t = r_37;
                                                                  {
                                                                    ATerm t_37 = t;
                                                                    int u_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0_0(t);
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
                                                                              t = F14_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(w_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_37;
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
  ATerm i_98 = NULL,j_98 = NULL;
  ATerm l_98 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  if(((i_98 != NULL) && (i_98 != t)))
    _fail(t);
  else
    i_98 = t;
  t = not_null(i_98);
  if(match_cons(t, sym_Match_1))
    {
      j_98 = ATgetArgument(t, 0);
      t = not_null(j_98);
      if(match_cons(t, sym_Wld_0))
        {
          t = l_98(t);
        }
      else
        {
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
  ATerm p_98 = NULL,q_98 = NULL;
  ATerm t_98 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  if(((p_98 != NULL) && (p_98 != t)))
    _fail(t);
  else
    p_98 = t;
  t = not_null(p_98);
  if(match_cons(t, sym_Where_1))
    {
      q_98 = ATgetArgument(t, 0);
      t = not_null(q_98);
      if(match_cons(t, sym_Id_0))
        {
          t = t_98(t);
        }
      else
        {
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
  ATerm x_98 = NULL,y_98 = NULL;
  ATerm z_98 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  if(((x_98 != NULL) && (x_98 != t)))
    _fail(t);
  else
    x_98 = t;
  t = not_null(x_98);
  if(match_cons(t, sym_All_1))
    {
      y_98 = ATgetArgument(t, 0);
      t = not_null(y_98);
      if(match_cons(t, sym_Id_0))
        {
          t = z_98(t);
        }
      else
        {
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
  ATerm g_99 = NULL,m_99 = NULL,p_99 = NULL;
  ATerm v_99 (ATerm t)
  {
    ATerm q_99 = NULL;
    t = not_null(m_99);
    if(((q_99 != NULL) && (q_99 != t)))
      _fail(t);
    else
      q_99 = t;
    t = term_v_33;
    return(t);
  }
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  t = not_null(g_99);
  if(match_cons(t, sym_Rec_2))
    {
      m_99 = ATgetArgument(t, 0);
      p_99 = ATgetArgument(t, 1);
      t = not_null(p_99);
      if(match_cons(t, sym_Id_0))
        {
          t = v_99(t);
        }
      else
        {
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
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
  ATerm i_100 (ATerm t)
  {
    ATerm h_100 = NULL;
    t = not_null(f_100);
    if(((h_100 != NULL) && (h_100 != t)))
      _fail(t);
    else
      h_100 = t;
    t = term_v_33;
    return(t);
  }
  if(((e_100 != NULL) && (e_100 != t)))
    _fail(t);
  else
    e_100 = t;
  t = not_null(e_100);
  if(match_cons(t, sym_Scope_2))
    {
      f_100 = ATgetArgument(t, 0);
      g_100 = ATgetArgument(t, 1);
      t = not_null(g_100);
      if(match_cons(t, sym_Id_0))
        {
          t = i_100(t);
        }
      else
        {
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
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  ATerm t_100 (ATerm t)
  {
    ATerm s_100 = NULL;
    t = not_null(r_100);
    if(((s_100 != NULL) && (s_100 != t)))
      _fail(t);
    else
      s_100 = t;
    t = term_v_33;
    return(t);
  }
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  t = not_null(p_100);
  if(match_cons(t, sym_LChoice_2))
    {
      q_100 = ATgetArgument(t, 0);
      r_100 = ATgetArgument(t, 1);
      t = not_null(q_100);
      if(match_cons(t, sym_Id_0))
        {
          t = t_100(t);
        }
      else
        {
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
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  ATerm b_101 (ATerm t)
  {
    ATerm a_101 = NULL;
    t = not_null(y_100);
    if(((a_101 != NULL) && (a_101 != t)))
      _fail(t);
    else
      a_101 = t;
    t = not_null(a_101);
    return(t);
  }
  if(((x_100 != NULL) && (x_100 != t)))
    _fail(t);
  else
    x_100 = t;
  t = not_null(x_100);
  if(match_cons(t, sym_Seq_2))
    {
      y_100 = ATgetArgument(t, 0);
      z_100 = ATgetArgument(t, 1);
      t = not_null(z_100);
      if(match_cons(t, sym_Id_0))
        {
          t = b_101(t);
        }
      else
        {
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
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
  ATerm j_101 (ATerm t)
  {
    ATerm i_101 = NULL;
    t = not_null(h_101);
    if(((i_101 != NULL) && (i_101 != t)))
      _fail(t);
    else
      i_101 = t;
    t = not_null(i_101);
    return(t);
  }
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = not_null(f_101);
  if(match_cons(t, sym_Seq_2))
    {
      g_101 = ATgetArgument(t, 0);
      h_101 = ATgetArgument(t, 1);
      t = not_null(g_101);
      if(match_cons(t, sym_Id_0))
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
  return(t);
}
ATerm I2_0_0 (ATerm t)
{
  ATerm n_101 = NULL,o_101 = NULL;
  ATerm p_101 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  if(((n_101 != NULL) && (n_101 != t)))
    _fail(t);
  else
    n_101 = t;
  t = not_null(n_101);
  if(match_cons(t, sym_Not_1))
    {
      o_101 = ATgetArgument(t, 0);
      t = not_null(o_101);
      if(match_cons(t, sym_Id_0))
        {
          t = p_101(t);
        }
      else
        {
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
  ATerm a_102 = NULL,b_102 = NULL;
  ATerm c_102 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  if(((a_102 != NULL) && (a_102 != t)))
    _fail(t);
  else
    a_102 = t;
  t = not_null(a_102);
  if(match_cons(t, sym_Test_1))
    {
      b_102 = ATgetArgument(t, 0);
      t = not_null(b_102);
      if(match_cons(t, sym_Id_0))
        {
          t = c_102(t);
        }
      else
        {
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
  ATerm x_37 = t;
  int y_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0_0(t);
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
            t = I2_0_0(t);
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
                  t = I3_0_0(t);
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
                        t = I4_0_0(t);
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
                              t = I7_0_0(t);
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
                                    t = I8_0_0(t);
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
                                          t = I9_0_0(t);
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
                                                t = I10_0_0(t);
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
                                                      t = I12_0_0(t);
                                                      ;
                                                      LocalPopChoice(o_38);
                                                    }
                                                  else
                                                    {
                                                      t = n_38;
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
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
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
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(y_38);
                            }
                          else
                            {
                              t = x_38;
                              {
                                ATerm z_38 = t;
                                int a_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0_0(t);
                                    ;
                                    LocalPopChoice(a_39);
                                  }
                                else
                                  {
                                    t = z_38;
                                    {
                                      ATerm b_39 = t;
                                      int c_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0_0(t);
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
                                                t = TransformingAnnoCongruence_0_0(t);
                                                ;
                                                LocalPopChoice(e_39);
                                              }
                                            else
                                              {
                                                t = d_39;
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
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm d_102 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = s_127(t);
      t = d_102(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    return(t);
  }
  t = d_102(t);
  return(t);
}
ATerm downup_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  t = z_110(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = downup_1_0(z_110, t);
      return(t);
    }
    t = SRTS_all(o_4, t);
    t = z_110(t);
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
ATerm Strategies_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  ATerm t_102 (ATerm t)
  {
    ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL,p_102 = NULL;
    ATerm v_102 (ATerm t)
    {
      ATerm q_102 = NULL,r_102 = NULL;
      t = not_null(p_102);
      if(((q_102 != NULL) && (q_102 != t)))
        _fail(t);
      else
        q_102 = t;
      t = not_null(p_102);
      {
        ATerm s_102 = NULL;
        ATerm w_102 (ATerm t)
        {
          t = not_null(s_102);
          if(((r_102 != NULL) && (r_102 != t)))
            _fail(t);
          else
            r_102 = t;
          t = not_null(s_102);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_102)), not_null(n_102));
        if(((s_102 != NULL) && (s_102 != t)))
          _fail(t);
        else
          s_102 = t;
        t = w_102(t);
        t = not_null(r_102);
      }
      return(t);
    }
    t = not_null(j_102);
    if(((l_102 != NULL) && (l_102 != t)))
      _fail(t);
    else
      l_102 = t;
    t = not_null(k_102);
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    t = not_null(j_102);
    {
      ATerm o_102 = NULL;
      ATerm u_102 (ATerm t)
      {
        t = not_null(o_102);
        if(((n_102 != NULL) && (n_102 != t)))
          _fail(t);
        else
          n_102 = t;
        t = not_null(o_102);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_102));
      if(((o_102 != NULL) && (o_102 != t)))
        _fail(t);
      else
        o_102 = t;
      t = u_102(t);
      t = not_null(m_102);
      t = u_94(t);
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = v_102(t);
    }
    return(t);
  }
  if(((j_102 != NULL) && (j_102 != t)))
    _fail(t);
  else
    j_102 = t;
  t = not_null(j_102);
  if(match_cons(t, sym_Strategies_1))
    {
      k_102 = ATgetArgument(t, 0);
      t = t_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  ATerm m_103 (ATerm t)
  {
    ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL,i_103 = NULL;
    ATerm o_103 (ATerm t)
    {
      ATerm j_103 = NULL,k_103 = NULL;
      t = not_null(i_103);
      if(((j_103 != NULL) && (j_103 != t)))
        _fail(t);
      else
        j_103 = t;
      t = not_null(i_103);
      {
        ATerm l_103 = NULL;
        ATerm p_103 (ATerm t)
        {
          t = not_null(l_103);
          if(((k_103 != NULL) && (k_103 != t)))
            _fail(t);
          else
            k_103 = t;
          t = not_null(l_103);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_103)), not_null(g_103));
        if(((l_103 != NULL) && (l_103 != t)))
          _fail(t);
        else
          l_103 = t;
        t = p_103(t);
        t = not_null(k_103);
      }
      return(t);
    }
    t = not_null(c_103);
    if(((e_103 != NULL) && (e_103 != t)))
      _fail(t);
    else
      e_103 = t;
    t = not_null(d_103);
    if(((f_103 != NULL) && (f_103 != t)))
      _fail(t);
    else
      f_103 = t;
    t = not_null(c_103);
    {
      ATerm h_103 = NULL;
      ATerm n_103 (ATerm t)
      {
        t = not_null(h_103);
        if(((g_103 != NULL) && (g_103 != t)))
          _fail(t);
        else
          g_103 = t;
        t = not_null(h_103);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_103));
      if(((h_103 != NULL) && (h_103 != t)))
        _fail(t);
      else
        h_103 = t;
      t = n_103(t);
      t = not_null(f_103);
      t = z_94(t);
      if(((i_103 != NULL) && (i_103 != t)))
        _fail(t);
      else
        i_103 = t;
      t = o_103(t);
    }
    return(t);
  }
  if(((c_103 != NULL) && (c_103 != t)))
    _fail(t);
  else
    c_103 = t;
  t = not_null(c_103);
  if(match_cons(t, sym_Specification_1))
    {
      d_103 = ATgetArgument(t, 0);
      t = m_103(t);
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
ATerm _2_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  ATerm k_104 (ATerm t)
  {
    ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,e_104 = NULL;
    ATerm m_104 (ATerm t)
    {
      ATerm f_104 = NULL,g_104 = NULL;
      ATerm n_104 (ATerm t)
      {
        ATerm h_104 = NULL,i_104 = NULL;
        t = not_null(g_104);
        if(((h_104 != NULL) && (h_104 != t)))
          _fail(t);
        else
          h_104 = t;
        t = not_null(g_104);
        {
          ATerm j_104 = NULL;
          ATerm o_104 (ATerm t)
          {
            t = not_null(j_104);
            if(((i_104 != NULL) && (i_104 != t)))
              _fail(t);
            else
              i_104 = t;
            t = not_null(j_104);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_104), not_null(h_104)), not_null(c_104));
          if(((j_104 != NULL) && (j_104 != t)))
            _fail(t);
          else
            j_104 = t;
          t = o_104(t);
          t = not_null(i_104);
        }
        return(t);
      }
      t = not_null(e_104);
      if(((f_104 != NULL) && (f_104 != t)))
        _fail(t);
      else
        f_104 = t;
      t = not_null(b_104);
      t = g_93(t);
      if(((g_104 != NULL) && (g_104 != t)))
        _fail(t);
      else
        g_104 = t;
      t = n_104(t);
      return(t);
    }
    t = not_null(w_103);
    if(((z_103 != NULL) && (z_103 != t)))
      _fail(t);
    else
      z_103 = t;
    t = not_null(x_103);
    if(((a_104 != NULL) && (a_104 != t)))
      _fail(t);
    else
      a_104 = t;
    t = not_null(y_103);
    if(((b_104 != NULL) && (b_104 != t)))
      _fail(t);
    else
      b_104 = t;
    t = not_null(w_103);
    {
      ATerm d_104 = NULL;
      ATerm l_104 (ATerm t)
      {
        t = not_null(d_104);
        if(((c_104 != NULL) && (c_104 != t)))
          _fail(t);
        else
          c_104 = t;
        t = not_null(d_104);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_103));
      if(((d_104 != NULL) && (d_104 != t)))
        _fail(t);
      else
        d_104 = t;
      t = l_104(t);
      t = not_null(a_104);
      t = f_93(t);
      if(((e_104 != NULL) && (e_104 != t)))
        _fail(t);
      else
        e_104 = t;
      t = m_104(t);
    }
    return(t);
  }
  if(((w_103 != NULL) && (w_103 != t)))
    _fail(t);
  else
    w_103 = t;
  t = not_null(w_103);
  if(match_cons(t, sym__2))
    {
      x_103 = ATgetArgument(t, 0);
      y_103 = ATgetArgument(t, 1);
      t = k_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_39;
  f_39 = t;
  {
    ATerm q_104 = NULL;
    ATerm r_104 = NULL;
    ATerm s_104 (ATerm t)
    {
      t = not_null(r_104);
      if(((q_104 != NULL) && (q_104 != t)))
        _fail(t);
      else
        q_104 = t;
      t = not_null(r_104);
      return(t);
    }
    t = term_g_17;
    t = whoami_0_0(t);
    if(((r_104 != NULL) && (r_104 != t)))
      _fail(t);
    else
      r_104 = t;
    t = s_104(t);
    t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_39), not_null(q_104)), term_h_39));
    t = printnl_0_0(t);
    t = term_k_8;
    t = exit_0_0(t);
  }
  t = f_39;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  ATerm a_105 (ATerm t)
  {
    ATerm y_104 = NULL,z_104 = NULL;
    t = not_null(w_104);
    if(((y_104 != NULL) && (y_104 != t)))
      _fail(t);
    else
      y_104 = t;
    t = not_null(x_104);
    if(((z_104 != NULL) && (z_104 != t)))
      _fail(t);
    else
      z_104 = t;
    t = not_null(v_104);
    {
      ATerm j_39;
      j_39 = t;
      t = SSL_printnl(not_null(y_104), not_null(z_104));
      t = j_39;
    }
    return(t);
  }
  if(((v_104 != NULL) && (v_104 != t)))
    _fail(t);
  else
    v_104 = t;
  t = not_null(v_104);
  if(match_cons(t, sym__2))
    {
      w_104 = ATgetArgument(t, 0);
      x_104 = ATgetArgument(t, 1);
      t = a_105(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm c_105 = NULL;
  ATerm e_105 (ATerm t)
  {
    ATerm d_105 = NULL;
    t = not_null(c_105);
    if(((d_105 != NULL) && (d_105 != t)))
      _fail(t);
    else
      d_105 = t;
    t = not_null(c_105);
    t = SSL_implode_string(not_null(d_105));
    return(t);
  }
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  t = e_105(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
        ATerm n_105 (ATerm t)
        {
          ATerm k_105 = NULL,l_105 = NULL;
          t = not_null(i_105);
          if(((k_105 != NULL) && (k_105 != t)))
            _fail(t);
          else
            k_105 = t;
          t = not_null(j_105);
          if(((l_105 != NULL) && (l_105 != t)))
            _fail(t);
          else
            l_105 = t;
          t = not_null(k_105);
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(l_105);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(v_4, t);
          }
          return(t);
        }
        if(((h_105 != NULL) && (h_105 != t)))
          _fail(t);
        else
          h_105 = t;
        t = not_null(h_105);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_105 = ATgetFirst((ATermList) t);
            j_105 = (ATerm) ATgetNext((ATermList) t);
            t = n_105(t);
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
  ATerm t_105 = NULL;
  ATerm b_106 (ATerm t)
  {
    ATerm u_105 = NULL,v_105 = NULL;
    t = not_null(t_105);
    if(((u_105 != NULL) && (u_105 != t)))
      _fail(t);
    else
      u_105 = t;
    t = not_null(t_105);
    {
      ATerm w_105 = NULL;
      ATerm c_106 (ATerm t)
      {
        ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL,a_106 = NULL;
        ATerm d_106 (ATerm t)
        {
          t = not_null(a_106);
          if(((v_105 != NULL) && (v_105 != t)))
            _fail(t);
          else
            v_105 = t;
          t = not_null(y_105);
          return(t);
        }
        t = not_null(w_105);
        if(((x_105 != NULL) && (x_105 != t)))
          _fail(t);
        else
          x_105 = t;
        t = not_null(w_105);
        t = SSL_explode_term(not_null(x_105));
        if(((y_105 != NULL) && (y_105 != t)))
          _fail(t);
        else
          y_105 = t;
        t = not_null(y_105);
        if(match_cons(t, sym__2))
          {
            z_105 = ATgetArgument(t, 0);
            a_106 = ATgetArgument(t, 1);
            t = not_null(z_105);
            if(match_string(t, ""))
              {
                t = d_106(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(u_105);
      if(((w_105 != NULL) && (w_105 != t)))
        _fail(t);
      else
        w_105 = t;
      t = c_106(t);
      t = not_null(v_105);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((t_105 != NULL) && (t_105 != t)))
    _fail(t);
  else
    t_105 = t;
  t = b_106(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  ATerm e_106 (ATerm t)
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_106, t);
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = Nil_0_0(t);
        t = o_117(t);
      }
    return(t);
  }
  t = e_106(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
  ATerm m_106 (ATerm t)
  {
    ATerm k_106 = NULL,l_106 = NULL;
    t = not_null(i_106);
    if(((l_106 != NULL) && (l_106 != t)))
      _fail(t);
    else
      l_106 = t;
    t = not_null(j_106);
    if(((k_106 != NULL) && (k_106 != t)))
      _fail(t);
    else
      k_106 = t;
    t = not_null(l_106);
    {
      ATerm w_4 (ATerm t)
      {
        t = not_null(k_106);
        return(t);
      }
      t = at_end_1_0(w_4, t);
    }
    return(t);
  }
  if(((h_106 != NULL) && (h_106 != t)))
    _fail(t);
  else
    h_106 = t;
  t = not_null(h_106);
  if(match_cons(t, sym__2))
    {
      i_106 = ATgetArgument(t, 0);
      j_106 = ATgetArgument(t, 1);
      t = m_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_106 = NULL;
  ATerm q_106 (ATerm t)
  {
    ATerm p_106 = NULL;
    t = not_null(o_106);
    if(((p_106 != NULL) && (p_106 != t)))
      _fail(t);
    else
      p_106 = t;
    t = not_null(o_106);
    t = SSL_explode_string(not_null(p_106));
    return(t);
  }
  if(((o_106 != NULL) && (o_106 != t)))
    _fail(t);
  else
    o_106 = t;
  t = q_106(t);
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
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            ATerm x_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_4, t);
            ;
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            {
              ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
              ATerm i_107 (ATerm t)
              {
                ATerm a_107 = NULL;
                t = not_null(y_106);
                if(((a_107 != NULL) && (a_107 != t)))
                  _fail(t);
                else
                  a_107 = t;
                t = not_null(a_107);
                return(t);
              }
              ATerm j_107 (ATerm t)
              {
                ATerm b_107 = NULL;
                t = not_null(y_106);
                if(((b_107 != NULL) && (b_107 != t)))
                  _fail(t);
                else
                  b_107 = t;
                t = not_null(b_107);
                {
                  ATerm u_39 = t;
                  int v_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_39);
                    }
                  else
                    {
                      t = u_39;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = term_w_39;
                          return(t);
                        }
                        t = debug_1_0(y_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm m_107 (ATerm t)
              {
                ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL,g_107 = NULL;
                t = not_null(y_106);
                if(((c_107 != NULL) && (c_107 != t)))
                  _fail(t);
                else
                  c_107 = t;
                t = not_null(z_106);
                if(((d_107 != NULL) && (d_107 != t)))
                  _fail(t);
                else
                  d_107 = t;
                t = not_null(x_106);
                {
                  ATerm x_39;
                  x_39 = t;
                  {
                    ATerm f_107 = NULL;
                    ATerm n_107 (ATerm t)
                    {
                      t = not_null(f_107);
                      if(((e_107 != NULL) && (e_107 != t)))
                        _fail(t);
                      else
                        e_107 = t;
                      t = not_null(f_107);
                      return(t);
                    }
                    t = not_null(c_107);
                    t = eval_config_0_0(t);
                    if(((f_107 != NULL) && (f_107 != t)))
                      _fail(t);
                    else
                      f_107 = t;
                    t = n_107(t);
                  }
                  t = x_39;
                  {
                    ATerm h_107 = NULL;
                    ATerm o_107 (ATerm t)
                    {
                      t = not_null(h_107);
                      if(((g_107 != NULL) && (g_107 != t)))
                        _fail(t);
                      else
                        g_107 = t;
                      t = not_null(h_107);
                      return(t);
                    }
                    t = not_null(d_107);
                    t = eval_config_0_0(t);
                    if(((h_107 != NULL) && (h_107 != t)))
                      _fail(t);
                    else
                      h_107 = t;
                    t = o_107(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), not_null(g_107));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((x_106 != NULL) && (x_106 != t)))
                _fail(t);
              else
                x_106 = t;
              t = not_null(x_106);
              if(match_cons(t, sym_Path_1))
                {
                  y_106 = ATgetArgument(t, 0);
                  t = i_107(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_106 = ATgetArgument(t, 0);
                      t = j_107(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_106 = ATgetArgument(t, 0);
                          z_106 = ATgetArgument(t, 1);
                          t = m_107(t);
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
  ATerm r_107 = NULL;
  ATerm v_107 (ATerm t)
  {
    ATerm s_107 = NULL;
    t = not_null(r_107);
    if(((s_107 != NULL) && (s_107 != t)))
      _fail(t);
    else
      s_107 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_39, not_null(s_107));
    t = table_get_0_0(t);
    {
      ATerm z_4 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm z_39;
          z_39 = t;
          {
            ATerm t_107 = NULL;
            ATerm u_107 = NULL;
            ATerm w_107 (ATerm t)
            {
              t = not_null(u_107);
              if(((t_107 != NULL) && (t_107 != t)))
                _fail(t);
              else
                t_107 = t;
              t = not_null(u_107);
              return(t);
            }
            if(((u_107 != NULL) && (u_107 != t)))
              _fail(t);
            else
              u_107 = t;
            t = w_107(t);
            t = (ATerm) ATmakeAppl(sym__3, term_y_39, not_null(s_107), not_null(t_107));
            t = table_put_0_0(t);
          }
          t = z_39;
        }
        return(t);
      }
      t = try_1_0(z_4, t);
    }
    return(t);
  }
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = v_107(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_131 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm a_40;
    a_40 = t;
    {
      ATerm y_107 = NULL;
      ATerm z_107 = NULL;
      ATerm a_108 (ATerm t)
      {
        t = not_null(z_107);
        if(((y_107 != NULL) && (y_107 != t)))
          _fail(t);
        else
          y_107 = t;
        t = not_null(z_107);
        return(t);
      }
      t = term_b_40;
      t = get_config_0_0(t);
      if(((z_107 != NULL) && (z_107 != t)))
        _fail(t);
      else
        z_107 = t;
      t = a_108(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), term_c_40);
      t = geq_0_0(t);
    }
    t = a_40;
    t = c_131(t);
    return(t);
  }
  t = try_1_0(a_5, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL;
  ATerm n_108 (ATerm t)
  {
    ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL;
    t = not_null(g_108);
    if(((j_108 != NULL) && (j_108 != t)))
      _fail(t);
    else
      j_108 = t;
    t = not_null(i_108);
    if(((k_108 != NULL) && (k_108 != t)))
      _fail(t);
    else
      k_108 = t;
    t = not_null(f_108);
    t = SSL_fputc(not_null(j_108), not_null(k_108));
    {
      ATerm m_108 = NULL;
      ATerm o_108 (ATerm t)
      {
        t = not_null(m_108);
        if(((l_108 != NULL) && (l_108 != t)))
          _fail(t);
        else
          l_108 = t;
        t = not_null(m_108);
        return(t);
      }
      if(((m_108 != NULL) && (m_108 != t)))
        _fail(t);
      else
        m_108 = t;
      t = o_108(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_108));
    }
    return(t);
  }
  if(((f_108 != NULL) && (f_108 != t)))
    _fail(t);
  else
    f_108 = t;
  t = not_null(f_108);
  if(match_cons(t, sym__2))
    {
      g_108 = ATgetArgument(t, 0);
      h_108 = ATgetArgument(t, 1);
      t = not_null(h_108);
      if(match_cons(t, sym_Stream_1))
        {
          i_108 = ATgetArgument(t, 0);
          t = n_108(t);
        }
      else
        {
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
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL;
  ATerm b_109 (ATerm t)
  {
    ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
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
    t = not_null(t_108);
    t = SSL_write_term_to_stream_text(not_null(x_108), not_null(y_108));
    {
      ATerm a_109 = NULL;
      ATerm f_109 (ATerm t)
      {
        t = not_null(a_109);
        if(((z_108 != NULL) && (z_108 != t)))
          _fail(t);
        else
          z_108 = t;
        t = not_null(a_109);
        return(t);
      }
      if(((a_109 != NULL) && (a_109 != t)))
        _fail(t);
      else
        a_109 = t;
      t = f_109(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_108));
    }
    return(t);
  }
  if(((t_108 != NULL) && (t_108 != t)))
    _fail(t);
  else
    t_108 = t;
  t = not_null(t_108);
  if(match_cons(t, sym__2))
    {
      u_108 = ATgetArgument(t, 0);
      w_108 = ATgetArgument(t, 1);
      t = not_null(u_108);
      if(match_cons(t, sym_Stream_1))
        {
          v_108 = ATgetArgument(t, 0);
          t = b_109(t);
        }
      else
        {
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
  ATerm b_5 (ATerm t)
  {
    ATerm h_109 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm i_109 = NULL;
      ATerm j_109 (ATerm t)
      {
        t = not_null(i_109);
        if(((h_109 != NULL) && (h_109 != t)))
          _fail(t);
        else
          h_109 = t;
        t = not_null(i_109);
        return(t);
      }
      if(((i_109 != NULL) && (i_109 != t)))
        _fail(t);
      else
        i_109 = t;
      t = j_109(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_40, not_null(h_109));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(b_5, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  ATerm w_109 (ATerm t)
  {
    ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
    t = not_null(q_109);
    if(((s_109 != NULL) && (s_109 != t)))
      _fail(t);
    else
      s_109 = t;
    t = not_null(r_109);
    if(((t_109 != NULL) && (t_109 != t)))
      _fail(t);
    else
      t_109 = t;
    t = not_null(o_109);
    t = SSL_write_term_to_stream_baf(not_null(s_109), not_null(t_109));
    {
      ATerm v_109 = NULL;
      ATerm f_110 (ATerm t)
      {
        t = not_null(v_109);
        if(((u_109 != NULL) && (u_109 != t)))
          _fail(t);
        else
          u_109 = t;
        t = not_null(v_109);
        return(t);
      }
      if(((v_109 != NULL) && (v_109 != t)))
        _fail(t);
      else
        v_109 = t;
      t = f_110(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_109));
    }
    return(t);
  }
  if(((o_109 != NULL) && (o_109 != t)))
    _fail(t);
  else
    o_109 = t;
  t = not_null(o_109);
  if(match_cons(t, sym__2))
    {
      p_109 = ATgetArgument(t, 0);
      r_109 = ATgetArgument(t, 1);
      t = not_null(p_109);
      if(match_cons(t, sym_Stream_1))
        {
          q_109 = ATgetArgument(t, 0);
          t = w_109(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_138 (ATerm), ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  ATerm t_110 (ATerm t)
  {
    ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL,r_110 = NULL;
    t = not_null(l_110);
    if(((n_110 != NULL) && (n_110 != t)))
      _fail(t);
    else
      n_110 = t;
    t = not_null(m_110);
    if(((o_110 != NULL) && (o_110 != t)))
      _fail(t);
    else
      o_110 = t;
    t = not_null(n_110);
    {
      ATerm q_110 = NULL;
      ATerm u_110 (ATerm t)
      {
        t = not_null(q_110);
        if(((p_110 != NULL) && (p_110 != t)))
          _fail(t);
        else
          p_110 = t;
        t = not_null(q_110);
        return(t);
      }
      if(((q_110 != NULL) && (q_110 != t)))
        _fail(t);
      else
        q_110 = t;
      t = u_110(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_110), term_e_40);
      t = open_stream_0_0(t);
      {
        ATerm s_110 = NULL;
        ATerm v_110 (ATerm t)
        {
          t = not_null(s_110);
          if(((r_110 != NULL) && (r_110 != t)))
            _fail(t);
          else
            r_110 = t;
          t = not_null(s_110);
          return(t);
        }
        if(((s_110 != NULL) && (s_110 != t)))
          _fail(t);
        else
          s_110 = t;
        t = v_110(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_110), not_null(o_110));
        t = g_138(t);
        t = fclose_0_0(t);
        t = not_null(o_110);
      }
    }
    return(t);
  }
  if(((k_110 != NULL) && (k_110 != t)))
    _fail(t);
  else
    k_110 = t;
  t = not_null(k_110);
  if(match_cons(t, sym__2))
    {
      l_110 = ATgetArgument(t, 0);
      m_110 = ATgetArgument(t, 1);
      t = t_110(t);
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
  ATerm c_111 = NULL;
  ATerm f_40;
  f_40 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 (ATerm t)
          {
            ATerm d_111 = NULL,e_111 = NULL;
            ATerm h_111 (ATerm t)
            {
              t = not_null(e_111);
              if(((c_111 != NULL) && (c_111 != t)))
                _fail(t);
              else
                c_111 = t;
              t = not_null(d_111);
              return(t);
            }
            if(((d_111 != NULL) && (d_111 != t)))
              _fail(t);
            else
              d_111 = t;
            t = not_null(d_111);
            if(match_cons(t, sym_Output_1))
              {
                e_111 = ATgetArgument(t, 0);
                t = h_111(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(d_5, t);
          ;
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          {
            ATerm f_111 = NULL;
            ATerm i_111 (ATerm t)
            {
              t = not_null(f_111);
              if(((c_111 != NULL) && (c_111 != t)))
                _fail(t);
              else
                c_111 = t;
              t = not_null(f_111);
              return(t);
            }
            t = term_i_40;
            if(((f_111 != NULL) && (f_111 != t)))
              _fail(t);
            else
              f_111 = t;
            t = i_111(t);
          }
        }
      return(t);
    }
    t = _2_0(c_5, _id, t);
  }
  t = f_40;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(c_111);
        return(t);
      }
      t = split_2_0(f_5, _id, t);
      return(t);
    }
    t = _2_0(_id, e_5, t);
    {
      ATerm j_40 = t;
      int k_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm g_111 = NULL;
              if(((g_111 != NULL) && (g_111 != t)))
                _fail(t);
              else
                g_111 = t;
              t = not_null(g_111);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(g_111);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(h_5, t);
            return(t);
          }
          t = _2_0(g_5, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(k_40);
        }
      else
        {
          t = j_40;
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
ATerm apply_strategy_1_0 (ATerm v_132 (ATerm), ATerm t)
{
  ATerm m_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  ATerm u_111 (ATerm t)
  {
    ATerm r_111 = NULL,s_111 = NULL;
    t = not_null(p_111);
    if(((r_111 != NULL) && (r_111 != t)))
      _fail(t);
    else
      r_111 = t;
    t = not_null(q_111);
    if(((s_111 != NULL) && (s_111 != t)))
      _fail(t);
    else
      s_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_111)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_111))), not_null(s_111));
    return(t);
  }
  ATerm l_40;
  l_40 = t;
  t = dtime_0_0(t);
  t = l_40;
  t = v_132(t);
  {
    ATerm m_40;
    m_40 = t;
    {
      ATerm n_111 = NULL;
      ATerm t_111 (ATerm t)
      {
        t = not_null(n_111);
        if(((m_111 != NULL) && (m_111 != t)))
          _fail(t);
        else
          m_111 = t;
        t = not_null(n_111);
        return(t);
      }
      t = dtime_0_0(t);
      if(((n_111 != NULL) && (n_111 != t)))
        _fail(t);
      else
        n_111 = t;
      t = t_111(t);
    }
    t = m_40;
    if(((o_111 != NULL) && (o_111 != t)))
      _fail(t);
    else
      o_111 = t;
    t = not_null(o_111);
    if(match_cons(t, sym__2))
      {
        p_111 = ATgetArgument(t, 0);
        q_111 = ATgetArgument(t, 1);
        t = u_111(t);
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
  ATerm y_111 = NULL,z_111 = NULL;
  ATerm g_112 (ATerm t)
  {
    ATerm a_112 = NULL;
    t = not_null(y_111);
    if(((a_112 != NULL) && (a_112 != t)))
      _fail(t);
    else
      a_112 = t;
    t = not_null(z_111);
    t = SSL_fclose(not_null(a_112));
    return(t);
  }
  ATerm h_112 (ATerm t)
  {
    ATerm f_112 = NULL;
    t = not_null(z_111);
    if(((f_112 != NULL) && (f_112 != t)))
      _fail(t);
    else
      f_112 = t;
    t = not_null(z_111);
    t = SSL_fclose(not_null(f_112));
    return(t);
  }
  if(((z_111 != NULL) && (z_111 != t)))
    _fail(t);
  else
    z_111 = t;
  t = not_null(z_111);
  if(match_cons(t, sym_Stream_1))
    {
      y_111 = ATgetArgument(t, 0);
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_112(t);
            ;
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
            t = h_112(t);
          }
      }
    }
  else
    {
      t = h_112(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL;
  ATerm n_112 (ATerm t)
  {
    ATerm m_112 = NULL;
    t = not_null(l_112);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    t = not_null(k_112);
    t = SSL_read_term_from_stream(not_null(m_112));
    return(t);
  }
  if(((k_112 != NULL) && (k_112 != t)))
    _fail(t);
  else
    k_112 = t;
  t = not_null(k_112);
  if(match_cons(t, sym_Stream_1))
    {
      l_112 = ATgetArgument(t, 0);
      t = n_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm p_40;
  p_40 = t;
  {
    ATerm q_112 = NULL,s_112 = NULL;
    ATerm q_40;
    q_40 = t;
    {
      ATerm r_112 = NULL;
      ATerm u_112 (ATerm t)
      {
        t = not_null(r_112);
        if(((q_112 != NULL) && (q_112 != t)))
          _fail(t);
        else
          q_112 = t;
        t = not_null(r_112);
        return(t);
      }
      t = s_137(t);
      if(((r_112 != NULL) && (r_112 != t)))
        _fail(t);
      else
        r_112 = t;
      t = u_112(t);
    }
    t = q_40;
    {
      ATerm t_112 = NULL;
      ATerm v_112 (ATerm t)
      {
        t = not_null(t_112);
        if(((s_112 != NULL) && (s_112 != t)))
          _fail(t);
        else
          s_112 = t;
        t = not_null(t_112);
        return(t);
      }
      if(((t_112 != NULL) && (t_112 != t)))
        _fail(t);
      else
        t_112 = t;
      t = v_112(t);
      t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_112)), not_null(q_112)));
      t = printnl_0_0(t);
    }
  }
  t = p_40;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
  ATerm g_113 (ATerm t)
  {
    ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL;
    t = not_null(a_113);
    if(((c_113 != NULL) && (c_113 != t)))
      _fail(t);
    else
      c_113 = t;
    t = not_null(b_113);
    if(((d_113 != NULL) && (d_113 != t)))
      _fail(t);
    else
      d_113 = t;
    t = not_null(z_112);
    t = SSL_fopen(not_null(c_113), not_null(d_113));
    {
      ATerm f_113 = NULL;
      ATerm h_113 (ATerm t)
      {
        t = not_null(f_113);
        if(((e_113 != NULL) && (e_113 != t)))
          _fail(t);
        else
          e_113 = t;
        t = not_null(f_113);
        return(t);
      }
      if(((f_113 != NULL) && (f_113 != t)))
        _fail(t);
      else
        f_113 = t;
      t = h_113(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_113));
    }
    return(t);
  }
  if(((z_112 != NULL) && (z_112 != t)))
    _fail(t);
  else
    z_112 = t;
  t = not_null(z_112);
  if(match_cons(t, sym__2))
    {
      a_113 = ATgetArgument(t, 0);
      b_113 = ATgetArgument(t, 1);
      t = g_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm j_113 = NULL;
  ATerm l_113 (ATerm t)
  {
    ATerm k_113 = NULL;
    t = not_null(j_113);
    if(((k_113 != NULL) && (k_113 != t)))
      _fail(t);
    else
      k_113 = t;
    t = not_null(j_113);
    t = SSL_is_string(not_null(k_113));
    return(t);
  }
  if(((j_113 != NULL) && (j_113 != t)))
    _fail(t);
  else
    j_113 = t;
  t = l_113(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_113 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm o_113 = NULL;
    ATerm q_113 (ATerm t)
    {
      t = not_null(o_113);
      if(((n_113 != NULL) && (n_113 != t)))
        _fail(t);
      else
        n_113 = t;
      t = not_null(o_113);
      return(t);
    }
    if(((o_113 != NULL) && (o_113 != t)))
      _fail(t);
    else
      o_113 = t;
    t = q_113(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_113));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_113 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_113 = NULL;
    ATerm u_113 (ATerm t)
    {
      t = not_null(t_113);
      if(((s_113 != NULL) && (s_113 != t)))
        _fail(t);
      else
        s_113 = t;
      t = not_null(t_113);
      return(t);
    }
    if(((t_113 != NULL) && (t_113 != t)))
      _fail(t);
    else
      t_113 = t;
    t = u_113(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_113));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_113 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_113 = NULL;
    ATerm y_113 (ATerm t)
    {
      t = not_null(x_113);
      if(((w_113 != NULL) && (w_113 != t)))
        _fail(t);
      else
        w_113 = t;
      t = not_null(x_113);
      return(t);
    }
    if(((x_113 != NULL) && (x_113 != t)))
      _fail(t);
    else
      x_113 = t;
    t = y_113(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_113));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm d_114 = NULL;
  ATerm g_114 (ATerm t)
  {
    t = not_null(d_114);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm h_114 (ATerm t)
  {
    t = not_null(d_114);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm i_114 (ATerm t)
  {
    t = not_null(d_114);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((d_114 != NULL) && (d_114 != t)))
    _fail(t);
  else
    d_114 = t;
  t = not_null(d_114);
  if(match_cons(t, sym_stderr_0))
    {
      t = g_114(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_114(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = i_114(t);
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
  ATerm r_114 = NULL;
  ATerm c_115 (ATerm t)
  {
    ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
    t = not_null(r_114);
    if(((s_114 != NULL) && (s_114 != t)))
      _fail(t);
    else
      s_114 = t;
    t = not_null(r_114);
    {
      ATerm v_114 = NULL;
      ATerm d_115 (ATerm t)
      {
        ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
        ATerm e_115 (ATerm t)
        {
          t = not_null(a_115);
          if(((u_114 != NULL) && (u_114 != t)))
            _fail(t);
          else
            u_114 = t;
          t = not_null(b_115);
          if(((t_114 != NULL) && (t_114 != t)))
            _fail(t);
          else
            t_114 = t;
          t = not_null(x_114);
          return(t);
        }
        t = not_null(v_114);
        if(((w_114 != NULL) && (w_114 != t)))
          _fail(t);
        else
          w_114 = t;
        t = not_null(v_114);
        t = SSL_explode_term(not_null(w_114));
        if(((x_114 != NULL) && (x_114 != t)))
          _fail(t);
        else
          x_114 = t;
        t = not_null(x_114);
        if(match_cons(t, sym__2))
          {
            y_114 = ATgetArgument(t, 0);
            z_114 = ATgetArgument(t, 1);
            t = not_null(y_114);
            if(match_string(t, ""))
              {
                t = not_null(z_114);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_115 = ATgetFirst((ATermList) t);
                    b_115 = (ATerm) ATgetNext((ATermList) t);
                    t = e_115(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(s_114);
      if(((v_114 != NULL) && (v_114 != t)))
        _fail(t);
      else
        v_114 = t;
      t = d_115(t);
      t = not_null(u_114);
    }
    return(t);
  }
  if(((r_114 != NULL) && (r_114 != t)))
    _fail(t);
  else
    r_114 = t;
  t = c_115(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
  ATerm v_115 (ATerm t)
  {
    t = not_null(p_115);
    {
      ATerm r_40 = t;
      int s_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(s_40);
        }
      else
        {
          t = r_40;
          {
            ATerm t_40 = t;
            int u_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm s_115 = NULL,t_115 = NULL;
                  ATerm w_115 (ATerm t)
                  {
                    ATerm u_115 = NULL;
                    t = not_null(t_115);
                    if(((u_115 != NULL) && (u_115 != t)))
                      _fail(t);
                    else
                      u_115 = t;
                    t = not_null(u_115);
                    return(t);
                  }
                  if(((s_115 != NULL) && (s_115 != t)))
                    _fail(t);
                  else
                    s_115 = t;
                  t = not_null(s_115);
                  if(match_cons(t, sym_Path_1))
                    {
                      t_115 = ATgetArgument(t, 0);
                      t = w_115(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(i_5, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(u_40);
              }
            else
              {
                t = t_40;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((p_115 != NULL) && (p_115 != t)))
    _fail(t);
  else
    p_115 = t;
  t = not_null(p_115);
  if(match_cons(t, sym__2))
    {
      q_115 = ATgetArgument(t, 0);
      r_115 = ATgetArgument(t, 1);
      t = v_115(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_116 = NULL;
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_115 = NULL;
      ATerm a_116 = NULL;
      ATerm d_116 (ATerm t)
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
      t = d_116(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_115), term_x_40);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm j_5 (ATerm t)
        {
          t = term_y_40;
          return(t);
        }
        t = debug_1_0(j_5, t);
        _fail(t);
      }
    }
  {
    ATerm z_40;
    z_40 = t;
    {
      ATerm c_116 = NULL;
      ATerm e_116 (ATerm t)
      {
        t = not_null(c_116);
        if(((b_116 != NULL) && (b_116 != t)))
          _fail(t);
        else
          b_116 = t;
        t = not_null(c_116);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((c_116 != NULL) && (c_116 != t)))
        _fail(t);
      else
        c_116 = t;
      t = e_116(t);
    }
    t = z_40;
    t = fclose_0_0(t);
    t = not_null(b_116);
  }
  return(t);
}
ATerm split_2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  ATerm h_116 = NULL,j_116 = NULL;
  ATerm a_41;
  a_41 = t;
  {
    ATerm i_116 = NULL;
    ATerm l_116 (ATerm t)
    {
      t = not_null(i_116);
      if(((h_116 != NULL) && (h_116 != t)))
        _fail(t);
      else
        h_116 = t;
      t = not_null(i_116);
      return(t);
    }
    t = j_114(t);
    if(((i_116 != NULL) && (i_116 != t)))
      _fail(t);
    else
      i_116 = t;
    t = l_116(t);
  }
  t = a_41;
  {
    ATerm k_116 = NULL;
    ATerm m_116 (ATerm t)
    {
      t = not_null(k_116);
      if(((j_116 != NULL) && (j_116 != t)))
        _fail(t);
      else
        j_116 = t;
      t = not_null(k_116);
      return(t);
    }
    t = k_114(t);
    if(((k_116 != NULL) && (k_116 != t)))
      _fail(t);
    else
      k_116 = t;
    t = m_116(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_116), not_null(j_116));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm q_116 = NULL;
  ATerm b_41;
  b_41 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 (ATerm t)
        {
          ATerm r_116 = NULL,s_116 = NULL;
          ATerm u_116 (ATerm t)
          {
            t = not_null(s_116);
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
          t = not_null(r_116);
          if(match_cons(t, sym_Input_1))
            {
              s_116 = ATgetArgument(t, 0);
              t = u_116(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(k_5, t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        {
          ATerm t_116 = NULL;
          ATerm v_116 (ATerm t)
          {
            t = not_null(t_116);
            if(((q_116 != NULL) && (q_116 != t)))
              _fail(t);
            else
              q_116 = t;
            t = not_null(t_116);
            return(t);
          }
          t = term_e_41;
          if(((t_116 != NULL) && (t_116 != t)))
            _fail(t);
          else
            t_116 = t;
          t = v_116(t);
        }
      }
  }
  t = b_41;
  {
    ATerm l_5 (ATerm t)
    {
      t = not_null(q_116);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, l_5, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm b_117 = NULL;
    if(((b_117 != NULL) && (b_117 != t)))
      _fail(t);
    else
      b_117 = t;
    t = not_null(b_117);
    if(match_string(t, "-k"))
      {
        t = not_null(b_117);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(b_117);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm f_41;
    f_41 = t;
    {
      ATerm c_117 = NULL;
      ATerm d_117 = NULL;
      ATerm e_117 (ATerm t)
      {
        t = not_null(d_117);
        if(((c_117 != NULL) && (c_117 != t)))
          _fail(t);
        else
          c_117 = t;
        t = not_null(d_117);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((d_117 != NULL) && (d_117 != t)))
        _fail(t);
      else
        d_117 = t;
      t = e_117(t);
      t = (ATerm) ATmakeAppl(sym__2, term_g_41, not_null(c_117));
      t = set_config_0_0(t);
    }
    t = f_41;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_h_41;
    return(t);
  }
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm g_117 = NULL;
  ATerm k_117 (ATerm t)
  {
    ATerm h_117 = NULL;
    t = not_null(g_117);
    if(((h_117 != NULL) && (h_117 != t)))
      _fail(t);
    else
      h_117 = t;
    t = not_null(g_117);
    t = SSL_string_to_int(not_null(h_117));
    return(t);
  }
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  t = k_117(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm s_117 = NULL;
        if(((s_117 != NULL) && (s_117 != t)))
          _fail(t);
        else
          s_117 = t;
        t = not_null(s_117);
        if(match_string(t, "-S"))
          {
            t = not_null(s_117);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(s_117);
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
        t = term_k_41;
        t = set_config_0_0(t);
        t = term_l_41;
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_m_41;
        return(t);
      }
      t = Option_3_0(p_5, q_5, r_5, t);
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm t_117 = NULL;
              if(((t_117 != NULL) && (t_117 != t)))
                _fail(t);
              else
                t_117 = t;
              t = not_null(t_117);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(t_117);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              ATerm w_117 = NULL;
              ATerm z_41;
              z_41 = t;
              {
                ATerm u_117 = NULL;
                ATerm v_117 = NULL;
                ATerm z_117 (ATerm t)
                {
                  t = not_null(v_117);
                  if(((u_117 != NULL) && (u_117 != t)))
                    _fail(t);
                  else
                    u_117 = t;
                  t = not_null(v_117);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((v_117 != NULL) && (v_117 != t)))
                  _fail(t);
                else
                  v_117 = t;
                t = z_117(t);
                t = (ATerm) ATmakeAppl(sym__2, term_b_40, not_null(u_117));
                t = set_config_0_0(t);
              }
              t = z_41;
              {
                ATerm x_117 = NULL;
                ATerm a_118 (ATerm t)
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
                t = a_118(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_117));
              }
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_o_42;
              return(t);
            }
            t = ArgOption_3_0(s_5, t_5, u_5, t);
            ;
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm y_117 = NULL;
                if(((y_117 != NULL) && (y_117 != t)))
                  _fail(t);
                else
                  y_117 = t;
                t = not_null(y_117);
                if(match_string(t, "-s"))
                  {
                    t = not_null(y_117);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_5 (ATerm t)
              {
                t = term_a_43;
                t = set_config_0_0(t);
                t = term_b_43;
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = term_j_43;
                return(t);
              }
              t = Option_3_0(v_5, w_5, x_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = k_43;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm e_118 = NULL;
    if(((e_118 != NULL) && (e_118 != t)))
      _fail(t);
    else
      e_118 = t;
    t = not_null(e_118);
    if(match_string(t, "-o"))
      {
        t = not_null(e_118);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(e_118);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm h_118 = NULL;
    ATerm r_43;
    r_43 = t;
    {
      ATerm f_118 = NULL;
      ATerm g_118 = NULL;
      ATerm j_118 (ATerm t)
      {
        t = not_null(g_118);
        if(((f_118 != NULL) && (f_118 != t)))
          _fail(t);
        else
          f_118 = t;
        t = not_null(g_118);
        return(t);
      }
      if(((g_118 != NULL) && (g_118 != t)))
        _fail(t);
      else
        g_118 = t;
      t = j_118(t);
      t = (ATerm) ATmakeAppl(sym__2, term_s_43, not_null(f_118));
      t = set_config_0_0(t);
    }
    t = r_43;
    {
      ATerm i_118 = NULL;
      ATerm k_118 (ATerm t)
      {
        t = not_null(i_118);
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
      t = k_118(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_118));
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_c_44;
    return(t);
  }
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm m_118 = NULL;
          if(((m_118 != NULL) && (m_118 != t)))
            _fail(t);
          else
            m_118 = t;
          t = not_null(m_118);
          if(match_string(t, "-b"))
            {
              t = not_null(m_118);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          t = term_s_44;
          t = set_config_0_0(t);
          t = term_t_44;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_v_44;
          return(t);
        }
        t = Option_3_0(b_6, c_6, d_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL;
  ATerm c_119 (ATerm t)
  {
    t = not_null(s_118);
    t = register_usage_1_0(m_0, t);
    return(t);
  }
  ATerm d_119 (ATerm t)
  {
    ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL;
    t = not_null(t_118);
    if(((x_118 != NULL) && (x_118 != t)))
      _fail(t);
    else
      x_118 = t;
    t = not_null(v_118);
    if(((y_118 != NULL) && (y_118 != t)))
      _fail(t);
    else
      y_118 = t;
    t = not_null(w_118);
    if(((z_118 != NULL) && (z_118 != t)))
      _fail(t);
    else
      z_118 = t;
    t = not_null(s_118);
    {
      ATerm w_44;
      w_44 = t;
      t = not_null(x_118);
      t = h_0(t);
      t = w_44;
      {
        ATerm b_119 = NULL;
        ATerm e_119 (ATerm t)
        {
          t = not_null(b_119);
          if(((a_119 != NULL) && (a_119 != t)))
            _fail(t);
          else
            a_119 = t;
          t = not_null(b_119);
          return(t);
        }
        t = not_null(y_118);
        t = i_0(t);
        if(((b_119 != NULL) && (b_119 != t)))
          _fail(t);
        else
          b_119 = t;
        t = e_119(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(z_118)), not_null(a_119));
      }
    }
    return(t);
  }
  if(((s_118 != NULL) && (s_118 != t)))
    _fail(t);
  else
    s_118 = t;
  t = not_null(s_118);
  if(match_string(t, "register-usage-info"))
    {
      t = c_119(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_118 = ATgetFirst((ATermList) t);
          u_118 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(u_118);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_118 = ATgetFirst((ATermList) t);
              w_118 = (ATerm) ATgetNext((ATermList) t);
              t = d_119(t);
            }
          else
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
  ATerm e_6 (ATerm t)
  {
    ATerm m_119 = NULL;
    if(((m_119 != NULL) && (m_119 != t)))
      _fail(t);
    else
      m_119 = t;
    t = not_null(m_119);
    if(match_string(t, "-i"))
      {
        t = not_null(m_119);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(m_119);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm r_119 = NULL;
    ATerm x_44;
    x_44 = t;
    {
      ATerm n_119 = NULL;
      ATerm q_119 = NULL;
      ATerm t_119 (ATerm t)
      {
        t = not_null(q_119);
        if(((n_119 != NULL) && (n_119 != t)))
          _fail(t);
        else
          n_119 = t;
        t = not_null(q_119);
        return(t);
      }
      if(((q_119 != NULL) && (q_119 != t)))
        _fail(t);
      else
        q_119 = t;
      t = t_119(t);
      t = (ATerm) ATmakeAppl(sym__2, term_y_44, not_null(n_119));
      t = set_config_0_0(t);
    }
    t = x_44;
    {
      ATerm s_119 = NULL;
      ATerm u_119 (ATerm t)
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
      t = u_119(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_119));
    }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_e_45;
    return(t);
  }
  t = ArgOption_3_0(e_6, f_6, g_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      {
        ATerm h_45 = t;
        int i_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_45);
          }
        else
          {
            t = h_45;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_120 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm c_120 = NULL;
    ATerm d_120 (ATerm t)
    {
      t = not_null(c_120);
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = not_null(c_120);
      return(t);
    }
    t = term_g_17;
    t = whoami_0_0(t);
    if(((c_120 != NULL) && (c_120 != t)))
      _fail(t);
    else
      c_120 = t;
    t = d_120(t);
    t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATempty, term_j_45), not_null(b_120)));
    t = printnl_0_0(t);
    t = term_k_8;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_45;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm f_120 = NULL;
  ATerm h_120 (ATerm t)
  {
    ATerm g_120 = NULL;
    t = not_null(f_120);
    if(((g_120 != NULL) && (g_120 != t)))
      _fail(t);
    else
      g_120 = t;
    t = not_null(f_120);
    t = SSL_TicksToSeconds(not_null(g_120));
    return(t);
  }
  if(((f_120 != NULL) && (f_120 != t)))
    _fail(t);
  else
    f_120 = t;
  t = h_120(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL;
  ATerm p_120 (ATerm t)
  {
    ATerm n_120 = NULL,o_120 = NULL;
    t = not_null(l_120);
    if(((n_120 != NULL) && (n_120 != t)))
      _fail(t);
    else
      n_120 = t;
    t = not_null(m_120);
    if(((o_120 != NULL) && (o_120 != t)))
      _fail(t);
    else
      o_120 = t;
    t = not_null(k_120);
    {
      ATerm l_45 = t;
      int b_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(n_120), not_null(o_120));
          ;
          LocalPopChoice(b_46);
        }
      else
        {
          t = l_45;
          t = SSL_addr(not_null(n_120), not_null(o_120));
        }
    }
    return(t);
  }
  if(((k_120 != NULL) && (k_120 != t)))
    _fail(t);
  else
    k_120 = t;
  t = not_null(k_120);
  if(match_cons(t, sym__2))
    {
      l_120 = ATgetArgument(t, 0);
      m_120 = ATgetArgument(t, 1);
      t = p_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm t)
{
  ATerm c_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = x_121(t);
      ;
      LocalPopChoice(l_46);
    }
  else
    {
      t = c_46;
      {
        ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
        ATerm a_121 (ATerm t)
        {
          ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL;
          t = not_null(u_120);
          if(((w_120 != NULL) && (w_120 != t)))
            _fail(t);
          else
            w_120 = t;
          t = not_null(v_120);
          if(((x_120 != NULL) && (x_120 != t)))
            _fail(t);
          else
            x_120 = t;
          t = not_null(t_120);
          {
            ATerm z_120 = NULL;
            ATerm b_121 (ATerm t)
            {
              t = not_null(z_120);
              if(((y_120 != NULL) && (y_120 != t)))
                _fail(t);
              else
                y_120 = t;
              t = not_null(z_120);
              return(t);
            }
            t = not_null(x_120);
            t = foldr_2_0(x_121, y_121, t);
            if(((z_120 != NULL) && (z_120 != t)))
              _fail(t);
            else
              z_120 = t;
            t = b_121(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_120), not_null(y_120));
            t = y_121(t);
          }
          return(t);
        }
        if(((t_120 != NULL) && (t_120 != t)))
          _fail(t);
        else
          t_120 = t;
        t = not_null(t_120);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_120 = ATgetFirst((ATermList) t);
            v_120 = (ATerm) ATgetNext((ATermList) t);
            t = a_121(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm g_121 = NULL;
  ATerm p_121 (ATerm t)
  {
    ATerm h_121 = NULL,i_121 = NULL;
    t = not_null(g_121);
    if(((h_121 != NULL) && (h_121 != t)))
      _fail(t);
    else
      h_121 = t;
    t = not_null(g_121);
    {
      ATerm j_121 = NULL;
      ATerm q_121 (ATerm t)
      {
        ATerm k_121 = NULL,l_121 = NULL,n_121 = NULL,o_121 = NULL;
        ATerm r_121 (ATerm t)
        {
          t = not_null(o_121);
          if(((i_121 != NULL) && (i_121 != t)))
            _fail(t);
          else
            i_121 = t;
          t = not_null(l_121);
          return(t);
        }
        t = not_null(j_121);
        if(((k_121 != NULL) && (k_121 != t)))
          _fail(t);
        else
          k_121 = t;
        t = not_null(j_121);
        t = SSL_explode_term(not_null(k_121));
        if(((l_121 != NULL) && (l_121 != t)))
          _fail(t);
        else
          l_121 = t;
        t = not_null(l_121);
        if(match_cons(t, sym__2))
          {
            n_121 = ATgetArgument(t, 0);
            o_121 = ATgetArgument(t, 1);
            t = r_121(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(h_121);
      if(((j_121 != NULL) && (j_121 != t)))
        _fail(t);
      else
        j_121 = t;
      t = q_121(t);
      t = not_null(i_121);
      t = foldr_2_0(v_119, w_119, t);
    }
    return(t);
  }
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  t = p_121(t);
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
    ATerm h_6 (ATerm t)
    {
      t = term_j_8;
      return(t);
    }
    t = crush_2_0(h_6, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL;
  ATerm e_122 (ATerm t)
  {
    ATerm c_122 = NULL,d_122 = NULL;
    t = not_null(v_121);
    if(((c_122 != NULL) && (c_122 != t)))
      _fail(t);
    else
      c_122 = t;
    t = not_null(w_121);
    if(((d_122 != NULL) && (d_122 != t)))
      _fail(t);
    else
      d_122 = t;
    t = not_null(u_121);
    {
      ATerm m_46;
      m_46 = t;
      {
        ATerm n_46 = t;
        int o_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(c_122), not_null(d_122));
            ;
            LocalPopChoice(o_46);
          }
        else
          {
            t = n_46;
            t = SSL_gtr(not_null(c_122), not_null(d_122));
          }
      }
      t = m_46;
    }
    return(t);
  }
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  t = not_null(u_121);
  if(match_cons(t, sym__2))
    {
      v_121 = ATgetArgument(t, 0);
      w_121 = ATgetArgument(t, 1);
      t = e_122(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_122 = NULL;
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL;
      ATerm l_122 (ATerm t)
      {
        t = not_null(j_122);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = not_null(k_122);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = not_null(i_122);
        return(t);
      }
      if(((i_122 != NULL) && (i_122 != t)))
        _fail(t);
      else
        i_122 = t;
      t = not_null(i_122);
      if(match_cons(t, sym__2))
        {
          j_122 = ATgetArgument(t, 0);
          k_122 = ATgetArgument(t, 1);
          t = l_122(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm r_46;
    r_46 = t;
    {
      ATerm n_122 = NULL;
      ATerm o_122 = NULL;
      ATerm p_122 (ATerm t)
      {
        t = not_null(o_122);
        if(((n_122 != NULL) && (n_122 != t)))
          _fail(t);
        else
          n_122 = t;
        t = not_null(o_122);
        return(t);
      }
      t = term_b_40;
      t = get_config_0_0(t);
      if(((o_122 != NULL) && (o_122 != t)))
        _fail(t);
      else
        o_122 = t;
      t = p_122(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_122), term_k_8);
      t = geq_0_0(t);
    }
    t = r_46;
    t = b_131(t);
    return(t);
  }
  t = try_1_0(i_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm s_122 = NULL,u_122 = NULL;
    ATerm s_46;
    s_46 = t;
    {
      ATerm t_122 = NULL;
      ATerm w_122 (ATerm t)
      {
        t = not_null(t_122);
        if(((s_122 != NULL) && (s_122 != t)))
          _fail(t);
        else
          s_122 = t;
        t = not_null(t_122);
        return(t);
      }
      t = run_time_0_0(t);
      if(((t_122 != NULL) && (t_122 != t)))
        _fail(t);
      else
        t_122 = t;
      t = w_122(t);
    }
    t = s_46;
    {
      ATerm v_122 = NULL;
      ATerm x_122 (ATerm t)
      {
        t = not_null(v_122);
        if(((u_122 != NULL) && (u_122 != t)))
          _fail(t);
        else
          u_122 = t;
        t = not_null(v_122);
        return(t);
      }
      t = term_g_17;
      t = whoami_0_0(t);
      if(((v_122 != NULL) && (v_122 != t)))
        _fail(t);
      else
        v_122 = t;
      t = x_122(t);
      t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_47), not_null(s_122)), term_t_46), not_null(u_122)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_j_8;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm c_123 = NULL;
  ATerm o_123 (ATerm t)
  {
    ATerm d_123 = NULL,j_123 = NULL,m_123 = NULL;
    t = not_null(c_123);
    if(((d_123 != NULL) && (d_123 != t)))
      _fail(t);
    else
      d_123 = t;
    t = not_null(c_123);
    {
      ATerm h_47;
      h_47 = t;
      {
        ATerm l_123 = NULL;
        ATerm p_123 (ATerm t)
        {
          t = not_null(l_123);
          if(((j_123 != NULL) && (j_123 != t)))
            _fail(t);
          else
            j_123 = t;
          t = not_null(l_123);
          return(t);
        }
        t = SSLgetAnnotations(not_null(d_123));
        if(((l_123 != NULL) && (l_123 != t)))
          _fail(t);
        else
          l_123 = t;
        t = p_123(t);
      }
      t = h_47;
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
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_123));
        if(((n_123 != NULL) && (n_123 != t)))
          _fail(t);
        else
          n_123 = t;
        t = q_123(t);
        t = not_null(m_123);
      }
    }
    return(t);
  }
  if(((c_123 != NULL) && (c_123 != t)))
    _fail(t);
  else
    c_123 = t;
  t = not_null(c_123);
  if(match_cons(t, sym_Version_0))
    {
      t = o_123(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_133 (ATerm), ATerm t)
{
  ATerm i_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_47;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_47);
    }
  else
    {
      t = i_47;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              {
                ATerm n_47 = t;
                int o_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_47);
                  }
                else
                  {
                    t = n_47;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = t_133(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_123 = NULL;
  ATerm u_123 (ATerm t)
  {
    ATerm t_123 = NULL;
    t = not_null(s_123);
    if(((t_123 != NULL) && (t_123 != t)))
      _fail(t);
    else
      t_123 = t;
    t = not_null(s_123);
    t = SSL_table_create(not_null(t_123));
    return(t);
  }
  if(((s_123 != NULL) && (s_123 != t)))
    _fail(t);
  else
    s_123 = t;
  t = u_123(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm w_123 = NULL;
  ATerm f_124 (ATerm t)
  {
    ATerm x_123 = NULL;
    t = not_null(w_123);
    if(((x_123 != NULL) && (x_123 != t)))
      _fail(t);
    else
      x_123 = t;
    t = not_null(w_123);
    {
      ATerm b_48;
      b_48 = t;
      t = term_c_48;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_c_48, term_d_48, not_null(x_123));
      t = table_put_0_0(t);
      t = b_48;
    }
    return(t);
  }
  if(((w_123 != NULL) && (w_123 != t)))
    _fail(t);
  else
    w_123 = t;
  t = f_124(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_124 = NULL;
  ATerm l_124 (ATerm t)
  {
    ATerm i_124 = NULL;
    t = not_null(h_124);
    if(((i_124 != NULL) && (i_124 != t)))
      _fail(t);
    else
      i_124 = t;
    t = not_null(h_124);
    t = SSL_table_destroy(not_null(i_124));
    return(t);
  }
  if(((h_124 != NULL) && (h_124 != t)))
    _fail(t);
  else
    h_124 = t;
  t = l_124(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm n_124 = NULL;
  ATerm q_124 (ATerm t)
  {
    ATerm p_124 = NULL;
    t = not_null(n_124);
    if(((p_124 != NULL) && (p_124 != t)))
      _fail(t);
    else
      p_124 = t;
    t = not_null(n_124);
    t = SSL_exit(not_null(p_124));
    return(t);
  }
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  t = q_124(t);
  return(t);
}
ATerm long_description_1_0 (ATerm u_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  ATerm t_124 (ATerm t)
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        t = Cons_2_0(y_116, t_124, t);
      }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL;
  ATerm m_125 (ATerm t)
  {
    ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
    t = not_null(a_125);
    if(((d_125 != NULL) && (d_125 != t)))
      _fail(t);
    else
      d_125 = t;
    t = not_null(b_125);
    if(((e_125 != NULL) && (e_125 != t)))
      _fail(t);
    else
      e_125 = t;
    t = not_null(e_125);
    {
      ATerm g_48;
      g_48 = t;
      {
        ATerm g_125 = NULL,j_125 = NULL,l_125 = NULL;
        ATerm q_125 (ATerm t)
        {
          t = not_null(l_125);
          if(((f_125 != NULL) && (f_125 != t)))
            _fail(t);
          else
            f_125 = t;
          t = not_null(l_125);
          return(t);
        }
        ATerm h_48;
        h_48 = t;
        {
          ATerm i_125 = NULL;
          ATerm o_125 (ATerm t)
          {
            t = not_null(i_125);
            if(((g_125 != NULL) && (g_125 != t)))
              _fail(t);
            else
              g_125 = t;
            t = not_null(i_125);
            return(t);
          }
          t = f_0(t);
          if(((i_125 != NULL) && (i_125 != t)))
            _fail(t);
          else
            i_125 = t;
          t = o_125(t);
        }
        t = h_48;
        {
          ATerm k_125 = NULL;
          ATerm p_125 (ATerm t)
          {
            t = not_null(k_125);
            if(((j_125 != NULL) && (j_125 != t)))
              _fail(t);
            else
              j_125 = t;
            t = not_null(k_125);
            return(t);
          }
          t = not_null(d_125);
          t = e_0(t);
          if(((k_125 != NULL) && (k_125 != t)))
            _fail(t);
          else
            k_125 = t;
          t = p_125(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(g_125)), not_null(j_125));
          if(((l_125 != NULL) && (l_125 != t)))
            _fail(t);
          else
            l_125 = t;
          t = q_125(t);
        }
      }
      t = g_48;
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(f_125);
          return(t);
        }
        t = reverse_acc_2_0(e_0, l_6, t);
      }
    }
    return(t);
  }
  ATerm n_125 (ATerm t)
  {
    t = term_g_17;
    t = f_0(t);
    return(t);
  }
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = not_null(c_125);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_125 = ATgetFirst((ATermList) t);
      b_125 = (ATerm) ATgetNext((ATermList) t);
      t = m_125(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_125(t);
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
  ATerm m_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, m_6, t);
  return(t);
}
ATerm short_description_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL;
  ATerm k_126 (ATerm t)
  {
    ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL,g_126 = NULL;
    ATerm m_126 (ATerm t)
    {
      ATerm h_126 = NULL,i_126 = NULL;
      t = not_null(g_126);
      if(((h_126 != NULL) && (h_126 != t)))
        _fail(t);
      else
        h_126 = t;
      t = not_null(g_126);
      {
        ATerm j_126 = NULL;
        ATerm n_126 (ATerm t)
        {
          t = not_null(j_126);
          if(((i_126 != NULL) && (i_126 != t)))
            _fail(t);
          else
            i_126 = t;
          t = not_null(j_126);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_126)), not_null(a_126));
        if(((j_126 != NULL) && (j_126 != t)))
          _fail(t);
        else
          j_126 = t;
        t = n_126(t);
        t = not_null(i_126);
      }
      return(t);
    }
    t = not_null(w_125);
    if(((y_125 != NULL) && (y_125 != t)))
      _fail(t);
    else
      y_125 = t;
    t = not_null(x_125);
    if(((z_125 != NULL) && (z_125 != t)))
      _fail(t);
    else
      z_125 = t;
    t = not_null(w_125);
    {
      ATerm f_126 = NULL;
      ATerm l_126 (ATerm t)
      {
        t = not_null(f_126);
        if(((a_126 != NULL) && (a_126 != t)))
          _fail(t);
        else
          a_126 = t;
        t = not_null(f_126);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_125));
      if(((f_126 != NULL) && (f_126 != t)))
        _fail(t);
      else
        f_126 = t;
      t = l_126(t);
      t = not_null(z_125);
      t = k_107(t);
      if(((g_126 != NULL) && (g_126 != t)))
        _fail(t);
      else
        g_126 = t;
      t = m_126(t);
    }
    return(t);
  }
  if(((w_125 != NULL) && (w_125 != t)))
    _fail(t);
  else
    w_125 = t;
  t = not_null(w_125);
  if(match_cons(t, sym_Program_1))
    {
      x_125 = ATgetArgument(t, 0);
      t = k_126(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_126 = NULL;
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_126 = NULL;
      ATerm z_126 (ATerm t)
      {
        t = not_null(t_126);
        if(((s_126 != NULL) && (s_126 != t)))
          _fail(t);
        else
          s_126 = t;
        t = not_null(t_126);
        return(t);
      }
      t = term_k_45;
      t = get_config_0_0(t);
      if(((t_126 != NULL) && (t_126 != t)))
        _fail(t);
      else
        t_126 = t;
      t = z_126(t);
      ;
      LocalPopChoice(o_48);
    }
  else
    {
      t = n_48;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm o_6 (ATerm t)
          {
            ATerm u_126 = NULL;
            ATerm a_127 (ATerm t)
            {
              t = not_null(u_126);
              if(((s_126 != NULL) && (s_126 != t)))
                _fail(t);
              else
                s_126 = t;
              t = not_null(u_126);
              return(t);
            }
            if(((u_126 != NULL) && (u_126 != t)))
              _fail(t);
            else
              u_126 = t;
            t = a_127(t);
            return(t);
          }
          t = Program_1_0(o_6, t);
          return(t);
        }
        t = option_defined_1_0(n_6, t);
      }
    }
  {
    ATerm p_6 (ATerm t)
    {
      ATerm q_6 (ATerm t)
      {
        t = not_null(s_126);
        return(t);
      }
      t = short_description_1_0(q_6, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(p_6, t);
    t = term_p_48;
    t = echo_0_0(t);
    t = term_u_48;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm v_126 = NULL;
        ATerm w_126 = NULL;
        ATerm b_127 (ATerm t)
        {
          t = not_null(w_126);
          if(((v_126 != NULL) && (v_126 != t)))
            _fail(t);
          else
            v_126 = t;
          t = not_null(w_126);
          return(t);
        }
        if(((w_126 != NULL) && (w_126 != t)))
          _fail(t);
        else
          w_126 = t;
        t = b_127(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_126)), term_v_48);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_6, t);
      {
        ATerm s_6 (ATerm t)
        {
          ATerm x_126 = NULL;
          ATerm y_126 = NULL;
          ATerm c_127 (ATerm t)
          {
            t = not_null(y_126);
            if(((x_126 != NULL) && (x_126 != t)))
              _fail(t);
            else
              x_126 = t;
            t = not_null(y_126);
            return(t);
          }
          ATerm t_6 (ATerm t)
          {
            t = not_null(s_126);
            return(t);
          }
          t = long_description_1_0(t_6, t);
          if(((y_126 != NULL) && (y_126 != t)))
            _fail(t);
          else
            y_126 = t;
          t = c_127(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(x_126)), term_x_48);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(s_6, t);
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
  ATerm y_48 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(p_49);
    }
  else
    {
      t = y_48;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL;
  ATerm u_127 (ATerm t)
  {
    ATerm k_127 = NULL,l_127 = NULL,m_127 = NULL,o_127 = NULL;
    ATerm w_127 (ATerm t)
    {
      ATerm p_127 = NULL,q_127 = NULL;
      t = not_null(o_127);
      if(((p_127 != NULL) && (p_127 != t)))
        _fail(t);
      else
        p_127 = t;
      t = not_null(o_127);
      {
        ATerm r_127 = NULL;
        ATerm x_127 (ATerm t)
        {
          t = not_null(r_127);
          if(((q_127 != NULL) && (q_127 != t)))
            _fail(t);
          else
            q_127 = t;
          t = not_null(r_127);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_127)), not_null(m_127));
        if(((r_127 != NULL) && (r_127 != t)))
          _fail(t);
        else
          r_127 = t;
        t = x_127(t);
        t = not_null(q_127);
      }
      return(t);
    }
    t = not_null(i_127);
    if(((k_127 != NULL) && (k_127 != t)))
      _fail(t);
    else
      k_127 = t;
    t = not_null(j_127);
    if(((l_127 != NULL) && (l_127 != t)))
      _fail(t);
    else
      l_127 = t;
    t = not_null(i_127);
    {
      ATerm n_127 = NULL;
      ATerm v_127 (ATerm t)
      {
        t = not_null(n_127);
        if(((m_127 != NULL) && (m_127 != t)))
          _fail(t);
        else
          m_127 = t;
        t = not_null(n_127);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_127));
      if(((n_127 != NULL) && (n_127 != t)))
        _fail(t);
      else
        n_127 = t;
      t = v_127(t);
      t = not_null(l_127);
      t = l_107(t);
      if(((o_127 != NULL) && (o_127 != t)))
        _fail(t);
      else
        o_127 = t;
      t = w_127(t);
    }
    return(t);
  }
  if(((i_127 != NULL) && (i_127 != t)))
    _fail(t);
  else
    i_127 = t;
  t = not_null(i_127);
  if(match_cons(t, sym_Undefined_1))
    {
      j_127 = ATgetArgument(t, 0);
      t = u_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  ATerm y_127 (ATerm t)
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_117, _id, t);
        ;
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        t = Cons_2_0(_id, y_127, t);
      }
    return(t);
  }
  t = y_127(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  t = fetch_1_0(t_134, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
  if(((a_128 != NULL) && (a_128 != t)))
    _fail(t);
  else
    a_128 = t;
  t = not_null(a_128);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(a_128);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_128 = ATgetFirst((ATermList) t);
          c_128 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_128);
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
  ATerm s_49;
  s_49 = t;
  {
    ATerm f_128 = NULL;
    ATerm o_128 = NULL;
    ATerm q_128 (ATerm t)
    {
      t = not_null(o_128);
      if(((f_128 != NULL) && (f_128 != t)))
        _fail(t);
      else
        f_128 = t;
      t = not_null(o_128);
      return(t);
    }
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(u_49);
      }
    else
      {
        t = t_49;
        {
          ATerm g_128 = NULL;
          ATerm n_128 = NULL;
          ATerm p_128 (ATerm t)
          {
            t = not_null(n_128);
            if(((g_128 != NULL) && (g_128 != t)))
              _fail(t);
            else
              g_128 = t;
            t = not_null(n_128);
            return(t);
          }
          if(((n_128 != NULL) && (n_128 != t)))
            _fail(t);
          else
            n_128 = t;
          t = p_128(t);
          t = (ATerm) ATinsert(ATempty, not_null(g_128));
        }
      }
    if(((o_128 != NULL) && (o_128 != t)))
      _fail(t);
    else
      o_128 = t;
    t = q_128(t);
    t = (ATerm) ATmakeAppl(sym__2, term_i_40, not_null(f_128));
    t = printnl_0_0(t);
  }
  t = s_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_45;
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
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm v_128 = NULL;
  ATerm b_129 (ATerm t)
  {
    ATerm w_128 = NULL,x_128 = NULL,z_128 = NULL;
    t = not_null(v_128);
    if(((w_128 != NULL) && (w_128 != t)))
      _fail(t);
    else
      w_128 = t;
    t = not_null(v_128);
    {
      ATerm x_49;
      x_49 = t;
      {
        ATerm y_128 = NULL;
        ATerm c_129 (ATerm t)
        {
          t = not_null(y_128);
          if(((x_128 != NULL) && (x_128 != t)))
            _fail(t);
          else
            x_128 = t;
          t = not_null(y_128);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_128));
        if(((y_128 != NULL) && (y_128 != t)))
          _fail(t);
        else
          y_128 = t;
        t = c_129(t);
      }
      t = x_49;
      {
        ATerm a_129 = NULL;
        ATerm d_129 (ATerm t)
        {
          t = not_null(a_129);
          if(((z_128 != NULL) && (z_128 != t)))
            _fail(t);
          else
            z_128 = t;
          t = not_null(a_129);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_128));
        if(((a_129 != NULL) && (a_129 != t)))
          _fail(t);
        else
          a_129 = t;
        t = d_129(t);
        t = not_null(z_128);
      }
    }
    return(t);
  }
  if(((v_128 != NULL) && (v_128 != t)))
    _fail(t);
  else
    v_128 = t;
  t = not_null(v_128);
  if(match_cons(t, sym_Help_0))
    {
      t = b_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_113(t);
      ;
      LocalPopChoice(z_49);
    }
  else
    {
      t = y_49;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_50 = t;
  int b_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm g_129 = NULL;
        if(((g_129 != NULL) && (g_129 != t)))
          _fail(t);
        else
          g_129 = t;
        t = not_null(g_129);
        if(match_string(t, "--about"))
          {
            t = not_null(g_129);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = term_w_50;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_x_50;
        return(t);
      }
      t = Option_3_0(u_6, v_6, w_6, t);
      ;
      LocalPopChoice(b_50);
    }
  else
    {
      t = a_50;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm h_129 = NULL;
          if(((h_129 != NULL) && (h_129 != t)))
            _fail(t);
          else
            h_129 = t;
          t = not_null(h_129);
          if(match_string(t, "--version"))
            {
              t = not_null(h_129);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_6 (ATerm t)
        {
          t = term_w_50;
          t = set_config_0_0(t);
          t = term_z_50;
          t = set_config_0_0(t);
          t = term_a_51;
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = term_b_51;
          return(t);
        }
        t = Option_3_0(x_6, y_6, z_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  ATerm p_129 (ATerm t)
  {
    ATerm n_129 = NULL,o_129 = NULL;
    t = not_null(l_129);
    if(((n_129 != NULL) && (n_129 != t)))
      _fail(t);
    else
      n_129 = t;
    t = not_null(m_129);
    if(((o_129 != NULL) && (o_129 != t)))
      _fail(t);
    else
      o_129 = t;
    t = not_null(k_129);
    t = SSL_table_get(not_null(n_129), not_null(o_129));
    return(t);
  }
  if(((k_129 != NULL) && (k_129 != t)))
    _fail(t);
  else
    k_129 = t;
  t = not_null(k_129);
  if(match_cons(t, sym__2))
    {
      l_129 = ATgetArgument(t, 0);
      m_129 = ATgetArgument(t, 1);
      t = p_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL;
  ATerm c_130 (ATerm t)
  {
    ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL;
    t = not_null(u_129);
    if(((y_129 != NULL) && (y_129 != t)))
      _fail(t);
    else
      y_129 = t;
    t = not_null(v_129);
    if(((z_129 != NULL) && (z_129 != t)))
      _fail(t);
    else
      z_129 = t;
    t = not_null(w_129);
    if(((x_129 != NULL) && (x_129 != t)))
      _fail(t);
    else
      x_129 = t;
    t = not_null(t_129);
    {
      ATerm v_51;
      v_51 = t;
      {
        ATerm a_130 = NULL;
        ATerm b_130 = NULL;
        ATerm d_130 (ATerm t)
        {
          t = not_null(b_130);
          if(((a_130 != NULL) && (a_130 != t)))
            _fail(t);
          else
            a_130 = t;
          t = not_null(b_130);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_129), not_null(z_129));
        {
          ATerm w_51 = t;
          int x_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(x_51);
            }
          else
            {
              t = w_51;
              t = (ATerm) ATempty;
            }
          if(((b_130 != NULL) && (b_130 != t)))
            _fail(t);
          else
            b_130 = t;
          t = d_130(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(y_129), not_null(z_129), (ATerm) ATinsert(CheckATermList(not_null(a_130)), not_null(x_129)));
        t = table_put_0_0(t);
      }
      t = v_51;
    }
    return(t);
  }
  if(((t_129 != NULL) && (t_129 != t)))
    _fail(t);
  else
    t_129 = t;
  t = not_null(t_129);
  if(match_cons(t, sym__3))
    {
      u_129 = ATgetArgument(t, 0);
      v_129 = ATgetArgument(t, 1);
      w_129 = ATgetArgument(t, 2);
      t = c_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm f_130 = NULL;
  ATerm g_130 = NULL;
  ATerm h_130 (ATerm t)
  {
    t = not_null(g_130);
    if(((f_130 != NULL) && (f_130 != t)))
      _fail(t);
    else
      f_130 = t;
    t = not_null(g_130);
    return(t);
  }
  t = term_g_17;
  t = y_135(t);
  if(((g_130 != NULL) && (g_130 != t)))
    _fail(t);
  else
    g_130 = t;
  t = h_130(t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_48, term_t_48, not_null(f_130));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL;
  ATerm t_130 (ATerm t)
  {
    t = not_null(m_130);
    t = register_usage_1_0(c_0, t);
    return(t);
  }
  ATerm u_130 (ATerm t)
  {
    ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
    t = not_null(n_130);
    if(((p_130 != NULL) && (p_130 != t)))
      _fail(t);
    else
      p_130 = t;
    t = not_null(o_130);
    if(((q_130 != NULL) && (q_130 != t)))
      _fail(t);
    else
      q_130 = t;
    t = not_null(m_130);
    {
      ATerm y_51;
      y_51 = t;
      t = not_null(p_130);
      t = a_0(t);
      t = y_51;
      {
        ATerm s_130 = NULL;
        ATerm v_130 (ATerm t)
        {
          t = not_null(s_130);
          if(((r_130 != NULL) && (r_130 != t)))
            _fail(t);
          else
            r_130 = t;
          t = not_null(s_130);
          return(t);
        }
        t = term_g_17;
        t = b_0(t);
        if(((s_130 != NULL) && (s_130 != t)))
          _fail(t);
        else
          s_130 = t;
        t = v_130(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(q_130)), not_null(r_130));
      }
    }
    return(t);
  }
  if(((m_130 != NULL) && (m_130 != t)))
    _fail(t);
  else
    m_130 = t;
  t = not_null(m_130);
  if(match_string(t, "register-usage-info"))
    {
      t = t_130(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_130 = ATgetFirst((ATermList) t);
          o_130 = (ATerm) ATgetNext((ATermList) t);
          t = u_130(t);
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
  ATerm a_7 (ATerm t)
  {
    ATerm x_130 = NULL;
    if(((x_130 != NULL) && (x_130 != t)))
      _fail(t);
    else
      x_130 = t;
    t = not_null(x_130);
    if(match_string(t, "--help"))
      {
        t = not_null(x_130);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(x_130);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(x_130);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    t = term_z_51;
    t = set_config_0_0(t);
    t = term_a_52;
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_b_52;
    return(t);
  }
  t = Option_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm a_131 = NULL,d_131 = NULL,e_131 = NULL;
  ATerm h_131 (ATerm t)
  {
    ATerm f_131 = NULL,g_131 = NULL;
    t = not_null(d_131);
    if(((f_131 != NULL) && (f_131 != t)))
      _fail(t);
    else
      f_131 = t;
    t = not_null(e_131);
    if(((g_131 != NULL) && (g_131 != t)))
      _fail(t);
    else
      g_131 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(g_131)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_131)));
    return(t);
  }
  if(((a_131 != NULL) && (a_131 != t)))
    _fail(t);
  else
    a_131 = t;
  t = not_null(a_131);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_131 = ATgetFirst((ATermList) t);
      e_131 = (ATerm) ATgetNext((ATermList) t);
      t = h_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
  ATerm c_132 (ATerm t)
  {
    ATerm r_131 = NULL,s_131 = NULL,t_131 = NULL,u_131 = NULL,w_131 = NULL;
    ATerm e_132 (ATerm t)
    {
      ATerm x_131 = NULL,y_131 = NULL;
      ATerm f_132 (ATerm t)
      {
        ATerm z_131 = NULL,a_132 = NULL;
        t = not_null(y_131);
        if(((z_131 != NULL) && (z_131 != t)))
          _fail(t);
        else
          z_131 = t;
        t = not_null(y_131);
        {
          ATerm b_132 = NULL;
          ATerm g_132 (ATerm t)
          {
            t = not_null(b_132);
            if(((a_132 != NULL) && (a_132 != t)))
              _fail(t);
            else
              a_132 = t;
            t = not_null(b_132);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_131)), not_null(x_131)), not_null(u_131));
          if(((b_132 != NULL) && (b_132 != t)))
            _fail(t);
          else
            b_132 = t;
          t = g_132(t);
          t = not_null(a_132);
        }
        return(t);
      }
      t = not_null(w_131);
      if(((x_131 != NULL) && (x_131 != t)))
        _fail(t);
      else
        x_131 = t;
      t = not_null(t_131);
      t = p_94(t);
      if(((y_131 != NULL) && (y_131 != t)))
        _fail(t);
      else
        y_131 = t;
      t = f_132(t);
      return(t);
    }
    t = not_null(o_131);
    if(((r_131 != NULL) && (r_131 != t)))
      _fail(t);
    else
      r_131 = t;
    t = not_null(p_131);
    if(((s_131 != NULL) && (s_131 != t)))
      _fail(t);
    else
      s_131 = t;
    t = not_null(q_131);
    if(((t_131 != NULL) && (t_131 != t)))
      _fail(t);
    else
      t_131 = t;
    t = not_null(o_131);
    {
      ATerm v_131 = NULL;
      ATerm d_132 (ATerm t)
      {
        t = not_null(v_131);
        if(((u_131 != NULL) && (u_131 != t)))
          _fail(t);
        else
          u_131 = t;
        t = not_null(v_131);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_131));
      if(((v_131 != NULL) && (v_131 != t)))
        _fail(t);
      else
        v_131 = t;
      t = d_132(t);
      t = not_null(s_131);
      t = o_94(t);
      if(((w_131 != NULL) && (w_131 != t)))
        _fail(t);
      else
        w_131 = t;
      t = e_132(t);
    }
    return(t);
  }
  if(((o_131 != NULL) && (o_131 != t)))
    _fail(t);
  else
    o_131 = t;
  t = not_null(o_131);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_131 = ATgetFirst((ATermList) t);
      q_131 = (ATerm) ATgetNext((ATermList) t);
      t = c_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm l_132 = NULL;
  ATerm r_132 (ATerm t)
  {
    ATerm m_132 = NULL,n_132 = NULL,p_132 = NULL;
    t = not_null(l_132);
    if(((m_132 != NULL) && (m_132 != t)))
      _fail(t);
    else
      m_132 = t;
    t = not_null(l_132);
    {
      ATerm e_52;
      e_52 = t;
      {
        ATerm o_132 = NULL;
        ATerm s_132 (ATerm t)
        {
          t = not_null(o_132);
          if(((n_132 != NULL) && (n_132 != t)))
            _fail(t);
          else
            n_132 = t;
          t = not_null(o_132);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_132));
        if(((o_132 != NULL) && (o_132 != t)))
          _fail(t);
        else
          o_132 = t;
        t = s_132(t);
      }
      t = e_52;
      {
        ATerm q_132 = NULL;
        ATerm t_132 (ATerm t)
        {
          t = not_null(q_132);
          if(((p_132 != NULL) && (p_132 != t)))
            _fail(t);
          else
            p_132 = t;
          t = not_null(q_132);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(n_132));
        if(((q_132 != NULL) && (q_132 != t)))
          _fail(t);
        else
          q_132 = t;
        t = t_132(t);
        t = not_null(p_132);
      }
    }
    return(t);
  }
  if(((l_132 != NULL) && (l_132 != t)))
    _fail(t);
  else
    l_132 = t;
  t = not_null(l_132);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,a_133 = NULL;
  ATerm i_133 (ATerm t)
  {
    ATerm b_133 = NULL,h_133 = NULL;
    t = not_null(y_132);
    if(((b_133 != NULL) && (b_133 != t)))
      _fail(t);
    else
      b_133 = t;
    t = not_null(a_133);
    if(((h_133 != NULL) && (h_133 != t)))
      _fail(t);
    else
      h_133 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_y_39, not_null(b_133), not_null(h_133));
    t = table_put_0_0(t);
    return(t);
  }
  if(((x_132 != NULL) && (x_132 != t)))
    _fail(t);
  else
    x_132 = t;
  t = not_null(x_132);
  if(match_cons(t, sym__2))
    {
      y_132 = ATgetArgument(t, 0);
      a_133 = ATgetArgument(t, 1);
      t = i_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm f_52;
  f_52 = t;
  {
    ATerm d_7 (ATerm t)
    {
      t = term_x_52;
      t = w_135(t);
      return(t);
    }
    t = try_1_0(d_7, t);
  }
  t = f_52;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm r_133 = NULL;
      ATerm y_52;
      y_52 = t;
      {
        ATerm p_133 = NULL;
        ATerm q_133 = NULL;
        ATerm u_133 (ATerm t)
        {
          t = not_null(q_133);
          if(((p_133 != NULL) && (p_133 != t)))
            _fail(t);
          else
            p_133 = t;
          t = not_null(q_133);
          return(t);
        }
        if(((q_133 != NULL) && (q_133 != t)))
          _fail(t);
        else
          q_133 = t;
        t = u_133(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_45, not_null(p_133));
        t = set_config_0_0(t);
      }
      t = y_52;
      {
        ATerm s_133 = NULL;
        ATerm z_133 (ATerm t)
        {
          t = not_null(s_133);
          if(((r_133 != NULL) && (r_133 != t)))
            _fail(t);
          else
            r_133 = t;
          t = not_null(s_133);
          return(t);
        }
        if(((s_133 != NULL) && (s_133 != t)))
          _fail(t);
        else
          s_133 = t;
        t = z_133(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_133));
      }
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm z_52 = t;
      int a_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_53 = t;
          int e_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(e_53);
            }
          else
            {
              t = b_53;
              t = w_135(t);
              t = Cons_2_0(_id, f_7, t);
            }
          ;
          LocalPopChoice(a_53);
        }
      else
        {
          t = z_52;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(e_7, f_7, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
  ATerm f_53;
  f_53 = t;
  {
    ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL;
    ATerm k_134 (ATerm t)
    {
      t = not_null(h_134);
      if(((d_134 != NULL) && (d_134 != t)))
        _fail(t);
      else
        d_134 = t;
      t = not_null(i_134);
      if(((e_134 != NULL) && (e_134 != t)))
        _fail(t);
      else
        e_134 = t;
      t = not_null(j_134);
      if(((f_134 != NULL) && (f_134 != t)))
        _fail(t);
      else
        f_134 = t;
      t = not_null(g_134);
      t = SSL_table_put(not_null(d_134), not_null(e_134), not_null(f_134));
      return(t);
    }
    if(((g_134 != NULL) && (g_134 != t)))
      _fail(t);
    else
      g_134 = t;
    t = not_null(g_134);
    if(match_cons(t, sym__3))
      {
        h_134 = ATgetArgument(t, 0);
        i_134 = ATgetArgument(t, 1);
        j_134 = ATgetArgument(t, 2);
        t = k_134(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = f_53;
  return(t);
}
ATerm parse_options_1_0 (ATerm v_135 (ATerm), ATerm t)
{
  ATerm m_134 = NULL;
  ATerm k_53;
  k_53 = t;
  t = term_l_53;
  t = table_put_0_0(t);
  t = k_53;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm m_53 = t;
      int n_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_135(t);
          ;
          LocalPopChoice(n_53);
        }
      else
        {
          t = m_53;
          {
            ATerm o_53 = t;
            int p_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_53);
              }
            else
              {
                t = o_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm h_7 (ATerm t)
      {
        ATerm q_53 = t;
        int r_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_53;
            s_53 = t;
            {
              ATerm t_53 = t;
              int u_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_47;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(u_53);
                }
              else
                {
                  t = t_53;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = s_53;
            t = system_usage_0_0(t);
            t = term_j_8;
            t = exit_0_0(t);
            ;
            LocalPopChoice(r_53);
          }
        else
          {
            t = q_53;
            {
              ATerm y_53 = t;
              int z_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_54;
                  a_54 = t;
                  t = term_c_50;
                  t = get_config_0_0(t);
                  t = a_54;
                  t = system_about_0_0(t);
                  t = term_j_8;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(z_53);
                }
              else
                {
                  t = y_53;
                  {
                    ATerm i_7 (ATerm t)
                    {
                      ATerm j_7 (ATerm t)
                      {
                        ATerm n_134 = NULL;
                        ATerm o_134 (ATerm t)
                        {
                          t = not_null(n_134);
                          if(((m_134 != NULL) && (m_134 != t)))
                            _fail(t);
                          else
                            m_134 = t;
                          t = not_null(n_134);
                          return(t);
                        }
                        if(((n_134 != NULL) && (n_134 != t)))
                          _fail(t);
                        else
                          n_134 = t;
                        t = o_134(t);
                        return(t);
                      }
                      t = Undefined_1_0(j_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(i_7, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_134)), term_b_54));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_k_8;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(h_7, t);
      {
        ATerm c_54;
        c_54 = t;
        t = term_q_48;
        t = table_destroy_0_0(t);
        t = c_54;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t)
{
  t = parse_options_1_0(v_133, t);
  t = store_options_0_0(t);
  t = x_133(t);
  {
    ATerm d_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_133, t);
        ;
        LocalPopChoice(i_54);
      }
    else
      {
        t = d_54;
        {
          ATerm j_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_54);
            }
          else
            {
              t = j_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm m_54 = t;
    int n_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_133(t);
        ;
        LocalPopChoice(n_54);
      }
    else
      {
        t = m_54;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(k_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_7, m_133, n_133, l_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm o_54;
      o_54 = t;
      {
        ATerm q_134 = NULL;
        ATerm r_134 = NULL;
        ATerm s_134 (ATerm t)
        {
          t = not_null(r_134);
          if(((q_134 != NULL) && (q_134 != t)))
            _fail(t);
          else
            q_134 = t;
          t = not_null(r_134);
          return(t);
        }
        t = term_k_45;
        t = get_config_0_0(t);
        if(((r_134 != NULL) && (r_134 != t)))
          _fail(t);
        else
          r_134 = t;
        t = s_134(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATempty, not_null(q_134)));
        t = printnl_0_0(t);
      }
      t = o_54;
      return(t);
    }
    t = if_verbose2_1_0(n_7, t);
    return(t);
  }
  t = iowrap_4_0(e_133, f_133, g_133, m_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  t = iowrap_3_0(c_133, d_133, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = _2_0(_id, z_132, t);
    return(t);
  }
  t = iowrap_2_0(o_7, _fail, t);
  return(t);
}
ATerm inline_io_0_0 (ATerm t)
{
  t = iowrap_1_0(inline_strategies_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = inline_io_0_0(t);
  return(t);
}
