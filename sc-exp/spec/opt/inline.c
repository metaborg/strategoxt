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
ATerm term_m_53;
ATerm term_e_53;
ATerm term_b_53;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_x_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_r_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_u_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_n_42;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_g_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_u_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_k_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_t_32;
ATerm term_a_30;
ATerm term_y_27;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_o_20;
ATerm term_k_19;
ATerm term_x_18;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATempty);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_33);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_m_8);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_8);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_j_43, term_x_18);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_v_44, term_x_18);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym__2, term_c_49, term_d_49);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym__2, term_h_51, term_x_18);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_x_18);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym__2, term_u_47, term_x_18);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__3, term_c_49, term_d_49, (ATerm) ATempty);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm length_0_0 (ATerm);
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
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm InlineCall0_0_0 (ATerm);
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
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm m_0 (ATerm), ATerm);
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
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,f_8 = NULL,g_8 = NULL;
  ATerm c_9 (ATerm t)
  {
    ATerm h_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,y_8 = NULL;
    t = not_null(p_7);
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(r_7);
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    t = not_null(f_8);
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    t = not_null(g_8);
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    t = not_null(p_7);
    {
      ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
      ATerm d_9 (ATerm t)
      {
        t = not_null(b_9);
        if(((y_8 != NULL) && (y_8 != t)))
          _fail(t);
        else
          y_8 = t;
        t = not_null(z_8);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_8)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm l_0 (ATerm t)
        {
          t = term_s_7;
          return(t);
        }
        t = rewrite_1_0(l_0, t);
        if(((z_8 != NULL) && (z_8 != t)))
          _fail(t);
        else
          z_8 = t;
        t = not_null(z_8);
        if(match_cons(t, sym_Defined_2))
          {
            a_9 = ATgetArgument(t, 0);
            b_9 = ATgetArgument(t, 1);
            t = not_null(a_9);
            if(match_string(t, "n_0"))
              {
                t = d_9(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_8)), not_null(t_8), not_null(u_8));
    }
    return(t);
  }
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  t = not_null(p_7);
  if(match_cons(t, sym_CallT_3))
    {
      q_7 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
      t = not_null(q_7);
      if(match_cons(t, sym_SVar_1))
        {
          r_7 = ATgetArgument(t, 0);
          t = c_9(t);
        }
      else
        {
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  ATerm x_9 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
    t = not_null(m_9);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(o_9);
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = not_null(m_9);
    {
      ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
      ATerm y_9 (ATerm t)
      {
        t = not_null(w_9);
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        t = not_null(u_9);
        return(t);
      }
      t = not_null(r_9);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_t_7;
          return(t);
        }
        t = rewrite_1_0(q_0, t);
        if(((u_9 != NULL) && (u_9 != t)))
          _fail(t);
        else
          u_9 = t;
        t = not_null(u_9);
        if(match_cons(t, sym_Defined_2))
          {
            v_9 = ATgetArgument(t, 0);
            w_9 = ATgetArgument(t, 1);
            t = not_null(v_9);
            if(match_string(t, "k_0"))
              {
                t = y_9(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(t_9);
      t = strename_0_0(t);
    }
    return(t);
  }
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = not_null(m_9);
  if(match_cons(t, sym_CallT_3))
    {
      n_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      q_9 = ATgetArgument(t, 2);
      t = not_null(n_9);
      if(match_cons(t, sym_SVar_1))
        {
          o_9 = ATgetArgument(t, 0);
          t = not_null(p_9);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(q_9);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = x_9(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  ATerm d_11 (ATerm t)
  {
    ATerm z_10 = NULL,a_11 = NULL;
    t = not_null(s_10);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = not_null(n_10);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = not_null(q_10);
    {
      ATerm u_7;
      u_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_10)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_7, not_null(a_11)));
      {
        ATerm s_0 (ATerm t)
        {
          t = term_s_7;
          return(t);
        }
        t = assert_1_0(s_0, t);
      }
      t = u_7;
    }
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    ATerm b_11 = NULL,c_11 = NULL;
    t = not_null(s_10);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = not_null(y_10);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = not_null(q_10);
    {
      ATerm w_7;
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_7, not_null(c_11)));
      {
        ATerm t_0 (ATerm t)
        {
          t = term_t_7;
          return(t);
        }
        t = assert_1_0(t_0, t);
      }
      t = w_7;
    }
    return(t);
  }
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  t = not_null(q_10);
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      t = not_null(r_10);
      if(match_cons(t, sym_VarDec_2))
        {
          s_10 = ATgetArgument(t, 0);
          t_10 = ATgetArgument(t, 1);
          t = not_null(t_10);
          if(match_cons(t, sym_FunType_2))
            {
              u_10 = ATgetArgument(t, 0);
              x_10 = ATgetArgument(t, 1);
              t = not_null(u_10);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_10 = ATgetFirst((ATermList) t);
                  w_10 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(w_10);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_10 = ATgetFirst((ATermList) t);
                      l_10 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(y_10);
                      if(match_cons(t, sym_CallT_3))
                        {
                          m_10 = ATgetArgument(t, 0);
                          o_10 = ATgetArgument(t, 1);
                          p_10 = ATgetArgument(t, 2);
                          t = not_null(m_10);
                          if(match_cons(t, sym_SVar_1))
                            {
                              n_10 = ATgetArgument(t, 0);
                              t = not_null(o_10);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = not_null(p_10);
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = d_11(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
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
                          t = e_11(t);
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
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  ATerm u_0 (ATerm t)
  {
    t = term_t_7;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_s_7;
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
      ATerm o_11 (ATerm t)
      {
        t = not_null(l_11);
        if(((h_11 != NULL) && (h_11 != t)))
          _fail(t);
        else
          h_11 = t;
        t = not_null(m_11);
        if(((i_11 != NULL) && (i_11 != t)))
          _fail(t);
        else
          i_11 = t;
        t = not_null(n_11);
        if(((j_11 != NULL) && (j_11 != t)))
          _fail(t);
        else
          j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(i_11));
        t = zip_1_0(substitute_arg_0_0, t);
        t = not_null(j_11);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm y_7 = t;
              int z_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SubsArgCall1_0_0(t);
                  ;
                  LocalPopChoice(z_7);
                }
              else
                {
                  t = y_7;
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
      if(((k_11 != NULL) && (k_11 != t)))
        _fail(t);
      else
        k_11 = t;
      t = not_null(k_11);
      if(match_cons(t, sym__3))
        {
          l_11 = ATgetArgument(t, 0);
          m_11 = ATgetArgument(t, 1);
          n_11 = ATgetArgument(t, 2);
          t = o_11(t);
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
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  ATerm l_14 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL;
    t = not_null(o_12);
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    t = not_null(q_12);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = not_null(o_12);
    {
      ATerm v_12 = NULL;
      ATerm p_14 (ATerm t)
      {
        t = not_null(v_12);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_12)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm a_1 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = rewrite_1_0(a_1, t);
        if(((v_12 != NULL) && (v_12 != t)))
          _fail(t);
        else
          v_12 = t;
        t = not_null(v_12);
        if(match_cons(t, sym_Undefined_0))
          {
            t = p_14(t);
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
  ATerm m_14 (ATerm t)
  {
    ATerm w_12 = NULL,x_12 = NULL;
    t = not_null(o_12);
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    t = not_null(q_12);
    if(((x_12 != NULL) && (x_12 != t)))
      _fail(t);
    else
      x_12 = t;
    t = not_null(o_12);
    {
      ATerm y_12 = NULL;
      ATerm q_14 (ATerm t)
      {
        t = not_null(y_12);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_12)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm b_1 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = rewrite_1_0(b_1, t);
        if(((y_12 != NULL) && (y_12 != t)))
          _fail(t);
        else
          y_12 = t;
        t = not_null(y_12);
        if(match_cons(t, sym_Undefined_0))
          {
            t = q_14(t);
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
  ATerm n_14 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
    t = not_null(o_12);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = not_null(q_12);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = not_null(r_12);
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = not_null(s_12);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = not_null(o_12);
    {
      ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
      ATerm r_14 (ATerm t)
      {
        ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
        ATerm s_14 (ATerm t)
        {
          ATerm s_13 = NULL;
          ATerm t_14 (ATerm t)
          {
            ATerm x_13 = NULL;
            ATerm v_14 (ATerm t)
            {
              ATerm y_13 = NULL,f_14 = NULL;
              ATerm y_14 (ATerm t)
              {
                t = not_null(f_14);
                if(((j_13 != NULL) && (j_13 != t)))
                  _fail(t);
                else
                  j_13 = t;
                t = not_null(f_14);
                {
                  ATerm c_8;
                  c_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_13)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      t = term_a_8;
                      return(t);
                    }
                    t = assert_1_0(c_1, t);
                  }
                  t = c_8;
                }
                return(t);
              }
              t = not_null(x_13);
              if(((h_13 != NULL) && (h_13 != t)))
                _fail(t);
              else
                h_13 = t;
              t = not_null(x_13);
              {
                ATerm e_14 = NULL;
                ATerm x_14 (ATerm t)
                {
                  t = not_null(e_14);
                  if(((y_13 != NULL) && (y_13 != t)))
                    _fail(t);
                  else
                    y_13 = t;
                  t = not_null(e_14);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(h_13));
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
                    ATerm w_14 (ATerm t)
                    {
                      ATerm c_14 = NULL,d_14 = NULL;
                      t = not_null(a_14);
                      if(((c_14 != NULL) && (c_14 != t)))
                        _fail(t);
                      else
                        c_14 = t;
                      t = not_null(b_14);
                      if(((d_14 != NULL) && (d_14 != t)))
                        _fail(t);
                      else
                        d_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_14)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_14))));
                      return(t);
                    }
                    if(((z_13 != NULL) && (z_13 != t)))
                      _fail(t);
                    else
                      z_13 = t;
                    t = not_null(z_13);
                    if(match_cons(t, sym__2))
                      {
                        a_14 = ATgetArgument(t, 0);
                        b_14 = ATgetArgument(t, 1);
                        t = w_14(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = zip_1_0(d_1, t);
                  if(((e_14 != NULL) && (e_14 != t)))
                    _fail(t);
                  else
                    e_14 = t;
                  t = x_14(t);
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_13)), not_null(i_13)));
                if(((f_14 != NULL) && (f_14 != t)))
                  _fail(t);
                else
                  f_14 = t;
                t = y_14(t);
              }
              return(t);
            }
            t = not_null(s_13);
            if(((i_13 != NULL) && (i_13 != t)))
              _fail(t);
            else
              i_13 = t;
            t = not_null(g_13);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
                ATerm u_14 (ATerm t)
                {
                  ATerm w_13 = NULL;
                  t = not_null(u_13);
                  if(((w_13 != NULL) && (w_13 != t)))
                    _fail(t);
                  else
                    w_13 = t;
                  t = not_null(w_13);
                  return(t);
                }
                if(((t_13 != NULL) && (t_13 != t)))
                  _fail(t);
                else
                  t_13 = t;
                t = not_null(t_13);
                if(match_cons(t, sym_VarDec_2))
                  {
                    u_13 = ATgetArgument(t, 0);
                    v_13 = ATgetArgument(t, 1);
                    t = u_14(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(e_1, t);
              if(((x_13 != NULL) && (x_13 != t)))
                _fail(t);
              else
                x_13 = t;
              t = v_14(t);
            }
            return(t);
          }
          t = not_null(o_13);
          if(((a_13 != NULL) && (a_13 != t)))
            _fail(t);
          else
            a_13 = t;
          t = not_null(p_13);
          if(((e_13 != NULL) && (e_13 != t)))
            _fail(t);
          else
            e_13 = t;
          t = not_null(q_13);
          if(((g_13 != NULL) && (g_13 != t)))
            _fail(t);
          else
            g_13 = t;
          t = not_null(r_13);
          if(((f_13 != NULL) && (f_13 != t)))
            _fail(t);
          else
            f_13 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(e_13), not_null(b_13), not_null(f_13));
          t = substitute_args_0_0(t);
          if(((s_13 != NULL) && (s_13 != t)))
            _fail(t);
          else
            s_13 = t;
          t = t_14(t);
          return(t);
        }
        t = not_null(m_13);
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
        t = not_null(d_13);
        t = strename_0_0(t);
        if(((n_13 != NULL) && (n_13 != t)))
          _fail(t);
        else
          n_13 = t;
        t = not_null(n_13);
        if(match_cons(t, sym_SDefT_4))
          {
            o_13 = ATgetArgument(t, 0);
            p_13 = ATgetArgument(t, 1);
            q_13 = ATgetArgument(t, 2);
            r_13 = ATgetArgument(t, 3);
            t = s_14(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_13)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm f_1 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = rewrite_1_0(f_1, t);
        if(((k_13 != NULL) && (k_13 != t)))
          _fail(t);
        else
          k_13 = t;
        t = not_null(k_13);
        if(match_cons(t, sym_Defined_2))
          {
            l_13 = ATgetArgument(t, 0);
            m_13 = ATgetArgument(t, 1);
            t = not_null(l_13);
            if(match_string(t, "d_0"))
              {
                t = r_14(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(j_13);
      t = simplify0_0_0(t);
    }
    return(t);
  }
  ATerm o_14 (ATerm t)
  {
    ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(o_12);
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = not_null(q_12);
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
    t = not_null(r_12);
    if(((h_14 != NULL) && (h_14 != t)))
      _fail(t);
    else
      h_14 = t;
    t = not_null(s_12);
    if(((i_14 != NULL) && (i_14 != t)))
      _fail(t);
    else
      i_14 = t;
    t = not_null(o_12);
    {
      ATerm k_14 = NULL;
      ATerm z_14 (ATerm t)
      {
        t = not_null(k_14);
        _fail(t);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_14)), (ATerm)ATempty, (ATerm) ATempty);
      {
        ATerm g_1 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = rewrite_1_0(g_1, t);
        if(((k_14 != NULL) && (k_14 != t)))
          _fail(t);
        else
          k_14 = t;
        t = not_null(k_14);
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
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = not_null(o_12);
  if(match_cons(t, sym_CallT_3))
    {
      p_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
      s_12 = ATgetArgument(t, 2);
      t = not_null(p_12);
      if(match_cons(t, sym_SVar_1))
        {
          q_12 = ATgetArgument(t, 0);
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_14(t);
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                {
                  ATerm i_8 = t;
                  int j_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_14(t);
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
                            t = n_14(t);
                            ;
                            LocalPopChoice(l_8);
                          }
                        else
                          {
                            t = k_8;
                            t = o_14(t);
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
    t = term_m_8;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  t = foldr_3_0(h_1, add_0_0, i_1, t);
  return(t);
}
ATerm spaste_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        t = split_2_0(_id, s_109, t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
            ATerm s_15 (ATerm t)
            {
              ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
              t = not_null(h_15);
              if(((l_15 != NULL) && (l_15 != t)))
                _fail(t);
              else
                l_15 = t;
              t = not_null(i_15);
              if(((m_15 != NULL) && (m_15 != t)))
                _fail(t);
              else
                m_15 = t;
              t = not_null(k_15);
              if(((n_15 != NULL) && (n_15 != t)))
                _fail(t);
              else
                n_15 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_15), not_null(l_15), not_null(m_15));
              return(t);
            }
            ATerm t_15 (ATerm t)
            {
              ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
              t = not_null(h_15);
              if(((o_15 != NULL) && (o_15 != t)))
                _fail(t);
              else
                o_15 = t;
              t = not_null(i_15);
              if(((p_15 != NULL) && (p_15 != t)))
                _fail(t);
              else
                p_15 = t;
              t = not_null(j_15);
              if(((q_15 != NULL) && (q_15 != t)))
                _fail(t);
              else
                q_15 = t;
              t = not_null(k_15);
              if(((r_15 != NULL) && (r_15 != t)))
                _fail(t);
              else
                r_15 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_15), not_null(o_15), not_null(p_15), not_null(q_15));
              return(t);
            }
            if(((e_15 != NULL) && (e_15 != t)))
              _fail(t);
            else
              e_15 = t;
            t = not_null(e_15);
            if(match_cons(t, sym__2))
              {
                f_15 = ATgetArgument(t, 0);
                k_15 = ATgetArgument(t, 1);
                t = not_null(f_15);
                if(match_cons(t, sym_SDef_3))
                  {
                    g_15 = ATgetArgument(t, 0);
                    h_15 = ATgetArgument(t, 1);
                    i_15 = ATgetArgument(t, 2);
                    t = s_15(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        g_15 = ATgetArgument(t, 0);
                        h_15 = ATgetArgument(t, 1);
                        i_15 = ATgetArgument(t, 2);
                        j_15 = ATgetArgument(t, 3);
                        t = t_15(t);
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
            ATerm l_1 (ATerm t)
            {
              t = split_2_0(_id, s_109, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, l_1, _id, t);
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
                  ATerm m_1 (ATerm t)
                  {
                    t = split_2_0(_id, s_109, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_1, _id, _id, t);
                  ;
                  LocalPopChoice(w_8);
                }
              else
                {
                  t = v_8;
                  {
                    ATerm x_8 = t;
                    int e_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = split_2_0(_id, s_109, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, n_1, _id, _id, t);
                        ;
                        LocalPopChoice(e_9);
                      }
                    else
                      {
                        t = x_8;
                        {
                          ATerm o_1 (ATerm t)
                          {
                            t = s_109(t);
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
ATerm Rec_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  ATerm o_16 (ATerm t)
  {
    ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL;
    ATerm q_16 (ATerm t)
    {
      ATerm j_16 = NULL,k_16 = NULL;
      ATerm r_16 (ATerm t)
      {
        ATerm l_16 = NULL,m_16 = NULL;
        t = not_null(k_16);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = not_null(k_16);
        {
          ATerm n_16 = NULL;
          ATerm s_16 (ATerm t)
          {
            t = not_null(n_16);
            if(((m_16 != NULL) && (m_16 != t)))
              _fail(t);
            else
              m_16 = t;
            t = not_null(n_16);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(j_16), not_null(l_16)), not_null(g_16));
          if(((n_16 != NULL) && (n_16 != t)))
            _fail(t);
          else
            n_16 = t;
          t = s_16(t);
          t = not_null(m_16);
        }
        return(t);
      }
      t = not_null(i_16);
      if(((j_16 != NULL) && (j_16 != t)))
        _fail(t);
      else
        j_16 = t;
      t = not_null(f_16);
      t = s_99(t);
      if(((k_16 != NULL) && (k_16 != t)))
        _fail(t);
      else
        k_16 = t;
      t = r_16(t);
      return(t);
    }
    t = not_null(a_16);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = not_null(b_16);
    if(((e_16 != NULL) && (e_16 != t)))
      _fail(t);
    else
      e_16 = t;
    t = not_null(c_16);
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    t = not_null(a_16);
    {
      ATerm h_16 = NULL;
      ATerm p_16 (ATerm t)
      {
        t = not_null(h_16);
        if(((g_16 != NULL) && (g_16 != t)))
          _fail(t);
        else
          g_16 = t;
        t = not_null(h_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_16));
      if(((h_16 != NULL) && (h_16 != t)))
        _fail(t);
      else
        h_16 = t;
      t = p_16(t);
      t = not_null(e_16);
      t = r_99(t);
      if(((i_16 != NULL) && (i_16 != t)))
        _fail(t);
      else
        i_16 = t;
      t = q_16(t);
    }
    return(t);
  }
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = not_null(a_16);
  if(match_cons(t, sym_Rec_2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
      t = o_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  ATerm s_17 (ATerm t)
  {
    ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL;
    ATerm u_17 (ATerm t)
    {
      ATerm l_17 = NULL,m_17 = NULL;
      ATerm v_17 (ATerm t)
      {
        ATerm n_17 = NULL,o_17 = NULL;
        ATerm w_17 (ATerm t)
        {
          ATerm p_17 = NULL,q_17 = NULL;
          t = not_null(o_17);
          if(((p_17 != NULL) && (p_17 != t)))
            _fail(t);
          else
            p_17 = t;
          t = not_null(o_17);
          {
            ATerm r_17 = NULL;
            ATerm x_17 (ATerm t)
            {
              t = not_null(r_17);
              if(((q_17 != NULL) && (q_17 != t)))
                _fail(t);
              else
                q_17 = t;
              t = not_null(r_17);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(l_17), not_null(n_17), not_null(p_17)), not_null(i_17));
            if(((r_17 != NULL) && (r_17 != t)))
              _fail(t);
            else
              r_17 = t;
            t = x_17(t);
            t = not_null(q_17);
          }
          return(t);
        }
        t = not_null(m_17);
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        t = not_null(h_17);
        t = l_101(t);
        if(((o_17 != NULL) && (o_17 != t)))
          _fail(t);
        else
          o_17 = t;
        t = w_17(t);
        return(t);
      }
      t = not_null(k_17);
      if(((l_17 != NULL) && (l_17 != t)))
        _fail(t);
      else
        l_17 = t;
      t = not_null(g_17);
      t = k_101(t);
      if(((m_17 != NULL) && (m_17 != t)))
        _fail(t);
      else
        m_17 = t;
      t = v_17(t);
      return(t);
    }
    t = not_null(a_17);
    if(((e_17 != NULL) && (e_17 != t)))
      _fail(t);
    else
      e_17 = t;
    t = not_null(b_17);
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    t = not_null(c_17);
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    t = not_null(d_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(a_17);
    {
      ATerm j_17 = NULL;
      ATerm t_17 (ATerm t)
      {
        t = not_null(j_17);
        if(((i_17 != NULL) && (i_17 != t)))
          _fail(t);
        else
          i_17 = t;
        t = not_null(j_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_17));
      if(((j_17 != NULL) && (j_17 != t)))
        _fail(t);
      else
        j_17 = t;
      t = t_17(t);
      t = not_null(f_17);
      t = j_101(t);
      if(((k_17 != NULL) && (k_17 != t)))
        _fail(t);
      else
        k_17 = t;
      t = u_17(t);
    }
    return(t);
  }
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  t = not_null(a_17);
  if(match_cons(t, sym_SDef_3))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      d_17 = ATgetArgument(t, 2);
      t = s_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  ATerm s_18 (ATerm t)
  {
    ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,m_18 = NULL;
    ATerm u_18 (ATerm t)
    {
      ATerm n_18 = NULL,o_18 = NULL;
      ATerm v_18 (ATerm t)
      {
        ATerm p_18 = NULL,q_18 = NULL;
        t = not_null(o_18);
        if(((p_18 != NULL) && (p_18 != t)))
          _fail(t);
        else
          p_18 = t;
        t = not_null(o_18);
        {
          ATerm r_18 = NULL;
          ATerm w_18 (ATerm t)
          {
            t = not_null(r_18);
            if(((q_18 != NULL) && (q_18 != t)))
              _fail(t);
            else
              q_18 = t;
            t = not_null(r_18);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_18), not_null(p_18)), not_null(k_18));
          if(((r_18 != NULL) && (r_18 != t)))
            _fail(t);
          else
            r_18 = t;
          t = w_18(t);
          t = not_null(q_18);
        }
        return(t);
      }
      t = not_null(m_18);
      if(((n_18 != NULL) && (n_18 != t)))
        _fail(t);
      else
        n_18 = t;
      t = not_null(j_18);
      t = v_98(t);
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = v_18(t);
      return(t);
    }
    t = not_null(e_18);
    if(((h_18 != NULL) && (h_18 != t)))
      _fail(t);
    else
      h_18 = t;
    t = not_null(f_18);
    if(((i_18 != NULL) && (i_18 != t)))
      _fail(t);
    else
      i_18 = t;
    t = not_null(g_18);
    if(((j_18 != NULL) && (j_18 != t)))
      _fail(t);
    else
      j_18 = t;
    t = not_null(e_18);
    {
      ATerm l_18 = NULL;
      ATerm t_18 (ATerm t)
      {
        t = not_null(l_18);
        if(((k_18 != NULL) && (k_18 != t)))
          _fail(t);
        else
          k_18 = t;
        t = not_null(l_18);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_18));
      if(((l_18 != NULL) && (l_18 != t)))
        _fail(t);
      else
        l_18 = t;
      t = t_18(t);
      t = not_null(i_18);
      t = u_98(t);
      if(((m_18 != NULL) && (m_18 != t)))
        _fail(t);
      else
        m_18 = t;
      t = u_18(t);
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
      t = s_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(t_109, t_109, t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(v_109, v_109, t_109, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(v_109, v_109, v_109, t_109, t);
                  ;
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
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
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  ATerm i_19 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
    t = not_null(a_19);
    if(((e_19 != NULL) && (e_19 != t)))
      _fail(t);
    else
      e_19 = t;
    t = not_null(b_19);
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    t = not_null(c_19);
    if(((f_19 != NULL) && (f_19 != t)))
      _fail(t);
    else
      f_19 = t;
    t = not_null(d_19);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    t = not_null(h_19);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  t = not_null(z_18);
  if(match_cons(t, sym_RDefT_4))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
      d_19 = ATgetArgument(t, 3);
      t = i_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  ATerm u_19 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
    t = not_null(m_19);
    if(((q_19 != NULL) && (q_19 != t)))
      _fail(t);
    else
      q_19 = t;
    t = not_null(n_19);
    if(((t_19 != NULL) && (t_19 != t)))
      _fail(t);
    else
      t_19 = t;
    t = not_null(o_19);
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    t = not_null(p_19);
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    t = not_null(t_19);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = not_null(l_19);
  if(match_cons(t, sym_SDefT_4))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      o_19 = ATgetArgument(t, 2);
      p_19 = ATgetArgument(t, 3);
      t = u_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  ATerm c_20 (ATerm t)
  {
    ATerm a_20 = NULL,b_20 = NULL;
    t = not_null(y_19);
    if(((b_20 != NULL) && (b_20 != t)))
      _fail(t);
    else
      b_20 = t;
    t = not_null(z_19);
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    t = (ATerm) ATinsert(ATempty, not_null(b_20));
    return(t);
  }
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  t = not_null(x_19);
  if(match_cons(t, sym_Rec_2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      t = c_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  ATerm m_20 (ATerm t)
  {
    ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
    t = not_null(g_20);
    if(((j_20 != NULL) && (j_20 != t)))
      _fail(t);
    else
      j_20 = t;
    t = not_null(h_20);
    if(((l_20 != NULL) && (l_20 != t)))
      _fail(t);
    else
      l_20 = t;
    t = not_null(i_20);
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    t = not_null(l_20);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((f_20 != NULL) && (f_20 != t)))
    _fail(t);
  else
    f_20 = t;
  t = not_null(f_20);
  if(match_cons(t, sym_SDef_3))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
      i_20 = ATgetArgument(t, 2);
      t = m_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  ATerm e_21 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL;
    t = not_null(t_20);
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    t = not_null(u_20);
    if(((v_20 != NULL) && (v_20 != t)))
      _fail(t);
    else
      v_20 = t;
    t = not_null(w_20);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
        ATerm f_21 (ATerm t)
        {
          ATerm c_21 = NULL;
          t = not_null(y_20);
          if(((c_21 != NULL) && (c_21 != t)))
            _fail(t);
          else
            c_21 = t;
          t = not_null(c_21);
          return(t);
        }
        ATerm g_21 (ATerm t)
        {
          ATerm d_21 = NULL;
          t = not_null(y_20);
          if(((d_21 != NULL) && (d_21 != t)))
            _fail(t);
          else
            d_21 = t;
          t = not_null(d_21);
          return(t);
        }
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = not_null(x_20);
        if(match_cons(t, sym_SDef_3))
          {
            y_20 = ATgetArgument(t, 0);
            z_20 = ATgetArgument(t, 1);
            a_21 = ATgetArgument(t, 2);
            t = f_21(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_20 = ATgetArgument(t, 0);
                z_20 = ATgetArgument(t, 1);
                a_21 = ATgetArgument(t, 2);
                b_21 = ATgetArgument(t, 3);
                t = g_21(t);
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
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = not_null(s_20);
  if(match_cons(t, sym_Let_2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
      t = e_21(t);
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
    ATerm l_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = l_9;
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              {
                ATerm c_10 = t;
                int d_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(d_10);
                  }
                else
                  {
                    t = c_10;
                    {
                      ATerm e_10 = t;
                      int f_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(f_10);
                        }
                      else
                        {
                          t = e_10;
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  ATerm v_21 (ATerm t)
  {
    ATerm q_21 = NULL,r_21 = NULL;
    t = not_null(n_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(p_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(r_21));
    return(t);
  }
  ATerm w_21 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
    t = not_null(n_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(o_21);
    if(((u_21 != NULL) && (u_21 != t)))
      _fail(t);
    else
      u_21 = t;
    t = not_null(p_21);
    if(((t_21 != NULL) && (t_21 != t)))
      _fail(t);
    else
      t_21 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_21), not_null(u_21));
    return(t);
  }
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  t = not_null(l_21);
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
      t = not_null(m_21);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_21 = ATgetArgument(t, 0);
          t = v_21(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              n_21 = ATgetArgument(t, 0);
              o_21 = ATgetArgument(t, 1);
              t = w_21(t);
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
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_109, _id, t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = split_2_0(_id, o_109, t);
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
                t = split_2_0(_id, o_109, t);
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
ATerm DynamicRules_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  ATerm m_22 (ATerm t)
  {
    ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,i_22 = NULL;
    ATerm o_22 (ATerm t)
    {
      ATerm j_22 = NULL,k_22 = NULL;
      t = not_null(i_22);
      if(((j_22 != NULL) && (j_22 != t)))
        _fail(t);
      else
        j_22 = t;
      t = not_null(i_22);
      {
        ATerm l_22 = NULL;
        ATerm p_22 (ATerm t)
        {
          t = not_null(l_22);
          if(((k_22 != NULL) && (k_22 != t)))
            _fail(t);
          else
            k_22 = t;
          t = not_null(l_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(j_22)), not_null(g_22));
        if(((l_22 != NULL) && (l_22 != t)))
          _fail(t);
        else
          l_22 = t;
        t = p_22(t);
        t = not_null(k_22);
      }
      return(t);
    }
    t = not_null(c_22);
    if(((e_22 != NULL) && (e_22 != t)))
      _fail(t);
    else
      e_22 = t;
    t = not_null(d_22);
    if(((f_22 != NULL) && (f_22 != t)))
      _fail(t);
    else
      f_22 = t;
    t = not_null(c_22);
    {
      ATerm h_22 = NULL;
      ATerm n_22 (ATerm t)
      {
        t = not_null(h_22);
        if(((g_22 != NULL) && (g_22 != t)))
          _fail(t);
        else
          g_22 = t;
        t = not_null(h_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_22));
      if(((h_22 != NULL) && (h_22 != t)))
        _fail(t);
      else
        h_22 = t;
      t = n_22(t);
      t = not_null(f_22);
      t = b_98(t);
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = o_22(t);
    }
    return(t);
  }
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  t = not_null(c_22);
  if(match_cons(t, sym_DynamicRules_1))
    {
      d_22 = ATgetArgument(t, 0);
      t = m_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  ATerm u_23 (ATerm t)
  {
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,k_23 = NULL;
    ATerm w_23 (ATerm t)
    {
      ATerm l_23 = NULL,m_23 = NULL;
      ATerm x_23 (ATerm t)
      {
        ATerm n_23 = NULL,o_23 = NULL;
        ATerm y_23 (ATerm t)
        {
          ATerm p_23 = NULL,q_23 = NULL;
          ATerm z_23 (ATerm t)
          {
            ATerm r_23 = NULL,s_23 = NULL;
            t = not_null(q_23);
            if(((r_23 != NULL) && (r_23 != t)))
              _fail(t);
            else
              r_23 = t;
            t = not_null(q_23);
            {
              ATerm t_23 = NULL;
              ATerm a_24 (ATerm t)
              {
                t = not_null(t_23);
                if(((s_23 != NULL) && (s_23 != t)))
                  _fail(t);
                else
                  s_23 = t;
                t = not_null(t_23);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(l_23), not_null(n_23), not_null(p_23), not_null(r_23)), not_null(i_23));
              if(((t_23 != NULL) && (t_23 != t)))
                _fail(t);
              else
                t_23 = t;
              t = a_24(t);
              t = not_null(s_23);
            }
            return(t);
          }
          t = not_null(o_23);
          if(((p_23 != NULL) && (p_23 != t)))
            _fail(t);
          else
            p_23 = t;
          t = not_null(h_23);
          t = v_97(t);
          if(((q_23 != NULL) && (q_23 != t)))
            _fail(t);
          else
            q_23 = t;
          t = z_23(t);
          return(t);
        }
        t = not_null(m_23);
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        t = not_null(g_23);
        t = u_97(t);
        if(((o_23 != NULL) && (o_23 != t)))
          _fail(t);
        else
          o_23 = t;
        t = y_23(t);
        return(t);
      }
      t = not_null(k_23);
      if(((l_23 != NULL) && (l_23 != t)))
        _fail(t);
      else
        l_23 = t;
      t = not_null(f_23);
      t = t_97(t);
      if(((m_23 != NULL) && (m_23 != t)))
        _fail(t);
      else
        m_23 = t;
      t = x_23(t);
      return(t);
    }
    t = not_null(y_22);
    if(((d_23 != NULL) && (d_23 != t)))
      _fail(t);
    else
      d_23 = t;
    t = not_null(z_22);
    if(((e_23 != NULL) && (e_23 != t)))
      _fail(t);
    else
      e_23 = t;
    t = not_null(a_23);
    if(((f_23 != NULL) && (f_23 != t)))
      _fail(t);
    else
      f_23 = t;
    t = not_null(b_23);
    if(((g_23 != NULL) && (g_23 != t)))
      _fail(t);
    else
      g_23 = t;
    t = not_null(c_23);
    if(((h_23 != NULL) && (h_23 != t)))
      _fail(t);
    else
      h_23 = t;
    t = not_null(y_22);
    {
      ATerm j_23 = NULL;
      ATerm v_23 (ATerm t)
      {
        t = not_null(j_23);
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        t = not_null(j_23);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_23));
      if(((j_23 != NULL) && (j_23 != t)))
        _fail(t);
      else
        j_23 = t;
      t = v_23(t);
      t = not_null(e_23);
      t = s_97(t);
      if(((k_23 != NULL) && (k_23 != t)))
        _fail(t);
      else
        k_23 = t;
      t = w_23(t);
    }
    return(t);
  }
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = not_null(y_22);
  if(match_cons(t, sym_RDefT_4))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
      b_23 = ATgetArgument(t, 2);
      c_23 = ATgetArgument(t, 3);
      t = u_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_109, p_109, t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(r_109, r_109, r_109, p_109, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm r_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(r_109, r_109, r_109, p_109, t);
                  ;
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = r_11;
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
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  ATerm m_24 (ATerm t)
  {
    ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
    t = not_null(e_24);
    if(((i_24 != NULL) && (i_24 != t)))
      _fail(t);
    else
      i_24 = t;
    t = not_null(f_24);
    if(((j_24 != NULL) && (j_24 != t)))
      _fail(t);
    else
      j_24 = t;
    t = not_null(g_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(h_24);
    if(((k_24 != NULL) && (k_24 != t)))
      _fail(t);
    else
      k_24 = t;
    t = not_null(l_24);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(d_24);
  if(match_cons(t, sym_RDefT_4))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
      g_24 = ATgetArgument(t, 2);
      h_24 = ATgetArgument(t, 3);
      t = m_24(t);
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
    ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
    ATerm v_24 (ATerm t)
    {
      ATerm t_24 = NULL;
      t = not_null(s_24);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      t = not_null(t_24);
      return(t);
    }
    ATerm w_24 (ATerm t)
    {
      ATerm u_24 = NULL;
      t = not_null(s_24);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      t = not_null(u_24);
      return(t);
    }
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
    t = not_null(r_24);
    if(match_cons(t, sym_VarDec_2))
      {
        s_24 = ATgetArgument(t, 0);
        q_24 = ATgetArgument(t, 1);
        t = v_24(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            s_24 = ATgetArgument(t, 0);
            t = w_24(t);
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
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  ATerm i_25 (ATerm t)
  {
    ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
    t = not_null(a_25);
    if(((e_25 != NULL) && (e_25 != t)))
      _fail(t);
    else
      e_25 = t;
    t = not_null(b_25);
    if(((f_25 != NULL) && (f_25 != t)))
      _fail(t);
    else
      f_25 = t;
    t = not_null(c_25);
    if(((h_25 != NULL) && (h_25 != t)))
      _fail(t);
    else
      h_25 = t;
    t = not_null(d_25);
    if(((g_25 != NULL) && (g_25 != t)))
      _fail(t);
    else
      g_25 = t;
    t = not_null(h_25);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  t = not_null(z_24);
  if(match_cons(t, sym_SDefT_4))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
      c_25 = ATgetArgument(t, 2);
      d_25 = ATgetArgument(t, 3);
      t = i_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  ATerm o_25 (ATerm t)
  {
    ATerm n_25 = NULL;
    t = not_null(m_25);
    if(((n_25 != NULL) && (n_25 != t)))
      _fail(t);
    else
      n_25 = t;
    t = not_null(n_25);
    t = tvars_0_0(t);
    return(t);
  }
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = not_null(l_25);
  if(match_cons(t, sym_DynamicRules_1))
    {
      m_25 = ATgetArgument(t, 0);
      t = o_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  ATerm u_25 (ATerm t)
  {
    ATerm t_25 = NULL;
    t = not_null(s_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = (ATerm) ATinsert(ATempty, not_null(t_25));
    return(t);
  }
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = not_null(r_25);
  if(match_cons(t, sym_Var_1))
    {
      s_25 = ATgetArgument(t, 0);
      t = u_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  ATerm c_26 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL;
    t = not_null(y_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(z_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(b_26);
    {
      ATerm d_26 (ATerm t)
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(a_26);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(a_26);
                    return(t);
                  }
                  t = HdMember_p__2_0(b_119, u_1, t);
                  t = d_26(t);
                  ;
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  t = Cons_2_0(_id, d_26, t);
                }
            }
          }
        return(t);
      }
      t = d_26(t);
    }
    return(t);
  }
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = not_null(x_25);
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      t = c_26(t);
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
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  ATerm k_26 (ATerm t)
  {
    ATerm j_26 = NULL;
    t = not_null(h_26);
    if(((j_26 != NULL) && (j_26 != t)))
      _fail(t);
    else
      j_26 = t;
    t = not_null(i_26);
    if(((j_26 != NULL) && (j_26 != t)))
      _fail(t);
    else
      j_26 = t;
    t = not_null(g_26);
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
      t = k_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  ATerm v_26 (ATerm t)
  {
    ATerm r_26 = NULL,s_26 = NULL;
    t = not_null(p_26);
    if(((s_26 != NULL) && (s_26 != t)))
      _fail(t);
    else
      s_26 = t;
    t = not_null(q_26);
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = not_null(o_26);
    t = g_119(t);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm t_26 = NULL;
        ATerm w_26 (ATerm t)
        {
          ATerm u_26 = NULL;
          t = not_null(t_26);
          if(((u_26 != NULL) && (u_26 != t)))
            _fail(t);
          else
            u_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(u_26));
          t = f_119(t);
          return(t);
        }
        if(((t_26 != NULL) && (t_26 != t)))
          _fail(t);
        else
          t_26 = t;
        t = w_26(t);
        return(t);
      }
      t = fetch_1_0(v_1, t);
    }
    t = not_null(r_26);
    return(t);
  }
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  t = not_null(o_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
      t = v_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  ATerm e_27 (ATerm t)
  {
    ATerm c_27 = NULL,d_27 = NULL;
    t = not_null(a_27);
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = not_null(b_27);
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    t = not_null(d_27);
    {
      ATerm f_27 (ATerm t)
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm z_11 = t;
              int a_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(c_27);
                    return(t);
                  }
                  t = HdMember_p__2_0(x_118, w_1, t);
                  t = f_27(t);
                  ;
                  LocalPopChoice(a_12);
                }
              else
                {
                  t = z_11;
                  t = Cons_2_0(_id, f_27, t);
                }
            }
          }
        return(t);
      }
      t = f_27(t);
    }
    return(t);
  }
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  t = not_null(z_26);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      t = e_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  ATerm r_27 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
    t = not_null(k_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(m_27);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(n_27);
    if(((q_27 != NULL) && (q_27 != t)))
      _fail(t);
    else
      q_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_27)), not_null(o_27)), not_null(q_27));
    return(t);
  }
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = not_null(j_27);
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
      t = not_null(l_27);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
          t = r_27(t);
        }
      else
        {
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
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  ATerm z_28 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,r_28 = NULL,x_28 = NULL;
    t = not_null(e_28);
    if(((h_28 != NULL) && (h_28 != t)))
      _fail(t);
    else
      h_28 = t;
    t = not_null(f_28);
    if(((i_28 != NULL) && (i_28 != t)))
      _fail(t);
    else
      i_28 = t;
    t = not_null(g_28);
    if(((j_28 != NULL) && (j_28 != t)))
      _fail(t);
    else
      j_28 = t;
    t = not_null(c_28);
    {
      ATerm b_12;
      b_12 = t;
      {
        ATerm m_28 = NULL;
        ATerm a_29 (ATerm t)
        {
          ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
          ATerm b_29 (ATerm t)
          {
            t = not_null(p_28);
            if(((k_28 != NULL) && (k_28 != t)))
              _fail(t);
            else
              k_28 = t;
            t = not_null(q_28);
            if(((l_28 != NULL) && (l_28 != t)))
              _fail(t);
            else
              l_28 = t;
            t = not_null(o_28);
            return(t);
          }
          t = not_null(m_28);
          if(((n_28 != NULL) && (n_28 != t)))
            _fail(t);
          else
            n_28 = t;
          t = not_null(m_28);
          t = SSL_explode_term(not_null(n_28));
          if(((o_28 != NULL) && (o_28 != t)))
            _fail(t);
          else
            o_28 = t;
          t = not_null(o_28);
          if(match_cons(t, sym__2))
            {
              p_28 = ATgetArgument(t, 0);
              q_28 = ATgetArgument(t, 1);
              t = b_29(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(i_28);
        if(((m_28 != NULL) && (m_28 != t)))
          _fail(t);
        else
          m_28 = t;
        t = a_29(t);
      }
      t = b_12;
      {
        ATerm c_12;
        c_12 = t;
        {
          ATerm s_28 = NULL;
          ATerm c_29 (ATerm t)
          {
            ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
            ATerm d_29 (ATerm t)
            {
              t = not_null(v_28);
              if(((k_28 != NULL) && (k_28 != t)))
                _fail(t);
              else
                k_28 = t;
              t = not_null(w_28);
              if(((r_28 != NULL) && (r_28 != t)))
                _fail(t);
              else
                r_28 = t;
              t = not_null(u_28);
              return(t);
            }
            t = not_null(s_28);
            if(((t_28 != NULL) && (t_28 != t)))
              _fail(t);
            else
              t_28 = t;
            t = not_null(s_28);
            t = SSL_explode_term(not_null(t_28));
            if(((u_28 != NULL) && (u_28 != t)))
              _fail(t);
            else
              u_28 = t;
            t = not_null(u_28);
            if(match_cons(t, sym__2))
              {
                v_28 = ATgetArgument(t, 0);
                w_28 = ATgetArgument(t, 1);
                t = d_29(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(h_28);
          if(((s_28 != NULL) && (s_28 != t)))
            _fail(t);
          else
            s_28 = t;
          t = c_29(t);
        }
        t = c_12;
        {
          ATerm y_28 = NULL;
          ATerm e_29 (ATerm t)
          {
            t = not_null(y_28);
            if(((x_28 != NULL) && (x_28 != t)))
              _fail(t);
            else
              x_28 = t;
            t = not_null(y_28);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(l_28));
          t = zip_1_0(_id, t);
          if(((y_28 != NULL) && (y_28 != t)))
            _fail(t);
          else
            y_28 = t;
          t = e_29(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), not_null(j_28));
          t = conc_0_0(t);
        }
      }
    }
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
      g_28 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(d_28);
      if(match_cons(t, sym__2))
        {
          e_28 = ATgetArgument(t, 0);
          f_28 = ATgetArgument(t, 1);
          t = z_28(t);
        }
      else
        {
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
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  ATerm p_29 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL;
    t = not_null(k_29);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(l_29);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(m_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(o_29);
    return(t);
  }
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  t = not_null(i_29);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      m_29 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(j_29);
      if(match_cons(t, sym__2))
        {
          k_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          t = p_29(t);
        }
      else
        {
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
  ATerm q_29 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = z_127(t);
        t = q_29(t);
      }
    return(t);
  }
  t = q_29(t);
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
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm s_29 = NULL;
        ATerm u_29 (ATerm t)
        {
          ATerm t_29 = NULL;
          t = not_null(s_29);
          if(((t_29 != NULL) && (t_29 != t)))
            _fail(t);
          else
            t_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_29));
          return(t);
        }
        if(((s_29 != NULL) && (s_29 != t)))
          _fail(t);
        else
          s_29 = t;
        t = u_29(t);
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
ATerm free_vars_3_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm y_29 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_125(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm n_12 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_29 = NULL;
              ATerm b_15;
              b_15 = t;
              {
                ATerm x_29 = NULL;
                ATerm z_29 (ATerm t)
                {
                  t = not_null(x_29);
                  if(((w_29 != NULL) && (w_29 != t)))
                    _fail(t);
                  else
                    w_29 = t;
                  t = not_null(x_29);
                  return(t);
                }
                t = t_125(t);
                if(((x_29 != NULL) && (x_29 != t)))
                  _fail(t);
                else
                  x_29 = t;
                t = z_29(t);
              }
              t = b_15;
              {
                ATerm b_2 (ATerm t)
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = not_null(w_29);
                    return(t);
                  }
                  t = split_2_0(y_29, d_2, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm c_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_125(b_2, y_29, c_2, t);
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
              LocalPopChoice(a_15);
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
                t = crush_3_0(f_2, union_0_0, y_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              {
                ATerm w_15 = t;
                int x_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(x_15);
                  }
                else
                  {
                    t = w_15;
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
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  ATerm p_30 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
    t = not_null(e_30);
    if(((m_30 != NULL) && (m_30 != t)))
      _fail(t);
    else
      m_30 = t;
    t = not_null(f_30);
    if(((k_30 != NULL) && (k_30 != t)))
      _fail(t);
    else
      k_30 = t;
    t = not_null(g_30);
    if(((l_30 != NULL) && (l_30 != t)))
      _fail(t);
    else
      l_30 = t;
    t = not_null(m_30);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    ATerm n_30 = NULL,o_30 = NULL;
    t = not_null(i_30);
    if(((o_30 != NULL) && (o_30 != t)))
      _fail(t);
    else
      o_30 = t;
    t = not_null(j_30);
    if(((n_30 != NULL) && (n_30 != t)))
      _fail(t);
    else
      n_30 = t;
    t = not_null(o_30);
    return(t);
  }
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = not_null(h_30);
  if(match_cons(t, sym_LRule_1))
    {
      i_30 = ATgetArgument(t, 0);
      t = not_null(i_30);
      if(match_cons(t, sym_Rule_3))
        {
          e_30 = ATgetArgument(t, 0);
          f_30 = ATgetArgument(t, 1);
          g_30 = ATgetArgument(t, 2);
          t = p_30(t);
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
          i_30 = ATgetArgument(t, 0);
          j_30 = ATgetArgument(t, 1);
          t = q_30(t);
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
  ATerm e_31 = NULL,f_31 = NULL;
  ATerm e_32 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,k_31 = NULL;
    ATerm i_32 (ATerm t)
    {
      ATerm l_31 = NULL,m_31 = NULL;
      t = not_null(k_31);
      if(((l_31 != NULL) && (l_31 != t)))
        _fail(t);
      else
        l_31 = t;
      t = not_null(k_31);
      {
        ATerm n_31 = NULL;
        ATerm j_32 (ATerm t)
        {
          t = not_null(n_31);
          if(((m_31 != NULL) && (m_31 != t)))
            _fail(t);
          else
            m_31 = t;
          t = not_null(n_31);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_31)), not_null(i_31));
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = j_32(t);
        t = not_null(m_31);
      }
      return(t);
    }
    t = not_null(e_31);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = not_null(f_31);
    if(((h_31 != NULL) && (h_31 != t)))
      _fail(t);
    else
      h_31 = t;
    t = not_null(e_31);
    {
      ATerm j_31 = NULL;
      ATerm h_32 (ATerm t)
      {
        t = not_null(j_31);
        if(((i_31 != NULL) && (i_31 != t)))
          _fail(t);
        else
          i_31 = t;
        t = not_null(j_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_31));
      if(((j_31 != NULL) && (j_31 != t)))
        _fail(t);
      else
        j_31 = t;
      t = h_32(t);
      t = not_null(h_31);
      t = p_0(t);
      if(((k_31 != NULL) && (k_31 != t)))
        _fail(t);
      else
        k_31 = t;
      t = i_32(t);
    }
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,s_31 = NULL;
    ATerm l_32 (ATerm t)
    {
      ATerm t_31 = NULL,u_31 = NULL;
      t = not_null(s_31);
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      t = not_null(s_31);
      {
        ATerm v_31 = NULL;
        ATerm m_32 (ATerm t)
        {
          t = not_null(v_31);
          if(((u_31 != NULL) && (u_31 != t)))
            _fail(t);
          else
            u_31 = t;
          t = not_null(v_31);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_31)), not_null(q_31));
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = m_32(t);
        t = not_null(u_31);
      }
      return(t);
    }
    t = not_null(e_31);
    if(((o_31 != NULL) && (o_31 != t)))
      _fail(t);
    else
      o_31 = t;
    t = not_null(f_31);
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = not_null(e_31);
    {
      ATerm r_31 = NULL;
      ATerm k_32 (ATerm t)
      {
        t = not_null(r_31);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = not_null(r_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_31));
      if(((r_31 != NULL) && (r_31 != t)))
        _fail(t);
      else
        r_31 = t;
      t = k_32(t);
      t = not_null(p_31);
      t = p_0(t);
      if(((s_31 != NULL) && (s_31 != t)))
        _fail(t);
      else
        s_31 = t;
      t = l_32(t);
    }
    return(t);
  }
  ATerm g_32 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL;
    ATerm o_32 (ATerm t)
    {
      ATerm b_32 = NULL,c_32 = NULL;
      t = not_null(a_32);
      if(((b_32 != NULL) && (b_32 != t)))
        _fail(t);
      else
        b_32 = t;
      t = not_null(a_32);
      {
        ATerm d_32 = NULL;
        ATerm p_32 (ATerm t)
        {
          t = not_null(d_32);
          if(((c_32 != NULL) && (c_32 != t)))
            _fail(t);
          else
            c_32 = t;
          t = not_null(d_32);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_32)), not_null(y_31));
        if(((d_32 != NULL) && (d_32 != t)))
          _fail(t);
        else
          d_32 = t;
        t = p_32(t);
        t = not_null(c_32);
      }
      return(t);
    }
    t = not_null(e_31);
    if(((w_31 != NULL) && (w_31 != t)))
      _fail(t);
    else
      w_31 = t;
    t = not_null(f_31);
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    t = not_null(e_31);
    {
      ATerm z_31 = NULL;
      ATerm n_32 (ATerm t)
      {
        t = not_null(z_31);
        if(((y_31 != NULL) && (y_31 != t)))
          _fail(t);
        else
          y_31 = t;
        t = not_null(z_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_31));
      if(((z_31 != NULL) && (z_31 != t)))
        _fail(t);
      else
        z_31 = t;
      t = n_32(t);
      t = not_null(x_31);
      t = p_0(t);
      if(((a_32 != NULL) && (a_32 != t)))
        _fail(t);
      else
        a_32 = t;
      t = o_32(t);
    }
    return(t);
  }
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = not_null(e_31);
  if(match_cons(t, sym_Var_1))
    {
      f_31 = ATgetArgument(t, 0);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_32(t);
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm t_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_32(t);
                  ;
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = t_16;
                  t = g_32(t);
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
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  ATerm f_33 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
    t = not_null(v_32);
    if(((a_33 != NULL) && (a_33 != t)))
      _fail(t);
    else
      a_33 = t;
    t = not_null(w_32);
    if(((z_32 != NULL) && (z_32 != t)))
      _fail(t);
    else
      z_32 = t;
    t = not_null(x_32);
    if(((y_32 != NULL) && (y_32 != t)))
      _fail(t);
    else
      y_32 = t;
    t = not_null(a_33);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm b_33 = NULL;
        ATerm g_33 (ATerm t)
        {
          ATerm c_33 = NULL;
          t = not_null(b_33);
          if(((c_33 != NULL) && (c_33 != t)))
            _fail(t);
          else
            c_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(y_32));
          t = a_124(t);
          return(t);
        }
        if(((b_33 != NULL) && (b_33 != t)))
          _fail(t);
        else
          b_33 = t;
        t = g_33(t);
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        ATerm d_33 = NULL;
        ATerm h_33 (ATerm t)
        {
          ATerm e_33 = NULL;
          t = not_null(d_33);
          if(((e_33 != NULL) && (e_33 != t)))
            _fail(t);
          else
            e_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(z_32));
          t = a_124(t);
          return(t);
        }
        if(((d_33 != NULL) && (d_33 != t)))
          _fail(t);
        else
          d_33 = t;
        t = h_33(t);
        return(t);
      }
      t = b_124(h_2, i_2, _id, t);
    }
    return(t);
  }
  if(((u_32 != NULL) && (u_32 != t)))
    _fail(t);
  else
    u_32 = t;
  t = not_null(u_32);
  if(match_cons(t, sym__3))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
      x_32 = ATgetArgument(t, 2);
      t = f_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  ATerm e_34 (ATerm t)
  {
    ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,c_34 = NULL;
    t = not_null(q_33);
    if(((s_33 != NULL) && (s_33 != t)))
      _fail(t);
    else
      s_33 = t;
    t = not_null(r_33);
    if(((t_33 != NULL) && (t_33 != t)))
      _fail(t);
    else
      t_33 = t;
    t = not_null(p_33);
    {
      ATerm v_16;
      v_16 = t;
      {
        ATerm x_33 = NULL;
        ATerm f_34 (ATerm t)
        {
          ATerm y_33 = NULL;
          ATerm g_34 (ATerm t)
          {
            ATerm z_33 = NULL,b_34 = NULL;
            ATerm i_34 (ATerm t)
            {
              t = not_null(b_34);
              if(((w_33 != NULL) && (w_33 != t)))
                _fail(t);
              else
                w_33 = t;
              t = not_null(b_34);
              return(t);
            }
            t = not_null(y_33);
            if(((v_33 != NULL) && (v_33 != t)))
              _fail(t);
            else
              v_33 = t;
            t = not_null(y_33);
            {
              ATerm a_34 = NULL;
              ATerm h_34 (ATerm t)
              {
                t = not_null(a_34);
                if(((z_33 != NULL) && (z_33 != t)))
                  _fail(t);
                else
                  z_33 = t;
                t = not_null(a_34);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), not_null(v_33));
              t = zip_1_0(_id, t);
              if(((a_34 != NULL) && (a_34 != t)))
                _fail(t);
              else
                a_34 = t;
              t = h_34(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), not_null(t_33));
              t = conc_0_0(t);
              if(((b_34 != NULL) && (b_34 != t)))
                _fail(t);
              else
                b_34 = t;
              t = i_34(t);
            }
            return(t);
          }
          t = not_null(x_33);
          if(((u_33 != NULL) && (u_33 != t)))
            _fail(t);
          else
            u_33 = t;
          t = not_null(x_33);
          t = map_1_0(new_0_0, t);
          if(((y_33 != NULL) && (y_33 != t)))
            _fail(t);
          else
            y_33 = t;
          t = g_34(t);
          return(t);
        }
        t = not_null(s_33);
        t = u_123(t);
        if(((x_33 != NULL) && (x_33 != t)))
          _fail(t);
        else
          x_33 = t;
        t = f_34(t);
      }
      t = v_16;
      {
        ATerm d_34 = NULL;
        ATerm j_34 (ATerm t)
        {
          t = not_null(d_34);
          if(((c_34 != NULL) && (c_34 != t)))
            _fail(t);
          else
            c_34 = t;
          t = not_null(d_34);
          return(t);
        }
        t = not_null(s_33);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(v_33);
            return(t);
          }
          t = v_123(j_2, t);
          if(((d_34 != NULL) && (d_34 != t)))
            _fail(t);
          else
            d_34 = t;
          t = j_34(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), not_null(t_33), not_null(w_33));
      }
    }
    return(t);
  }
  if(((p_33 != NULL) && (p_33 != t)))
    _fail(t);
  else
    p_33 = t;
  t = not_null(p_33);
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      t = e_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  ATerm u_34 (ATerm t)
  {
    ATerm s_34 = NULL,t_34 = NULL;
    t = not_null(o_34);
    if(((s_34 != NULL) && (s_34 != t)))
      _fail(t);
    else
      s_34 = t;
    t = not_null(r_34);
    if(((t_34 != NULL) && (t_34 != t)))
      _fail(t);
    else
      t_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(t_34));
    return(t);
  }
  if(((n_34 != NULL) && (n_34 != t)))
    _fail(t);
  else
    n_34 = t;
  t = not_null(n_34);
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
      t = not_null(p_34);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_34 = ATgetFirst((ATermList) t);
          r_34 = (ATerm) ATgetNext((ATermList) t);
          t = u_34(t);
        }
      else
        {
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
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  ATerm i_35 (ATerm t)
  {
    ATerm g_35 = NULL,h_35 = NULL;
    t = not_null(a_35);
    if(((g_35 != NULL) && (g_35 != t)))
      _fail(t);
    else
      g_35 = t;
    t = not_null(d_35);
    if(((g_35 != NULL) && (g_35 != t)))
      _fail(t);
    else
      g_35 = t;
    t = not_null(e_35);
    if(((h_35 != NULL) && (h_35 != t)))
      _fail(t);
    else
      h_35 = t;
    t = not_null(h_35);
    return(t);
  }
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  t = not_null(z_34);
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
      t = not_null(b_35);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_35 = ATgetFirst((ATermList) t);
          f_35 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(c_35);
          if(match_cons(t, sym__2))
            {
              d_35 = ATgetArgument(t, 0);
              e_35 = ATgetArgument(t, 1);
              t = i_35(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm f_124 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  ATerm r_35 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL;
    t = not_null(n_35);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = not_null(o_35);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    t = not_null(q_35);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = not_null(p_35);
          return(t);
        }
        t = split_2_0(_id, l_2, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = f_124(k_2, t);
    }
    return(t);
  }
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = not_null(m_35);
  if(match_cons(t, sym__2))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      t = r_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  ATerm c_36 (ATerm t)
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
      ATerm m_2 (ATerm t)
      {
        ATerm a_36 = NULL;
        ATerm d_36 (ATerm t)
        {
          ATerm b_36 = NULL;
          t = not_null(a_36);
          if(((b_36 != NULL) && (b_36 != t)))
            _fail(t);
          else
            b_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(y_35));
          t = y_124(t);
          return(t);
        }
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = d_36(t);
        return(t);
      }
      t = SRTS_all(m_2, t);
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
      t = c_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  ATerm e_36 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_124(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = all_dist_1_0(e_36, t);
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm rename_4_0 (ATerm p_123 (ATerm, ATerm (ATerm)), ATerm q_123 (ATerm), ATerm r_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_123 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm g_36 = NULL;
  ATerm i_36 (ATerm t)
  {
    ATerm h_36 = NULL;
    t = not_null(g_36);
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), (ATerm) ATempty);
    {
      ATerm j_36 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(p_123, t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              t = RnBinding_2_0(q_123, s_123, t);
              t = DistBinding_2_0(j_36, r_123, t);
            }
          return(t);
        }
        t = env_alltd_1_0(n_2, t);
        return(t);
      }
      t = j_36(t);
    }
    return(t);
  }
  if(((g_36 != NULL) && (g_36 != t)))
    _fail(t);
  else
    g_36 = t;
  t = i_36(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
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
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  ATerm q_36 (ATerm t)
  {
    ATerm p_36 = NULL;
    t = not_null(n_36);
    if(((p_36 != NULL) && (p_36 != t)))
      _fail(t);
    else
      p_36 = t;
    t = not_null(p_36);
    return(t);
  }
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  t = not_null(m_36);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_36 = ATgetFirst((ATermList) t);
      o_36 = (ATerm) ATgetNext((ATermList) t);
      t = q_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  ATerm y_36 (ATerm t)
  {
    ATerm w_36 = NULL,x_36 = NULL;
    t = not_null(u_36);
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = not_null(v_36);
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), not_null(x_36));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((t_36 != NULL) && (t_36 != t)))
    _fail(t);
  else
    t_36 = t;
  t = not_null(t_36);
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
      t = y_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm b_37 = NULL;
  ATerm f_37 (ATerm t)
  {
    ATerm c_37 = NULL,d_37 = NULL;
    t = not_null(b_37);
    if(((c_37 != NULL) && (c_37 != t)))
      _fail(t);
    else
      c_37 = t;
    t = not_null(b_37);
    {
      ATerm e_37 = NULL;
      ATerm g_37 (ATerm t)
      {
        t = not_null(e_37);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = not_null(e_37);
        return(t);
      }
      t = term_x_18;
      t = b_123(t);
      if(((e_37 != NULL) && (e_37 != t)))
        _fail(t);
      else
        e_37 = t;
      t = g_37(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), not_null(c_37));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  t = f_37(t);
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  ATerm i_42 (ATerm t)
  {
    ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
    t = not_null(g_41);
    if(((l_41 != NULL) && (l_41 != t)))
      _fail(t);
    else
      l_41 = t;
    t = not_null(i_41);
    if(((m_41 != NULL) && (m_41 != t)))
      _fail(t);
    else
      m_41 = t;
    t = not_null(g_41);
    {
      ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
      ATerm j_42 (ATerm t)
      {
        ATerm v_41 = NULL,w_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
        ATerm k_42 (ATerm t)
        {
          ATerm b_42 = NULL,h_42 = NULL;
          ATerm q_42 (ATerm t)
          {
            t = not_null(h_42);
            if(((r_41 != NULL) && (r_41 != t)))
              _fail(t);
            else
              r_41 = t;
            t = not_null(h_42);
            {
              ATerm y_18;
              y_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_41)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
              {
                ATerm p_2 (ATerm t)
                {
                  t = term_a_8;
                  return(t);
                }
                t = assert_1_0(p_2, t);
              }
              t = y_18;
            }
            return(t);
          }
          t = not_null(w_41);
          if(((m_41 != NULL) && (m_41 != t)))
            _fail(t);
          else
            m_41 = t;
          t = not_null(y_41);
          if(((p_41 != NULL) && (p_41 != t)))
            _fail(t);
          else
            p_41 = t;
          t = not_null(z_41);
          if(((q_41 != NULL) && (q_41 != t)))
            _fail(t);
          else
            q_41 = t;
          t = not_null(a_42);
          if(((o_41 != NULL) && (o_41 != t)))
            _fail(t);
          else
            o_41 = t;
          t = not_null(v_41);
          {
            ATerm c_42 = NULL,e_42 = NULL,g_42 = NULL;
            ATerm p_42 (ATerm t)
            {
              t = not_null(g_42);
              if(((b_42 != NULL) && (b_42 != t)))
                _fail(t);
              else
                b_42 = t;
              t = not_null(g_42);
              return(t);
            }
            ATerm j_19;
            j_19 = t;
            {
              ATerm d_42 = NULL;
              ATerm l_42 (ATerm t)
              {
                t = not_null(d_42);
                if(((c_42 != NULL) && (c_42 != t)))
                  _fail(t);
                else
                  c_42 = t;
                t = not_null(d_42);
                return(t);
              }
              t = not_null(p_41);
              t = length_0_0(t);
              if(((d_42 != NULL) && (d_42 != t)))
                _fail(t);
              else
                d_42 = t;
              t = l_42(t);
            }
            t = j_19;
            {
              ATerm f_42 = NULL;
              ATerm o_42 (ATerm t)
              {
                t = not_null(f_42);
                if(((e_42 != NULL) && (e_42 != t)))
                  _fail(t);
                else
                  e_42 = t;
                t = not_null(f_42);
                return(t);
              }
              t = not_null(q_41);
              t = length_0_0(t);
              if(((f_42 != NULL) && (f_42 != t)))
                _fail(t);
              else
                f_42 = t;
              t = o_42(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_42), not_null(e_42));
              t = add_0_0(t);
              if(((g_42 != NULL) && (g_42 != t)))
                _fail(t);
              else
                g_42 = t;
              t = p_42(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), term_m_8);
            t = gt_0_0(t);
            t = new_0_0(t);
            if(((h_42 != NULL) && (h_42 != t)))
              _fail(t);
            else
              h_42 = t;
            t = q_42(t);
          }
          return(t);
        }
        t = not_null(u_41);
        if(((n_41 != NULL) && (n_41 != t)))
          _fail(t);
        else
          n_41 = t;
        t = not_null(n_41);
        t = strename_0_0(t);
        if(((v_41 != NULL) && (v_41 != t)))
          _fail(t);
        else
          v_41 = t;
        t = not_null(v_41);
        if(match_cons(t, sym_SDefT_4))
          {
            w_41 = ATgetArgument(t, 0);
            y_41 = ATgetArgument(t, 1);
            z_41 = ATgetArgument(t, 2);
            a_42 = ATgetArgument(t, 3);
            t = k_42(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(l_41);
      {
        ATerm q_2 (ATerm t)
        {
          t = term_k_19;
          return(t);
        }
        t = rewrite_1_0(q_2, t);
        if(((s_41 != NULL) && (s_41 != t)))
          _fail(t);
        else
          s_41 = t;
        t = not_null(s_41);
        if(match_cons(t, sym_Defined_2))
          {
            t_41 = ATgetArgument(t, 0);
            u_41 = ATgetArgument(t, 1);
            t = not_null(t_41);
            if(match_string(t, "g_0"))
              {
                t = j_42(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_41), not_null(p_41), not_null(q_41), not_null(o_41))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_41)), (ATerm)ATempty, (ATerm) ATempty));
    }
    return(t);
  }
  if(((g_41 != NULL) && (g_41 != t)))
    _fail(t);
  else
    g_41 = t;
  t = not_null(g_41);
  if(match_cons(t, sym_CallT_3))
    {
      h_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      k_41 = ATgetArgument(t, 2);
      t = not_null(h_41);
      if(match_cons(t, sym_SVar_1))
        {
          i_41 = ATgetArgument(t, 0);
          t = not_null(j_41);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(k_41);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = i_42(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  ATerm z_42 (ATerm t)
  {
    ATerm y_42 = NULL;
    t = not_null(u_42);
    if(((y_42 != NULL) && (y_42 != t)))
      _fail(t);
    else
      y_42 = t;
    t = not_null(t_42);
    {
      ATerm v_19;
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_42)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = assert_1_0(r_2, t);
      }
      t = v_19;
    }
    return(t);
  }
  if(((t_42 != NULL) && (t_42 != t)))
    _fail(t);
  else
    t_42 = t;
  t = not_null(t_42);
  if(match_cons(t, sym_SDefT_4))
    {
      u_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
      w_42 = ATgetArgument(t, 2);
      x_42 = ATgetArgument(t, 3);
      t = z_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  ATerm g_43 (ATerm t)
  {
    ATerm f_43 = NULL;
    t = not_null(e_43);
    if(((f_43 != NULL) && (f_43 != t)))
      _fail(t);
    else
      f_43 = t;
    t = not_null(f_43);
    return(t);
  }
  if(((c_43 != NULL) && (c_43 != t)))
    _fail(t);
  else
    c_43 = t;
  t = not_null(c_43);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
      t = g_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  ATerm r_43 (ATerm t)
  {
    ATerm n_43 = NULL,o_43 = NULL;
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
    t = not_null(k_43);
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm p_43 = NULL;
        ATerm q_43 = NULL;
        ATerm s_43 (ATerm t)
        {
          t = not_null(q_43);
          if(((p_43 != NULL) && (p_43 != t)))
            _fail(t);
          else
            p_43 = t;
          t = not_null(q_43);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_43), not_null(o_43));
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              t = (ATerm) ATempty;
            }
          if(((q_43 != NULL) && (q_43 != t)))
            _fail(t);
          else
            q_43 = t;
          t = s_43(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_43), not_null(o_43), not_null(p_43));
        t = table_put_0_0(t);
      }
      t = w_19;
    }
    return(t);
  }
  if(((k_43 != NULL) && (k_43 != t)))
    _fail(t);
  else
    k_43 = t;
  t = not_null(k_43);
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
      t = r_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  ATerm n_20;
  n_20 = t;
  {
    ATerm a_44 = NULL;
    ATerm g_44 (ATerm t)
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
      ATerm h_44 (ATerm t)
      {
        t = not_null(c_44);
        if(((y_43 != NULL) && (y_43 != t)))
          _fail(t);
        else
          y_43 = t;
        t = not_null(d_44);
        if(((x_43 != NULL) && (x_43 != t)))
          _fail(t);
        else
          x_43 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_43), term_o_20, not_null(x_43));
        t = table_put_0_0(t);
        t = not_null(y_43);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm e_44 = NULL;
            ATerm i_44 (ATerm t)
            {
              ATerm f_44 = NULL;
              t = not_null(e_44);
              if(((f_44 != NULL) && (f_44 != t)))
                _fail(t);
              else
                f_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), not_null(f_44));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((e_44 != NULL) && (e_44 != t)))
              _fail(t);
            else
              e_44 = t;
            t = i_44(t);
            return(t);
          }
          t = map_1_0(s_2, t);
        }
        return(t);
      }
      t = not_null(a_44);
      if(((z_43 != NULL) && (z_43 != t)))
        _fail(t);
      else
        z_43 = t;
      t = not_null(a_44);
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), term_o_20);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((b_44 != NULL) && (b_44 != t)))
          _fail(t);
        else
          b_44 = t;
        t = not_null(b_44);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_44 = ATgetFirst((ATermList) t);
            d_44 = (ATerm) ATgetNext((ATermList) t);
            t = h_44(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = w_122(t);
    if(((a_44 != NULL) && (a_44 != t)))
      _fail(t);
    else
      a_44 = t;
    t = g_44(t);
  }
  t = n_20;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm t)
{
  ATerm r_20 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_113(t);
      t = w_113(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = r_20;
      t = w_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm l_44 = NULL;
  ATerm i_21;
  i_21 = t;
  {
    ATerm m_44 = NULL;
    ATerm p_44 (ATerm t)
    {
      ATerm n_44 = NULL;
      t = not_null(m_44);
      if(((l_44 != NULL) && (l_44 != t)))
        _fail(t);
      else
        l_44 = t;
      t = not_null(m_44);
      {
        ATerm o_44 = NULL;
        ATerm q_44 (ATerm t)
        {
          t = not_null(o_44);
          if(((n_44 != NULL) && (n_44 != t)))
            _fail(t);
          else
            n_44 = t;
          t = not_null(o_44);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_44), term_o_20);
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = (ATerm) ATempty;
            }
          if(((o_44 != NULL) && (o_44 != t)))
            _fail(t);
          else
            o_44 = t;
          t = q_44(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_44), term_o_20, (ATerm) ATinsert(CheckATermList(not_null(n_44)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = v_122(t);
    if(((m_44 != NULL) && (m_44 != t)))
      _fail(t);
    else
      m_44 = t;
    t = p_44(t);
  }
  t = i_21;
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
    t = term_a_8;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0_0(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm w_2 (ATerm t)
          {
            ATerm z_21 = t;
            int a_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = InlineCall0_0_0(t);
                ;
                LocalPopChoice(a_22);
              }
            else
              {
                t = z_21;
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
ATerm assert_1_0 (ATerm z_122 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,f_45 = NULL;
  ATerm p_45 (ATerm t)
  {
    ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
    t = not_null(c_45);
    if(((g_45 != NULL) && (g_45 != t)))
      _fail(t);
    else
      g_45 = t;
    t = not_null(f_45);
    if(((h_45 != NULL) && (h_45 != t)))
      _fail(t);
    else
      h_45 = t;
    t = not_null(b_45);
    {
      ATerm b_22;
      b_22 = t;
      {
        ATerm l_45 = NULL;
        ATerm q_45 (ATerm t)
        {
          ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
          ATerm r_45 (ATerm t)
          {
            t = not_null(n_45);
            if(((j_45 != NULL) && (j_45 != t)))
              _fail(t);
            else
              j_45 = t;
            t = not_null(o_45);
            if(((k_45 != NULL) && (k_45 != t)))
              _fail(t);
            else
              k_45 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_45), term_o_20, (ATerm) ATinsert(CheckATermList(not_null(k_45)), (ATerm) ATinsert(CheckATermList(not_null(j_45)), not_null(g_45))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(l_45);
          if(((i_45 != NULL) && (i_45 != t)))
            _fail(t);
          else
            i_45 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(i_45), not_null(g_45), not_null(h_45));
          t = table_push_0_0(t);
          {
            ATerm q_22 = t;
            int r_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), term_o_20);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(r_22);
              }
            else
              {
                t = q_22;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((m_45 != NULL) && (m_45 != t)))
              _fail(t);
            else
              m_45 = t;
            t = not_null(m_45);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_45 = ATgetFirst((ATermList) t);
                o_45 = (ATerm) ATgetNext((ATermList) t);
                t = r_45(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = z_122(t);
        if(((l_45 != NULL) && (l_45 != t)))
          _fail(t);
        else
          l_45 = t;
        t = q_45(t);
      }
      t = b_22;
    }
    return(t);
  }
  if(((b_45 != NULL) && (b_45 != t)))
    _fail(t);
  else
    b_45 = t;
  t = not_null(b_45);
  if(match_cons(t, sym__2))
    {
      c_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
      t = p_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  ATerm b_46 (ATerm t)
  {
    ATerm z_45 = NULL,a_46 = NULL;
    t = not_null(u_45);
    if(((a_46 != NULL) && (a_46 != t)))
      _fail(t);
    else
      a_46 = t;
    t = not_null(v_45);
    if(((z_45 != NULL) && (z_45 != t)))
      _fail(t);
    else
      z_45 = t;
    t = not_null(u_45);
    {
      ATerm s_22;
      s_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_t_22, not_null(a_46)));
      {
        ATerm x_2 (ATerm t)
        {
          t = term_a_8;
          return(t);
        }
        t = assert_1_0(x_2, t);
      }
      t = s_22;
      {
        ATerm u_22;
        u_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_22, not_null(a_46)));
        {
          ATerm y_2 (ATerm t)
          {
            t = term_k_19;
            return(t);
          }
          t = assert_1_0(y_2, t);
        }
        t = u_22;
      }
    }
    return(t);
  }
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(u_45);
  if(match_cons(t, sym_SDefT_4))
    {
      v_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
      x_45 = ATgetArgument(t, 2);
      y_45 = ATgetArgument(t, 3);
      t = b_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm w_22 = t;
  if((PushChoice() == 0))
    {
      t = gt_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_22;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t)
{
  ATerm x_22 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_121(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = x_22;
      {
        ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
        ATerm u_46 (ATerm t)
        {
          ATerm j_46 = NULL,k_46 = NULL,q_46 = NULL,s_46 = NULL;
          t = not_null(h_46);
          if(((j_46 != NULL) && (j_46 != t)))
            _fail(t);
          else
            j_46 = t;
          t = not_null(i_46);
          if(((k_46 != NULL) && (k_46 != t)))
            _fail(t);
          else
            k_46 = t;
          t = not_null(g_46);
          {
            ATerm c_24;
            c_24 = t;
            {
              ATerm r_46 = NULL;
              ATerm v_46 (ATerm t)
              {
                t = not_null(r_46);
                if(((q_46 != NULL) && (q_46 != t)))
                  _fail(t);
                else
                  q_46 = t;
                t = not_null(r_46);
                return(t);
              }
              t = not_null(j_46);
              t = s_121(t);
              if(((r_46 != NULL) && (r_46 != t)))
                _fail(t);
              else
                r_46 = t;
              t = v_46(t);
            }
            t = c_24;
            {
              ATerm t_46 = NULL;
              ATerm w_46 (ATerm t)
              {
                t = not_null(t_46);
                if(((s_46 != NULL) && (s_46 != t)))
                  _fail(t);
                else
                  s_46 = t;
                t = not_null(t_46);
                return(t);
              }
              t = not_null(k_46);
              t = foldr_3_0(q_121, r_121, s_121, t);
              if(((t_46 != NULL) && (t_46 != t)))
                _fail(t);
              else
                t_46 = t;
              t = w_46(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_46), not_null(s_46));
              t = r_121(t);
            }
          }
          return(t);
        }
        if(((g_46 != NULL) && (g_46 != t)))
          _fail(t);
        else
          g_46 = t;
        t = not_null(g_46);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_46 = ATgetFirst((ATermList) t);
            i_46 = (ATerm) ATgetNext((ATermList) t);
            t = u_46(t);
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
  ATerm b_47 = NULL;
  ATerm o_47 (ATerm t)
  {
    ATerm c_47 = NULL,d_47 = NULL;
    t = not_null(b_47);
    if(((c_47 != NULL) && (c_47 != t)))
      _fail(t);
    else
      c_47 = t;
    t = not_null(b_47);
    {
      ATerm j_47 = NULL;
      ATerm p_47 (ATerm t)
      {
        ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
        ATerm q_47 (ATerm t)
        {
          t = not_null(n_47);
          if(((d_47 != NULL) && (d_47 != t)))
            _fail(t);
          else
            d_47 = t;
          t = not_null(l_47);
          return(t);
        }
        t = not_null(j_47);
        if(((k_47 != NULL) && (k_47 != t)))
          _fail(t);
        else
          k_47 = t;
        t = not_null(j_47);
        t = SSL_explode_term(not_null(k_47));
        if(((l_47 != NULL) && (l_47 != t)))
          _fail(t);
        else
          l_47 = t;
        t = not_null(l_47);
        if(match_cons(t, sym__2))
          {
            m_47 = ATgetArgument(t, 0);
            n_47 = ATgetArgument(t, 1);
            t = q_47(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(c_47);
      if(((j_47 != NULL) && (j_47 != t)))
        _fail(t);
      else
        j_47 = t;
      t = p_47(t);
      t = not_null(d_47);
      t = foldr_3_0(o_119, p_119, q_119, t);
    }
    return(t);
  }
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  t = o_47(t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        t = term_n_8;
        return(t);
      }
      t = crush_3_0(z_2, add_0_0, term_size_0_0, t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm r_47 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            t = term_n_8;
            return(t);
          }
          t = crush_3_0(a_3, add_0_0, r_47, t);
          return(t);
        }
        t = r_47(t);
      }
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
  ATerm q_48 (ATerm t)
  {
    ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,g_48 = NULL;
    ATerm x_48 (ATerm t)
    {
      ATerm h_48 = NULL,i_48 = NULL;
      ATerm y_48 (ATerm t)
      {
        ATerm j_48 = NULL,k_48 = NULL;
        t = not_null(i_48);
        if(((j_48 != NULL) && (j_48 != t)))
          _fail(t);
        else
          j_48 = t;
        t = not_null(i_48);
        {
          ATerm p_48 = NULL;
          ATerm z_48 (ATerm t)
          {
            t = not_null(p_48);
            if(((k_48 != NULL) && (k_48 != t)))
              _fail(t);
            else
              k_48 = t;
            t = not_null(p_48);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(h_48), not_null(j_48)), not_null(e_48));
          if(((p_48 != NULL) && (p_48 != t)))
            _fail(t);
          else
            p_48 = t;
          t = z_48(t);
          t = not_null(k_48);
        }
        return(t);
      }
      t = not_null(g_48);
      if(((h_48 != NULL) && (h_48 != t)))
        _fail(t);
      else
        h_48 = t;
      t = not_null(d_48);
      t = l_99(t);
      if(((i_48 != NULL) && (i_48 != t)))
        _fail(t);
      else
        i_48 = t;
      t = y_48(t);
      return(t);
    }
    t = not_null(y_47);
    if(((b_48 != NULL) && (b_48 != t)))
      _fail(t);
    else
      b_48 = t;
    t = not_null(z_47);
    if(((c_48 != NULL) && (c_48 != t)))
      _fail(t);
    else
      c_48 = t;
    t = not_null(a_48);
    if(((d_48 != NULL) && (d_48 != t)))
      _fail(t);
    else
      d_48 = t;
    t = not_null(y_47);
    {
      ATerm f_48 = NULL;
      ATerm u_48 (ATerm t)
      {
        t = not_null(f_48);
        if(((e_48 != NULL) && (e_48 != t)))
          _fail(t);
        else
          e_48 = t;
        t = not_null(f_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(b_48));
      if(((f_48 != NULL) && (f_48 != t)))
        _fail(t);
      else
        f_48 = t;
      t = u_48(t);
      t = not_null(c_48);
      t = k_99(t);
      if(((g_48 != NULL) && (g_48 != t)))
        _fail(t);
      else
        g_48 = t;
      t = x_48(t);
    }
    return(t);
  }
  if(((y_47 != NULL) && (y_47 != t)))
    _fail(t);
  else
    y_47 = t;
  t = not_null(y_47);
  if(match_cons(t, sym_LChoice_2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      t = q_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  ATerm c_50 (ATerm t)
  {
    ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,o_49 = NULL;
    ATerm e_50 (ATerm t)
    {
      ATerm p_49 = NULL,q_49 = NULL;
      ATerm f_50 (ATerm t)
      {
        ATerm v_49 = NULL,w_49 = NULL;
        t = not_null(q_49);
        if(((v_49 != NULL) && (v_49 != t)))
          _fail(t);
        else
          v_49 = t;
        t = not_null(q_49);
        {
          ATerm b_50 = NULL;
          ATerm g_50 (ATerm t)
          {
            t = not_null(b_50);
            if(((w_49 != NULL) && (w_49 != t)))
              _fail(t);
            else
              w_49 = t;
            t = not_null(b_50);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_49), not_null(v_49)), not_null(m_49));
          if(((b_50 != NULL) && (b_50 != t)))
            _fail(t);
          else
            b_50 = t;
          t = g_50(t);
          t = not_null(w_49);
        }
        return(t);
      }
      t = not_null(o_49);
      if(((p_49 != NULL) && (p_49 != t)))
        _fail(t);
      else
        p_49 = t;
      t = not_null(l_49);
      t = j_98(t);
      if(((q_49 != NULL) && (q_49 != t)))
        _fail(t);
      else
        q_49 = t;
      t = f_50(t);
      return(t);
    }
    t = not_null(g_49);
    if(((j_49 != NULL) && (j_49 != t)))
      _fail(t);
    else
      j_49 = t;
    t = not_null(h_49);
    if(((k_49 != NULL) && (k_49 != t)))
      _fail(t);
    else
      k_49 = t;
    t = not_null(i_49);
    if(((l_49 != NULL) && (l_49 != t)))
      _fail(t);
    else
      l_49 = t;
    t = not_null(g_49);
    {
      ATerm n_49 = NULL;
      ATerm d_50 (ATerm t)
      {
        t = not_null(n_49);
        if(((m_49 != NULL) && (m_49 != t)))
          _fail(t);
        else
          m_49 = t;
        t = not_null(n_49);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_49));
      if(((n_49 != NULL) && (n_49 != t)))
        _fail(t);
      else
        n_49 = t;
      t = d_50(t);
      t = not_null(k_49);
      t = i_98(t);
      if(((o_49 != NULL) && (o_49 != t)))
        _fail(t);
      else
        o_49 = t;
      t = e_50(t);
    }
    return(t);
  }
  if(((g_49 != NULL) && (g_49 != t)))
    _fail(t);
  else
    g_49 = t;
  t = not_null(g_49);
  if(match_cons(t, sym_Choice_2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
      t = c_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  ATerm b_51 (ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,v_50 = NULL;
    ATerm d_51 (ATerm t)
    {
      ATerm w_50 = NULL,x_50 = NULL;
      ATerm e_51 (ATerm t)
      {
        ATerm y_50 = NULL,z_50 = NULL;
        t = not_null(x_50);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = not_null(x_50);
        {
          ATerm a_51 = NULL;
          ATerm f_51 (ATerm t)
          {
            t = not_null(a_51);
            if(((z_50 != NULL) && (z_50 != t)))
              _fail(t);
            else
              z_50 = t;
            t = not_null(a_51);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(w_50), not_null(y_50)), not_null(t_50));
          if(((a_51 != NULL) && (a_51 != t)))
            _fail(t);
          else
            a_51 = t;
          t = f_51(t);
          t = not_null(z_50);
        }
        return(t);
      }
      t = not_null(v_50);
      if(((w_50 != NULL) && (w_50 != t)))
        _fail(t);
      else
        w_50 = t;
      t = not_null(s_50);
      t = i_94(t);
      if(((x_50 != NULL) && (x_50 != t)))
        _fail(t);
      else
        x_50 = t;
      t = e_51(t);
      return(t);
    }
    t = not_null(n_50);
    if(((q_50 != NULL) && (q_50 != t)))
      _fail(t);
    else
      q_50 = t;
    t = not_null(o_50);
    if(((r_50 != NULL) && (r_50 != t)))
      _fail(t);
    else
      r_50 = t;
    t = not_null(p_50);
    if(((s_50 != NULL) && (s_50 != t)))
      _fail(t);
    else
      s_50 = t;
    t = not_null(n_50);
    {
      ATerm u_50 = NULL;
      ATerm c_51 (ATerm t)
      {
        t = not_null(u_50);
        if(((t_50 != NULL) && (t_50 != t)))
          _fail(t);
        else
          t_50 = t;
        t = not_null(u_50);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_50));
      if(((u_50 != NULL) && (u_50 != t)))
        _fail(t);
      else
        u_50 = t;
      t = c_51(t);
      t = not_null(r_50);
      t = h_94(t);
      if(((v_50 != NULL) && (v_50 != t)))
        _fail(t);
      else
        v_50 = t;
      t = d_51(t);
    }
    return(t);
  }
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = not_null(n_50);
  if(match_cons(t, sym_Cong_2))
    {
      o_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
      t = b_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  ATerm v_51 (ATerm t)
  {
    ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,r_51 = NULL;
    ATerm y_51 (ATerm t)
    {
      ATerm s_51 = NULL,t_51 = NULL;
      t = not_null(r_51);
      if(((s_51 != NULL) && (s_51 != t)))
        _fail(t);
      else
        s_51 = t;
      t = not_null(r_51);
      {
        ATerm u_51 = NULL;
        ATerm z_51 (ATerm t)
        {
          t = not_null(u_51);
          if(((t_51 != NULL) && (t_51 != t)))
            _fail(t);
          else
            t_51 = t;
          t = not_null(u_51);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(s_51)), not_null(p_51));
        if(((u_51 != NULL) && (u_51 != t)))
          _fail(t);
        else
          u_51 = t;
        t = z_51(t);
        t = not_null(t_51);
      }
      return(t);
    }
    t = not_null(l_51);
    if(((n_51 != NULL) && (n_51 != t)))
      _fail(t);
    else
      n_51 = t;
    t = not_null(m_51);
    if(((o_51 != NULL) && (o_51 != t)))
      _fail(t);
    else
      o_51 = t;
    t = not_null(l_51);
    {
      ATerm q_51 = NULL;
      ATerm w_51 (ATerm t)
      {
        t = not_null(q_51);
        if(((p_51 != NULL) && (p_51 != t)))
          _fail(t);
        else
          p_51 = t;
        t = not_null(q_51);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_51));
      if(((q_51 != NULL) && (q_51 != t)))
        _fail(t);
      else
        q_51 = t;
      t = w_51(t);
      t = not_null(o_51);
      t = b_99(t);
      if(((r_51 != NULL) && (r_51 != t)))
        _fail(t);
      else
        r_51 = t;
      t = y_51(t);
    }
    return(t);
  }
  if(((l_51 != NULL) && (l_51 != t)))
    _fail(t);
  else
    l_51 = t;
  t = not_null(l_51);
  if(match_cons(t, sym_Match_1))
    {
      m_51 = ATgetArgument(t, 0);
      t = v_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  ATerm w_52 (ATerm t)
  {
    ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,q_52 = NULL;
    ATerm y_52 (ATerm t)
    {
      ATerm r_52 = NULL,s_52 = NULL;
      ATerm z_52 (ATerm t)
      {
        ATerm t_52 = NULL,u_52 = NULL;
        t = not_null(s_52);
        if(((t_52 != NULL) && (t_52 != t)))
          _fail(t);
        else
          t_52 = t;
        t = not_null(s_52);
        {
          ATerm v_52 = NULL;
          ATerm a_53 (ATerm t)
          {
            t = not_null(v_52);
            if(((u_52 != NULL) && (u_52 != t)))
              _fail(t);
            else
              u_52 = t;
            t = not_null(v_52);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(r_52), not_null(t_52)), not_null(o_52));
          if(((v_52 != NULL) && (v_52 != t)))
            _fail(t);
          else
            v_52 = t;
          t = a_53(t);
          t = not_null(u_52);
        }
        return(t);
      }
      t = not_null(q_52);
      if(((r_52 != NULL) && (r_52 != t)))
        _fail(t);
      else
        r_52 = t;
      t = not_null(n_52);
      t = j_99(t);
      if(((s_52 != NULL) && (s_52 != t)))
        _fail(t);
      else
        s_52 = t;
      t = z_52(t);
      return(t);
    }
    t = not_null(i_52);
    if(((l_52 != NULL) && (l_52 != t)))
      _fail(t);
    else
      l_52 = t;
    t = not_null(j_52);
    if(((m_52 != NULL) && (m_52 != t)))
      _fail(t);
    else
      m_52 = t;
    t = not_null(k_52);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    t = not_null(i_52);
    {
      ATerm p_52 = NULL;
      ATerm x_52 (ATerm t)
      {
        t = not_null(p_52);
        if(((o_52 != NULL) && (o_52 != t)))
          _fail(t);
        else
          o_52 = t;
        t = not_null(p_52);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_52));
      if(((p_52 != NULL) && (p_52 != t)))
        _fail(t);
      else
        p_52 = t;
      t = x_52(t);
      t = not_null(m_52);
      t = i_99(t);
      if(((q_52 != NULL) && (q_52 != t)))
        _fail(t);
      else
        q_52 = t;
      t = y_52(t);
    }
    return(t);
  }
  if(((i_52 != NULL) && (i_52 != t)))
    _fail(t);
  else
    i_52 = t;
  t = not_null(i_52);
  if(match_cons(t, sym_Seq_2))
    {
      j_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
      t = w_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,c_54 = NULL;
  ATerm q_54 (ATerm t)
  {
    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,i_54 = NULL,k_54 = NULL;
    ATerm s_54 (ATerm t)
    {
      ATerm l_54 = NULL,m_54 = NULL;
      ATerm t_54 (ATerm t)
      {
        ATerm n_54 = NULL,o_54 = NULL;
        t = not_null(m_54);
        if(((n_54 != NULL) && (n_54 != t)))
          _fail(t);
        else
          n_54 = t;
        t = not_null(m_54);
        {
          ATerm p_54 = NULL;
          ATerm u_54 (ATerm t)
          {
            t = not_null(p_54);
            if(((o_54 != NULL) && (o_54 != t)))
              _fail(t);
            else
              o_54 = t;
            t = not_null(p_54);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_54), not_null(n_54)), not_null(i_54));
          if(((p_54 != NULL) && (p_54 != t)))
            _fail(t);
          else
            p_54 = t;
          t = u_54(t);
          t = not_null(o_54);
        }
        return(t);
      }
      t = not_null(k_54);
      if(((l_54 != NULL) && (l_54 != t)))
        _fail(t);
      else
        l_54 = t;
      t = not_null(f_54);
      t = f_99(t);
      if(((m_54 != NULL) && (m_54 != t)))
        _fail(t);
      else
        m_54 = t;
      t = t_54(t);
      return(t);
    }
    t = not_null(u_53);
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(v_53);
    if(((e_54 != NULL) && (e_54 != t)))
      _fail(t);
    else
      e_54 = t;
    t = not_null(c_54);
    if(((f_54 != NULL) && (f_54 != t)))
      _fail(t);
    else
      f_54 = t;
    t = not_null(u_53);
    {
      ATerm j_54 = NULL;
      ATerm r_54 (ATerm t)
      {
        t = not_null(j_54);
        if(((i_54 != NULL) && (i_54 != t)))
          _fail(t);
        else
          i_54 = t;
        t = not_null(j_54);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_54));
      if(((j_54 != NULL) && (j_54 != t)))
        _fail(t);
      else
        j_54 = t;
      t = r_54(t);
      t = not_null(e_54);
      t = e_99(t);
      if(((k_54 != NULL) && (k_54 != t)))
        _fail(t);
      else
        k_54 = t;
      t = s_54(t);
    }
    return(t);
  }
  if(((u_53 != NULL) && (u_53 != t)))
    _fail(t);
  else
    u_53 = t;
  t = not_null(u_53);
  if(match_cons(t, sym_Scope_2))
    {
      v_53 = ATgetArgument(t, 0);
      c_54 = ATgetArgument(t, 1);
      t = q_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  ATerm r_55 (ATerm t)
  {
    ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,g_55 = NULL;
    ATerm t_55 (ATerm t)
    {
      ATerm o_55 = NULL,p_55 = NULL;
      t = not_null(g_55);
      if(((o_55 != NULL) && (o_55 != t)))
        _fail(t);
      else
        o_55 = t;
      t = not_null(g_55);
      {
        ATerm q_55 = NULL;
        ATerm u_55 (ATerm t)
        {
          t = not_null(q_55);
          if(((p_55 != NULL) && (p_55 != t)))
            _fail(t);
          else
            p_55 = t;
          t = not_null(q_55);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(o_55)), not_null(e_55));
        if(((q_55 != NULL) && (q_55 != t)))
          _fail(t);
        else
          q_55 = t;
        t = u_55(t);
        t = not_null(p_55);
      }
      return(t);
    }
    t = not_null(a_55);
    if(((c_55 != NULL) && (c_55 != t)))
      _fail(t);
    else
      c_55 = t;
    t = not_null(b_55);
    if(((d_55 != NULL) && (d_55 != t)))
      _fail(t);
    else
      d_55 = t;
    t = not_null(a_55);
    {
      ATerm f_55 = NULL;
      ATerm s_55 (ATerm t)
      {
        t = not_null(f_55);
        if(((e_55 != NULL) && (e_55 != t)))
          _fail(t);
        else
          e_55 = t;
        t = not_null(f_55);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_55));
      if(((f_55 != NULL) && (f_55 != t)))
        _fail(t);
      else
        f_55 = t;
      t = s_55(t);
      t = not_null(d_55);
      t = c_99(t);
      if(((g_55 != NULL) && (g_55 != t)))
        _fail(t);
      else
        g_55 = t;
      t = t_55(t);
    }
    return(t);
  }
  if(((a_55 != NULL) && (a_55 != t)))
    _fail(t);
  else
    a_55 = t;
  t = not_null(a_55);
  if(match_cons(t, sym_Build_1))
    {
      b_55 = ATgetArgument(t, 0);
      t = r_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,o_56 = NULL;
  ATerm a_57 (ATerm t)
  {
    ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,t_56 = NULL;
    ATerm c_57 (ATerm t)
    {
      ATerm u_56 = NULL,v_56 = NULL;
      t = not_null(t_56);
      if(((u_56 != NULL) && (u_56 != t)))
        _fail(t);
      else
        u_56 = t;
      t = not_null(t_56);
      {
        ATerm w_56 = NULL;
        ATerm d_57 (ATerm t)
        {
          t = not_null(w_56);
          if(((v_56 != NULL) && (v_56 != t)))
            _fail(t);
          else
            v_56 = t;
          t = not_null(w_56);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_56)), not_null(r_56));
        if(((w_56 != NULL) && (w_56 != t)))
          _fail(t);
        else
          w_56 = t;
        t = d_57(t);
        t = not_null(v_56);
      }
      return(t);
    }
    t = not_null(l_56);
    if(((p_56 != NULL) && (p_56 != t)))
      _fail(t);
    else
      p_56 = t;
    t = not_null(o_56);
    if(((q_56 != NULL) && (q_56 != t)))
      _fail(t);
    else
      q_56 = t;
    t = not_null(l_56);
    {
      ATerm s_56 = NULL;
      ATerm b_57 (ATerm t)
      {
        t = not_null(s_56);
        if(((r_56 != NULL) && (r_56 != t)))
          _fail(t);
        else
          r_56 = t;
        t = not_null(s_56);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_56));
      if(((s_56 != NULL) && (s_56 != t)))
        _fail(t);
      else
        s_56 = t;
      t = b_57(t);
      t = not_null(q_56);
      t = t_98(t);
      if(((t_56 != NULL) && (t_56 != t)))
        _fail(t);
      else
        t_56 = t;
      t = c_57(t);
    }
    return(t);
  }
  if(((l_56 != NULL) && (l_56 != t)))
    _fail(t);
  else
    l_56 = t;
  t = not_null(l_56);
  if(match_cons(t, sym_SVar_1))
    {
      o_56 = ATgetArgument(t, 0);
      t = a_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,o_57 = NULL,p_57 = NULL;
  ATerm e_58 (ATerm t)
  {
    ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,w_57 = NULL;
    ATerm g_58 (ATerm t)
    {
      ATerm x_57 = NULL,y_57 = NULL;
      ATerm h_58 (ATerm t)
      {
        ATerm z_57 = NULL,a_58 = NULL;
        ATerm i_58 (ATerm t)
        {
          ATerm b_58 = NULL,c_58 = NULL;
          t = not_null(a_58);
          if(((b_58 != NULL) && (b_58 != t)))
            _fail(t);
          else
            b_58 = t;
          t = not_null(a_58);
          {
            ATerm d_58 = NULL;
            ATerm j_58 (ATerm t)
            {
              t = not_null(d_58);
              if(((c_58 != NULL) && (c_58 != t)))
                _fail(t);
              else
                c_58 = t;
              t = not_null(d_58);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(x_57), not_null(z_57), not_null(b_58)), not_null(u_57));
            if(((d_58 != NULL) && (d_58 != t)))
              _fail(t);
            else
              d_58 = t;
            t = j_58(t);
            t = not_null(c_58);
          }
          return(t);
        }
        t = not_null(y_57);
        if(((z_57 != NULL) && (z_57 != t)))
          _fail(t);
        else
          z_57 = t;
        t = not_null(t_57);
        t = a_99(t);
        if(((a_58 != NULL) && (a_58 != t)))
          _fail(t);
        else
          a_58 = t;
        t = i_58(t);
        return(t);
      }
      t = not_null(w_57);
      if(((x_57 != NULL) && (x_57 != t)))
        _fail(t);
      else
        x_57 = t;
      t = not_null(s_57);
      t = z_98(t);
      if(((y_57 != NULL) && (y_57 != t)))
        _fail(t);
      else
        y_57 = t;
      t = h_58(t);
      return(t);
    }
    t = not_null(l_57);
    if(((q_57 != NULL) && (q_57 != t)))
      _fail(t);
    else
      q_57 = t;
    t = not_null(m_57);
    if(((r_57 != NULL) && (r_57 != t)))
      _fail(t);
    else
      r_57 = t;
    t = not_null(o_57);
    if(((s_57 != NULL) && (s_57 != t)))
      _fail(t);
    else
      s_57 = t;
    t = not_null(p_57);
    if(((t_57 != NULL) && (t_57 != t)))
      _fail(t);
    else
      t_57 = t;
    t = not_null(l_57);
    {
      ATerm v_57 = NULL;
      ATerm f_58 (ATerm t)
      {
        t = not_null(v_57);
        if(((u_57 != NULL) && (u_57 != t)))
          _fail(t);
        else
          u_57 = t;
        t = not_null(v_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_57));
      if(((v_57 != NULL) && (v_57 != t)))
        _fail(t);
      else
        v_57 = t;
      t = f_58(t);
      t = not_null(r_57);
      t = y_98(t);
      if(((w_57 != NULL) && (w_57 != t)))
        _fail(t);
      else
        w_57 = t;
      t = g_58(t);
    }
    return(t);
  }
  if(((l_57 != NULL) && (l_57 != t)))
    _fail(t);
  else
    l_57 = t;
  t = not_null(l_57);
  if(match_cons(t, sym_CallT_3))
    {
      m_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
      p_57 = ATgetArgument(t, 2);
      t = e_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  ATerm o_58 = NULL;
  ATerm u_58 (ATerm t)
  {
    ATerm p_58 = NULL,q_58 = NULL,s_58 = NULL;
    t = not_null(o_58);
    if(((p_58 != NULL) && (p_58 != t)))
      _fail(t);
    else
      p_58 = t;
    t = not_null(o_58);
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm r_58 = NULL;
        ATerm v_58 (ATerm t)
        {
          t = not_null(r_58);
          if(((q_58 != NULL) && (q_58 != t)))
            _fail(t);
          else
            q_58 = t;
          t = not_null(r_58);
          return(t);
        }
        t = SSLgetAnnotations(not_null(p_58));
        if(((r_58 != NULL) && (r_58 != t)))
          _fail(t);
        else
          r_58 = t;
        t = v_58(t);
      }
      t = p_24;
      {
        ATerm t_58 = NULL;
        ATerm w_58 (ATerm t)
        {
          t = not_null(t_58);
          if(((s_58 != NULL) && (s_58 != t)))
            _fail(t);
          else
            s_58 = t;
          t = not_null(t_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(q_58));
        if(((t_58 != NULL) && (t_58 != t)))
          _fail(t);
        else
          t_58 = t;
        t = w_58(t);
        t = not_null(s_58);
      }
    }
    return(t);
  }
  if(((o_58 != NULL) && (o_58 != t)))
    _fail(t);
  else
    o_58 = t;
  t = not_null(o_58);
  if(match_cons(t, sym_Fail_0))
    {
      t = u_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  ATerm b_59 = NULL;
  ATerm h_59 (ATerm t)
  {
    ATerm c_59 = NULL,d_59 = NULL,f_59 = NULL;
    t = not_null(b_59);
    if(((c_59 != NULL) && (c_59 != t)))
      _fail(t);
    else
      c_59 = t;
    t = not_null(b_59);
    {
      ATerm x_24;
      x_24 = t;
      {
        ATerm e_59 = NULL;
        ATerm i_59 (ATerm t)
        {
          t = not_null(e_59);
          if(((d_59 != NULL) && (d_59 != t)))
            _fail(t);
          else
            d_59 = t;
          t = not_null(e_59);
          return(t);
        }
        t = SSLgetAnnotations(not_null(c_59));
        if(((e_59 != NULL) && (e_59 != t)))
          _fail(t);
        else
          e_59 = t;
        t = i_59(t);
      }
      t = x_24;
      {
        ATerm g_59 = NULL;
        ATerm j_59 (ATerm t)
        {
          t = not_null(g_59);
          if(((f_59 != NULL) && (f_59 != t)))
            _fail(t);
          else
            f_59 = t;
          t = not_null(g_59);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(d_59));
        if(((g_59 != NULL) && (g_59 != t)))
          _fail(t);
        else
          g_59 = t;
        t = j_59(t);
        t = not_null(f_59);
      }
    }
    return(t);
  }
  if(((b_59 != NULL) && (b_59 != t)))
    _fail(t);
  else
    b_59 = t;
  t = not_null(b_59);
  if(match_cons(t, sym_Id_0))
    {
      t = h_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm n_59 (ATerm t)
  {
    ATerm y_24 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0_0(t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = y_24;
        {
          ATerm k_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0_0(t);
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = k_25;
              {
                ATerm q_25 = t;
                int v_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_3 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(b_3, _id, _id, t);
                    ;
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = q_25;
                    {
                      ATerm w_25 = t;
                      int e_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1_0(_id, t);
                          ;
                          LocalPopChoice(e_26);
                        }
                      else
                        {
                          t = w_25;
                          {
                            ATerm f_26 = t;
                            int l_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1_0(_id, t);
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
                                      ATerm c_3 (ATerm t)
                                      {
                                        t = Match_1_0(_id, t);
                                        return(t);
                                      }
                                      t = Seq_2_0(c_3, _id, t);
                                      ;
                                      LocalPopChoice(n_26);
                                    }
                                  else
                                    {
                                      t = m_26;
                                      {
                                        ATerm x_26 = t;
                                        int y_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Scope_2_0(_id, d_3, t);
                                            ;
                                            LocalPopChoice(y_26);
                                          }
                                        else
                                          {
                                            t = x_26;
                                            {
                                              ATerm g_27 = t;
                                              int h_27 = stack_ptr;
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
                                                  LocalPopChoice(h_27);
                                                }
                                              else
                                                {
                                                  t = g_27;
                                                  {
                                                    ATerm i_27 = t;
                                                    int s_27 = stack_ptr;
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
                                                        LocalPopChoice(s_27);
                                                      }
                                                    else
                                                      {
                                                        t = i_27;
                                                        {
                                                          ATerm t_27 = t;
                                                          int u_27 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2_0(_id, _id, t);
                                                              ;
                                                              LocalPopChoice(u_27);
                                                            }
                                                          else
                                                            {
                                                              t = t_27;
                                                              {
                                                                ATerm v_27 = t;
                                                                int w_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(n_59, n_59, t);
                                                                    ;
                                                                    LocalPopChoice(w_27);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_27;
                                                                    t = LChoice_2_0(n_59, n_59, t);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = n_59(t);
  {
    ATerm x_27;
    x_27 = t;
    {
      ATerm l_59 = NULL;
      ATerm m_59 = NULL;
      ATerm o_59 (ATerm t)
      {
        t = not_null(m_59);
        if(((l_59 != NULL) && (l_59 != t)))
          _fail(t);
        else
          l_59 = t;
        t = not_null(m_59);
        return(t);
      }
      t = term_size_0_0(t);
      if(((m_59 != NULL) && (m_59 != t)))
        _fail(t);
      else
        m_59 = t;
      t = o_59(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_59), term_y_27);
      t = leq_0_0(t);
    }
    t = x_27;
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm p_59 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = SRTS_one(p_59, t);
      }
    return(t);
  }
  t = p_59(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  ATerm u_60 (ATerm t)
  {
    ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,k_60 = NULL;
    ATerm w_60 (ATerm t)
    {
      ATerm l_60 = NULL,m_60 = NULL;
      ATerm x_60 (ATerm t)
      {
        ATerm n_60 = NULL,o_60 = NULL;
        ATerm y_60 (ATerm t)
        {
          ATerm p_60 = NULL,q_60 = NULL;
          ATerm z_60 (ATerm t)
          {
            ATerm r_60 = NULL,s_60 = NULL;
            t = not_null(q_60);
            if(((r_60 != NULL) && (r_60 != t)))
              _fail(t);
            else
              r_60 = t;
            t = not_null(q_60);
            {
              ATerm t_60 = NULL;
              ATerm a_61 (ATerm t)
              {
                t = not_null(t_60);
                if(((s_60 != NULL) && (s_60 != t)))
                  _fail(t);
                else
                  s_60 = t;
                t = not_null(t_60);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(l_60), not_null(n_60), not_null(p_60), not_null(r_60)), not_null(i_60));
              if(((t_60 != NULL) && (t_60 != t)))
                _fail(t);
              else
                t_60 = t;
              t = a_61(t);
              t = not_null(s_60);
            }
            return(t);
          }
          t = not_null(o_60);
          if(((p_60 != NULL) && (p_60 != t)))
            _fail(t);
          else
            p_60 = t;
          t = not_null(h_60);
          t = p_101(t);
          if(((q_60 != NULL) && (q_60 != t)))
            _fail(t);
          else
            q_60 = t;
          t = z_60(t);
          return(t);
        }
        t = not_null(m_60);
        if(((n_60 != NULL) && (n_60 != t)))
          _fail(t);
        else
          n_60 = t;
        t = not_null(g_60);
        t = o_101(t);
        if(((o_60 != NULL) && (o_60 != t)))
          _fail(t);
        else
          o_60 = t;
        t = y_60(t);
        return(t);
      }
      t = not_null(k_60);
      if(((l_60 != NULL) && (l_60 != t)))
        _fail(t);
      else
        l_60 = t;
      t = not_null(f_60);
      t = n_101(t);
      if(((m_60 != NULL) && (m_60 != t)))
        _fail(t);
      else
        m_60 = t;
      t = x_60(t);
      return(t);
    }
    t = not_null(y_59);
    if(((d_60 != NULL) && (d_60 != t)))
      _fail(t);
    else
      d_60 = t;
    t = not_null(z_59);
    if(((e_60 != NULL) && (e_60 != t)))
      _fail(t);
    else
      e_60 = t;
    t = not_null(a_60);
    if(((f_60 != NULL) && (f_60 != t)))
      _fail(t);
    else
      f_60 = t;
    t = not_null(b_60);
    if(((g_60 != NULL) && (g_60 != t)))
      _fail(t);
    else
      g_60 = t;
    t = not_null(c_60);
    if(((h_60 != NULL) && (h_60 != t)))
      _fail(t);
    else
      h_60 = t;
    t = not_null(y_59);
    {
      ATerm j_60 = NULL;
      ATerm v_60 (ATerm t)
      {
        t = not_null(j_60);
        if(((i_60 != NULL) && (i_60 != t)))
          _fail(t);
        else
          i_60 = t;
        t = not_null(j_60);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_60));
      if(((j_60 != NULL) && (j_60 != t)))
        _fail(t);
      else
        j_60 = t;
      t = v_60(t);
      t = not_null(e_60);
      t = m_101(t);
      if(((k_60 != NULL) && (k_60 != t)))
        _fail(t);
      else
        k_60 = t;
      t = w_60(t);
    }
    return(t);
  }
  if(((y_59 != NULL) && (y_59 != t)))
    _fail(t);
  else
    y_59 = t;
  t = not_null(y_59);
  if(match_cons(t, sym_SDefT_4))
    {
      z_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
      b_60 = ATgetArgument(t, 2);
      c_60 = ATgetArgument(t, 3);
      t = u_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm i_61 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm k_61 = NULL;
    ATerm q_61 (ATerm t)
    {
      t = not_null(k_61);
      if(((i_61 != NULL) && (i_61 != t)))
        _fail(t);
      else
        i_61 = t;
      t = not_null(k_61);
      return(t);
    }
    ATerm b_28 = t;
    if((PushChoice() == 0))
      {
        ATerm j_61 = NULL;
        if(((j_61 != NULL) && (j_61 != t)))
          _fail(t);
        else
          j_61 = t;
        t = not_null(j_61);
        if(match_string(t, "main_0_0"))
          {
            t = not_null(j_61);
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
        t = b_28;
      }
    if(((k_61 != NULL) && (k_61 != t)))
      _fail(t);
    else
      k_61 = t;
    t = q_61(t);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm f_29;
    f_29 = t;
    {
      ATerm g_29 = t;
      if((PushChoice() == 0))
        {
          ATerm l_3 (ATerm t)
          {
            ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
            ATerm r_61 (ATerm t)
            {
              t = not_null(n_61);
              if(((i_61 != NULL) && (i_61 != t)))
                _fail(t);
              else
                i_61 = t;
              t = not_null(l_61);
              return(t);
            }
            if(((l_61 != NULL) && (l_61 != t)))
              _fail(t);
            else
              l_61 = t;
            t = not_null(l_61);
            if(match_cons(t, sym_CallT_3))
              {
                m_61 = ATgetArgument(t, 0);
                o_61 = ATgetArgument(t, 1);
                p_61 = ATgetArgument(t, 2);
                t = not_null(m_61);
                if(match_cons(t, sym_SVar_1))
                  {
                    n_61 = ATgetArgument(t, 0);
                    t = not_null(o_61);
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = not_null(p_61);
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = r_61(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = g_29;
        }
    }
    t = f_29;
    t = body_to_inline_0_0(t);
    return(t);
  }
  t = SDefT_4_0(j_3, _id, _id, k_3, t);
  return(t);
}
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  ATerm y_63 (ATerm t)
  {
    ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,r_63 = NULL,t_63 = NULL,w_63 = NULL;
    t = not_null(n_62);
    if(((p_62 != NULL) && (p_62 != t)))
      _fail(t);
    else
      p_62 = t;
    t = not_null(o_62);
    if(((q_62 != NULL) && (q_62 != t)))
      _fail(t);
    else
      q_62 = t;
    t = not_null(m_62);
    {
      ATerm h_29;
      h_29 = t;
      {
        ATerm x_62 = NULL;
        ATerm z_63 (ATerm t)
        {
          ATerm a_63 = NULL;
          ATerm d_64 (ATerm t)
          {
            ATerm b_63 = NULL;
            ATerm e_64 (ATerm t)
            {
              ATerm c_63 = NULL;
              ATerm f_64 (ATerm t)
              {
                ATerm f_63 = NULL;
                ATerm h_64 (ATerm t)
                {
                  ATerm g_63 = NULL,q_63 = NULL;
                  ATerm p_64 (ATerm t)
                  {
                    t = not_null(q_63);
                    if(((w_62 != NULL) && (w_62 != t)))
                      _fail(t);
                    else
                      w_62 = t;
                    t = not_null(q_63);
                    return(t);
                  }
                  t = not_null(f_63);
                  if(((t_62 != NULL) && (t_62 != t)))
                    _fail(t);
                  else
                    t_62 = t;
                  t = not_null(f_63);
                  {
                    ATerm h_63 = NULL;
                    ATerm i_64 (ATerm t)
                    {
                      t = not_null(h_63);
                      if(((g_63 != NULL) && (g_63 != t)))
                        _fail(t);
                      else
                        g_63 = t;
                      t = not_null(h_63);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_62), not_null(v_62));
                    t = zip_1_0(_id, t);
                    if(((h_63 != NULL) && (h_63 != t)))
                      _fail(t);
                    else
                      h_63 = t;
                    t = i_64(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), not_null(q_62));
                    {
                      ATerm m_3 (ATerm t)
                      {
                        ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
                        ATerm o_64 (ATerm t)
                        {
                          ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
                          t = not_null(k_63);
                          if(((n_63 != NULL) && (n_63 != t)))
                            _fail(t);
                          else
                            n_63 = t;
                          t = not_null(l_63);
                          if(((o_63 != NULL) && (o_63 != t)))
                            _fail(t);
                          else
                            o_63 = t;
                          t = not_null(m_63);
                          if(((p_63 != NULL) && (p_63 != t)))
                            _fail(t);
                          else
                            p_63 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_63))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_63), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_63)))));
                          return(t);
                        }
                        if(((i_63 != NULL) && (i_63 != t)))
                          _fail(t);
                        else
                          i_63 = t;
                        t = not_null(i_63);
                        if(match_cons(t, sym__2))
                          {
                            j_63 = ATgetArgument(t, 0);
                            m_63 = ATgetArgument(t, 1);
                            t = not_null(j_63);
                            if(match_cons(t, sym__2))
                              {
                                k_63 = ATgetArgument(t, 0);
                                l_63 = ATgetArgument(t, 1);
                                t = o_64(t);
                              }
                            else
                              {
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
                      if(((q_63 != NULL) && (q_63 != t)))
                        _fail(t);
                      else
                        q_63 = t;
                      t = p_64(t);
                    }
                  }
                  return(t);
                }
                t = not_null(c_63);
                if(((v_62 != NULL) && (v_62 != t)))
                  _fail(t);
                else
                  v_62 = t;
                t = not_null(v_62);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm d_63 = NULL;
                    ATerm e_63 = NULL;
                    ATerm g_64 (ATerm t)
                    {
                      t = not_null(e_63);
                      if(((d_63 != NULL) && (d_63 != t)))
                        _fail(t);
                      else
                        d_63 = t;
                      t = not_null(e_63);
                      return(t);
                    }
                    if(((e_63 != NULL) && (e_63 != t)))
                      _fail(t);
                    else
                      e_63 = t;
                    t = g_64(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_63));
                    return(t);
                  }
                  t = map_1_0(n_3, t);
                  if(((f_63 != NULL) && (f_63 != t)))
                    _fail(t);
                  else
                    f_63 = t;
                  t = h_64(t);
                }
                return(t);
              }
              t = not_null(b_63);
              if(((s_62 != NULL) && (s_62 != t)))
                _fail(t);
              else
                s_62 = t;
              t = not_null(q_62);
              t = map_1_0(new_0_0, t);
              if(((c_63 != NULL) && (c_63 != t)))
                _fail(t);
              else
                c_63 = t;
              t = f_64(t);
              return(t);
            }
            t = not_null(a_63);
            if(((r_62 != NULL) && (r_62 != t)))
              _fail(t);
            else
              r_62 = t;
            t = not_null(a_63);
            t = new_0_0(t);
            if(((b_63 != NULL) && (b_63 != t)))
              _fail(t);
            else
              b_63 = t;
            t = e_64(t);
            return(t);
          }
          t = not_null(x_62);
          if(((u_62 != NULL) && (u_62 != t)))
            _fail(t);
          else
            u_62 = t;
          t = not_null(u_62);
          {
            ATerm o_3 (ATerm t)
            {
              ATerm y_62 = NULL;
              ATerm z_62 = NULL;
              ATerm c_64 (ATerm t)
              {
                t = not_null(z_62);
                if(((y_62 != NULL) && (y_62 != t)))
                  _fail(t);
                else
                  y_62 = t;
                t = not_null(z_62);
                return(t);
              }
              if(((z_62 != NULL) && (z_62 != t)))
                _fail(t);
              else
                z_62 = t;
              t = c_64(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_62));
              return(t);
            }
            t = map_1_0(o_3, t);
            if(((a_63 != NULL) && (a_63 != t)))
              _fail(t);
            else
              a_63 = t;
            t = d_64(t);
          }
          return(t);
        }
        t = not_null(q_62);
        t = map_1_0(new_0_0, t);
        if(((x_62 != NULL) && (x_62 != t)))
          _fail(t);
        else
          x_62 = t;
        t = z_63(t);
      }
      t = h_29;
      {
        ATerm r_29;
        r_29 = t;
        {
          ATerm s_63 = NULL;
          ATerm q_64 (ATerm t)
          {
            t = not_null(s_63);
            if(((r_63 != NULL) && (r_63 != t)))
              _fail(t);
            else
              r_63 = t;
            t = not_null(s_63);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_62), not_null(v_62));
          t = conc_0_0(t);
          if(((s_63 != NULL) && (s_63 != t)))
            _fail(t);
          else
            s_63 = t;
          t = q_64(t);
        }
        t = r_29;
        {
          ATerm v_29;
          v_29 = t;
          {
            ATerm v_63 = NULL;
            ATerm r_64 (ATerm t)
            {
              t = not_null(v_63);
              if(((t_63 != NULL) && (t_63 != t)))
                _fail(t);
              else
                t_63 = t;
              t = not_null(v_63);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_62), not_null(r_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62))));
            t = Mapp2_0_0(t);
            if(((v_63 != NULL) && (v_63 != t)))
              _fail(t);
            else
              v_63 = t;
            t = r_64(t);
          }
          t = v_29;
          {
            ATerm x_63 = NULL;
            ATerm s_64 (ATerm t)
            {
              t = not_null(x_63);
              if(((w_63 != NULL) && (w_63 != t)))
                _fail(t);
              else
                w_63 = t;
              t = not_null(x_63);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(p_62), not_null(t_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62))));
            t = Bapp2_0_0(t);
            if(((x_63 != NULL) && (x_63 != t)))
              _fail(t);
            else
              x_63 = t;
            t = s_64(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_63)), not_null(s_62)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_62)), not_null(w_63))));
          }
        }
      }
    }
    return(t);
  }
  if(((m_62 != NULL) && (m_62 != t)))
    _fail(t);
  else
    m_62 = t;
  t = not_null(m_62);
  if(match_cons(t, sym_Cong_2))
    {
      n_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
      t = y_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL;
  ATerm u_66 (ATerm t)
  {
    ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,v_65 = NULL;
    t = not_null(k_65);
    if(((l_65 != NULL) && (l_65 != t)))
      _fail(t);
    else
      l_65 = t;
    t = not_null(j_65);
    {
      ATerm w_65 = NULL;
      ATerm x_66 (ATerm t)
      {
        ATerm b_66 = NULL;
        ATerm z_66 (ATerm t)
        {
          t = not_null(b_66);
          if(((v_65 != NULL) && (v_65 != t)))
            _fail(t);
          else
            v_65 = t;
          t = not_null(b_66);
          return(t);
        }
        t = not_null(w_65);
        if(((o_65 != NULL) && (o_65 != t)))
          _fail(t);
        else
          o_65 = t;
        t = not_null(l_65);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm x_65 = NULL,z_65 = NULL,a_66 = NULL;
            ATerm y_66 (ATerm t)
            {
              t = not_null(z_65);
              if(((m_65 != NULL) && (m_65 != t)))
                _fail(t);
              else
                m_65 = t;
              t = not_null(a_66);
              if(((n_65 != NULL) && (n_65 != t)))
                _fail(t);
              else
                n_65 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_65));
              return(t);
            }
            if(((x_65 != NULL) && (x_65 != t)))
              _fail(t);
            else
              x_65 = t;
            t = not_null(x_65);
            if(match_cons(t, sym_Anno_2))
              {
                z_65 = ATgetArgument(t, 0);
                a_66 = ATgetArgument(t, 1);
                t = y_66(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(p_3, t);
          if(((b_66 != NULL) && (b_66 != t)))
            _fail(t);
          else
            b_66 = t;
          t = z_66(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((w_65 != NULL) && (w_65 != t)))
        _fail(t);
      else
        w_65 = t;
      t = x_66(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_65)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_30, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_65)), not_null(m_65))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_65))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_65))));
    }
    return(t);
  }
  ATerm v_66 (ATerm t)
  {
    ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
    t = not_null(k_65);
    if(((c_66 != NULL) && (c_66 != t)))
      _fail(t);
    else
      c_66 = t;
    t = not_null(j_65);
    {
      ATerm g_66 = NULL;
      ATerm a_67 (ATerm t)
      {
        ATerm j_66 = NULL;
        ATerm c_67 (ATerm t)
        {
          t = not_null(j_66);
          if(((f_66 != NULL) && (f_66 != t)))
            _fail(t);
          else
            f_66 = t;
          t = not_null(j_66);
          return(t);
        }
        t = not_null(g_66);
        if(((e_66 != NULL) && (e_66 != t)))
          _fail(t);
        else
          e_66 = t;
        t = not_null(c_66);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm h_66 = NULL,i_66 = NULL;
            ATerm b_67 (ATerm t)
            {
              t = not_null(i_66);
              if(((d_66 != NULL) && (d_66 != t)))
                _fail(t);
              else
                d_66 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_66));
              return(t);
            }
            if(((h_66 != NULL) && (h_66 != t)))
              _fail(t);
            else
              h_66 = t;
            t = not_null(h_66);
            if(match_cons(t, sym_RootApp_1))
              {
                i_66 = ATgetArgument(t, 0);
                t = b_67(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          if(((j_66 != NULL) && (j_66 != t)))
            _fail(t);
          else
            j_66 = t;
          t = c_67(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((g_66 != NULL) && (g_66 != t)))
        _fail(t);
      else
        g_66 = t;
      t = a_67(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_66), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_66))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_66))));
    }
    return(t);
  }
  ATerm w_66 (ATerm t)
  {
    ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
    t = not_null(k_65);
    if(((k_66 != NULL) && (k_66 != t)))
      _fail(t);
    else
      k_66 = t;
    t = not_null(j_65);
    {
      ATerm p_66 = NULL;
      ATerm d_67 (ATerm t)
      {
        ATerm t_66 = NULL;
        ATerm f_67 (ATerm t)
        {
          t = not_null(t_66);
          if(((o_66 != NULL) && (o_66 != t)))
            _fail(t);
          else
            o_66 = t;
          t = not_null(t_66);
          return(t);
        }
        t = not_null(p_66);
        if(((n_66 != NULL) && (n_66 != t)))
          _fail(t);
        else
          n_66 = t;
        t = not_null(k_66);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
            ATerm e_67 (ATerm t)
            {
              t = not_null(r_66);
              if(((l_66 != NULL) && (l_66 != t)))
                _fail(t);
              else
                l_66 = t;
              t = not_null(s_66);
              if(((m_66 != NULL) && (m_66 != t)))
                _fail(t);
              else
                m_66 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66));
              return(t);
            }
            if(((q_66 != NULL) && (q_66 != t)))
              _fail(t);
            else
              q_66 = t;
            t = not_null(q_66);
            if(match_cons(t, sym_App_2))
              {
                r_66 = ATgetArgument(t, 0);
                s_66 = ATgetArgument(t, 1);
                t = e_67(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(r_3, t);
          if(((t_66 != NULL) && (t_66 != t)))
            _fail(t);
          else
            t_66 = t;
          t = f_67(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((p_66 != NULL) && (p_66 != t)))
        _fail(t);
      else
        p_66 = t;
      t = d_67(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_66), not_null(m_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_66))));
    }
    return(t);
  }
  if(((j_65 != NULL) && (j_65 != t)))
    _fail(t);
  else
    j_65 = t;
  t = not_null(j_65);
  if(match_cons(t, sym_Build_1))
    {
      k_65 = ATgetArgument(t, 0);
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_66(t);
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm d_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_66(t);
                  ;
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = d_30;
                  t = w_66(t);
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
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  ATerm n_67 (ATerm t)
  {
    ATerm l_67 = NULL,m_67 = NULL;
    t = not_null(j_67);
    if(((l_67 != NULL) && (l_67 != t)))
      _fail(t);
    else
      l_67 = t;
    t = not_null(k_67);
    if(((m_67 != NULL) && (m_67 != t)))
      _fail(t);
    else
      m_67 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(m_67)), not_null(l_67));
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
      k_67 = ATgetArgument(t, 1);
      t = n_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  ATerm d_68 (ATerm t)
  {
    ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
    t = not_null(u_67);
    if(((z_67 != NULL) && (z_67 != t)))
      _fail(t);
    else
      z_67 = t;
    t = not_null(v_67);
    if(((b_68 != NULL) && (b_68 != t)))
      _fail(t);
    else
      b_68 = t;
    t = not_null(x_67);
    if(((a_68 != NULL) && (a_68 != t)))
      _fail(t);
    else
      a_68 = t;
    t = not_null(y_67);
    if(((c_68 != NULL) && (c_68 != t)))
      _fail(t);
    else
      c_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_67), not_null(a_68)), (ATerm) ATmakeAppl(sym__2, not_null(b_68), not_null(c_68)));
    return(t);
  }
  if(((s_67 != NULL) && (s_67 != t)))
    _fail(t);
  else
    s_67 = t;
  t = not_null(s_67);
  if(match_cons(t, sym__2))
    {
      t_67 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
      t = not_null(t_67);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_67 = ATgetFirst((ATermList) t);
          v_67 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(w_67);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_67 = ATgetFirst((ATermList) t);
              y_67 = (ATerm) ATgetNext((ATermList) t);
              t = d_68(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  ATerm q_68 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((n_68 != NULL) && (n_68 != t)))
    _fail(t);
  else
    n_68 = t;
  t = not_null(n_68);
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
      t = not_null(o_68);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(p_68);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_68(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm r_68 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_115(t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = b_115(t);
        t = _2_0(d_115, r_68, t);
        t = c_115(t);
      }
    return(t);
  }
  t = r_68(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, f_115, t);
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL;
  ATerm s_72 (ATerm t)
  {
    ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,m_72 = NULL,o_72 = NULL,q_72 = NULL;
    t = not_null(a_71);
    if(((f_71 != NULL) && (f_71 != t)))
      _fail(t);
    else
      f_71 = t;
    t = not_null(b_71);
    if(((g_71 != NULL) && (g_71 != t)))
      _fail(t);
    else
      g_71 = t;
    t = not_null(d_71);
    if(((h_71 != NULL) && (h_71 != t)))
      _fail(t);
    else
      h_71 = t;
    t = not_null(n_70);
    {
      ATerm u_30;
      u_30 = t;
      {
        ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
        ATerm t_72 (ATerm t)
        {
          ATerm u_71 = NULL;
          ATerm v_72 (ATerm t)
          {
            ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
            ATerm w_72 (ATerm t)
            {
              ATerm a_72 = NULL;
              ATerm y_72 (ATerm t)
              {
                ATerm b_72 = NULL,l_72 = NULL;
                ATerm b_73 (ATerm t)
                {
                  t = not_null(l_72);
                  if(((o_71 != NULL) && (o_71 != t)))
                    _fail(t);
                  else
                    o_71 = t;
                  t = not_null(l_72);
                  return(t);
                }
                t = not_null(a_72);
                if(((l_71 != NULL) && (l_71 != t)))
                  _fail(t);
                else
                  l_71 = t;
                t = not_null(a_72);
                {
                  ATerm c_72 = NULL;
                  ATerm z_72 (ATerm t)
                  {
                    t = not_null(c_72);
                    if(((b_72 != NULL) && (b_72 != t)))
                      _fail(t);
                    else
                      b_72 = t;
                    t = not_null(c_72);
                    return(t);
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(n_71));
                  t = zip_1_0(_id, t);
                  if(((c_72 != NULL) && (c_72 != t)))
                    _fail(t);
                  else
                    c_72 = t;
                  t = z_72(t);
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_72), (ATerm) ATinsert(CheckATermList(not_null(g_71)), not_null(h_71)));
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
                      ATerm a_73 (ATerm t)
                      {
                        ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
                        t = not_null(f_72);
                        if(((i_72 != NULL) && (i_72 != t)))
                          _fail(t);
                        else
                          i_72 = t;
                        t = not_null(g_72);
                        if(((j_72 != NULL) && (j_72 != t)))
                          _fail(t);
                        else
                          j_72 = t;
                        t = not_null(h_72);
                        if(((k_72 != NULL) && (k_72 != t)))
                          _fail(t);
                        else
                          k_72 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_72))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_72), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72)))));
                        return(t);
                      }
                      if(((d_72 != NULL) && (d_72 != t)))
                        _fail(t);
                      else
                        d_72 = t;
                      t = not_null(d_72);
                      if(match_cons(t, sym__2))
                        {
                          e_72 = ATgetArgument(t, 0);
                          h_72 = ATgetArgument(t, 1);
                          t = not_null(e_72);
                          if(match_cons(t, sym__2))
                            {
                              f_72 = ATgetArgument(t, 0);
                              g_72 = ATgetArgument(t, 1);
                              t = a_73(t);
                            }
                          else
                            {
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
                    if(((l_72 != NULL) && (l_72 != t)))
                      _fail(t);
                    else
                      l_72 = t;
                    t = b_73(t);
                  }
                }
                return(t);
              }
              t = not_null(w_71);
              if(((k_71 != NULL) && (k_71 != t)))
                _fail(t);
              else
                k_71 = t;
              t = not_null(x_71);
              if(((n_71 != NULL) && (n_71 != t)))
                _fail(t);
              else
                n_71 = t;
              t = not_null(v_71);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm y_71 = NULL;
                  ATerm z_71 = NULL;
                  ATerm x_72 (ATerm t)
                  {
                    t = not_null(z_71);
                    if(((y_71 != NULL) && (y_71 != t)))
                      _fail(t);
                    else
                      y_71 = t;
                    t = not_null(z_71);
                    return(t);
                  }
                  if(((z_71 != NULL) && (z_71 != t)))
                    _fail(t);
                  else
                    z_71 = t;
                  t = x_72(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_71));
                  return(t);
                }
                t = map_1_0(t_3, t);
                if(((a_72 != NULL) && (a_72 != t)))
                  _fail(t);
                else
                  a_72 = t;
                t = y_72(t);
              }
              return(t);
            }
            t = not_null(u_71);
            if(((j_71 != NULL) && (j_71 != t)))
              _fail(t);
            else
              j_71 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(g_71)), not_null(h_71));
            t = map_1_0(new_0_0, t);
            if(((v_71 != NULL) && (v_71 != t)))
              _fail(t);
            else
              v_71 = t;
            t = not_null(v_71);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_71 = ATgetFirst((ATermList) t);
                x_71 = (ATerm) ATgetNext((ATermList) t);
                t = w_72(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(q_71);
          if(((i_71 != NULL) && (i_71 != t)))
            _fail(t);
          else
            i_71 = t;
          t = not_null(r_71);
          if(((m_71 != NULL) && (m_71 != t)))
            _fail(t);
          else
            m_71 = t;
          t = not_null(p_71);
          {
            ATerm u_3 (ATerm t)
            {
              ATerm s_71 = NULL;
              ATerm t_71 = NULL;
              ATerm u_72 (ATerm t)
              {
                t = not_null(t_71);
                if(((s_71 != NULL) && (s_71 != t)))
                  _fail(t);
                else
                  s_71 = t;
                t = not_null(t_71);
                return(t);
              }
              if(((t_71 != NULL) && (t_71 != t)))
                _fail(t);
              else
                t_71 = t;
              t = u_72(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_71));
              return(t);
            }
            t = map_1_0(u_3, t);
            if(((u_71 != NULL) && (u_71 != t)))
              _fail(t);
            else
              u_71 = t;
            t = v_72(t);
          }
          return(t);
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_71)), not_null(h_71));
        t = map_1_0(new_0_0, t);
        if(((p_71 != NULL) && (p_71 != t)))
          _fail(t);
        else
          p_71 = t;
        t = not_null(p_71);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_71 = ATgetFirst((ATermList) t);
            r_71 = (ATerm) ATgetNext((ATermList) t);
            t = t_72(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = u_30;
      {
        ATerm v_30;
        v_30 = t;
        {
          ATerm n_72 = NULL;
          ATerm c_73 (ATerm t)
          {
            t = not_null(n_72);
            if(((m_72 != NULL) && (m_72 != t)))
              _fail(t);
            else
              m_72 = t;
            t = not_null(n_72);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(n_71));
          t = conc_0_0(t);
          if(((n_72 != NULL) && (n_72 != t)))
            _fail(t);
          else
            n_72 = t;
          t = c_73(t);
        }
        t = v_30;
        {
          ATerm w_30;
          w_30 = t;
          {
            ATerm p_72 = NULL;
            ATerm d_73 (ATerm t)
            {
              t = not_null(p_72);
              if(((o_72 != NULL) && (o_72 != t)))
                _fail(t);
              else
                o_72 = t;
              t = not_null(p_72);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_71), not_null(j_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_71))));
            t = Mapp2_0_0(t);
            if(((p_72 != NULL) && (p_72 != t)))
              _fail(t);
            else
              p_72 = t;
            t = d_73(t);
          }
          t = w_30;
          {
            ATerm r_72 = NULL;
            ATerm e_73 (ATerm t)
            {
              t = not_null(r_72);
              if(((q_72 != NULL) && (q_72 != t)))
                _fail(t);
              else
                q_72 = t;
              t = not_null(r_72);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_71), not_null(l_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_71))));
            t = Bapp2_0_0(t);
            if(((r_72 != NULL) && (r_72 != t)))
              _fail(t);
            else
              r_72 = t;
            t = e_73(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(m_72)), not_null(k_71)), not_null(i_71)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_71)), not_null(q_72))));
          }
        }
      }
    }
    return(t);
  }
  if(((n_70 != NULL) && (n_70 != t)))
    _fail(t);
  else
    n_70 = t;
  t = not_null(n_70);
  if(match_cons(t, sym_Call_2))
    {
      o_70 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
      t = not_null(o_70);
      if(match_cons(t, sym_SVar_1))
        {
          x_70 = ATgetArgument(t, 0);
          t = not_null(x_70);
          if(match_string(t, "Anno_Cong__"))
            {
              t = not_null(y_70);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_70 = ATgetFirst((ATermList) t);
                  c_71 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(z_70);
                  if(match_cons(t, sym_Cong_2))
                    {
                      a_71 = ATgetArgument(t, 0);
                      b_71 = ATgetArgument(t, 1);
                      t = not_null(c_71);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          d_71 = ATgetFirst((ATermList) t);
                          e_71 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(e_71);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = s_72(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm q_73 = NULL,a_74 = NULL,b_74 = NULL;
  ATerm b_75 (ATerm t)
  {
    ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,m_74 = NULL;
    ATerm d_75 (ATerm t)
    {
      ATerm n_74 = NULL,o_74 = NULL;
      ATerm e_75 (ATerm t)
      {
        ATerm y_74 = NULL,z_74 = NULL;
        t = not_null(o_74);
        if(((y_74 != NULL) && (y_74 != t)))
          _fail(t);
        else
          y_74 = t;
        t = not_null(o_74);
        {
          ATerm a_75 = NULL;
          ATerm f_75 (ATerm t)
          {
            t = not_null(a_75);
            if(((z_74 != NULL) && (z_74 != t)))
              _fail(t);
            else
              z_74 = t;
            t = not_null(a_75);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(n_74), not_null(y_74)), not_null(f_74));
          if(((a_75 != NULL) && (a_75 != t)))
            _fail(t);
          else
            a_75 = t;
          t = f_75(t);
          t = not_null(z_74);
        }
        return(t);
      }
      t = not_null(m_74);
      if(((n_74 != NULL) && (n_74 != t)))
        _fail(t);
      else
        n_74 = t;
      t = not_null(e_74);
      t = c_96(t);
      if(((o_74 != NULL) && (o_74 != t)))
        _fail(t);
      else
        o_74 = t;
      t = e_75(t);
      return(t);
    }
    t = not_null(q_73);
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
    t = not_null(q_73);
    {
      ATerm l_74 = NULL;
      ATerm c_75 (ATerm t)
      {
        t = not_null(l_74);
        if(((f_74 != NULL) && (f_74 != t)))
          _fail(t);
        else
          f_74 = t;
        t = not_null(l_74);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_74));
      if(((l_74 != NULL) && (l_74 != t)))
        _fail(t);
      else
        l_74 = t;
      t = c_75(t);
      t = not_null(d_74);
      t = b_96(t);
      if(((m_74 != NULL) && (m_74 != t)))
        _fail(t);
      else
        m_74 = t;
      t = d_75(t);
    }
    return(t);
  }
  if(((q_73 != NULL) && (q_73 != t)))
    _fail(t);
  else
    q_73 = t;
  t = not_null(q_73);
  if(match_cons(t, sym_As_2))
    {
      a_74 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
      t = b_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  ATerm t_77 (ATerm t)
  {
    ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,l_77 = NULL;
    ATerm v_77 (ATerm t)
    {
      ATerm m_77 = NULL,n_77 = NULL;
      ATerm w_77 (ATerm t)
      {
        ATerm o_77 = NULL,p_77 = NULL;
        ATerm x_77 (ATerm t)
        {
          ATerm q_77 = NULL,r_77 = NULL;
          t = not_null(p_77);
          if(((q_77 != NULL) && (q_77 != t)))
            _fail(t);
          else
            q_77 = t;
          t = not_null(p_77);
          {
            ATerm s_77 = NULL;
            ATerm y_77 (ATerm t)
            {
              t = not_null(s_77);
              if(((r_77 != NULL) && (r_77 != t)))
                _fail(t);
              else
                r_77 = t;
              t = not_null(s_77);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(m_77), not_null(o_77), not_null(q_77)), not_null(j_77));
            if(((s_77 != NULL) && (s_77 != t)))
              _fail(t);
            else
              s_77 = t;
            t = y_77(t);
            t = not_null(r_77);
          }
          return(t);
        }
        t = not_null(n_77);
        if(((o_77 != NULL) && (o_77 != t)))
          _fail(t);
        else
          o_77 = t;
        t = not_null(i_77);
        t = c_100(t);
        if(((p_77 != NULL) && (p_77 != t)))
          _fail(t);
        else
          p_77 = t;
        t = x_77(t);
        return(t);
      }
      t = not_null(l_77);
      if(((m_77 != NULL) && (m_77 != t)))
        _fail(t);
      else
        m_77 = t;
      t = not_null(h_77);
      t = b_100(t);
      if(((n_77 != NULL) && (n_77 != t)))
        _fail(t);
      else
        n_77 = t;
      t = w_77(t);
      return(t);
    }
    t = not_null(b_77);
    if(((f_77 != NULL) && (f_77 != t)))
      _fail(t);
    else
      f_77 = t;
    t = not_null(c_77);
    if(((g_77 != NULL) && (g_77 != t)))
      _fail(t);
    else
      g_77 = t;
    t = not_null(d_77);
    if(((h_77 != NULL) && (h_77 != t)))
      _fail(t);
    else
      h_77 = t;
    t = not_null(e_77);
    if(((i_77 != NULL) && (i_77 != t)))
      _fail(t);
    else
      i_77 = t;
    t = not_null(b_77);
    {
      ATerm k_77 = NULL;
      ATerm u_77 (ATerm t)
      {
        t = not_null(k_77);
        if(((j_77 != NULL) && (j_77 != t)))
          _fail(t);
        else
          j_77 = t;
        t = not_null(k_77);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_77));
      if(((k_77 != NULL) && (k_77 != t)))
        _fail(t);
      else
        k_77 = t;
      t = u_77(t);
      t = not_null(g_77);
      t = a_100(t);
      if(((l_77 != NULL) && (l_77 != t)))
        _fail(t);
      else
        l_77 = t;
      t = v_77(t);
    }
    return(t);
  }
  if(((b_77 != NULL) && (b_77 != t)))
    _fail(t);
  else
    b_77 = t;
  t = not_null(b_77);
  if(match_cons(t, sym_PrimT_3))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
      e_77 = ATgetArgument(t, 2);
      t = t_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
  ATerm t_78 (ATerm t)
  {
    ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,n_78 = NULL;
    ATerm v_78 (ATerm t)
    {
      ATerm o_78 = NULL,p_78 = NULL;
      ATerm w_78 (ATerm t)
      {
        ATerm q_78 = NULL,r_78 = NULL;
        t = not_null(p_78);
        if(((q_78 != NULL) && (q_78 != t)))
          _fail(t);
        else
          q_78 = t;
        t = not_null(p_78);
        {
          ATerm s_78 = NULL;
          ATerm x_78 (ATerm t)
          {
            t = not_null(s_78);
            if(((r_78 != NULL) && (r_78 != t)))
              _fail(t);
            else
              r_78 = t;
            t = not_null(s_78);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(o_78), not_null(q_78)), not_null(l_78));
          if(((s_78 != NULL) && (s_78 != t)))
            _fail(t);
          else
            s_78 = t;
          t = x_78(t);
          t = not_null(r_78);
        }
        return(t);
      }
      t = not_null(n_78);
      if(((o_78 != NULL) && (o_78 != t)))
        _fail(t);
      else
        o_78 = t;
      t = not_null(k_78);
      t = v_95(t);
      if(((p_78 != NULL) && (p_78 != t)))
        _fail(t);
      else
        p_78 = t;
      t = w_78(t);
      return(t);
    }
    t = not_null(f_78);
    if(((i_78 != NULL) && (i_78 != t)))
      _fail(t);
    else
      i_78 = t;
    t = not_null(g_78);
    if(((j_78 != NULL) && (j_78 != t)))
      _fail(t);
    else
      j_78 = t;
    t = not_null(h_78);
    if(((k_78 != NULL) && (k_78 != t)))
      _fail(t);
    else
      k_78 = t;
    t = not_null(f_78);
    {
      ATerm m_78 = NULL;
      ATerm u_78 (ATerm t)
      {
        t = not_null(m_78);
        if(((l_78 != NULL) && (l_78 != t)))
          _fail(t);
        else
          l_78 = t;
        t = not_null(m_78);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_78));
      if(((m_78 != NULL) && (m_78 != t)))
        _fail(t);
      else
        m_78 = t;
      t = u_78(t);
      t = not_null(j_78);
      t = u_95(t);
      if(((n_78 != NULL) && (n_78 != t)))
        _fail(t);
      else
        n_78 = t;
      t = v_78(t);
    }
    return(t);
  }
  if(((f_78 != NULL) && (f_78 != t)))
    _fail(t);
  else
    f_78 = t;
  t = not_null(f_78);
  if(match_cons(t, sym_Explode_2))
    {
      g_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
      t = t_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
  ATerm t_79 (ATerm t)
  {
    ATerm h_79 = NULL,i_79 = NULL,k_79 = NULL,l_79 = NULL,n_79 = NULL;
    ATerm v_79 (ATerm t)
    {
      ATerm o_79 = NULL,p_79 = NULL;
      ATerm w_79 (ATerm t)
      {
        ATerm q_79 = NULL,r_79 = NULL;
        t = not_null(p_79);
        if(((q_79 != NULL) && (q_79 != t)))
          _fail(t);
        else
          q_79 = t;
        t = not_null(p_79);
        {
          ATerm s_79 = NULL;
          ATerm x_79 (ATerm t)
          {
            t = not_null(s_79);
            if(((r_79 != NULL) && (r_79 != t)))
              _fail(t);
            else
              r_79 = t;
            t = not_null(s_79);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_79), not_null(q_79)), not_null(l_79));
          if(((s_79 != NULL) && (s_79 != t)))
            _fail(t);
          else
            s_79 = t;
          t = x_79(t);
          t = not_null(r_79);
        }
        return(t);
      }
      t = not_null(n_79);
      if(((o_79 != NULL) && (o_79 != t)))
        _fail(t);
      else
        o_79 = t;
      t = not_null(k_79);
      t = r_95(t);
      if(((p_79 != NULL) && (p_79 != t)))
        _fail(t);
      else
        p_79 = t;
      t = w_79(t);
      return(t);
    }
    t = not_null(e_79);
    if(((h_79 != NULL) && (h_79 != t)))
      _fail(t);
    else
      h_79 = t;
    t = not_null(f_79);
    if(((i_79 != NULL) && (i_79 != t)))
      _fail(t);
    else
      i_79 = t;
    t = not_null(g_79);
    if(((k_79 != NULL) && (k_79 != t)))
      _fail(t);
    else
      k_79 = t;
    t = not_null(e_79);
    {
      ATerm m_79 = NULL;
      ATerm u_79 (ATerm t)
      {
        t = not_null(m_79);
        if(((l_79 != NULL) && (l_79 != t)))
          _fail(t);
        else
          l_79 = t;
        t = not_null(m_79);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_79));
      if(((m_79 != NULL) && (m_79 != t)))
        _fail(t);
      else
        m_79 = t;
      t = u_79(t);
      t = not_null(i_79);
      t = q_95(t);
      if(((n_79 != NULL) && (n_79 != t)))
        _fail(t);
      else
        n_79 = t;
      t = v_79(t);
    }
    return(t);
  }
  if(((e_79 != NULL) && (e_79 != t)))
    _fail(t);
  else
    e_79 = t;
  t = not_null(e_79);
  if(match_cons(t, sym_Op_2))
    {
      f_79 = ATgetArgument(t, 0);
      g_79 = ATgetArgument(t, 1);
      t = t_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_135(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
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
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = pat_td_1_0(z_135, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, x_3, t);
                  ;
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm d_31 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 (ATerm t)
                        {
                          t = pat_td_1_0(z_135, t);
                          return(t);
                        }
                        t = Explode_2_0(y_3, _id, t);
                        ;
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = d_31;
                        {
                          ATerm r_32 = t;
                          int s_32 = stack_ptr;
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
                              LocalPopChoice(s_32);
                            }
                          else
                            {
                              t = r_32;
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
  ATerm o_80 = NULL,p_80 = NULL;
  ATerm s_81 (ATerm t)
  {
    ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
    t = not_null(p_80);
    if(((q_80 != NULL) && (q_80 != t)))
      _fail(t);
    else
      q_80 = t;
    t = not_null(o_80);
    {
      ATerm v_80 = NULL;
      ATerm v_81 (ATerm t)
      {
        ATerm z_80 = NULL;
        ATerm x_81 (ATerm t)
        {
          t = not_null(z_80);
          if(((u_80 != NULL) && (u_80 != t)))
            _fail(t);
          else
            u_80 = t;
          t = not_null(z_80);
          return(t);
        }
        t = not_null(v_80);
        if(((t_80 != NULL) && (t_80 != t)))
          _fail(t);
        else
          t_80 = t;
        t = not_null(q_80);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
            ATerm w_81 (ATerm t)
            {
              t = not_null(x_80);
              if(((r_80 != NULL) && (r_80 != t)))
                _fail(t);
              else
                r_80 = t;
              t = not_null(y_80);
              if(((s_80 != NULL) && (s_80 != t)))
                _fail(t);
              else
                s_80 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_80)), not_null(r_80));
              return(t);
            }
            if(((w_80 != NULL) && (w_80 != t)))
              _fail(t);
            else
              w_80 = t;
            t = not_null(w_80);
            if(match_cons(t, sym_Anno_2))
              {
                x_80 = ATgetArgument(t, 0);
                y_80 = ATgetArgument(t, 1);
                t = w_81(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(c_4, t);
          if(((z_80 != NULL) && (z_80 != t)))
            _fail(t);
          else
            z_80 = t;
          t = x_81(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((v_80 != NULL) && (v_80 != t)))
        _fail(t);
      else
        v_80 = t;
      t = v_81(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_80)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_32, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_80)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_80))))));
    }
    return(t);
  }
  ATerm t_81 (ATerm t)
  {
    ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL;
    t = not_null(p_80);
    if(((a_81 != NULL) && (a_81 != t)))
      _fail(t);
    else
      a_81 = t;
    t = not_null(o_80);
    {
      ATerm e_81 = NULL;
      ATerm y_81 (ATerm t)
      {
        ATerm h_81 = NULL;
        ATerm a_82 (ATerm t)
        {
          t = not_null(h_81);
          if(((d_81 != NULL) && (d_81 != t)))
            _fail(t);
          else
            d_81 = t;
          t = not_null(h_81);
          return(t);
        }
        t = not_null(e_81);
        if(((c_81 != NULL) && (c_81 != t)))
          _fail(t);
        else
          c_81 = t;
        t = not_null(a_81);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm f_81 = NULL,g_81 = NULL;
            ATerm z_81 (ATerm t)
            {
              t = not_null(g_81);
              if(((b_81 != NULL) && (b_81 != t)))
                _fail(t);
              else
                b_81 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_81));
              return(t);
            }
            if(((f_81 != NULL) && (f_81 != t)))
              _fail(t);
            else
              f_81 = t;
            t = not_null(f_81);
            if(match_cons(t, sym_RootApp_1))
              {
                g_81 = ATgetArgument(t, 0);
                t = z_81(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(d_4, t);
          if(((h_81 != NULL) && (h_81 != t)))
            _fail(t);
          else
            h_81 = t;
          t = a_82(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((e_81 != NULL) && (e_81 != t)))
        _fail(t);
      else
        e_81 = t;
      t = y_81(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_81))), not_null(b_81))));
    }
    return(t);
  }
  ATerm u_81 (ATerm t)
  {
    ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL;
    t = not_null(p_80);
    if(((i_81 != NULL) && (i_81 != t)))
      _fail(t);
    else
      i_81 = t;
    t = not_null(o_80);
    {
      ATerm n_81 = NULL;
      ATerm b_82 (ATerm t)
      {
        ATerm r_81 = NULL;
        ATerm d_82 (ATerm t)
        {
          t = not_null(r_81);
          if(((m_81 != NULL) && (m_81 != t)))
            _fail(t);
          else
            m_81 = t;
          t = not_null(r_81);
          return(t);
        }
        t = not_null(n_81);
        if(((l_81 != NULL) && (l_81 != t)))
          _fail(t);
        else
          l_81 = t;
        t = not_null(i_81);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
            ATerm c_82 (ATerm t)
            {
              t = not_null(p_81);
              if(((k_81 != NULL) && (k_81 != t)))
                _fail(t);
              else
                k_81 = t;
              t = not_null(q_81);
              if(((j_81 != NULL) && (j_81 != t)))
                _fail(t);
              else
                j_81 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_81));
              return(t);
            }
            if(((o_81 != NULL) && (o_81 != t)))
              _fail(t);
            else
              o_81 = t;
            t = not_null(o_81);
            if(match_cons(t, sym_App_2))
              {
                p_81 = ATgetArgument(t, 0);
                q_81 = ATgetArgument(t, 1);
                t = c_82(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(e_4, t);
          if(((r_81 != NULL) && (r_81 != t)))
            _fail(t);
          else
            r_81 = t;
          t = d_82(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((n_81 != NULL) && (n_81 != t)))
        _fail(t);
      else
        n_81 = t;
      t = b_82(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_81)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_81))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_81)), not_null(k_81)))));
    }
    return(t);
  }
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  t = not_null(o_80);
  if(match_cons(t, sym_Match_1))
    {
      p_80 = ATgetArgument(t, 0);
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_81(t);
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            {
              ATerm k_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_81(t);
                  ;
                  LocalPopChoice(l_33);
                }
              else
                {
                  t = k_33;
                  t = u_81(t);
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
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  ATerm u_82 (ATerm t)
  {
    ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
    t = not_null(l_82);
    if(((n_82 != NULL) && (n_82 != t)))
      _fail(t);
    else
      n_82 = t;
    t = not_null(m_82);
    if(((o_82 != NULL) && (o_82 != t)))
      _fail(t);
    else
      o_82 = t;
    t = not_null(k_82);
    {
      ATerm t_82 = NULL;
      ATerm x_82 (ATerm t)
      {
        t = not_null(t_82);
        if(((p_82 != NULL) && (p_82 != t)))
          _fail(t);
        else
          p_82 = t;
        t = not_null(t_82);
        return(t);
      }
      t = not_null(o_82);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm q_82 = NULL,r_82 = NULL;
          ATerm v_82 (ATerm t)
          {
            ATerm s_82 = NULL;
            t = not_null(q_82);
            if(((s_82 != NULL) && (s_82 != t)))
              _fail(t);
            else
              s_82 = t;
            t = not_null(s_82);
            return(t);
          }
          ATerm w_82 (ATerm t)
          {
            t = term_m_33;
            return(t);
          }
          if(((r_82 != NULL) && (r_82 != t)))
            _fail(t);
          else
            r_82 = t;
          t = not_null(r_82);
          if(match_cons(t, sym_Match_1))
            {
              q_82 = ATgetArgument(t, 0);
              t = v_82(t);
            }
          else
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = w_82(t);
                }
              else
                {
                  _fail(t);
                }
            }
          return(t);
        }
        t = map_1_0(f_4, t);
        if(((t_82 != NULL) && (t_82 != t)))
          _fail(t);
        else
          t_82 = t;
        t = x_82(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_82), not_null(p_82)));
      t = Mapp2_0_0(t);
    }
    return(t);
  }
  if(((k_82 != NULL) && (k_82 != t)))
    _fail(t);
  else
    k_82 = t;
  t = not_null(k_82);
  if(match_cons(t, sym_Cong_2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      t = u_82(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0_0 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  ATerm f_83 (ATerm t)
  {
    ATerm e_83 = NULL;
    t = not_null(d_83);
    if(((e_83 != NULL) && (e_83 != t)))
      _fail(t);
    else
      e_83 = t;
    t = not_null(e_83);
    return(t);
  }
  if(((b_83 != NULL) && (b_83 != t)))
    _fail(t);
  else
    b_83 = t;
  t = not_null(b_83);
  if(match_cons(t, sym_Scope_2))
    {
      c_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
      t = not_null(c_83);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_83(t);
        }
      else
        {
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
  ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  ATerm b_86 (ATerm t)
  {
    ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
    t = not_null(k_85);
    if(((t_85 != NULL) && (t_85 != t)))
      _fail(t);
    else
      t_85 = t;
    t = not_null(n_85);
    if(((u_85 != NULL) && (u_85 != t)))
      _fail(t);
    else
      u_85 = t;
    t = not_null(o_85);
    if(((v_85 != NULL) && (v_85 != t)))
      _fail(t);
    else
      v_85 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_85)), not_null(v_85))));
    return(t);
  }
  ATerm c_86 (ATerm t)
  {
    ATerm w_85 = NULL;
    t = not_null(p_85);
    if(((w_85 != NULL) && (w_85 != t)))
      _fail(t);
    else
      w_85 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(w_85));
    return(t);
  }
  ATerm d_86 (ATerm t)
  {
    ATerm x_85 = NULL;
    t = not_null(p_85);
    if(((x_85 != NULL) && (x_85 != t)))
      _fail(t);
    else
      x_85 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_85));
    return(t);
  }
  ATerm e_86 (ATerm t)
  {
    ATerm y_85 = NULL;
    t = not_null(p_85);
    if(((y_85 != NULL) && (y_85 != t)))
      _fail(t);
    else
      y_85 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_85));
    return(t);
  }
  ATerm f_86 (ATerm t)
  {
    ATerm z_85 = NULL;
    t = not_null(r_85);
    if(((z_85 != NULL) && (z_85 != t)))
      _fail(t);
    else
      z_85 = t;
    t = not_null(s_85);
    if(((z_85 != NULL) && (z_85 != t)))
      _fail(t);
    else
      z_85 = t;
    t = not_null(z_85);
    return(t);
  }
  ATerm g_86 (ATerm t)
  {
    ATerm a_86 = NULL;
    t = not_null(r_85);
    if(((a_86 != NULL) && (a_86 != t)))
      _fail(t);
    else
      a_86 = t;
    t = not_null(s_85);
    if(((a_86 != NULL) && (a_86 != t)))
      _fail(t);
    else
      a_86 = t;
    t = not_null(a_86);
    return(t);
  }
  if(((q_85 != NULL) && (q_85 != t)))
    _fail(t);
  else
    q_85 = t;
  t = not_null(q_85);
  if(match_cons(t, sym_Where_1))
    {
      r_85 = ATgetArgument(t, 0);
      t = not_null(r_85);
      if(match_cons(t, sym_Seq_2))
        {
          p_85 = ATgetArgument(t, 0);
          l_85 = ATgetArgument(t, 1);
          t = not_null(p_85);
          if(match_cons(t, sym_Where_1))
            {
              k_85 = ATgetArgument(t, 0);
              t = not_null(l_85);
              if(match_cons(t, sym_Seq_2))
                {
                  m_85 = ATgetArgument(t, 0);
                  o_85 = ATgetArgument(t, 1);
                  t = not_null(m_85);
                  if(match_cons(t, sym_Build_1))
                    {
                      n_85 = ATgetArgument(t, 0);
                      t = b_86(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
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
              p_85 = ATgetArgument(t, 0);
              t = e_86(t);
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
          r_85 = ATgetArgument(t, 0);
          t = not_null(r_85);
          if(match_cons(t, sym_Test_1))
            {
              p_85 = ATgetArgument(t, 0);
              t = c_86(t);
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
              r_85 = ATgetArgument(t, 0);
              t = not_null(r_85);
              if(match_cons(t, sym_Not_1))
                {
                  p_85 = ATgetArgument(t, 0);
                  t = d_86(t);
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
                  r_85 = ATgetArgument(t, 0);
                  s_85 = ATgetArgument(t, 1);
                  t = f_86(t);
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      r_85 = ATgetArgument(t, 0);
                      s_85 = ATgetArgument(t, 1);
                      t = g_86(t);
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
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL;
  ATerm c_87 (ATerm t)
  {
    ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
    t = not_null(q_86);
    if(((t_86 != NULL) && (t_86 != t)))
      _fail(t);
    else
      t_86 = t;
    t = not_null(r_86);
    if(((u_86 != NULL) && (u_86 != t)))
      _fail(t);
    else
      u_86 = t;
    t = not_null(s_86);
    if(((v_86 != NULL) && (v_86 != t)))
      _fail(t);
    else
      v_86 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_86), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_86), not_null(v_86)));
    return(t);
  }
  ATerm d_87 (ATerm t)
  {
    ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
    t = not_null(q_86);
    if(((w_86 != NULL) && (w_86 != t)))
      _fail(t);
    else
      w_86 = t;
    t = not_null(r_86);
    if(((x_86 != NULL) && (x_86 != t)))
      _fail(t);
    else
      x_86 = t;
    t = not_null(s_86);
    if(((y_86 != NULL) && (y_86 != t)))
      _fail(t);
    else
      y_86 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_86), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_86), not_null(y_86)));
    return(t);
  }
  ATerm e_87 (ATerm t)
  {
    ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
    t = not_null(q_86);
    if(((z_86 != NULL) && (z_86 != t)))
      _fail(t);
    else
      z_86 = t;
    t = not_null(r_86);
    if(((a_87 != NULL) && (a_87 != t)))
      _fail(t);
    else
      a_87 = t;
    t = not_null(s_86);
    if(((b_87 != NULL) && (b_87 != t)))
      _fail(t);
    else
      b_87 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_86), (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_87), not_null(b_87)));
    return(t);
  }
  if(((o_86 != NULL) && (o_86 != t)))
    _fail(t);
  else
    o_86 = t;
  t = not_null(o_86);
  if(match_cons(t, sym_LChoice_2))
    {
      p_86 = ATgetArgument(t, 0);
      s_86 = ATgetArgument(t, 1);
      t = not_null(p_86);
      if(match_cons(t, sym_LChoice_2))
        {
          q_86 = ATgetArgument(t, 0);
          r_86 = ATgetArgument(t, 1);
          t = c_87(t);
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
          p_86 = ATgetArgument(t, 0);
          s_86 = ATgetArgument(t, 1);
          t = not_null(p_86);
          if(match_cons(t, sym_Seq_2))
            {
              q_86 = ATgetArgument(t, 0);
              r_86 = ATgetArgument(t, 1);
              t = d_87(t);
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
              p_86 = ATgetArgument(t, 0);
              s_86 = ATgetArgument(t, 1);
              t = not_null(p_86);
              if(match_cons(t, sym_Choice_2))
                {
                  q_86 = ATgetArgument(t, 0);
                  r_86 = ATgetArgument(t, 1);
                  t = e_87(t);
                }
              else
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
  ATerm h_87 = NULL,i_87 = NULL;
  ATerm k_87 (ATerm t)
  {
    ATerm j_87 = NULL;
    t = not_null(i_87);
    if(((j_87 != NULL) && (j_87 != t)))
      _fail(t);
    else
      j_87 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_87), term_k_34);
    return(t);
  }
  if(((h_87 != NULL) && (h_87 != t)))
    _fail(t);
  else
    h_87 = t;
  t = not_null(h_87);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_87 = ATgetArgument(t, 0);
      t = k_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL;
  ATerm q_87 (ATerm t)
  {
    ATerm p_87 = NULL;
    t = not_null(o_87);
    if(((p_87 != NULL) && (p_87 != t)))
      _fail(t);
    else
      p_87 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_34), term_k_34));
    return(t);
  }
  if(((n_87 != NULL) && (n_87 != t)))
    _fail(t);
  else
    n_87 = t;
  t = not_null(n_87);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_87 = ATgetArgument(t, 0);
      t = q_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
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
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
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
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,b_89 = NULL,c_89 = NULL;
  ATerm v_90 (ATerm t)
  {
    ATerm d_89 = NULL,e_89 = NULL;
    t = not_null(b_89);
    if(((d_89 != NULL) && (d_89 != t)))
      _fail(t);
    else
      d_89 = t;
    t = not_null(c_89);
    if(((e_89 != NULL) && (e_89 != t)))
      _fail(t);
    else
      e_89 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_89), not_null(e_89));
    return(t);
  }
  ATerm w_90 (ATerm t)
  {
    ATerm f_89 = NULL,g_89 = NULL;
    t = not_null(q_88);
    if(((f_89 != NULL) && (f_89 != t)))
      _fail(t);
    else
      f_89 = t;
    t = not_null(r_88);
    if(((g_89 != NULL) && (g_89 != t)))
      _fail(t);
    else
      g_89 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_89), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_89)));
    return(t);
  }
  ATerm x_90 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  ATerm y_90 (ATerm t)
  {
    ATerm h_89 = NULL,i_89 = NULL;
    t = not_null(q_88);
    if(((h_89 != NULL) && (h_89 != t)))
      _fail(t);
    else
      h_89 = t;
    t = not_null(r_88);
    if(((i_89 != NULL) && (i_89 != t)))
      _fail(t);
    else
      i_89 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_89), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_89)));
    return(t);
  }
  ATerm z_90 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  ATerm a_91 (ATerm t)
  {
    ATerm j_89 = NULL,k_89 = NULL;
    t = not_null(q_88);
    if(((j_89 != NULL) && (j_89 != t)))
      _fail(t);
    else
      j_89 = t;
    t = not_null(r_88);
    if(((k_89 != NULL) && (k_89 != t)))
      _fail(t);
    else
      k_89 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_89), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_89)));
    return(t);
  }
  ATerm b_91 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  ATerm c_91 (ATerm t)
  {
    ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
    t = not_null(b_89);
    if(((l_89 != NULL) && (l_89 != t)))
      _fail(t);
    else
      l_89 = t;
    t = not_null(c_89);
    if(((m_89 != NULL) && (m_89 != t)))
      _fail(t);
    else
      m_89 = t;
    t = not_null(t_88);
    if(((n_89 != NULL) && (n_89 != t)))
      _fail(t);
    else
      n_89 = t;
    t = not_null(s_88);
    if(((o_89 != NULL) && (o_89 != t)))
      _fail(t);
    else
      o_89 = t;
    t = not_null(u_88);
    {
      ATerm r_89 = NULL;
      ATerm k_91 (ATerm t)
      {
        ATerm s_89 = NULL;
        ATerm l_91 (ATerm t)
        {
          t = not_null(s_89);
          if(((q_89 != NULL) && (q_89 != t)))
            _fail(t);
          else
            q_89 = t;
          t = not_null(s_89);
          return(t);
        }
        t = not_null(r_89);
        if(((p_89 != NULL) && (p_89 != t)))
          _fail(t);
        else
          p_89 = t;
        t = not_null(n_89);
        {
          ATerm j_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(j_4, t);
          if(((s_89 != NULL) && (s_89 != t)))
            _fail(t);
          else
            s_89 = t;
          t = l_91(t);
        }
        return(t);
      }
      t = not_null(m_89);
      t = map1_1_0(MkFunType_0_0, t);
      if(((r_89 != NULL) && (r_89 != t)))
        _fail(t);
      else
        r_89 = t;
      t = k_91(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(l_89), not_null(p_89), not_null(q_89), not_null(o_89));
    }
    return(t);
  }
  ATerm d_91 (ATerm t)
  {
    ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL;
    t = not_null(b_89);
    if(((t_89 != NULL) && (t_89 != t)))
      _fail(t);
    else
      t_89 = t;
    t = not_null(c_89);
    if(((u_89 != NULL) && (u_89 != t)))
      _fail(t);
    else
      u_89 = t;
    t = not_null(t_88);
    if(((v_89 != NULL) && (v_89 != t)))
      _fail(t);
    else
      v_89 = t;
    t = not_null(s_88);
    if(((w_89 != NULL) && (w_89 != t)))
      _fail(t);
    else
      w_89 = t;
    t = not_null(u_88);
    {
      ATerm z_89 = NULL;
      ATerm m_91 (ATerm t)
      {
        ATerm a_90 = NULL;
        ATerm n_91 (ATerm t)
        {
          t = not_null(a_90);
          if(((y_89 != NULL) && (y_89 != t)))
            _fail(t);
          else
            y_89 = t;
          t = not_null(a_90);
          return(t);
        }
        t = not_null(z_89);
        if(((x_89 != NULL) && (x_89 != t)))
          _fail(t);
        else
          x_89 = t;
        t = not_null(u_89);
        {
          ATerm k_4 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(k_4, t);
          if(((a_90 != NULL) && (a_90 != t)))
            _fail(t);
          else
            a_90 = t;
          t = n_91(t);
        }
        return(t);
      }
      t = not_null(v_89);
      t = map1_1_0(MkConstType_0_0, t);
      if(((z_89 != NULL) && (z_89 != t)))
        _fail(t);
      else
        z_89 = t;
      t = m_91(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_89), not_null(y_89), not_null(x_89), not_null(w_89));
    }
    return(t);
  }
  ATerm e_91 (ATerm t)
  {
    ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL;
    t = not_null(b_89);
    if(((b_90 != NULL) && (b_90 != t)))
      _fail(t);
    else
      b_90 = t;
    t = not_null(c_89);
    if(((c_90 != NULL) && (c_90 != t)))
      _fail(t);
    else
      c_90 = t;
    t = not_null(t_88);
    if(((d_90 != NULL) && (d_90 != t)))
      _fail(t);
    else
      d_90 = t;
    t = not_null(s_88);
    if(((e_90 != NULL) && (e_90 != t)))
      _fail(t);
    else
      e_90 = t;
    t = not_null(u_88);
    {
      ATerm h_90 = NULL;
      ATerm s_91 (ATerm t)
      {
        ATerm i_90 = NULL;
        ATerm t_91 (ATerm t)
        {
          t = not_null(i_90);
          if(((g_90 != NULL) && (g_90 != t)))
            _fail(t);
          else
            g_90 = t;
          t = not_null(i_90);
          return(t);
        }
        t = not_null(h_90);
        if(((f_90 != NULL) && (f_90 != t)))
          _fail(t);
        else
          f_90 = t;
        t = not_null(d_90);
        {
          ATerm l_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(l_4, t);
          if(((i_90 != NULL) && (i_90 != t)))
            _fail(t);
          else
            i_90 = t;
          t = t_91(t);
        }
        return(t);
      }
      t = not_null(c_90);
      t = map1_1_0(MkFunType_0_0, t);
      if(((h_90 != NULL) && (h_90 != t)))
        _fail(t);
      else
        h_90 = t;
      t = s_91(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(b_90), not_null(f_90), not_null(g_90), not_null(e_90));
    }
    return(t);
  }
  ATerm f_91 (ATerm t)
  {
    ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
    t = not_null(b_89);
    if(((k_90 != NULL) && (k_90 != t)))
      _fail(t);
    else
      k_90 = t;
    t = not_null(c_89);
    if(((j_90 != NULL) && (j_90 != t)))
      _fail(t);
    else
      j_90 = t;
    t = not_null(t_88);
    if(((l_90 != NULL) && (l_90 != t)))
      _fail(t);
    else
      l_90 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_90), (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_90)), not_null(k_90))));
    return(t);
  }
  ATerm g_91 (ATerm t)
  {
    ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
    t = not_null(b_89);
    if(((n_90 != NULL) && (n_90 != t)))
      _fail(t);
    else
      n_90 = t;
    t = not_null(c_89);
    if(((m_90 != NULL) && (m_90 != t)))
      _fail(t);
    else
      m_90 = t;
    t = not_null(t_88);
    if(((o_90 != NULL) && (o_90 != t)))
      _fail(t);
    else
      o_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_90))), not_null(n_90)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_90))));
    return(t);
  }
  ATerm h_91 (ATerm t)
  {
    ATerm p_90 = NULL,q_90 = NULL;
    t = not_null(b_89);
    if(((p_90 != NULL) && (p_90 != t)))
      _fail(t);
    else
      p_90 = t;
    t = not_null(c_89);
    if(((q_90 != NULL) && (q_90 != t)))
      _fail(t);
    else
      q_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_90), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_90)));
    return(t);
  }
  ATerm i_91 (ATerm t)
  {
    ATerm r_90 = NULL,s_90 = NULL;
    t = not_null(b_89);
    if(((r_90 != NULL) && (r_90 != t)))
      _fail(t);
    else
      r_90 = t;
    t = not_null(c_89);
    if(((s_90 != NULL) && (s_90 != t)))
      _fail(t);
    else
      s_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_90)), not_null(s_90));
    return(t);
  }
  ATerm j_91 (ATerm t)
  {
    ATerm t_90 = NULL,u_90 = NULL;
    t = not_null(b_89);
    if(((u_90 != NULL) && (u_90 != t)))
      _fail(t);
    else
      u_90 = t;
    t = not_null(c_89);
    if(((t_90 != NULL) && (t_90 != t)))
      _fail(t);
    else
      t_90 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_90)), not_null(u_90));
    return(t);
  }
  if(((u_88 != NULL) && (u_88 != t)))
    _fail(t);
  else
    u_88 = t;
  t = not_null(u_88);
  if(match_cons(t, sym_Lets_2))
    {
      b_89 = ATgetArgument(t, 0);
      c_89 = ATgetArgument(t, 1);
      t = v_90(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_89 = ATgetArgument(t, 0);
          t = not_null(b_89);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_88 = ATgetFirst((ATermList) t);
              r_88 = (ATerm) ATgetNext((ATermList) t);
              t = w_90(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = x_90(t);
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
              b_89 = ATgetArgument(t, 0);
              t = not_null(b_89);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_88 = ATgetFirst((ATermList) t);
                  r_88 = (ATerm) ATgetNext((ATermList) t);
                  t = y_90(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_90(t);
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
                  b_89 = ATgetArgument(t, 0);
                  t = not_null(b_89);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_88 = ATgetFirst((ATermList) t);
                      r_88 = (ATerm) ATgetNext((ATermList) t);
                      t = a_91(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = b_91(t);
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
                      b_89 = ATgetArgument(t, 0);
                      c_89 = ATgetArgument(t, 1);
                      t_88 = ATgetArgument(t, 2);
                      s_88 = ATgetArgument(t, 3);
                      t = c_91(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          b_89 = ATgetArgument(t, 0);
                          c_89 = ATgetArgument(t, 1);
                          t_88 = ATgetArgument(t, 2);
                          s_88 = ATgetArgument(t, 3);
                          {
                            ATerm y_34 = t;
                            int j_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_91(t);
                                ;
                                LocalPopChoice(j_35);
                              }
                            else
                              {
                                t = y_34;
                                t = e_91(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              b_89 = ATgetArgument(t, 0);
                              c_89 = ATgetArgument(t, 1);
                              t_88 = ATgetArgument(t, 2);
                              t = f_91(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  b_89 = ATgetArgument(t, 0);
                                  c_89 = ATgetArgument(t, 1);
                                  t_88 = ATgetArgument(t, 2);
                                  t = g_91(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      b_89 = ATgetArgument(t, 0);
                                      c_89 = ATgetArgument(t, 1);
                                      t = h_91(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          b_89 = ATgetArgument(t, 0);
                                          c_89 = ATgetArgument(t, 1);
                                          t = i_91(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              b_89 = ATgetArgument(t, 0);
                                              c_89 = ATgetArgument(t, 1);
                                              t = j_91(t);
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
  ATerm c_92 = NULL,d_92 = NULL;
  ATerm e_92 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  if(((c_92 != NULL) && (c_92 != t)))
    _fail(t);
  else
    c_92 = t;
  t = not_null(c_92);
  if(match_cons(t, sym_Where_1))
    {
      d_92 = ATgetArgument(t, 0);
      t = not_null(d_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = e_92(t);
        }
      else
        {
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
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
  ATerm m_92 (ATerm t)
  {
    ATerm l_92 = NULL;
    t = not_null(j_92);
    if(((l_92 != NULL) && (l_92 != t)))
      _fail(t);
    else
      l_92 = t;
    t = not_null(l_92);
    return(t);
  }
  if(((i_92 != NULL) && (i_92 != t)))
    _fail(t);
  else
    i_92 = t;
  t = not_null(i_92);
  if(match_cons(t, sym_LChoice_2))
    {
      j_92 = ATgetArgument(t, 0);
      k_92 = ATgetArgument(t, 1);
      t = not_null(k_92);
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
ATerm F13_0_0 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  ATerm u_92 (ATerm t)
  {
    ATerm t_92 = NULL;
    t = not_null(s_92);
    if(((t_92 != NULL) && (t_92 != t)))
      _fail(t);
    else
      t_92 = t;
    t = not_null(t_92);
    return(t);
  }
  if(((q_92 != NULL) && (q_92 != t)))
    _fail(t);
  else
    q_92 = t;
  t = not_null(q_92);
  if(match_cons(t, sym_LChoice_2))
    {
      r_92 = ATgetArgument(t, 0);
      s_92 = ATgetArgument(t, 1);
      t = not_null(r_92);
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
ATerm F12_0_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  ATerm e_93 (ATerm t)
  {
    ATerm d_93 = NULL;
    t = not_null(b_93);
    if(((d_93 != NULL) && (d_93 != t)))
      _fail(t);
    else
      d_93 = t;
    t = not_null(d_93);
    return(t);
  }
  if(((a_93 != NULL) && (a_93 != t)))
    _fail(t);
  else
    a_93 = t;
  t = not_null(a_93);
  if(match_cons(t, sym_Choice_2))
    {
      b_93 = ATgetArgument(t, 0);
      c_93 = ATgetArgument(t, 1);
      t = not_null(c_93);
      if(match_cons(t, sym_Fail_0))
        {
          t = e_93(t);
        }
      else
        {
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
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL;
  ATerm m_93 (ATerm t)
  {
    ATerm l_93 = NULL;
    t = not_null(k_93);
    if(((l_93 != NULL) && (l_93 != t)))
      _fail(t);
    else
      l_93 = t;
    t = not_null(l_93);
    return(t);
  }
  if(((i_93 != NULL) && (i_93 != t)))
    _fail(t);
  else
    i_93 = t;
  t = not_null(i_93);
  if(match_cons(t, sym_Choice_2))
    {
      j_93 = ATgetArgument(t, 0);
      k_93 = ATgetArgument(t, 1);
      t = not_null(j_93);
      if(match_cons(t, sym_Fail_0))
        {
          t = m_93(t);
        }
      else
        {
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
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  ATerm w_93 (ATerm t)
  {
    ATerm t_93 = NULL,u_93 = NULL;
    t = not_null(r_93);
    if(((t_93 != NULL) && (t_93 != t)))
      _fail(t);
    else
      t_93 = t;
    t = not_null(s_93);
    if(((u_93 != NULL) && (u_93 != t)))
      _fail(t);
    else
      u_93 = t;
    t = not_null(q_93);
    t = not_null(u_93);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm v_93 = NULL;
        if(((v_93 != NULL) && (v_93 != t)))
          _fail(t);
        else
          v_93 = t;
        t = not_null(v_93);
        if(match_cons(t, sym_Fail_0))
          {
            t = not_null(v_93);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(m_4, t);
    }
    t = term_v_34;
    return(t);
  }
  if(((q_93 != NULL) && (q_93 != t)))
    _fail(t);
  else
    q_93 = t;
  t = not_null(q_93);
  if(match_cons(t, sym_Cong_2))
    {
      r_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
      t = w_93(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  ATerm e_94 (ATerm t)
  {
    ATerm d_94 = NULL;
    t = not_null(b_94);
    if(((d_94 != NULL) && (d_94 != t)))
      _fail(t);
    else
      d_94 = t;
    t = term_v_34;
    return(t);
  }
  if(((a_94 != NULL) && (a_94 != t)))
    _fail(t);
  else
    a_94 = t;
  t = not_null(a_94);
  if(match_cons(t, sym_Path_2))
    {
      b_94 = ATgetArgument(t, 0);
      c_94 = ATgetArgument(t, 1);
      t = not_null(c_94);
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
ATerm F8_0_0 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL;
  ATerm p_94 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  if(((n_94 != NULL) && (n_94 != t)))
    _fail(t);
  else
    n_94 = t;
  t = not_null(n_94);
  if(match_cons(t, sym_One_1))
    {
      o_94 = ATgetArgument(t, 0);
      t = not_null(o_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = p_94(t);
        }
      else
        {
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
  ATerm u_94 = NULL,v_94 = NULL;
  ATerm w_94 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  if(((u_94 != NULL) && (u_94 != t)))
    _fail(t);
  else
    u_94 = t;
  t = not_null(u_94);
  if(match_cons(t, sym_Some_1))
    {
      v_94 = ATgetArgument(t, 0);
      t = not_null(v_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = w_94(t);
        }
      else
        {
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
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
  ATerm e_95 (ATerm t)
  {
    ATerm d_95 = NULL;
    t = not_null(b_95);
    if(((d_95 != NULL) && (d_95 != t)))
      _fail(t);
    else
      d_95 = t;
    t = term_v_34;
    return(t);
  }
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  t = not_null(a_95);
  if(match_cons(t, sym_Rec_2))
    {
      b_95 = ATgetArgument(t, 0);
      c_95 = ATgetArgument(t, 1);
      t = not_null(c_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = e_95(t);
        }
      else
        {
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
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  ATerm m_95 (ATerm t)
  {
    ATerm l_95 = NULL;
    t = not_null(j_95);
    if(((l_95 != NULL) && (l_95 != t)))
      _fail(t);
    else
      l_95 = t;
    t = term_v_34;
    return(t);
  }
  if(((i_95 != NULL) && (i_95 != t)))
    _fail(t);
  else
    i_95 = t;
  t = not_null(i_95);
  if(match_cons(t, sym_Scope_2))
    {
      j_95 = ATgetArgument(t, 0);
      k_95 = ATgetArgument(t, 1);
      t = not_null(k_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = m_95(t);
        }
      else
        {
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
  ATerm s_95 = NULL,t_95 = NULL,w_95 = NULL;
  ATerm y_95 (ATerm t)
  {
    ATerm x_95 = NULL;
    t = not_null(w_95);
    if(((x_95 != NULL) && (x_95 != t)))
      _fail(t);
    else
      x_95 = t;
    t = term_v_34;
    return(t);
  }
  if(((s_95 != NULL) && (s_95 != t)))
    _fail(t);
  else
    s_95 = t;
  t = not_null(s_95);
  if(match_cons(t, sym_Seq_2))
    {
      t_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
      t = not_null(t_95);
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
ATerm F2_0_0 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  ATerm g_96 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  if(((e_96 != NULL) && (e_96 != t)))
    _fail(t);
  else
    e_96 = t;
  t = not_null(e_96);
  if(match_cons(t, sym_Not_1))
    {
      f_96 = ATgetArgument(t, 0);
      t = not_null(f_96);
      if(match_cons(t, sym_Fail_0))
        {
          t = g_96(t);
        }
      else
        {
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
  ATerm k_96 = NULL,l_96 = NULL;
  ATerm m_96 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  if(((k_96 != NULL) && (k_96 != t)))
    _fail(t);
  else
    k_96 = t;
  t = not_null(k_96);
  if(match_cons(t, sym_Test_1))
    {
      l_96 = ATgetArgument(t, 0);
      t = not_null(l_96);
      if(match_cons(t, sym_Fail_0))
        {
          t = m_96(t);
        }
      else
        {
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
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0_0(t);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0_0(t);
            ;
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            {
              ATerm u_35 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0_0(t);
                  ;
                  LocalPopChoice(f_36);
                }
              else
                {
                  t = u_35;
                  {
                    ATerm k_36 = t;
                    int l_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0_0(t);
                        ;
                        LocalPopChoice(l_36);
                      }
                    else
                      {
                        t = k_36;
                        {
                          ATerm r_36 = t;
                          int s_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0_0(t);
                              ;
                              LocalPopChoice(s_36);
                            }
                          else
                            {
                              t = r_36;
                              {
                                ATerm z_36 = t;
                                int a_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0_0(t);
                                    ;
                                    LocalPopChoice(a_37);
                                  }
                                else
                                  {
                                    t = z_36;
                                    {
                                      ATerm h_37 = t;
                                      int i_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0_0(t);
                                          ;
                                          LocalPopChoice(i_37);
                                        }
                                      else
                                        {
                                          t = h_37;
                                          {
                                            ATerm j_37 = t;
                                            int k_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0_0(t);
                                                ;
                                                LocalPopChoice(k_37);
                                              }
                                            else
                                              {
                                                t = j_37;
                                                {
                                                  ATerm l_37 = t;
                                                  int m_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0_0(t);
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
                                                            t = F11_0_0(t);
                                                            ;
                                                            LocalPopChoice(o_37);
                                                          }
                                                        else
                                                          {
                                                            t = n_37;
                                                            {
                                                              ATerm p_37 = t;
                                                              int q_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_37);
                                                                }
                                                              else
                                                                {
                                                                  t = p_37;
                                                                  {
                                                                    ATerm r_37 = t;
                                                                    int s_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0_0(t);
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
                                                                              t = F14_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(u_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_37;
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
  ATerm q_96 = NULL,r_96 = NULL;
  ATerm s_96 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  if(((q_96 != NULL) && (q_96 != t)))
    _fail(t);
  else
    q_96 = t;
  t = not_null(q_96);
  if(match_cons(t, sym_Match_1))
    {
      r_96 = ATgetArgument(t, 0);
      t = not_null(r_96);
      if(match_cons(t, sym_Wld_0))
        {
          t = s_96(t);
        }
      else
        {
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
  ATerm w_96 = NULL,x_96 = NULL;
  ATerm y_96 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  if(((w_96 != NULL) && (w_96 != t)))
    _fail(t);
  else
    w_96 = t;
  t = not_null(w_96);
  if(match_cons(t, sym_Where_1))
    {
      x_96 = ATgetArgument(t, 0);
      t = not_null(x_96);
      if(match_cons(t, sym_Id_0))
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
ATerm I10_0_0 (ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL;
  ATerm e_97 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  if(((c_97 != NULL) && (c_97 != t)))
    _fail(t);
  else
    c_97 = t;
  t = not_null(c_97);
  if(match_cons(t, sym_All_1))
    {
      d_97 = ATgetArgument(t, 0);
      t = not_null(d_97);
      if(match_cons(t, sym_Id_0))
        {
          t = e_97(t);
        }
      else
        {
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
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
  ATerm m_97 (ATerm t)
  {
    ATerm l_97 = NULL;
    t = not_null(j_97);
    if(((l_97 != NULL) && (l_97 != t)))
      _fail(t);
    else
      l_97 = t;
    t = term_w_34;
    return(t);
  }
  if(((i_97 != NULL) && (i_97 != t)))
    _fail(t);
  else
    i_97 = t;
  t = not_null(i_97);
  if(match_cons(t, sym_Rec_2))
    {
      j_97 = ATgetArgument(t, 0);
      k_97 = ATgetArgument(t, 1);
      t = not_null(k_97);
      if(match_cons(t, sym_Id_0))
        {
          t = m_97(t);
        }
      else
        {
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
  ATerm q_97 = NULL,r_97 = NULL,w_97 = NULL;
  ATerm y_97 (ATerm t)
  {
    ATerm x_97 = NULL;
    t = not_null(r_97);
    if(((x_97 != NULL) && (x_97 != t)))
      _fail(t);
    else
      x_97 = t;
    t = term_w_34;
    return(t);
  }
  if(((q_97 != NULL) && (q_97 != t)))
    _fail(t);
  else
    q_97 = t;
  t = not_null(q_97);
  if(match_cons(t, sym_Scope_2))
    {
      r_97 = ATgetArgument(t, 0);
      w_97 = ATgetArgument(t, 1);
      t = not_null(w_97);
      if(match_cons(t, sym_Id_0))
        {
          t = y_97(t);
        }
      else
        {
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
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  ATerm h_98 (ATerm t)
  {
    ATerm g_98 = NULL;
    t = not_null(f_98);
    if(((g_98 != NULL) && (g_98 != t)))
      _fail(t);
    else
      g_98 = t;
    t = term_w_34;
    return(t);
  }
  if(((d_98 != NULL) && (d_98 != t)))
    _fail(t);
  else
    d_98 = t;
  t = not_null(d_98);
  if(match_cons(t, sym_LChoice_2))
    {
      e_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
      t = not_null(e_98);
      if(match_cons(t, sym_Id_0))
        {
          t = h_98(t);
        }
      else
        {
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
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
  ATerm r_98 (ATerm t)
  {
    ATerm q_98 = NULL;
    t = not_null(o_98);
    if(((q_98 != NULL) && (q_98 != t)))
      _fail(t);
    else
      q_98 = t;
    t = not_null(q_98);
    return(t);
  }
  if(((n_98 != NULL) && (n_98 != t)))
    _fail(t);
  else
    n_98 = t;
  t = not_null(n_98);
  if(match_cons(t, sym_Seq_2))
    {
      o_98 = ATgetArgument(t, 0);
      p_98 = ATgetArgument(t, 1);
      t = not_null(p_98);
      if(match_cons(t, sym_Id_0))
        {
          t = r_98(t);
        }
      else
        {
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
  ATerm d_99 = NULL,g_99 = NULL,h_99 = NULL;
  ATerm n_99 (ATerm t)
  {
    ATerm m_99 = NULL;
    t = not_null(h_99);
    if(((m_99 != NULL) && (m_99 != t)))
      _fail(t);
    else
      m_99 = t;
    t = not_null(m_99);
    return(t);
  }
  if(((d_99 != NULL) && (d_99 != t)))
    _fail(t);
  else
    d_99 = t;
  t = not_null(d_99);
  if(match_cons(t, sym_Seq_2))
    {
      g_99 = ATgetArgument(t, 0);
      h_99 = ATgetArgument(t, 1);
      t = not_null(g_99);
      if(match_cons(t, sym_Id_0))
        {
          t = n_99(t);
        }
      else
        {
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
  ATerm t_99 = NULL,u_99 = NULL;
  ATerm v_99 (ATerm t)
  {
    t = term_v_34;
    return(t);
  }
  if(((t_99 != NULL) && (t_99 != t)))
    _fail(t);
  else
    t_99 = t;
  t = not_null(t_99);
  if(match_cons(t, sym_Not_1))
    {
      u_99 = ATgetArgument(t, 0);
      t = not_null(u_99);
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
ATerm I1_0_0 (ATerm t)
{
  ATerm z_99 = NULL,d_100 = NULL;
  ATerm e_100 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  if(((z_99 != NULL) && (z_99 != t)))
    _fail(t);
  else
    z_99 = t;
  t = not_null(z_99);
  if(match_cons(t, sym_Test_1))
    {
      d_100 = ATgetArgument(t, 0);
      t = not_null(d_100);
      if(match_cons(t, sym_Id_0))
        {
          t = e_100(t);
        }
      else
        {
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
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0_0(t);
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
            t = I2_0_0(t);
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
                  t = I3_0_0(t);
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
                        t = I4_0_0(t);
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
                              t = I7_0_0(t);
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
                                    t = I8_0_0(t);
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
                                          t = I9_0_0(t);
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
                                                t = I10_0_0(t);
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
                                                      t = I12_0_0(t);
                                                      ;
                                                      LocalPopChoice(m_38);
                                                    }
                                                  else
                                                    {
                                                      t = l_38;
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
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
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
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
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
                                    t = EmptyScope_0_0(t);
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
                                          t = MatchingCongruence_0_0(t);
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
                                                t = TransformingAnnoCongruence_0_0(t);
                                                ;
                                                LocalPopChoice(c_39);
                                              }
                                            else
                                              {
                                                t = b_39;
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
  ATerm f_100 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = j_127(t);
      t = f_100(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    return(t);
  }
  t = f_100(t);
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
  ATerm l_100 = NULL,m_100 = NULL;
  ATerm v_100 (ATerm t)
  {
    ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,r_100 = NULL;
    ATerm x_100 (ATerm t)
    {
      ATerm s_100 = NULL,t_100 = NULL;
      t = not_null(r_100);
      if(((s_100 != NULL) && (s_100 != t)))
        _fail(t);
      else
        s_100 = t;
      t = not_null(r_100);
      {
        ATerm u_100 = NULL;
        ATerm y_100 (ATerm t)
        {
          t = not_null(u_100);
          if(((t_100 != NULL) && (t_100 != t)))
            _fail(t);
          else
            t_100 = t;
          t = not_null(u_100);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_100)), not_null(p_100));
        if(((u_100 != NULL) && (u_100 != t)))
          _fail(t);
        else
          u_100 = t;
        t = y_100(t);
        t = not_null(t_100);
      }
      return(t);
    }
    t = not_null(l_100);
    if(((n_100 != NULL) && (n_100 != t)))
      _fail(t);
    else
      n_100 = t;
    t = not_null(m_100);
    if(((o_100 != NULL) && (o_100 != t)))
      _fail(t);
    else
      o_100 = t;
    t = not_null(l_100);
    {
      ATerm q_100 = NULL;
      ATerm w_100 (ATerm t)
      {
        t = not_null(q_100);
        if(((p_100 != NULL) && (p_100 != t)))
          _fail(t);
        else
          p_100 = t;
        t = not_null(q_100);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_100));
      if(((q_100 != NULL) && (q_100 != t)))
        _fail(t);
      else
        q_100 = t;
      t = w_100(t);
      t = not_null(o_100);
      t = l_94(t);
      if(((r_100 != NULL) && (r_100 != t)))
        _fail(t);
      else
        r_100 = t;
      t = x_100(t);
    }
    return(t);
  }
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = not_null(l_100);
  if(match_cons(t, sym_Strategies_1))
    {
      m_100 = ATgetArgument(t, 0);
      t = v_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL;
  ATerm v_101 (ATerm t)
  {
    ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,r_101 = NULL;
    ATerm x_101 (ATerm t)
    {
      ATerm s_101 = NULL,t_101 = NULL;
      t = not_null(r_101);
      if(((s_101 != NULL) && (s_101 != t)))
        _fail(t);
      else
        s_101 = t;
      t = not_null(r_101);
      {
        ATerm u_101 = NULL;
        ATerm y_101 (ATerm t)
        {
          t = not_null(u_101);
          if(((t_101 != NULL) && (t_101 != t)))
            _fail(t);
          else
            t_101 = t;
          t = not_null(u_101);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_101)), not_null(i_101));
        if(((u_101 != NULL) && (u_101 != t)))
          _fail(t);
        else
          u_101 = t;
        t = y_101(t);
        t = not_null(t_101);
      }
      return(t);
    }
    t = not_null(e_101);
    if(((g_101 != NULL) && (g_101 != t)))
      _fail(t);
    else
      g_101 = t;
    t = not_null(f_101);
    if(((h_101 != NULL) && (h_101 != t)))
      _fail(t);
    else
      h_101 = t;
    t = not_null(e_101);
    {
      ATerm q_101 = NULL;
      ATerm w_101 (ATerm t)
      {
        t = not_null(q_101);
        if(((i_101 != NULL) && (i_101 != t)))
          _fail(t);
        else
          i_101 = t;
        t = not_null(q_101);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_101));
      if(((q_101 != NULL) && (q_101 != t)))
        _fail(t);
      else
        q_101 = t;
      t = w_101(t);
      t = not_null(h_101);
      t = q_94(t);
      if(((r_101 != NULL) && (r_101 != t)))
        _fail(t);
      else
        r_101 = t;
      t = x_101(t);
    }
    return(t);
  }
  if(((e_101 != NULL) && (e_101 != t)))
    _fail(t);
  else
    e_101 = t;
  t = not_null(e_101);
  if(match_cons(t, sym_Specification_1))
    {
      f_101 = ATgetArgument(t, 0);
      t = v_101(t);
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
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  ATerm t_102 (ATerm t)
  {
    ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,n_102 = NULL;
    ATerm v_102 (ATerm t)
    {
      ATerm o_102 = NULL,p_102 = NULL;
      ATerm w_102 (ATerm t)
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
          ATerm x_102 (ATerm t)
          {
            t = not_null(s_102);
            if(((r_102 != NULL) && (r_102 != t)))
              _fail(t);
            else
              r_102 = t;
            t = not_null(s_102);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_102), not_null(q_102)), not_null(l_102));
          if(((s_102 != NULL) && (s_102 != t)))
            _fail(t);
          else
            s_102 = t;
          t = x_102(t);
          t = not_null(r_102);
        }
        return(t);
      }
      t = not_null(n_102);
      if(((o_102 != NULL) && (o_102 != t)))
        _fail(t);
      else
        o_102 = t;
      t = not_null(k_102);
      t = x_92(t);
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = w_102(t);
      return(t);
    }
    t = not_null(f_102);
    if(((i_102 != NULL) && (i_102 != t)))
      _fail(t);
    else
      i_102 = t;
    t = not_null(g_102);
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = not_null(h_102);
    if(((k_102 != NULL) && (k_102 != t)))
      _fail(t);
    else
      k_102 = t;
    t = not_null(f_102);
    {
      ATerm m_102 = NULL;
      ATerm u_102 (ATerm t)
      {
        t = not_null(m_102);
        if(((l_102 != NULL) && (l_102 != t)))
          _fail(t);
        else
          l_102 = t;
        t = not_null(m_102);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_102));
      if(((m_102 != NULL) && (m_102 != t)))
        _fail(t);
      else
        m_102 = t;
      t = u_102(t);
      t = not_null(j_102);
      t = w_92(t);
      if(((n_102 != NULL) && (n_102 != t)))
        _fail(t);
      else
        n_102 = t;
      t = v_102(t);
    }
    return(t);
  }
  if(((f_102 != NULL) && (f_102 != t)))
    _fail(t);
  else
    f_102 = t;
  t = not_null(f_102);
  if(match_cons(t, sym__2))
    {
      g_102 = ATgetArgument(t, 0);
      h_102 = ATgetArgument(t, 1);
      t = t_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_39;
  d_39 = t;
  {
    ATerm z_102 = NULL;
    ATerm a_103 = NULL;
    ATerm b_103 (ATerm t)
    {
      t = not_null(a_103);
      if(((z_102 != NULL) && (z_102 != t)))
        _fail(t);
      else
        z_102 = t;
      t = not_null(a_103);
      return(t);
    }
    t = term_x_18;
    t = whoami_0_0(t);
    if(((a_103 != NULL) && (a_103 != t)))
      _fail(t);
    else
      a_103 = t;
    t = b_103(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_39), not_null(z_102)), term_f_39));
    t = printnl_0_0(t);
    t = term_n_8;
    t = exit_0_0(t);
  }
  t = d_39;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  ATerm j_103 (ATerm t)
  {
    ATerm h_103 = NULL,i_103 = NULL;
    t = not_null(f_103);
    if(((h_103 != NULL) && (h_103 != t)))
      _fail(t);
    else
      h_103 = t;
    t = not_null(g_103);
    if(((i_103 != NULL) && (i_103 != t)))
      _fail(t);
    else
      i_103 = t;
    t = not_null(e_103);
    {
      ATerm h_39;
      h_39 = t;
      t = SSL_printnl(not_null(h_103), not_null(i_103));
      t = h_39;
    }
    return(t);
  }
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  t = not_null(e_103);
  if(match_cons(t, sym__2))
    {
      f_103 = ATgetArgument(t, 0);
      g_103 = ATgetArgument(t, 1);
      t = j_103(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm l_103 = NULL;
  ATerm n_103 (ATerm t)
  {
    ATerm m_103 = NULL;
    t = not_null(l_103);
    if(((m_103 != NULL) && (m_103 != t)))
      _fail(t);
    else
      m_103 = t;
    t = not_null(l_103);
    t = SSL_implode_string(not_null(m_103));
    return(t);
  }
  if(((l_103 != NULL) && (l_103 != t)))
    _fail(t);
  else
    l_103 = t;
  t = n_103(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      {
        ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
        ATerm w_103 (ATerm t)
        {
          ATerm t_103 = NULL,u_103 = NULL;
          t = not_null(r_103);
          if(((t_103 != NULL) && (t_103 != t)))
            _fail(t);
          else
            t_103 = t;
          t = not_null(s_103);
          if(((u_103 != NULL) && (u_103 != t)))
            _fail(t);
          else
            u_103 = t;
          t = not_null(t_103);
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(u_103);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(v_4, t);
          }
          return(t);
        }
        if(((q_103 != NULL) && (q_103 != t)))
          _fail(t);
        else
          q_103 = t;
        t = not_null(q_103);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_103 = ATgetFirst((ATermList) t);
            s_103 = (ATerm) ATgetNext((ATermList) t);
            t = w_103(t);
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
  ATerm c_104 = NULL;
  ATerm k_104 (ATerm t)
  {
    ATerm d_104 = NULL,e_104 = NULL;
    t = not_null(c_104);
    if(((d_104 != NULL) && (d_104 != t)))
      _fail(t);
    else
      d_104 = t;
    t = not_null(c_104);
    {
      ATerm f_104 = NULL;
      ATerm l_104 (ATerm t)
      {
        ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
        ATerm m_104 (ATerm t)
        {
          t = not_null(j_104);
          if(((e_104 != NULL) && (e_104 != t)))
            _fail(t);
          else
            e_104 = t;
          t = not_null(h_104);
          return(t);
        }
        t = not_null(f_104);
        if(((g_104 != NULL) && (g_104 != t)))
          _fail(t);
        else
          g_104 = t;
        t = not_null(f_104);
        t = SSL_explode_term(not_null(g_104));
        if(((h_104 != NULL) && (h_104 != t)))
          _fail(t);
        else
          h_104 = t;
        t = not_null(h_104);
        if(match_cons(t, sym__2))
          {
            i_104 = ATgetArgument(t, 0);
            j_104 = ATgetArgument(t, 1);
            t = not_null(i_104);
            if(match_string(t, ""))
              {
                t = m_104(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(d_104);
      if(((f_104 != NULL) && (f_104 != t)))
        _fail(t);
      else
        f_104 = t;
      t = l_104(t);
      t = not_null(e_104);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((c_104 != NULL) && (c_104 != t)))
    _fail(t);
  else
    c_104 = t;
  t = k_104(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_117 (ATerm), ATerm t)
{
  ATerm n_104 (ATerm t)
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_104, t);
        ;
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = Nil_0_0(t);
        t = f_117(t);
      }
    return(t);
  }
  t = n_104(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
  ATerm v_104 (ATerm t)
  {
    ATerm t_104 = NULL,u_104 = NULL;
    t = not_null(r_104);
    if(((u_104 != NULL) && (u_104 != t)))
      _fail(t);
    else
      u_104 = t;
    t = not_null(s_104);
    if(((t_104 != NULL) && (t_104 != t)))
      _fail(t);
    else
      t_104 = t;
    t = not_null(u_104);
    {
      ATerm w_4 (ATerm t)
      {
        t = not_null(t_104);
        return(t);
      }
      t = at_end_1_0(w_4, t);
    }
    return(t);
  }
  if(((q_104 != NULL) && (q_104 != t)))
    _fail(t);
  else
    q_104 = t;
  t = not_null(q_104);
  if(match_cons(t, sym__2))
    {
      r_104 = ATgetArgument(t, 0);
      s_104 = ATgetArgument(t, 1);
      t = v_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm x_104 = NULL;
  ATerm z_104 (ATerm t)
  {
    ATerm y_104 = NULL;
    t = not_null(x_104);
    if(((y_104 != NULL) && (y_104 != t)))
      _fail(t);
    else
      y_104 = t;
    t = not_null(x_104);
    t = SSL_explode_string(not_null(y_104));
    return(t);
  }
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  t = z_104(t);
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
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            ATerm x_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_4, t);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            {
              ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
              ATerm r_105 (ATerm t)
              {
                ATerm j_105 = NULL;
                t = not_null(h_105);
                if(((j_105 != NULL) && (j_105 != t)))
                  _fail(t);
                else
                  j_105 = t;
                t = not_null(j_105);
                return(t);
              }
              ATerm s_105 (ATerm t)
              {
                ATerm k_105 = NULL;
                t = not_null(h_105);
                if(((k_105 != NULL) && (k_105 != t)))
                  _fail(t);
                else
                  k_105 = t;
                t = not_null(k_105);
                {
                  ATerm s_39 = t;
                  int t_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_39);
                    }
                  else
                    {
                      t = s_39;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = term_u_39;
                          return(t);
                        }
                        t = debug_1_0(y_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm t_105 (ATerm t)
              {
                ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL,p_105 = NULL;
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
                t = not_null(g_105);
                {
                  ATerm v_39;
                  v_39 = t;
                  {
                    ATerm o_105 = NULL;
                    ATerm u_105 (ATerm t)
                    {
                      t = not_null(o_105);
                      if(((n_105 != NULL) && (n_105 != t)))
                        _fail(t);
                      else
                        n_105 = t;
                      t = not_null(o_105);
                      return(t);
                    }
                    t = not_null(l_105);
                    t = eval_config_0_0(t);
                    if(((o_105 != NULL) && (o_105 != t)))
                      _fail(t);
                    else
                      o_105 = t;
                    t = u_105(t);
                  }
                  t = v_39;
                  {
                    ATerm q_105 = NULL;
                    ATerm v_105 (ATerm t)
                    {
                      t = not_null(q_105);
                      if(((p_105 != NULL) && (p_105 != t)))
                        _fail(t);
                      else
                        p_105 = t;
                      t = not_null(q_105);
                      return(t);
                    }
                    t = not_null(m_105);
                    t = eval_config_0_0(t);
                    if(((q_105 != NULL) && (q_105 != t)))
                      _fail(t);
                    else
                      q_105 = t;
                    t = v_105(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_105), not_null(p_105));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((g_105 != NULL) && (g_105 != t)))
                _fail(t);
              else
                g_105 = t;
              t = not_null(g_105);
              if(match_cons(t, sym_Path_1))
                {
                  h_105 = ATgetArgument(t, 0);
                  t = r_105(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_105 = ATgetArgument(t, 0);
                      t = s_105(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_105 = ATgetArgument(t, 0);
                          i_105 = ATgetArgument(t, 1);
                          t = t_105(t);
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
  ATerm y_105 = NULL;
  ATerm c_106 (ATerm t)
  {
    ATerm z_105 = NULL;
    t = not_null(y_105);
    if(((z_105 != NULL) && (z_105 != t)))
      _fail(t);
    else
      z_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_39, not_null(z_105));
    t = table_get_0_0(t);
    {
      ATerm z_4 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm x_39;
          x_39 = t;
          {
            ATerm a_106 = NULL;
            ATerm b_106 = NULL;
            ATerm d_106 (ATerm t)
            {
              t = not_null(b_106);
              if(((a_106 != NULL) && (a_106 != t)))
                _fail(t);
              else
                a_106 = t;
              t = not_null(b_106);
              return(t);
            }
            if(((b_106 != NULL) && (b_106 != t)))
              _fail(t);
            else
              b_106 = t;
            t = d_106(t);
            t = (ATerm) ATmakeAppl(sym__3, term_w_39, not_null(z_105), not_null(a_106));
            t = table_put_0_0(t);
          }
          t = x_39;
        }
        return(t);
      }
      t = try_1_0(z_4, t);
    }
    return(t);
  }
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  t = c_106(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm y_39;
    y_39 = t;
    {
      ATerm f_106 = NULL;
      ATerm g_106 = NULL;
      ATerm h_106 (ATerm t)
      {
        t = not_null(g_106);
        if(((f_106 != NULL) && (f_106 != t)))
          _fail(t);
        else
          f_106 = t;
        t = not_null(g_106);
        return(t);
      }
      t = term_z_39;
      t = get_config_0_0(t);
      if(((g_106 != NULL) && (g_106 != t)))
        _fail(t);
      else
        g_106 = t;
      t = h_106(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_106), term_a_40);
      t = geq_0_0(t);
    }
    t = y_39;
    t = t_130(t);
    return(t);
  }
  t = try_1_0(a_5, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
  ATerm u_106 (ATerm t)
  {
    ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL;
    t = not_null(n_106);
    if(((q_106 != NULL) && (q_106 != t)))
      _fail(t);
    else
      q_106 = t;
    t = not_null(p_106);
    if(((r_106 != NULL) && (r_106 != t)))
      _fail(t);
    else
      r_106 = t;
    t = not_null(m_106);
    t = SSL_fputc(not_null(q_106), not_null(r_106));
    {
      ATerm t_106 = NULL;
      ATerm v_106 (ATerm t)
      {
        t = not_null(t_106);
        if(((s_106 != NULL) && (s_106 != t)))
          _fail(t);
        else
          s_106 = t;
        t = not_null(t_106);
        return(t);
      }
      if(((t_106 != NULL) && (t_106 != t)))
        _fail(t);
      else
        t_106 = t;
      t = v_106(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_106));
    }
    return(t);
  }
  if(((m_106 != NULL) && (m_106 != t)))
    _fail(t);
  else
    m_106 = t;
  t = not_null(m_106);
  if(match_cons(t, sym__2))
    {
      n_106 = ATgetArgument(t, 0);
      o_106 = ATgetArgument(t, 1);
      t = not_null(o_106);
      if(match_cons(t, sym_Stream_1))
        {
          p_106 = ATgetArgument(t, 0);
          t = u_106(t);
        }
      else
        {
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
  ATerm a_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL;
  ATerm k_107 (ATerm t)
  {
    ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
    t = not_null(e_107);
    if(((g_107 != NULL) && (g_107 != t)))
      _fail(t);
    else
      g_107 = t;
    t = not_null(f_107);
    if(((h_107 != NULL) && (h_107 != t)))
      _fail(t);
    else
      h_107 = t;
    t = not_null(a_107);
    t = SSL_write_term_to_stream_text(not_null(g_107), not_null(h_107));
    {
      ATerm j_107 = NULL;
      ATerm l_107 (ATerm t)
      {
        t = not_null(j_107);
        if(((i_107 != NULL) && (i_107 != t)))
          _fail(t);
        else
          i_107 = t;
        t = not_null(j_107);
        return(t);
      }
      if(((j_107 != NULL) && (j_107 != t)))
        _fail(t);
      else
        j_107 = t;
      t = l_107(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_107));
    }
    return(t);
  }
  if(((a_107 != NULL) && (a_107 != t)))
    _fail(t);
  else
    a_107 = t;
  t = not_null(a_107);
  if(match_cons(t, sym__2))
    {
      d_107 = ATgetArgument(t, 0);
      f_107 = ATgetArgument(t, 1);
      t = not_null(d_107);
      if(match_cons(t, sym_Stream_1))
        {
          e_107 = ATgetArgument(t, 0);
          t = k_107(t);
        }
      else
        {
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
    ATerm n_107 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm o_107 = NULL;
      ATerm p_107 (ATerm t)
      {
        t = not_null(o_107);
        if(((n_107 != NULL) && (n_107 != t)))
          _fail(t);
        else
          n_107 = t;
        t = not_null(o_107);
        return(t);
      }
      if(((o_107 != NULL) && (o_107 != t)))
        _fail(t);
      else
        o_107 = t;
      t = p_107(t);
      t = (ATerm) ATmakeAppl(sym__2, term_b_40, not_null(n_107));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(b_5, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
  ATerm c_108 (ATerm t)
  {
    ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
    t = not_null(w_107);
    if(((y_107 != NULL) && (y_107 != t)))
      _fail(t);
    else
      y_107 = t;
    t = not_null(x_107);
    if(((z_107 != NULL) && (z_107 != t)))
      _fail(t);
    else
      z_107 = t;
    t = not_null(u_107);
    t = SSL_write_term_to_stream_baf(not_null(y_107), not_null(z_107));
    {
      ATerm b_108 = NULL;
      ATerm d_108 (ATerm t)
      {
        t = not_null(b_108);
        if(((a_108 != NULL) && (a_108 != t)))
          _fail(t);
        else
          a_108 = t;
        t = not_null(b_108);
        return(t);
      }
      if(((b_108 != NULL) && (b_108 != t)))
        _fail(t);
      else
        b_108 = t;
      t = d_108(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_108));
    }
    return(t);
  }
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  t = not_null(u_107);
  if(match_cons(t, sym__2))
    {
      v_107 = ATgetArgument(t, 0);
      x_107 = ATgetArgument(t, 1);
      t = not_null(v_107);
      if(match_cons(t, sym_Stream_1))
        {
          w_107 = ATgetArgument(t, 0);
          t = c_108(t);
        }
      else
        {
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
  ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL;
  ATerm r_108 (ATerm t)
  {
    ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,p_108 = NULL;
    t = not_null(j_108);
    if(((l_108 != NULL) && (l_108 != t)))
      _fail(t);
    else
      l_108 = t;
    t = not_null(k_108);
    if(((m_108 != NULL) && (m_108 != t)))
      _fail(t);
    else
      m_108 = t;
    t = not_null(l_108);
    {
      ATerm o_108 = NULL;
      ATerm s_108 (ATerm t)
      {
        t = not_null(o_108);
        if(((n_108 != NULL) && (n_108 != t)))
          _fail(t);
        else
          n_108 = t;
        t = not_null(o_108);
        return(t);
      }
      if(((o_108 != NULL) && (o_108 != t)))
        _fail(t);
      else
        o_108 = t;
      t = s_108(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_108), term_c_40);
      t = open_stream_0_0(t);
      {
        ATerm q_108 = NULL;
        ATerm w_108 (ATerm t)
        {
          t = not_null(q_108);
          if(((p_108 != NULL) && (p_108 != t)))
            _fail(t);
          else
            p_108 = t;
          t = not_null(q_108);
          return(t);
        }
        if(((q_108 != NULL) && (q_108 != t)))
          _fail(t);
        else
          q_108 = t;
        t = w_108(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_108), not_null(m_108));
        t = x_137(t);
        t = fclose_0_0(t);
        t = not_null(m_108);
      }
    }
    return(t);
  }
  if(((i_108 != NULL) && (i_108 != t)))
    _fail(t);
  else
    i_108 = t;
  t = not_null(i_108);
  if(match_cons(t, sym__2))
    {
      j_108 = ATgetArgument(t, 0);
      k_108 = ATgetArgument(t, 1);
      t = r_108(t);
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
  ATerm b_109 = NULL;
  ATerm d_40;
  d_40 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm e_40 = t;
      int f_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 (ATerm t)
          {
            ATerm c_109 = NULL,d_109 = NULL;
            ATerm g_109 (ATerm t)
            {
              t = not_null(d_109);
              if(((b_109 != NULL) && (b_109 != t)))
                _fail(t);
              else
                b_109 = t;
              t = not_null(c_109);
              return(t);
            }
            if(((c_109 != NULL) && (c_109 != t)))
              _fail(t);
            else
              c_109 = t;
            t = not_null(c_109);
            if(match_cons(t, sym_Output_1))
              {
                d_109 = ATgetArgument(t, 0);
                t = g_109(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(d_5, t);
          ;
          LocalPopChoice(f_40);
        }
      else
        {
          t = e_40;
          {
            ATerm e_109 = NULL;
            ATerm h_109 (ATerm t)
            {
              t = not_null(e_109);
              if(((b_109 != NULL) && (b_109 != t)))
                _fail(t);
              else
                b_109 = t;
              t = not_null(e_109);
              return(t);
            }
            t = term_g_40;
            if(((e_109 != NULL) && (e_109 != t)))
              _fail(t);
            else
              e_109 = t;
            t = h_109(t);
          }
        }
      return(t);
    }
    t = _2_0(c_5, _id, t);
  }
  t = d_40;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(b_109);
        return(t);
      }
      t = split_2_0(f_5, _id, t);
      return(t);
    }
    t = _2_0(_id, e_5, t);
    {
      ATerm h_40 = t;
      int i_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm f_109 = NULL;
              if(((f_109 != NULL) && (f_109 != t)))
                _fail(t);
              else
                f_109 = t;
              t = not_null(f_109);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(f_109);
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
          LocalPopChoice(i_40);
        }
      else
        {
          t = h_40;
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
  ATerm l_109 = NULL,n_109 = NULL,w_109 = NULL,x_109 = NULL;
  ATerm b_110 (ATerm t)
  {
    ATerm y_109 = NULL,z_109 = NULL;
    t = not_null(w_109);
    if(((y_109 != NULL) && (y_109 != t)))
      _fail(t);
    else
      y_109 = t;
    t = not_null(x_109);
    if(((z_109 != NULL) && (z_109 != t)))
      _fail(t);
    else
      z_109 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_109)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_109))), not_null(z_109));
    return(t);
  }
  ATerm j_40;
  j_40 = t;
  t = dtime_0_0(t);
  t = j_40;
  t = m_132(t);
  {
    ATerm k_40;
    k_40 = t;
    {
      ATerm m_109 = NULL;
      ATerm a_110 (ATerm t)
      {
        t = not_null(m_109);
        if(((l_109 != NULL) && (l_109 != t)))
          _fail(t);
        else
          l_109 = t;
        t = not_null(m_109);
        return(t);
      }
      t = dtime_0_0(t);
      if(((m_109 != NULL) && (m_109 != t)))
        _fail(t);
      else
        m_109 = t;
      t = a_110(t);
    }
    t = k_40;
    if(((n_109 != NULL) && (n_109 != t)))
      _fail(t);
    else
      n_109 = t;
    t = not_null(n_109);
    if(match_cons(t, sym__2))
      {
        w_109 = ATgetArgument(t, 0);
        x_109 = ATgetArgument(t, 1);
        t = b_110(t);
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
  ATerm f_110 = NULL,g_110 = NULL;
  ATerm l_110 (ATerm t)
  {
    ATerm h_110 = NULL;
    t = not_null(f_110);
    if(((h_110 != NULL) && (h_110 != t)))
      _fail(t);
    else
      h_110 = t;
    t = not_null(g_110);
    t = SSL_fclose(not_null(h_110));
    return(t);
  }
  ATerm m_110 (ATerm t)
  {
    ATerm k_110 = NULL;
    t = not_null(g_110);
    if(((k_110 != NULL) && (k_110 != t)))
      _fail(t);
    else
      k_110 = t;
    t = not_null(g_110);
    t = SSL_fclose(not_null(k_110));
    return(t);
  }
  if(((g_110 != NULL) && (g_110 != t)))
    _fail(t);
  else
    g_110 = t;
  t = not_null(g_110);
  if(match_cons(t, sym_Stream_1))
    {
      f_110 = ATgetArgument(t, 0);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_110(t);
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = m_110(t);
          }
      }
    }
  else
    {
      t = m_110(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL;
  ATerm u_110 (ATerm t)
  {
    ATerm t_110 = NULL;
    t = not_null(s_110);
    if(((t_110 != NULL) && (t_110 != t)))
      _fail(t);
    else
      t_110 = t;
    t = not_null(r_110);
    t = SSL_read_term_from_stream(not_null(t_110));
    return(t);
  }
  if(((r_110 != NULL) && (r_110 != t)))
    _fail(t);
  else
    r_110 = t;
  t = not_null(r_110);
  if(match_cons(t, sym_Stream_1))
    {
      s_110 = ATgetArgument(t, 0);
      t = u_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm n_40;
  n_40 = t;
  {
    ATerm x_110 = NULL,z_110 = NULL;
    ATerm o_40;
    o_40 = t;
    {
      ATerm y_110 = NULL;
      ATerm b_111 (ATerm t)
      {
        t = not_null(y_110);
        if(((x_110 != NULL) && (x_110 != t)))
          _fail(t);
        else
          x_110 = t;
        t = not_null(y_110);
        return(t);
      }
      t = j_137(t);
      if(((y_110 != NULL) && (y_110 != t)))
        _fail(t);
      else
        y_110 = t;
      t = b_111(t);
    }
    t = o_40;
    {
      ATerm a_111 = NULL;
      ATerm c_111 (ATerm t)
      {
        t = not_null(a_111);
        if(((z_110 != NULL) && (z_110 != t)))
          _fail(t);
        else
          z_110 = t;
        t = not_null(a_111);
        return(t);
      }
      if(((a_111 != NULL) && (a_111 != t)))
        _fail(t);
      else
        a_111 = t;
      t = c_111(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), not_null(x_110)));
      t = printnl_0_0(t);
    }
  }
  t = n_40;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL;
  ATerm n_111 (ATerm t)
  {
    ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL;
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
    t = not_null(g_111);
    t = SSL_fopen(not_null(j_111), not_null(k_111));
    {
      ATerm m_111 = NULL;
      ATerm o_111 (ATerm t)
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
      t = o_111(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_111));
    }
    return(t);
  }
  if(((g_111 != NULL) && (g_111 != t)))
    _fail(t);
  else
    g_111 = t;
  t = not_null(g_111);
  if(match_cons(t, sym__2))
    {
      h_111 = ATgetArgument(t, 0);
      i_111 = ATgetArgument(t, 1);
      t = n_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm q_111 = NULL;
  ATerm u_111 (ATerm t)
  {
    ATerm r_111 = NULL;
    t = not_null(q_111);
    if(((r_111 != NULL) && (r_111 != t)))
      _fail(t);
    else
      r_111 = t;
    t = not_null(q_111);
    t = SSL_is_string(not_null(r_111));
    return(t);
  }
  if(((q_111 != NULL) && (q_111 != t)))
    _fail(t);
  else
    q_111 = t;
  t = u_111(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_111 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_111 = NULL;
    ATerm y_111 (ATerm t)
    {
      t = not_null(x_111);
      if(((w_111 != NULL) && (w_111 != t)))
        _fail(t);
      else
        w_111 = t;
      t = not_null(x_111);
      return(t);
    }
    if(((x_111 != NULL) && (x_111 != t)))
      _fail(t);
    else
      x_111 = t;
    t = y_111(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_111));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_112 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_112 = NULL;
    ATerm c_112 (ATerm t)
    {
      t = not_null(b_112);
      if(((a_112 != NULL) && (a_112 != t)))
        _fail(t);
      else
        a_112 = t;
      t = not_null(b_112);
      return(t);
    }
    if(((b_112 != NULL) && (b_112 != t)))
      _fail(t);
    else
      b_112 = t;
    t = c_112(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_112));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_112 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_112 = NULL;
    ATerm g_112 (ATerm t)
    {
      t = not_null(f_112);
      if(((e_112 != NULL) && (e_112 != t)))
        _fail(t);
      else
        e_112 = t;
      t = not_null(f_112);
      return(t);
    }
    if(((f_112 != NULL) && (f_112 != t)))
      _fail(t);
    else
      f_112 = t;
    t = g_112(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_112));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_112 = NULL;
  ATerm m_112 (ATerm t)
  {
    t = not_null(l_112);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm n_112 (ATerm t)
  {
    t = not_null(l_112);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm o_112 (ATerm t)
  {
    t = not_null(l_112);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((l_112 != NULL) && (l_112 != t)))
    _fail(t);
  else
    l_112 = t;
  t = not_null(l_112);
  if(match_cons(t, sym_stderr_0))
    {
      t = m_112(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_112(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = o_112(t);
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
  ATerm v_112 = NULL;
  ATerm h_113 (ATerm t)
  {
    ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
    t = not_null(v_112);
    if(((w_112 != NULL) && (w_112 != t)))
      _fail(t);
    else
      w_112 = t;
    t = not_null(v_112);
    {
      ATerm z_112 = NULL;
      ATerm i_113 (ATerm t)
      {
        ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
        ATerm j_113 (ATerm t)
        {
          t = not_null(e_113);
          if(((y_112 != NULL) && (y_112 != t)))
            _fail(t);
          else
            y_112 = t;
          t = not_null(f_113);
          if(((x_112 != NULL) && (x_112 != t)))
            _fail(t);
          else
            x_112 = t;
          t = not_null(b_113);
          return(t);
        }
        t = not_null(z_112);
        if(((a_113 != NULL) && (a_113 != t)))
          _fail(t);
        else
          a_113 = t;
        t = not_null(z_112);
        t = SSL_explode_term(not_null(a_113));
        if(((b_113 != NULL) && (b_113 != t)))
          _fail(t);
        else
          b_113 = t;
        t = not_null(b_113);
        if(match_cons(t, sym__2))
          {
            c_113 = ATgetArgument(t, 0);
            d_113 = ATgetArgument(t, 1);
            t = not_null(c_113);
            if(match_string(t, ""))
              {
                t = not_null(d_113);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_113 = ATgetFirst((ATermList) t);
                    f_113 = (ATerm) ATgetNext((ATermList) t);
                    t = j_113(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(w_112);
      if(((z_112 != NULL) && (z_112 != t)))
        _fail(t);
      else
        z_112 = t;
      t = i_113(t);
      t = not_null(y_112);
    }
    return(t);
  }
  if(((v_112 != NULL) && (v_112 != t)))
    _fail(t);
  else
    v_112 = t;
  t = h_113(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL;
  ATerm u_113 (ATerm t)
  {
    t = not_null(o_113);
    {
      ATerm p_40 = t;
      int q_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(q_40);
        }
      else
        {
          t = p_40;
          {
            ATerm r_40 = t;
            int s_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm r_113 = NULL,s_113 = NULL;
                  ATerm x_113 (ATerm t)
                  {
                    ATerm t_113 = NULL;
                    t = not_null(s_113);
                    if(((t_113 != NULL) && (t_113 != t)))
                      _fail(t);
                    else
                      t_113 = t;
                    t = not_null(t_113);
                    return(t);
                  }
                  if(((r_113 != NULL) && (r_113 != t)))
                    _fail(t);
                  else
                    r_113 = t;
                  t = not_null(r_113);
                  if(match_cons(t, sym_Path_1))
                    {
                      s_113 = ATgetArgument(t, 0);
                      t = x_113(t);
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
                LocalPopChoice(s_40);
              }
            else
              {
                t = r_40;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
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
      q_113 = ATgetArgument(t, 1);
      t = u_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_114 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_114 = NULL;
      ATerm d_114 = NULL;
      ATerm g_114 (ATerm t)
      {
        t = not_null(d_114);
        if(((c_114 != NULL) && (c_114 != t)))
          _fail(t);
        else
          c_114 = t;
        t = not_null(d_114);
        return(t);
      }
      if(((d_114 != NULL) && (d_114 != t)))
        _fail(t);
      else
        d_114 = t;
      t = g_114(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_114), term_v_40);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm j_5 (ATerm t)
        {
          t = term_w_40;
          return(t);
        }
        t = debug_1_0(j_5, t);
        _fail(t);
      }
    }
  {
    ATerm x_40;
    x_40 = t;
    {
      ATerm f_114 = NULL;
      ATerm h_114 (ATerm t)
      {
        t = not_null(f_114);
        if(((e_114 != NULL) && (e_114 != t)))
          _fail(t);
        else
          e_114 = t;
        t = not_null(f_114);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((f_114 != NULL) && (f_114 != t)))
        _fail(t);
      else
        f_114 = t;
      t = h_114(t);
    }
    t = x_40;
    t = fclose_0_0(t);
    t = not_null(e_114);
  }
  return(t);
}
ATerm split_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm k_114 = NULL,m_114 = NULL;
  ATerm y_40;
  y_40 = t;
  {
    ATerm l_114 = NULL;
    ATerm o_114 (ATerm t)
    {
      t = not_null(l_114);
      if(((k_114 != NULL) && (k_114 != t)))
        _fail(t);
      else
        k_114 = t;
      t = not_null(l_114);
      return(t);
    }
    t = a_114(t);
    if(((l_114 != NULL) && (l_114 != t)))
      _fail(t);
    else
      l_114 = t;
    t = o_114(t);
  }
  t = y_40;
  {
    ATerm n_114 = NULL;
    ATerm p_114 (ATerm t)
    {
      t = not_null(n_114);
      if(((m_114 != NULL) && (m_114 != t)))
        _fail(t);
      else
        m_114 = t;
      t = not_null(n_114);
      return(t);
    }
    t = b_114(t);
    if(((n_114 != NULL) && (n_114 != t)))
      _fail(t);
    else
      n_114 = t;
    t = p_114(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_114), not_null(m_114));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm t_114 = NULL;
  ATerm z_40;
  z_40 = t;
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 (ATerm t)
        {
          ATerm u_114 = NULL,v_114 = NULL;
          ATerm x_114 (ATerm t)
          {
            t = not_null(v_114);
            if(((t_114 != NULL) && (t_114 != t)))
              _fail(t);
            else
              t_114 = t;
            t = not_null(u_114);
            return(t);
          }
          if(((u_114 != NULL) && (u_114 != t)))
            _fail(t);
          else
            u_114 = t;
          t = not_null(u_114);
          if(match_cons(t, sym_Input_1))
            {
              v_114 = ATgetArgument(t, 0);
              t = x_114(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(k_5, t);
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        {
          ATerm w_114 = NULL;
          ATerm y_114 (ATerm t)
          {
            t = not_null(w_114);
            if(((t_114 != NULL) && (t_114 != t)))
              _fail(t);
            else
              t_114 = t;
            t = not_null(w_114);
            return(t);
          }
          t = term_c_41;
          if(((w_114 != NULL) && (w_114 != t)))
            _fail(t);
          else
            w_114 = t;
          t = y_114(t);
        }
      }
  }
  t = z_40;
  {
    ATerm l_5 (ATerm t)
    {
      t = not_null(t_114);
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
    ATerm h_115 = NULL;
    if(((h_115 != NULL) && (h_115 != t)))
      _fail(t);
    else
      h_115 = t;
    t = not_null(h_115);
    if(match_string(t, "-k"))
      {
        t = not_null(h_115);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(h_115);
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
    ATerm d_41;
    d_41 = t;
    {
      ATerm i_115 = NULL;
      ATerm j_115 = NULL;
      ATerm k_115 (ATerm t)
      {
        t = not_null(j_115);
        if(((i_115 != NULL) && (i_115 != t)))
          _fail(t);
        else
          i_115 = t;
        t = not_null(j_115);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((j_115 != NULL) && (j_115 != t)))
        _fail(t);
      else
        j_115 = t;
      t = k_115(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_41, not_null(i_115));
      t = set_config_0_0(t);
    }
    t = d_41;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_f_41;
    return(t);
  }
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm m_115 = NULL;
  ATerm o_115 (ATerm t)
  {
    ATerm n_115 = NULL;
    t = not_null(m_115);
    if(((n_115 != NULL) && (n_115 != t)))
      _fail(t);
    else
      n_115 = t;
    t = not_null(m_115);
    t = SSL_string_to_int(not_null(n_115));
    return(t);
  }
  if(((m_115 != NULL) && (m_115 != t)))
    _fail(t);
  else
    m_115 = t;
  t = o_115(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_41 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm u_115 = NULL;
        if(((u_115 != NULL) && (u_115 != t)))
          _fail(t);
        else
          u_115 = t;
        t = not_null(u_115);
        if(match_string(t, "-S"))
          {
            t = not_null(u_115);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(u_115);
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
        t = term_n_42;
        t = set_config_0_0(t);
        t = term_r_42;
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_s_42;
        return(t);
      }
      t = Option_3_0(p_5, q_5, r_5, t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = x_41;
      {
        ATerm a_43 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm v_115 = NULL;
              if(((v_115 != NULL) && (v_115 != t)))
                _fail(t);
              else
                v_115 = t;
              t = not_null(v_115);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(v_115);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              ATerm y_115 = NULL;
              ATerm h_43;
              h_43 = t;
              {
                ATerm w_115 = NULL;
                ATerm x_115 = NULL;
                ATerm b_116 (ATerm t)
                {
                  t = not_null(x_115);
                  if(((w_115 != NULL) && (w_115 != t)))
                    _fail(t);
                  else
                    w_115 = t;
                  t = not_null(x_115);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((x_115 != NULL) && (x_115 != t)))
                  _fail(t);
                else
                  x_115 = t;
                t = b_116(t);
                t = (ATerm) ATmakeAppl(sym__2, term_z_39, not_null(w_115));
                t = set_config_0_0(t);
              }
              t = h_43;
              {
                ATerm z_115 = NULL;
                ATerm c_116 (ATerm t)
                {
                  t = not_null(z_115);
                  if(((y_115 != NULL) && (y_115 != t)))
                    _fail(t);
                  else
                    y_115 = t;
                  t = not_null(z_115);
                  return(t);
                }
                if(((z_115 != NULL) && (z_115 != t)))
                  _fail(t);
                else
                  z_115 = t;
                t = c_116(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_115));
              }
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_i_43;
              return(t);
            }
            t = ArgOption_3_0(s_5, t_5, u_5, t);
            ;
            LocalPopChoice(b_43);
          }
        else
          {
            t = a_43;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm a_116 = NULL;
                if(((a_116 != NULL) && (a_116 != t)))
                  _fail(t);
                else
                  a_116 = t;
                t = not_null(a_116);
                if(match_string(t, "-s"))
                  {
                    t = not_null(a_116);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_5 (ATerm t)
              {
                t = term_t_43;
                t = set_config_0_0(t);
                t = term_u_43;
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = term_v_43;
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
  ATerm w_43 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = w_43;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm g_116 = NULL;
    if(((g_116 != NULL) && (g_116 != t)))
      _fail(t);
    else
      g_116 = t;
    t = not_null(g_116);
    if(match_string(t, "-o"))
      {
        t = not_null(g_116);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(g_116);
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
    ATerm j_116 = NULL;
    ATerm k_44;
    k_44 = t;
    {
      ATerm h_116 = NULL;
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
      if(((i_116 != NULL) && (i_116 != t)))
        _fail(t);
      else
        i_116 = t;
      t = l_116(t);
      t = (ATerm) ATmakeAppl(sym__2, term_r_44, not_null(h_116));
      t = set_config_0_0(t);
    }
    t = k_44;
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
      if(((k_116 != NULL) && (k_116 != t)))
        _fail(t);
      else
        k_116 = t;
      t = m_116(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_116));
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_s_44;
    return(t);
  }
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm r_116 = NULL;
          if(((r_116 != NULL) && (r_116 != t)))
            _fail(t);
          else
            r_116 = t;
          t = not_null(r_116);
          if(match_string(t, "-b"))
            {
              t = not_null(r_116);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          t = term_w_44;
          t = set_config_0_0(t);
          t = term_x_44;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_y_44;
          return(t);
        }
        t = Option_3_0(b_6, c_6, d_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL;
  ATerm l_117 (ATerm t)
  {
    t = not_null(x_116);
    t = register_usage_1_0(m_0, t);
    return(t);
  }
  ATerm m_117 (ATerm t)
  {
    ATerm e_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL;
    t = not_null(y_116);
    if(((e_117 != NULL) && (e_117 != t)))
      _fail(t);
    else
      e_117 = t;
    t = not_null(c_117);
    if(((h_117 != NULL) && (h_117 != t)))
      _fail(t);
    else
      h_117 = t;
    t = not_null(d_117);
    if(((i_117 != NULL) && (i_117 != t)))
      _fail(t);
    else
      i_117 = t;
    t = not_null(x_116);
    {
      ATerm z_44;
      z_44 = t;
      t = not_null(e_117);
      t = h_0(t);
      t = z_44;
      {
        ATerm k_117 = NULL;
        ATerm n_117 (ATerm t)
        {
          t = not_null(k_117);
          if(((j_117 != NULL) && (j_117 != t)))
            _fail(t);
          else
            j_117 = t;
          t = not_null(k_117);
          return(t);
        }
        t = not_null(h_117);
        t = i_0(t);
        if(((k_117 != NULL) && (k_117 != t)))
          _fail(t);
        else
          k_117 = t;
        t = n_117(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(i_117)), not_null(j_117));
      }
    }
    return(t);
  }
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  t = not_null(x_116);
  if(match_string(t, "register-usage-info"))
    {
      t = l_117(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_116 = ATgetFirst((ATermList) t);
          b_117 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(b_117);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_117 = ATgetFirst((ATermList) t);
              d_117 = (ATerm) ATgetNext((ATermList) t);
              t = m_117(t);
            }
          else
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
    ATerm r_117 = NULL;
    if(((r_117 != NULL) && (r_117 != t)))
      _fail(t);
    else
      r_117 = t;
    t = not_null(r_117);
    if(match_string(t, "-i"))
      {
        t = not_null(r_117);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(r_117);
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
    ATerm u_117 = NULL;
    ATerm a_45;
    a_45 = t;
    {
      ATerm s_117 = NULL;
      ATerm t_117 = NULL;
      ATerm w_117 (ATerm t)
      {
        t = not_null(t_117);
        if(((s_117 != NULL) && (s_117 != t)))
          _fail(t);
        else
          s_117 = t;
        t = not_null(t_117);
        return(t);
      }
      if(((t_117 != NULL) && (t_117 != t)))
        _fail(t);
      else
        t_117 = t;
      t = w_117(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_45, not_null(s_117));
      t = set_config_0_0(t);
    }
    t = a_45;
    {
      ATerm v_117 = NULL;
      ATerm x_117 (ATerm t)
      {
        t = not_null(v_117);
        if(((u_117 != NULL) && (u_117 != t)))
          _fail(t);
        else
          u_117 = t;
        t = not_null(v_117);
        return(t);
      }
      if(((v_117 != NULL) && (v_117 != t)))
        _fail(t);
      else
        v_117 = t;
      t = x_117(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_117));
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
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_117 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm a_118 = NULL;
    ATerm b_118 (ATerm t)
    {
      t = not_null(a_118);
      if(((z_117 != NULL) && (z_117 != t)))
        _fail(t);
      else
        z_117 = t;
      t = not_null(a_118);
      return(t);
    }
    t = term_x_18;
    t = whoami_0_0(t);
    if(((a_118 != NULL) && (a_118 != t)))
      _fail(t);
    else
      a_118 = t;
    t = b_118(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATempty, term_e_46), not_null(z_117)));
    t = printnl_0_0(t);
    t = term_n_8;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_46;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm d_118 = NULL;
  ATerm f_118 (ATerm t)
  {
    ATerm e_118 = NULL;
    t = not_null(d_118);
    if(((e_118 != NULL) && (e_118 != t)))
      _fail(t);
    else
      e_118 = t;
    t = not_null(d_118);
    t = SSL_TicksToSeconds(not_null(e_118));
    return(t);
  }
  if(((d_118 != NULL) && (d_118 != t)))
    _fail(t);
  else
    d_118 = t;
  t = f_118(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
  ATerm n_118 (ATerm t)
  {
    ATerm l_118 = NULL,m_118 = NULL;
    t = not_null(j_118);
    if(((l_118 != NULL) && (l_118 != t)))
      _fail(t);
    else
      l_118 = t;
    t = not_null(k_118);
    if(((m_118 != NULL) && (m_118 != t)))
      _fail(t);
    else
      m_118 = t;
    t = not_null(i_118);
    {
      ATerm l_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(l_118), not_null(m_118));
          ;
          LocalPopChoice(m_46);
        }
      else
        {
          t = l_46;
          t = SSL_addr(not_null(l_118), not_null(m_118));
        }
    }
    return(t);
  }
  if(((i_118 != NULL) && (i_118 != t)))
    _fail(t);
  else
    i_118 = t;
  t = not_null(i_118);
  if(match_cons(t, sym__2))
    {
      j_118 = ATgetArgument(t, 0);
      k_118 = ATgetArgument(t, 1);
      t = n_118(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = o_121(t);
      ;
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL;
        ATerm a_119 (ATerm t)
        {
          ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
          t = not_null(s_118);
          if(((u_118 != NULL) && (u_118 != t)))
            _fail(t);
          else
            u_118 = t;
          t = not_null(t_118);
          if(((v_118 != NULL) && (v_118 != t)))
            _fail(t);
          else
            v_118 = t;
          t = not_null(r_118);
          {
            ATerm z_118 = NULL;
            ATerm d_119 (ATerm t)
            {
              t = not_null(z_118);
              if(((w_118 != NULL) && (w_118 != t)))
                _fail(t);
              else
                w_118 = t;
              t = not_null(z_118);
              return(t);
            }
            t = not_null(v_118);
            t = foldr_2_0(o_121, p_121, t);
            if(((z_118 != NULL) && (z_118 != t)))
              _fail(t);
            else
              z_118 = t;
            t = d_119(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_118), not_null(w_118));
            t = p_121(t);
          }
          return(t);
        }
        if(((r_118 != NULL) && (r_118 != t)))
          _fail(t);
        else
          r_118 = t;
        t = not_null(r_118);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_118 = ATgetFirst((ATermList) t);
            t_118 = (ATerm) ATgetNext((ATermList) t);
            t = a_119(t);
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
  ATerm k_119 = NULL;
  ATerm x_119 (ATerm t)
  {
    ATerm l_119 = NULL,r_119 = NULL;
    t = not_null(k_119);
    if(((l_119 != NULL) && (l_119 != t)))
      _fail(t);
    else
      l_119 = t;
    t = not_null(k_119);
    {
      ATerm s_119 = NULL;
      ATerm y_119 (ATerm t)
      {
        ATerm t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL;
        ATerm z_119 (ATerm t)
        {
          t = not_null(w_119);
          if(((r_119 != NULL) && (r_119 != t)))
            _fail(t);
          else
            r_119 = t;
          t = not_null(u_119);
          return(t);
        }
        t = not_null(s_119);
        if(((t_119 != NULL) && (t_119 != t)))
          _fail(t);
        else
          t_119 = t;
        t = not_null(s_119);
        t = SSL_explode_term(not_null(t_119));
        if(((u_119 != NULL) && (u_119 != t)))
          _fail(t);
        else
          u_119 = t;
        t = not_null(u_119);
        if(match_cons(t, sym__2))
          {
            v_119 = ATgetArgument(t, 0);
            w_119 = ATgetArgument(t, 1);
            t = z_119(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(l_119);
      if(((s_119 != NULL) && (s_119 != t)))
        _fail(t);
      else
        s_119 = t;
      t = y_119(t);
      t = not_null(r_119);
      t = foldr_2_0(m_119, n_119, t);
    }
    return(t);
  }
  if(((k_119 != NULL) && (k_119 != t)))
    _fail(t);
  else
    k_119 = t;
  t = x_119(t);
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
      t = term_m_8;
      return(t);
    }
    t = crush_2_0(h_6, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL;
  ATerm h_120 (ATerm t)
  {
    ATerm f_120 = NULL,g_120 = NULL;
    t = not_null(d_120);
    if(((f_120 != NULL) && (f_120 != t)))
      _fail(t);
    else
      f_120 = t;
    t = not_null(e_120);
    if(((g_120 != NULL) && (g_120 != t)))
      _fail(t);
    else
      g_120 = t;
    t = not_null(c_120);
    {
      ATerm p_46;
      p_46 = t;
      {
        ATerm x_46 = t;
        int y_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(f_120), not_null(g_120));
            ;
            LocalPopChoice(y_46);
          }
        else
          {
            t = x_46;
            t = SSL_gtr(not_null(f_120), not_null(g_120));
          }
      }
      t = p_46;
    }
    return(t);
  }
  if(((c_120 != NULL) && (c_120 != t)))
    _fail(t);
  else
    c_120 = t;
  t = not_null(c_120);
  if(match_cons(t, sym__2))
    {
      d_120 = ATgetArgument(t, 0);
      e_120 = ATgetArgument(t, 1);
      t = h_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_120 = NULL;
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL;
      ATerm o_120 (ATerm t)
      {
        t = not_null(m_120);
        if(((k_120 != NULL) && (k_120 != t)))
          _fail(t);
        else
          k_120 = t;
        t = not_null(n_120);
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
      if(match_cons(t, sym__2))
        {
          m_120 = ATgetArgument(t, 0);
          n_120 = ATgetArgument(t, 1);
          t = o_120(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm e_47;
    e_47 = t;
    {
      ATerm q_120 = NULL;
      ATerm r_120 = NULL;
      ATerm s_120 (ATerm t)
      {
        t = not_null(r_120);
        if(((q_120 != NULL) && (q_120 != t)))
          _fail(t);
        else
          q_120 = t;
        t = not_null(r_120);
        return(t);
      }
      t = term_z_39;
      t = get_config_0_0(t);
      if(((r_120 != NULL) && (r_120 != t)))
        _fail(t);
      else
        r_120 = t;
      t = s_120(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_120), term_n_8);
      t = geq_0_0(t);
    }
    t = e_47;
    t = s_130(t);
    return(t);
  }
  t = try_1_0(i_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm v_120 = NULL,x_120 = NULL;
    ATerm f_47;
    f_47 = t;
    {
      ATerm w_120 = NULL;
      ATerm z_120 (ATerm t)
      {
        t = not_null(w_120);
        if(((v_120 != NULL) && (v_120 != t)))
          _fail(t);
        else
          v_120 = t;
        t = not_null(w_120);
        return(t);
      }
      t = run_time_0_0(t);
      if(((w_120 != NULL) && (w_120 != t)))
        _fail(t);
      else
        w_120 = t;
      t = z_120(t);
    }
    t = f_47;
    {
      ATerm y_120 = NULL;
      ATerm a_121 (ATerm t)
      {
        t = not_null(y_120);
        if(((x_120 != NULL) && (x_120 != t)))
          _fail(t);
        else
          x_120 = t;
        t = not_null(y_120);
        return(t);
      }
      t = term_x_18;
      t = whoami_0_0(t);
      if(((y_120 != NULL) && (y_120 != t)))
        _fail(t);
      else
        y_120 = t;
      t = a_121(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_47), not_null(v_120)), term_g_47), not_null(x_120)));
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
  t = term_m_8;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm g_121 = NULL;
  ATerm m_121 (ATerm t)
  {
    ATerm h_121 = NULL,i_121 = NULL,k_121 = NULL;
    t = not_null(g_121);
    if(((h_121 != NULL) && (h_121 != t)))
      _fail(t);
    else
      h_121 = t;
    t = not_null(g_121);
    {
      ATerm i_47;
      i_47 = t;
      {
        ATerm j_121 = NULL;
        ATerm n_121 (ATerm t)
        {
          t = not_null(j_121);
          if(((i_121 != NULL) && (i_121 != t)))
            _fail(t);
          else
            i_121 = t;
          t = not_null(j_121);
          return(t);
        }
        t = SSLgetAnnotations(not_null(h_121));
        if(((j_121 != NULL) && (j_121 != t)))
          _fail(t);
        else
          j_121 = t;
        t = n_121(t);
      }
      t = i_47;
      {
        ATerm l_121 = NULL;
        ATerm t_121 (ATerm t)
        {
          t = not_null(l_121);
          if(((k_121 != NULL) && (k_121 != t)))
            _fail(t);
          else
            k_121 = t;
          t = not_null(l_121);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_121));
        if(((l_121 != NULL) && (l_121 != t)))
          _fail(t);
        else
          l_121 = t;
        t = t_121(t);
        t = not_null(k_121);
      }
    }
    return(t);
  }
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  t = not_null(g_121);
  if(match_cons(t, sym_Version_0))
    {
      t = m_121(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_133 (ATerm), ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_47;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm v_47 = t;
          int w_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(w_47);
            }
          else
            {
              t = v_47;
              {
                ATerm x_47 = t;
                int l_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(l_48);
                  }
                else
                  {
                    t = x_47;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = k_133(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_121 = NULL;
  ATerm x_121 (ATerm t)
  {
    ATerm w_121 = NULL;
    t = not_null(v_121);
    if(((w_121 != NULL) && (w_121 != t)))
      _fail(t);
    else
      w_121 = t;
    t = not_null(v_121);
    t = SSL_table_create(not_null(w_121));
    return(t);
  }
  if(((v_121 != NULL) && (v_121 != t)))
    _fail(t);
  else
    v_121 = t;
  t = x_121(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm z_121 = NULL;
  ATerm b_122 (ATerm t)
  {
    ATerm a_122 = NULL;
    t = not_null(z_121);
    if(((a_122 != NULL) && (a_122 != t)))
      _fail(t);
    else
      a_122 = t;
    t = not_null(z_121);
    {
      ATerm m_48;
      m_48 = t;
      t = term_n_48;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_n_48, term_o_48, not_null(a_122));
      t = table_put_0_0(t);
      t = m_48;
    }
    return(t);
  }
  if(((z_121 != NULL) && (z_121 != t)))
    _fail(t);
  else
    z_121 = t;
  t = b_122(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_122 = NULL;
  ATerm f_122 (ATerm t)
  {
    ATerm e_122 = NULL;
    t = not_null(d_122);
    if(((e_122 != NULL) && (e_122 != t)))
      _fail(t);
    else
      e_122 = t;
    t = not_null(d_122);
    t = SSL_table_destroy(not_null(e_122));
    return(t);
  }
  if(((d_122 != NULL) && (d_122 != t)))
    _fail(t);
  else
    d_122 = t;
  t = f_122(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm h_122 = NULL;
  ATerm j_122 (ATerm t)
  {
    ATerm i_122 = NULL;
    t = not_null(h_122);
    if(((i_122 != NULL) && (i_122 != t)))
      _fail(t);
    else
      i_122 = t;
    t = not_null(h_122);
    t = SSL_exit(not_null(i_122));
    return(t);
  }
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  t = j_122(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm k_122 (ATerm t)
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        t = Cons_2_0(p_116, k_122, t);
      }
    return(t);
  }
  t = k_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL;
  ATerm i_123 (ATerm t)
  {
    ATerm u_122 = NULL,a_123 = NULL,c_123 = NULL;
    t = not_null(r_122);
    if(((u_122 != NULL) && (u_122 != t)))
      _fail(t);
    else
      u_122 = t;
    t = not_null(s_122);
    if(((a_123 != NULL) && (a_123 != t)))
      _fail(t);
    else
      a_123 = t;
    t = not_null(a_123);
    {
      ATerm t_48;
      t_48 = t;
      {
        ATerm d_123 = NULL,f_123 = NULL,h_123 = NULL;
        ATerm m_123 (ATerm t)
        {
          t = not_null(h_123);
          if(((c_123 != NULL) && (c_123 != t)))
            _fail(t);
          else
            c_123 = t;
          t = not_null(h_123);
          return(t);
        }
        ATerm v_48;
        v_48 = t;
        {
          ATerm e_123 = NULL;
          ATerm k_123 (ATerm t)
          {
            t = not_null(e_123);
            if(((d_123 != NULL) && (d_123 != t)))
              _fail(t);
            else
              d_123 = t;
            t = not_null(e_123);
            return(t);
          }
          t = f_0(t);
          if(((e_123 != NULL) && (e_123 != t)))
            _fail(t);
          else
            e_123 = t;
          t = k_123(t);
        }
        t = v_48;
        {
          ATerm g_123 = NULL;
          ATerm l_123 (ATerm t)
          {
            t = not_null(g_123);
            if(((f_123 != NULL) && (f_123 != t)))
              _fail(t);
            else
              f_123 = t;
            t = not_null(g_123);
            return(t);
          }
          t = not_null(u_122);
          t = e_0(t);
          if(((g_123 != NULL) && (g_123 != t)))
            _fail(t);
          else
            g_123 = t;
          t = l_123(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(d_123)), not_null(f_123));
          if(((h_123 != NULL) && (h_123 != t)))
            _fail(t);
          else
            h_123 = t;
          t = m_123(t);
        }
      }
      t = t_48;
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(c_123);
          return(t);
        }
        t = reverse_acc_2_0(e_0, l_6, t);
      }
    }
    return(t);
  }
  ATerm j_123 (ATerm t)
  {
    t = term_x_18;
    t = f_0(t);
    return(t);
  }
  if(((t_122 != NULL) && (t_122 != t)))
    _fail(t);
  else
    t_122 = t;
  t = not_null(t_122);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_122 = ATgetFirst((ATermList) t);
      s_122 = (ATerm) ATgetNext((ATermList) t);
      t = i_123(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_123(t);
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
ATerm short_description_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm z_123 = NULL,c_124 = NULL;
  ATerm o_124 (ATerm t)
  {
    ATerm d_124 = NULL,e_124 = NULL,g_124 = NULL,k_124 = NULL;
    ATerm q_124 (ATerm t)
    {
      ATerm l_124 = NULL,m_124 = NULL;
      t = not_null(k_124);
      if(((l_124 != NULL) && (l_124 != t)))
        _fail(t);
      else
        l_124 = t;
      t = not_null(k_124);
      {
        ATerm n_124 = NULL;
        ATerm r_124 (ATerm t)
        {
          t = not_null(n_124);
          if(((m_124 != NULL) && (m_124 != t)))
            _fail(t);
          else
            m_124 = t;
          t = not_null(n_124);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_124)), not_null(g_124));
        if(((n_124 != NULL) && (n_124 != t)))
          _fail(t);
        else
          n_124 = t;
        t = r_124(t);
        t = not_null(m_124);
      }
      return(t);
    }
    t = not_null(z_123);
    if(((d_124 != NULL) && (d_124 != t)))
      _fail(t);
    else
      d_124 = t;
    t = not_null(c_124);
    if(((e_124 != NULL) && (e_124 != t)))
      _fail(t);
    else
      e_124 = t;
    t = not_null(z_123);
    {
      ATerm h_124 = NULL;
      ATerm p_124 (ATerm t)
      {
        t = not_null(h_124);
        if(((g_124 != NULL) && (g_124 != t)))
          _fail(t);
        else
          g_124 = t;
        t = not_null(h_124);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_124));
      if(((h_124 != NULL) && (h_124 != t)))
        _fail(t);
      else
        h_124 = t;
      t = p_124(t);
      t = not_null(e_124);
      t = b_107(t);
      if(((k_124 != NULL) && (k_124 != t)))
        _fail(t);
      else
        k_124 = t;
      t = q_124(t);
    }
    return(t);
  }
  if(((z_123 != NULL) && (z_123 != t)))
    _fail(t);
  else
    z_123 = t;
  t = not_null(z_123);
  if(match_cons(t, sym_Program_1))
    {
      c_124 = ATgetArgument(t, 0);
      t = o_124(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_124 = NULL;
  ATerm w_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_124 = NULL;
      ATerm e_125 (ATerm t)
      {
        t = not_null(x_124);
        if(((w_124 != NULL) && (w_124 != t)))
          _fail(t);
        else
          w_124 = t;
        t = not_null(x_124);
        return(t);
      }
      t = term_f_46;
      t = get_config_0_0(t);
      if(((x_124 != NULL) && (x_124 != t)))
        _fail(t);
      else
        x_124 = t;
      t = e_125(t);
      ;
      LocalPopChoice(a_49);
    }
  else
    {
      t = w_48;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm o_6 (ATerm t)
          {
            ATerm z_124 = NULL;
            ATerm f_125 (ATerm t)
            {
              t = not_null(z_124);
              if(((w_124 != NULL) && (w_124 != t)))
                _fail(t);
              else
                w_124 = t;
              t = not_null(z_124);
              return(t);
            }
            if(((z_124 != NULL) && (z_124 != t)))
              _fail(t);
            else
              z_124 = t;
            t = f_125(t);
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
        t = not_null(w_124);
        return(t);
      }
      t = short_description_1_0(q_6, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(p_6, t);
    t = term_b_49;
    t = echo_0_0(t);
    t = term_e_49;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm a_125 = NULL;
        ATerm b_125 = NULL;
        ATerm g_125 (ATerm t)
        {
          t = not_null(b_125);
          if(((a_125 != NULL) && (a_125 != t)))
            _fail(t);
          else
            a_125 = t;
          t = not_null(b_125);
          return(t);
        }
        if(((b_125 != NULL) && (b_125 != t)))
          _fail(t);
        else
          b_125 = t;
        t = g_125(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_125)), term_f_49);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_6, t);
      {
        ATerm s_6 (ATerm t)
        {
          ATerm c_125 = NULL;
          ATerm d_125 = NULL;
          ATerm h_125 (ATerm t)
          {
            t = not_null(d_125);
            if(((c_125 != NULL) && (c_125 != t)))
              _fail(t);
            else
              c_125 = t;
            t = not_null(d_125);
            return(t);
          }
          ATerm t_6 (ATerm t)
          {
            t = not_null(w_124);
            return(t);
          }
          t = long_description_1_0(t_6, t);
          if(((d_125 != NULL) && (d_125 != t)))
            _fail(t);
          else
            d_125 = t;
          t = h_125(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(c_125)), term_r_49);
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
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = s_49;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm n_125 = NULL,o_125 = NULL;
  ATerm b_126 (ATerm t)
  {
    ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,x_125 = NULL;
    ATerm d_126 (ATerm t)
    {
      ATerm y_125 = NULL,z_125 = NULL;
      t = not_null(x_125);
      if(((y_125 != NULL) && (y_125 != t)))
        _fail(t);
      else
        y_125 = t;
      t = not_null(x_125);
      {
        ATerm a_126 = NULL;
        ATerm e_126 (ATerm t)
        {
          t = not_null(a_126);
          if(((z_125 != NULL) && (z_125 != t)))
            _fail(t);
          else
            z_125 = t;
          t = not_null(a_126);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_125)), not_null(r_125));
        if(((a_126 != NULL) && (a_126 != t)))
          _fail(t);
        else
          a_126 = t;
        t = e_126(t);
        t = not_null(z_125);
      }
      return(t);
    }
    t = not_null(n_125);
    if(((p_125 != NULL) && (p_125 != t)))
      _fail(t);
    else
      p_125 = t;
    t = not_null(o_125);
    if(((q_125 != NULL) && (q_125 != t)))
      _fail(t);
    else
      q_125 = t;
    t = not_null(n_125);
    {
      ATerm w_125 = NULL;
      ATerm c_126 (ATerm t)
      {
        t = not_null(w_125);
        if(((r_125 != NULL) && (r_125 != t)))
          _fail(t);
        else
          r_125 = t;
        t = not_null(w_125);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_125));
      if(((w_125 != NULL) && (w_125 != t)))
        _fail(t);
      else
        w_125 = t;
      t = c_126(t);
      t = not_null(q_125);
      t = c_107(t);
      if(((x_125 != NULL) && (x_125 != t)))
        _fail(t);
      else
        x_125 = t;
      t = d_126(t);
    }
    return(t);
  }
  if(((n_125 != NULL) && (n_125 != t)))
    _fail(t);
  else
    n_125 = t;
  t = not_null(n_125);
  if(match_cons(t, sym_Undefined_1))
    {
      o_125 = ATgetArgument(t, 0);
      t = b_126(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm f_126 (ATerm t)
  {
    ATerm u_49 = t;
    int x_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_116, _id, t);
        ;
        LocalPopChoice(x_49);
      }
    else
      {
        t = u_49;
        t = Cons_2_0(_id, f_126, t);
      }
    return(t);
  }
  t = f_126(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  t = fetch_1_0(k_134, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm h_126 = NULL,i_126 = NULL,j_126 = NULL;
  if(((h_126 != NULL) && (h_126 != t)))
    _fail(t);
  else
    h_126 = t;
  t = not_null(h_126);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(h_126);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_126 = ATgetFirst((ATermList) t);
          j_126 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(h_126);
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
  ATerm y_49;
  y_49 = t;
  {
    ATerm m_126 = NULL;
    ATerm p_126 = NULL;
    ATerm r_126 (ATerm t)
    {
      t = not_null(p_126);
      if(((m_126 != NULL) && (m_126 != t)))
        _fail(t);
      else
        m_126 = t;
      t = not_null(p_126);
      return(t);
    }
    ATerm z_49 = t;
    int a_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(a_50);
      }
    else
      {
        t = z_49;
        {
          ATerm n_126 = NULL;
          ATerm o_126 = NULL;
          ATerm q_126 (ATerm t)
          {
            t = not_null(o_126);
            if(((n_126 != NULL) && (n_126 != t)))
              _fail(t);
            else
              n_126 = t;
            t = not_null(o_126);
            return(t);
          }
          if(((o_126 != NULL) && (o_126 != t)))
            _fail(t);
          else
            o_126 = t;
          t = q_126(t);
          t = (ATerm) ATinsert(ATempty, not_null(n_126));
        }
      }
    if(((p_126 != NULL) && (p_126 != t)))
      _fail(t);
    else
      p_126 = t;
    t = r_126(t);
    t = (ATerm) ATmakeAppl(sym__2, term_g_40, not_null(m_126));
    t = printnl_0_0(t);
  }
  t = y_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_46;
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
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(i_50);
    }
  else
    {
      t = h_50;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm w_126 = NULL;
  ATerm c_127 (ATerm t)
  {
    ATerm x_126 = NULL,y_126 = NULL,a_127 = NULL;
    t = not_null(w_126);
    if(((x_126 != NULL) && (x_126 != t)))
      _fail(t);
    else
      x_126 = t;
    t = not_null(w_126);
    {
      ATerm j_50;
      j_50 = t;
      {
        ATerm z_126 = NULL;
        ATerm d_127 (ATerm t)
        {
          t = not_null(z_126);
          if(((y_126 != NULL) && (y_126 != t)))
            _fail(t);
          else
            y_126 = t;
          t = not_null(z_126);
          return(t);
        }
        t = SSLgetAnnotations(not_null(x_126));
        if(((z_126 != NULL) && (z_126 != t)))
          _fail(t);
        else
          z_126 = t;
        t = d_127(t);
      }
      t = j_50;
      {
        ATerm b_127 = NULL;
        ATerm e_127 (ATerm t)
        {
          t = not_null(b_127);
          if(((a_127 != NULL) && (a_127 != t)))
            _fail(t);
          else
            a_127 = t;
          t = not_null(b_127);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_126));
        if(((b_127 != NULL) && (b_127 != t)))
          _fail(t);
        else
          b_127 = t;
        t = e_127(t);
        t = not_null(a_127);
      }
    }
    return(t);
  }
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = not_null(w_126);
  if(match_cons(t, sym_Help_0))
    {
      t = c_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_113(t);
      ;
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_50 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm h_127 = NULL;
        if(((h_127 != NULL) && (h_127 != t)))
          _fail(t);
        else
          h_127 = t;
        t = not_null(h_127);
        if(match_string(t, "--about"))
          {
            t = not_null(h_127);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = term_i_51;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_j_51;
        return(t);
      }
      t = Option_3_0(u_6, v_6, w_6, t);
      ;
      LocalPopChoice(g_51);
    }
  else
    {
      t = m_50;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm i_127 = NULL;
          if(((i_127 != NULL) && (i_127 != t)))
            _fail(t);
          else
            i_127 = t;
          t = not_null(i_127);
          if(match_string(t, "--version"))
            {
              t = not_null(i_127);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_6 (ATerm t)
        {
          t = term_i_51;
          t = set_config_0_0(t);
          t = term_x_51;
          t = set_config_0_0(t);
          t = term_a_52;
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = term_b_52;
          return(t);
        }
        t = Option_3_0(x_6, y_6, z_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
  ATerm s_127 (ATerm t)
  {
    ATerm q_127 = NULL,r_127 = NULL;
    t = not_null(o_127);
    if(((q_127 != NULL) && (q_127 != t)))
      _fail(t);
    else
      q_127 = t;
    t = not_null(p_127);
    if(((r_127 != NULL) && (r_127 != t)))
      _fail(t);
    else
      r_127 = t;
    t = not_null(n_127);
    t = SSL_table_get(not_null(q_127), not_null(r_127));
    return(t);
  }
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  t = not_null(n_127);
  if(match_cons(t, sym__2))
    {
      o_127 = ATgetArgument(t, 0);
      p_127 = ATgetArgument(t, 1);
      t = s_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_127 = NULL,x_127 = NULL,e_128 = NULL,f_128 = NULL;
  ATerm l_128 (ATerm t)
  {
    ATerm g_128 = NULL,h_128 = NULL,i_128 = NULL;
    t = not_null(x_127);
    if(((h_128 != NULL) && (h_128 != t)))
      _fail(t);
    else
      h_128 = t;
    t = not_null(e_128);
    if(((i_128 != NULL) && (i_128 != t)))
      _fail(t);
    else
      i_128 = t;
    t = not_null(f_128);
    if(((g_128 != NULL) && (g_128 != t)))
      _fail(t);
    else
      g_128 = t;
    t = not_null(w_127);
    {
      ATerm c_52;
      c_52 = t;
      {
        ATerm j_128 = NULL;
        ATerm k_128 = NULL;
        ATerm m_128 (ATerm t)
        {
          t = not_null(k_128);
          if(((j_128 != NULL) && (j_128 != t)))
            _fail(t);
          else
            j_128 = t;
          t = not_null(k_128);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_128), not_null(i_128));
        {
          ATerm d_52 = t;
          int e_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              t = (ATerm) ATempty;
            }
          if(((k_128 != NULL) && (k_128 != t)))
            _fail(t);
          else
            k_128 = t;
          t = m_128(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(h_128), not_null(i_128), (ATerm) ATinsert(CheckATermList(not_null(j_128)), not_null(g_128)));
        t = table_put_0_0(t);
      }
      t = c_52;
    }
    return(t);
  }
  if(((w_127 != NULL) && (w_127 != t)))
    _fail(t);
  else
    w_127 = t;
  t = not_null(w_127);
  if(match_cons(t, sym__3))
    {
      x_127 = ATgetArgument(t, 0);
      e_128 = ATgetArgument(t, 1);
      f_128 = ATgetArgument(t, 2);
      t = l_128(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm o_128 = NULL;
  ATerm p_128 = NULL;
  ATerm q_128 (ATerm t)
  {
    t = not_null(p_128);
    if(((o_128 != NULL) && (o_128 != t)))
      _fail(t);
    else
      o_128 = t;
    t = not_null(p_128);
    return(t);
  }
  t = term_x_18;
  t = p_135(t);
  if(((p_128 != NULL) && (p_128 != t)))
    _fail(t);
  else
    p_128 = t;
  t = q_128(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_49, term_d_49, not_null(o_128));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL;
  ATerm c_129 (ATerm t)
  {
    t = not_null(v_128);
    t = register_usage_1_0(c_0, t);
    return(t);
  }
  ATerm d_129 (ATerm t)
  {
    ATerm y_128 = NULL,z_128 = NULL,a_129 = NULL;
    t = not_null(w_128);
    if(((y_128 != NULL) && (y_128 != t)))
      _fail(t);
    else
      y_128 = t;
    t = not_null(x_128);
    if(((z_128 != NULL) && (z_128 != t)))
      _fail(t);
    else
      z_128 = t;
    t = not_null(v_128);
    {
      ATerm f_52;
      f_52 = t;
      t = not_null(y_128);
      t = a_0(t);
      t = f_52;
      {
        ATerm b_129 = NULL;
        ATerm e_129 (ATerm t)
        {
          t = not_null(b_129);
          if(((a_129 != NULL) && (a_129 != t)))
            _fail(t);
          else
            a_129 = t;
          t = not_null(b_129);
          return(t);
        }
        t = term_x_18;
        t = b_0(t);
        if(((b_129 != NULL) && (b_129 != t)))
          _fail(t);
        else
          b_129 = t;
        t = e_129(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(z_128)), not_null(a_129));
      }
    }
    return(t);
  }
  if(((v_128 != NULL) && (v_128 != t)))
    _fail(t);
  else
    v_128 = t;
  t = not_null(v_128);
  if(match_string(t, "register-usage-info"))
    {
      t = c_129(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_128 = ATgetFirst((ATermList) t);
          x_128 = (ATerm) ATgetNext((ATermList) t);
          t = d_129(t);
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
    ATerm g_129 = NULL;
    if(((g_129 != NULL) && (g_129 != t)))
      _fail(t);
    else
      g_129 = t;
    t = not_null(g_129);
    if(match_string(t, "--help"))
      {
        t = not_null(g_129);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(g_129);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(g_129);
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
    t = term_g_52;
    t = set_config_0_0(t);
    t = term_h_52;
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_b_53;
    return(t);
  }
  t = Option_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
  ATerm o_129 (ATerm t)
  {
    ATerm m_129 = NULL,n_129 = NULL;
    t = not_null(k_129);
    if(((m_129 != NULL) && (m_129 != t)))
      _fail(t);
    else
      m_129 = t;
    t = not_null(l_129);
    if(((n_129 != NULL) && (n_129 != t)))
      _fail(t);
    else
      n_129 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(n_129)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_129)));
    return(t);
  }
  if(((j_129 != NULL) && (j_129 != t)))
    _fail(t);
  else
    j_129 = t;
  t = not_null(j_129);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_129 = ATgetFirst((ATermList) t);
      l_129 = (ATerm) ATgetNext((ATermList) t);
      t = o_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm t)
{
  ATerm v_129 = NULL,w_129 = NULL,x_129 = NULL;
  ATerm j_130 (ATerm t)
  {
    ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL,d_130 = NULL;
    ATerm l_130 (ATerm t)
    {
      ATerm e_130 = NULL,f_130 = NULL;
      ATerm m_130 (ATerm t)
      {
        ATerm g_130 = NULL,h_130 = NULL;
        t = not_null(f_130);
        if(((g_130 != NULL) && (g_130 != t)))
          _fail(t);
        else
          g_130 = t;
        t = not_null(f_130);
        {
          ATerm i_130 = NULL;
          ATerm n_130 (ATerm t)
          {
            t = not_null(i_130);
            if(((h_130 != NULL) && (h_130 != t)))
              _fail(t);
            else
              h_130 = t;
            t = not_null(i_130);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_130)), not_null(e_130)), not_null(b_130));
          if(((i_130 != NULL) && (i_130 != t)))
            _fail(t);
          else
            i_130 = t;
          t = n_130(t);
          t = not_null(h_130);
        }
        return(t);
      }
      t = not_null(d_130);
      if(((e_130 != NULL) && (e_130 != t)))
        _fail(t);
      else
        e_130 = t;
      t = not_null(a_130);
      t = g_94(t);
      if(((f_130 != NULL) && (f_130 != t)))
        _fail(t);
      else
        f_130 = t;
      t = m_130(t);
      return(t);
    }
    t = not_null(v_129);
    if(((y_129 != NULL) && (y_129 != t)))
      _fail(t);
    else
      y_129 = t;
    t = not_null(w_129);
    if(((z_129 != NULL) && (z_129 != t)))
      _fail(t);
    else
      z_129 = t;
    t = not_null(x_129);
    if(((a_130 != NULL) && (a_130 != t)))
      _fail(t);
    else
      a_130 = t;
    t = not_null(v_129);
    {
      ATerm c_130 = NULL;
      ATerm k_130 (ATerm t)
      {
        t = not_null(c_130);
        if(((b_130 != NULL) && (b_130 != t)))
          _fail(t);
        else
          b_130 = t;
        t = not_null(c_130);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_129));
      if(((c_130 != NULL) && (c_130 != t)))
        _fail(t);
      else
        c_130 = t;
      t = k_130(t);
      t = not_null(z_129);
      t = f_94(t);
      if(((d_130 != NULL) && (d_130 != t)))
        _fail(t);
      else
        d_130 = t;
      t = l_130(t);
    }
    return(t);
  }
  if(((v_129 != NULL) && (v_129 != t)))
    _fail(t);
  else
    v_129 = t;
  t = not_null(v_129);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_129 = ATgetFirst((ATermList) t);
      x_129 = (ATerm) ATgetNext((ATermList) t);
      t = j_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm u_130 = NULL;
  ATerm a_131 (ATerm t)
  {
    ATerm v_130 = NULL,w_130 = NULL,y_130 = NULL;
    t = not_null(u_130);
    if(((v_130 != NULL) && (v_130 != t)))
      _fail(t);
    else
      v_130 = t;
    t = not_null(u_130);
    {
      ATerm c_53;
      c_53 = t;
      {
        ATerm x_130 = NULL;
        ATerm b_131 (ATerm t)
        {
          t = not_null(x_130);
          if(((w_130 != NULL) && (w_130 != t)))
            _fail(t);
          else
            w_130 = t;
          t = not_null(x_130);
          return(t);
        }
        t = SSLgetAnnotations(not_null(v_130));
        if(((x_130 != NULL) && (x_130 != t)))
          _fail(t);
        else
          x_130 = t;
        t = b_131(t);
      }
      t = c_53;
      {
        ATerm z_130 = NULL;
        ATerm c_131 (ATerm t)
        {
          t = not_null(z_130);
          if(((y_130 != NULL) && (y_130 != t)))
            _fail(t);
          else
            y_130 = t;
          t = not_null(z_130);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(w_130));
        if(((z_130 != NULL) && (z_130 != t)))
          _fail(t);
        else
          z_130 = t;
        t = c_131(t);
        t = not_null(y_130);
      }
    }
    return(t);
  }
  if(((u_130 != NULL) && (u_130 != t)))
    _fail(t);
  else
    u_130 = t;
  t = not_null(u_130);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL;
  ATerm k_131 (ATerm t)
  {
    ATerm i_131 = NULL,j_131 = NULL;
    t = not_null(g_131);
    if(((i_131 != NULL) && (i_131 != t)))
      _fail(t);
    else
      i_131 = t;
    t = not_null(h_131);
    if(((j_131 != NULL) && (j_131 != t)))
      _fail(t);
    else
      j_131 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_w_39, not_null(i_131), not_null(j_131));
    t = table_put_0_0(t);
    return(t);
  }
  if(((f_131 != NULL) && (f_131 != t)))
    _fail(t);
  else
    f_131 = t;
  t = not_null(f_131);
  if(match_cons(t, sym__2))
    {
      g_131 = ATgetArgument(t, 0);
      h_131 = ATgetArgument(t, 1);
      t = k_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm d_53;
  d_53 = t;
  {
    ATerm d_7 (ATerm t)
    {
      t = term_e_53;
      t = n_135(t);
      return(t);
    }
    t = try_1_0(d_7, t);
  }
  t = d_53;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm p_131 = NULL;
      ATerm f_53;
      f_53 = t;
      {
        ATerm n_131 = NULL;
        ATerm o_131 = NULL;
        ATerm r_131 (ATerm t)
        {
          t = not_null(o_131);
          if(((n_131 != NULL) && (n_131 != t)))
            _fail(t);
          else
            n_131 = t;
          t = not_null(o_131);
          return(t);
        }
        if(((o_131 != NULL) && (o_131 != t)))
          _fail(t);
        else
          o_131 = t;
        t = r_131(t);
        t = (ATerm) ATmakeAppl(sym__2, term_f_46, not_null(n_131));
        t = set_config_0_0(t);
      }
      t = f_53;
      {
        ATerm q_131 = NULL;
        ATerm s_131 (ATerm t)
        {
          t = not_null(q_131);
          if(((p_131 != NULL) && (p_131 != t)))
            _fail(t);
          else
            p_131 = t;
          t = not_null(q_131);
          return(t);
        }
        if(((q_131 != NULL) && (q_131 != t)))
          _fail(t);
        else
          q_131 = t;
        t = s_131(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_131));
      }
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm g_53 = t;
      int h_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_53 = t;
          int j_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(j_53);
            }
          else
            {
              t = i_53;
              t = n_135(t);
              t = Cons_2_0(_id, f_7, t);
            }
          ;
          LocalPopChoice(h_53);
        }
      else
        {
          t = g_53;
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
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL;
  ATerm k_53;
  k_53 = t;
  {
    ATerm z_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL;
    ATerm d_132 (ATerm t)
    {
      t = not_null(a_132);
      if(((w_131 != NULL) && (w_131 != t)))
        _fail(t);
      else
        w_131 = t;
      t = not_null(b_132);
      if(((x_131 != NULL) && (x_131 != t)))
        _fail(t);
      else
        x_131 = t;
      t = not_null(c_132);
      if(((y_131 != NULL) && (y_131 != t)))
        _fail(t);
      else
        y_131 = t;
      t = not_null(z_131);
      t = SSL_table_put(not_null(w_131), not_null(x_131), not_null(y_131));
      return(t);
    }
    if(((z_131 != NULL) && (z_131 != t)))
      _fail(t);
    else
      z_131 = t;
    t = not_null(z_131);
    if(match_cons(t, sym__3))
      {
        a_132 = ATgetArgument(t, 0);
        b_132 = ATgetArgument(t, 1);
        c_132 = ATgetArgument(t, 2);
        t = d_132(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = k_53;
  return(t);
}
ATerm parse_options_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm f_132 = NULL;
  ATerm l_53;
  l_53 = t;
  t = term_m_53;
  t = table_put_0_0(t);
  t = l_53;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm n_53 = t;
      int o_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_135(t);
          ;
          LocalPopChoice(o_53);
        }
      else
        {
          t = n_53;
          {
            ATerm p_53 = t;
            int q_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(q_53);
              }
            else
              {
                t = p_53;
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
        ATerm r_53 = t;
        int s_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_53;
            t_53 = t;
            {
              ATerm w_53 = t;
              int x_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_47;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(x_53);
                }
              else
                {
                  t = w_53;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = t_53;
            t = system_usage_0_0(t);
            t = term_m_8;
            t = exit_0_0(t);
            ;
            LocalPopChoice(s_53);
          }
        else
          {
            t = r_53;
            {
              ATerm y_53 = t;
              int z_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_54;
                  a_54 = t;
                  t = term_h_51;
                  t = get_config_0_0(t);
                  t = a_54;
                  t = system_about_0_0(t);
                  t = term_m_8;
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
                        ATerm g_132 = NULL;
                        ATerm h_132 (ATerm t)
                        {
                          t = not_null(g_132);
                          if(((f_132 != NULL) && (f_132 != t)))
                            _fail(t);
                          else
                            f_132 = t;
                          t = not_null(g_132);
                          return(t);
                        }
                        if(((g_132 != NULL) && (g_132 != t)))
                          _fail(t);
                        else
                          g_132 = t;
                        t = h_132(t);
                        return(t);
                      }
                      t = Undefined_1_0(j_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(i_7, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_132)), term_b_54));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_n_8;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(h_7, t);
      {
        ATerm g_54;
        g_54 = t;
        t = term_c_49;
        t = table_destroy_0_0(t);
        t = g_54;
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
    ATerm h_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_133, t);
        ;
        LocalPopChoice(v_54);
      }
    else
      {
        t = h_54;
        {
          ATerm w_54 = t;
          int x_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_54);
            }
          else
            {
              t = w_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_133(t);
        ;
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_7, d_133, e_133, l_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm h_55;
      h_55 = t;
      {
        ATerm j_132 = NULL;
        ATerm k_132 = NULL;
        ATerm l_132 (ATerm t)
        {
          t = not_null(k_132);
          if(((j_132 != NULL) && (j_132 != t)))
            _fail(t);
          else
            j_132 = t;
          t = not_null(k_132);
          return(t);
        }
        t = term_f_46;
        t = get_config_0_0(t);
        if(((k_132 != NULL) && (k_132 != t)))
          _fail(t);
        else
          k_132 = t;
        t = l_132(t);
        t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATempty, not_null(j_132)));
        t = printnl_0_0(t);
      }
      t = h_55;
      return(t);
    }
    t = if_verbose2_1_0(n_7, t);
    return(t);
  }
  t = iowrap_4_0(v_132, w_132, x_132, m_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_132, u_132, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = _2_0(_id, q_132, t);
    return(t);
  }
  t = iowrap_2_0(o_7, _fail, t);
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
