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
ATerm term_d_39;
ATerm term_q_38;
ATerm term_i_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_c_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_z_19;
ATerm term_e_19;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_a_16;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_t_7;
void init_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Op_2, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_n_8);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_8);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_g_15);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_g_15);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_m_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_g_15);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_g_15);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_g_15);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__3, term_l_36, term_m_36, (ATerm) ATempty);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_111 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm length_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm i_110 (ATerm));
ATerm Rec_2 (ATerm, ATerm h_100 (ATerm), ATerm i_100 (ATerm));
ATerm SDef_3 (ATerm, ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm));
ATerm Let_2 (ATerm, ATerm k_99 (ATerm), ATerm l_99 (ATerm));
ATerm sboundin_3 (ATerm, ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm e_110 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm r_98 (ATerm));
ATerm RDefT_4 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm tboundin_3 (ATerm, ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_119 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_119 (ATerm), ATerm w_119 (ATerm));
ATerm diff_1 (ATerm, ATerm n_119 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_128 (ATerm), ATerm p_128 (ATerm));
ATerm for_3 (ATerm, ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm q_124 (ATerm), ATerm r_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm k_124 (ATerm), ATerm l_124 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_124 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_125 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_124 (ATerm));
ATerm rename_4 (ATerm, ATerm f_124 (ATerm, ATerm (ATerm)), ATerm g_124 (ATerm), ATerm h_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_124 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_123 (ATerm));
ATerm InlineCall0_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm l_114 (ATerm), ATerm m_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_123 (ATerm));
ATerm scope_2 (ATerm, ATerm n_123 (ATerm), ATerm o_123 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_123 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm));
ATerm crush_3 (ATerm, ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm));
ATerm term_size_0 (ATerm);
ATerm GuardedLChoice_3 (ATerm, ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm));
ATerm LChoice_2 (ATerm, ATerm a_100 (ATerm), ATerm b_100 (ATerm));
ATerm Choice_2 (ATerm, ATerm y_98 (ATerm), ATerm z_98 (ATerm));
ATerm Cong_2 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm Match_1 (ATerm, ATerm r_99 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm Scope_2 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm));
ATerm Build_1 (ATerm, ATerm s_99 (ATerm));
ATerm SVar_1 (ATerm, ATerm j_99 (ATerm));
ATerm CallT_3 (ATerm, ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t_115 (ATerm));
ATerm zip_1 (ATerm, ATerm v_115 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm r_96 (ATerm), ATerm s_96 (ATerm));
ATerm PrimT_3 (ATerm, ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm));
ATerm Explode_2 (ATerm, ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm Op_2 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm));
ATerm pat_td_1 (ATerm, ATerm p_136 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm i_112 (ATerm));
ATerm LetHoist_0 (ATerm);
ATerm LetNoDefs_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm o_0 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm z_127 (ATerm));
ATerm downup_1 (ATerm, ATerm g_111 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_95 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_95 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_117 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_131 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm n_138 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_133 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_137 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_114 (ATerm), ATerm r_114 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_122 (ATerm), ATerm f_122 (ATerm));
ATerm crush_2 (ATerm, ATerm c_120 (ATerm), ATerm d_120 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_131 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_134 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_136 (ATerm));
ATerm map_1 (ATerm, ATerm f_117 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_136 (ATerm));
ATerm Program_1 (ATerm, ATerm r_107 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_117 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_135 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_113 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_136 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_94 (ATerm), ATerm w_94 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_136 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_136 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_133 (ATerm), ATerm k_133 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_133 (ATerm));
ATerm inline_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,o_8 = NULL,p_8 = NULL;
  y_7 = t;
  n_5 :
  if(match_cons(y_7, sym_CallT_3))
    {
      z_7 = ATgetArgument(y_7, 0);
      o_8 = ATgetArgument(y_7, 1);
      p_8 = ATgetArgument(y_7, 2);
      o_5 :
      if(match_cons(z_7, sym_SVar_1))
        {
          a_8 = ATgetArgument(z_7, 0);
          {
            ATerm h_9 = NULL;
            ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_8)), (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_t_7;
                return(t);
              }
              t = rewrite_1(t, f_0);
              {
                i_9 = t;
                i_5 :
                if(match_cons(i_9, sym_Defined_2))
                  {
                    j_9 = ATgetArgument(i_9, 0);
                    k_9 = ATgetArgument(i_9, 1);
                    m_5 :
                    if(match_string(j_9, "n_0"))
                      {
                        if(((h_9 != NULL) && (h_9 != k_9)))
                          _fail(k_9);
                        else
                          h_9 = k_9;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_9)), not_null(o_8), not_null(p_8));
          }
        }
      else
        {
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  v_9 = t;
  r_9 :
  if(match_cons(v_9, sym_CallT_3))
    {
      w_9 = ATgetArgument(v_9, 0);
      y_9 = ATgetArgument(v_9, 1);
      z_9 = ATgetArgument(v_9, 2);
      s_9 :
      if(match_cons(w_9, sym_SVar_1))
        {
          x_9 = ATgetArgument(w_9, 0);
          t_9 :
          if(((ATgetType(y_9) == AT_LIST) && ATisEmpty(y_9)))
            {
              u_9 :
              if(((ATgetType(z_9) == AT_LIST) && ATisEmpty(z_9)))
                {
                  {
                    ATerm c_10 = NULL;
                    ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
                    t = not_null(v_9);
                    {
                      ATerm h_0 (ATerm t)
                      {
                        t = term_u_7;
                        return(t);
                      }
                      t = rewrite_1(t, h_0);
                      {
                        d_10 = t;
                        p_9 :
                        if(match_cons(d_10, sym_Defined_2))
                          {
                            e_10 = ATgetArgument(d_10, 0);
                            f_10 = ATgetArgument(d_10, 1);
                            q_9 :
                            if(match_string(e_10, "k_0"))
                              {
                                if(((c_10 != NULL) && (c_10 != f_10)))
                                  _fail(f_10);
                                else
                                  c_10 = f_10;
                              }
                            else
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
                      t = not_null(c_10);
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
ATerm topdown_1 (ATerm t, ATerm e_111 (ATerm))
{
  t = e_111(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, e_111);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  z_10 = t;
  k_10 :
  if(match_cons(z_10, sym__2))
    {
      a_11 = ATgetArgument(z_10, 0);
      h_11 = ATgetArgument(z_10, 1);
      l_10 :
      if(match_cons(a_11, sym_VarDec_2))
        {
          b_11 = ATgetArgument(a_11, 0);
          c_11 = ATgetArgument(a_11, 1);
          m_10 :
          if(match_cons(c_11, sym_FunType_2))
            {
              d_11 = ATgetArgument(c_11, 0);
              g_11 = ATgetArgument(c_11, 1);
              n_10 :
              if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
                {
                  e_11 = ATgetFirst((ATermList) d_11);
                  f_11 = (ATerm) ATgetNext((ATermList) d_11);
                  o_10 :
                  if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
                    {
                      t_10 = ATgetFirst((ATermList) f_11);
                      u_10 = (ATerm) ATgetNext((ATermList) f_11);
                      p_10 :
                      if(match_cons(h_11, sym_CallT_3))
                        {
                          v_10 = ATgetArgument(h_11, 0);
                          x_10 = ATgetArgument(h_11, 1);
                          y_10 = ATgetArgument(h_11, 2);
                          q_10 :
                          if(match_cons(v_10, sym_SVar_1))
                            {
                              w_10 = ATgetArgument(v_10, 0);
                              r_10 :
                              if(((ATgetType(x_10) == AT_LIST) && ATisEmpty(x_10)))
                                {
                                  s_10 :
                                  if(((ATgetType(y_10) == AT_LIST) && ATisEmpty(y_10)))
                                    {
                                      {
                                        ATerm v_7;
                                        v_7 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_7, not_null(w_10)));
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
                      if(((ATgetType(f_11) == AT_LIST) && ATisEmpty(f_11)))
                        {
                          {
                            ATerm x_7;
                            x_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_8, not_null(h_11)));
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
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
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
      ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
      t_11 = t;
      p_11 :
      if(match_cons(t_11, sym__3))
        {
          u_11 = ATgetArgument(t_11, 0);
          v_11 = ATgetArgument(t_11, 1);
          w_11 = ATgetArgument(t_11, 2);
          {
            if(((q_11 != NULL) && (q_11 != u_11)))
              _fail(u_11);
            else
              q_11 = u_11;
            {
              if(((r_11 != NULL) && (r_11 != v_11)))
                _fail(v_11);
              else
                r_11 = v_11;
              {
                if(((s_11 != NULL) && (s_11 != w_11)))
                  _fail(w_11);
                else
                  s_11 = w_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(r_11));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(s_11);
                      {
                        ATerm x_0 (ATerm t)
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm c_8 = t;
                            int d_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(d_8);
                              }
                            else
                              {
                                t = c_8;
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
ATerm InlineCall_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  x_12 = t;
  v_12 :
  if(match_cons(x_12, sym_CallT_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      a_13 = ATgetArgument(x_12, 1);
      b_13 = ATgetArgument(x_12, 2);
      w_12 :
      if(match_cons(y_12, sym_SVar_1))
        {
          z_12 = ATgetArgument(y_12, 0);
          {
            ATerm e_8 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_g_8;
                    return(t);
                  }
                  t = rewrite_1(t, z_0);
                  {
                    e_13 = t;
                    d_12 :
                    if(match_cons(e_13, sym_Undefined_0))
                      {
                        _fail(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = term_h_8;
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
                      ATerm h_13 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = term_g_8;
                          return(t);
                        }
                        t = rewrite_1(t, a_1);
                        {
                          h_13 = t;
                          f_12 :
                          if(match_cons(h_13, sym_Undefined_0))
                            {
                              _fail(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                      t = term_h_8;
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
                            ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
                            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                            {
                              ATerm b_1 (ATerm t)
                              {
                                t = term_g_8;
                                return(t);
                              }
                              t = rewrite_1(t, b_1);
                              {
                                t_13 = t;
                                r_12 :
                                if(match_cons(t_13, sym_Defined_2))
                                  {
                                    u_13 = ATgetArgument(t_13, 0);
                                    v_13 = ATgetArgument(t_13, 1);
                                    s_12 :
                                    if(match_string(u_13, "d_0"))
                                      {
                                        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
                                        if(((m_13 != NULL) && (m_13 != v_13)))
                                          _fail(v_13);
                                        else
                                          m_13 = v_13;
                                        {
                                          t = not_null(m_13);
                                          {
                                            t = strename_0(t);
                                            {
                                              w_13 = t;
                                              q_12 :
                                              if(match_cons(w_13, sym_SDefT_4))
                                                {
                                                  x_13 = ATgetArgument(w_13, 0);
                                                  y_13 = ATgetArgument(w_13, 1);
                                                  z_13 = ATgetArgument(w_13, 2);
                                                  a_14 = ATgetArgument(w_13, 3);
                                                  {
                                                    ATerm b_14 = NULL;
                                                    if(((z_12 != NULL) && (z_12 != x_13)))
                                                      _fail(x_13);
                                                    else
                                                      z_12 = x_13;
                                                    {
                                                      if(((n_13 != NULL) && (n_13 != y_13)))
                                                        _fail(y_13);
                                                      else
                                                        n_13 = y_13;
                                                      {
                                                        if(((p_13 != NULL) && (p_13 != z_13)))
                                                          _fail(z_13);
                                                        else
                                                          p_13 = z_13;
                                                        {
                                                          if(((o_13 != NULL) && (o_13 != a_14)))
                                                            _fail(a_14);
                                                          else
                                                            o_13 = a_14;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(n_13), not_null(a_13), not_null(o_13));
                                                            {
                                                              ATerm g_14 = NULL;
                                                              t = substitute_args_0(t);
                                                              {
                                                                b_14 = t;
                                                                {
                                                                  if(((r_13 != NULL) && (r_13 != b_14)))
                                                                    _fail(b_14);
                                                                  else
                                                                    r_13 = b_14;
                                                                  {
                                                                    t = not_null(p_13);
                                                                    {
                                                                      ATerm h_14 = NULL,o_14 = NULL;
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
                                                                        c_14 = t;
                                                                        k_12 :
                                                                        if(match_cons(c_14, sym_VarDec_2))
                                                                          {
                                                                            d_14 = ATgetArgument(c_14, 0);
                                                                            e_14 = ATgetArgument(c_14, 1);
                                                                            t = not_null(d_14);
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                        return(t);
                                                                      }
                                                                      t = map_1(t, c_1);
                                                                      {
                                                                        g_14 = t;
                                                                        {
                                                                          if(((q_13 != NULL) && (q_13 != g_14)))
                                                                            _fail(g_14);
                                                                          else
                                                                            q_13 = g_14;
                                                                          {
                                                                            ATerm n_14 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), not_null(q_13));
                                                                            {
                                                                              ATerm d_1 (ATerm t)
                                                                              {
                                                                                ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                                                                                i_14 = t;
                                                                                n_12 :
                                                                                if(match_cons(i_14, sym__2))
                                                                                  {
                                                                                    j_14 = ATgetArgument(i_14, 0);
                                                                                    k_14 = ATgetArgument(i_14, 1);
                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_14)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_14))));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, d_1);
                                                                              {
                                                                                n_14 = t;
                                                                                if(((h_14 != NULL) && (h_14 != n_14)))
                                                                                  _fail(n_14);
                                                                                else
                                                                                  h_14 = n_14;
                                                                              }
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_14)), not_null(r_13)));
                                                                              {
                                                                                o_14 = t;
                                                                                {
                                                                                  if(((s_13 != NULL) && (s_13 != o_14)))
                                                                                    _fail(o_14);
                                                                                  else
                                                                                    s_13 = o_14;
                                                                                  {
                                                                                    ATerm m_8;
                                                                                    m_8 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty), term_h_8);
                                                                                      {
                                                                                        ATerm e_1 (ATerm t)
                                                                                        {
                                                                                          t = term_g_8;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, e_1);
                                                                                      }
                                                                                    }
                                                                                    t = m_8;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
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
                            {
                              t = not_null(s_13);
                              t = simplify0_0(t);
                            }
                            ;
                            LocalPopChoice(l_8);
                          }
                        else
                          {
                            t = k_8;
                            {
                              ATerm t_14 = NULL;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = term_g_8;
                                  return(t);
                                }
                                t = rewrite_1(t, f_1);
                                {
                                  t_14 = t;
                                  u_12 :
                                  if(match_cons(t_14, sym_Undefined_0))
                                    {
                                      _fail(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              }
                              t = term_h_8;
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
ATerm length_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_q_8;
    return(t);
  }
  t = foldr_3(t, g_1, add_0, h_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        t = split_2(t, _id, i_110);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
            n_15 = t;
            l_15 :
            if(match_cons(n_15, sym__2))
              {
                o_15 = ATgetArgument(n_15, 0);
                t_15 = ATgetArgument(n_15, 1);
                m_15 :
                if(match_cons(o_15, sym_SDef_3))
                  {
                    p_15 = ATgetArgument(o_15, 0);
                    q_15 = ATgetArgument(o_15, 1);
                    r_15 = ATgetArgument(o_15, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_15), not_null(q_15), not_null(r_15));
                  }
                else
                  {
                    if(match_cons(o_15, sym_SDefT_4))
                      {
                        p_15 = ATgetArgument(o_15, 0);
                        q_15 = ATgetArgument(o_15, 1);
                        r_15 = ATgetArgument(o_15, 2);
                        s_15 = ATgetArgument(o_15, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_15), not_null(q_15), not_null(r_15), not_null(s_15));
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
          t = zip_1(t, j_1);
        }
        return(t);
      }
      t = Let_2(t, i_1, _id);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = split_2(t, _id, i_110);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, k_1, _id);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            {
              ATerm v_8 = t;
              int w_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = split_2(t, _id, i_110);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, l_1, _id, _id);
                  ;
                  LocalPopChoice(w_8);
                }
              else
                {
                  t = v_8;
                  {
                    ATerm x_8 = t;
                    int y_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = split_2(t, _id, i_110);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, m_1, _id, _id);
                        ;
                        LocalPopChoice(y_8);
                      }
                    else
                      {
                        t = x_8;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            t = i_110(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, n_1, _id);
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
ATerm Rec_2 (ATerm t, ATerm h_100 (ATerm), ATerm i_100 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Rec_2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm p_16 = NULL,r_16 = NULL;
        ATerm q_16 = NULL;
        t = SSLgetAnnotations(not_null(j_16));
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
        {
          t = not_null(k_16);
          {
            ATerm t_16 = NULL;
            t = h_100(t);
            {
              r_16 = t;
              {
                t = not_null(l_16);
                {
                  ATerm v_16 = NULL;
                  t = i_100(t);
                  {
                    t_16 = t;
                    {
                      ATerm w_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(r_16), not_null(t_16)), not_null(p_16));
                      {
                        w_16 = t;
                        if(((v_16 != NULL) && (v_16 != w_16)))
                          _fail(w_16);
                        else
                          v_16 = w_16;
                      }
                      t = not_null(v_16);
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
ATerm SDef_3 (ATerm t, ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_SDef_3))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      m_17 = ATgetArgument(j_17, 2);
      {
        ATerm r_17 = NULL,t_17 = NULL;
        ATerm s_17 = NULL;
        t = SSLgetAnnotations(not_null(j_17));
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
        {
          t = not_null(k_17);
          {
            ATerm v_17 = NULL;
            t = z_101(t);
            {
              t_17 = t;
              {
                t = not_null(l_17);
                {
                  ATerm x_17 = NULL;
                  t = a_102(t);
                  {
                    v_17 = t;
                    {
                      t = not_null(m_17);
                      {
                        ATerm z_17 = NULL;
                        t = b_102(t);
                        {
                          x_17 = t;
                          {
                            ATerm a_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(t_17), not_null(v_17), not_null(x_17)), not_null(r_17));
                            {
                              a_18 = t;
                              if(((z_17 != NULL) && (z_17 != a_18)))
                                _fail(a_18);
                              else
                                z_17 = a_18;
                            }
                            t = not_null(z_17);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm k_99 (ATerm), ATerm l_99 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_Let_2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm t_18 = NULL,v_18 = NULL;
        ATerm u_18 = NULL;
        t = SSLgetAnnotations(not_null(n_18));
        {
          u_18 = t;
          if(((t_18 != NULL) && (t_18 != u_18)))
            _fail(u_18);
          else
            t_18 = u_18;
        }
        {
          t = not_null(o_18);
          {
            ATerm x_18 = NULL;
            t = k_99(t);
            {
              v_18 = t;
              {
                t = not_null(p_18);
                {
                  ATerm z_18 = NULL;
                  t = l_99(t);
                  {
                    x_18 = t;
                    {
                      ATerm a_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(v_18), not_null(x_18)), not_null(t_18));
                      {
                        a_19 = t;
                        if(((z_18 != NULL) && (z_18 != a_19)))
                          _fail(a_19);
                        else
                          z_18 = a_19;
                      }
                      t = not_null(z_18);
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
ATerm sboundin_3 (ATerm t, ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, j_110, j_110);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, l_110, l_110, j_110);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm d_9 = t;
              int e_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, l_110, l_110, l_110, j_110);
                  ;
                  LocalPopChoice(e_9);
                }
              else
                {
                  t = d_9;
                  t = Rec_2(t, l_110, j_110);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_RDefT_4))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      l_19 = ATgetArgument(i_19, 2);
      m_19 = ATgetArgument(i_19, 3);
      {
        t = not_null(k_19);
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
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_SDefT_4))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      x_19 = ATgetArgument(u_19, 2);
      y_19 = ATgetArgument(u_19, 3);
      {
        t = not_null(w_19);
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
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_Rec_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_SDef_3))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      r_20 = ATgetArgument(o_20, 2);
      {
        t = not_null(q_20);
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
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_Let_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        t = not_null(c_21);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
            g_21 = t;
            z_20 :
            if(match_cons(g_21, sym_SDef_3))
              {
                h_21 = ATgetArgument(g_21, 0);
                i_21 = ATgetArgument(g_21, 1);
                j_21 = ATgetArgument(g_21, 2);
                t = not_null(h_21);
              }
            else
              {
                if(match_cons(g_21, sym_SDefT_4))
                  {
                    h_21 = ATgetArgument(g_21, 0);
                    i_21 = ATgetArgument(g_21, 1);
                    j_21 = ATgetArgument(g_21, 2);
                    k_21 = ATgetArgument(g_21, 3);
                    t = not_null(h_21);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, o_1);
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
  ATerm p_1 (ATerm t)
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              {
                ATerm n_9 = t;
                int o_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(o_9);
                  }
                else
                  {
                    t = n_9;
                    {
                      ATerm a_10 = t;
                      int b_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(b_10);
                        }
                      else
                        {
                          t = a_10;
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
  t = rename_4(t, SVar_1, p_1, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  u_21 = t;
  s_21 :
  if(match_cons(u_21, sym__2))
    {
      v_21 = ATgetArgument(u_21, 0);
      y_21 = ATgetArgument(u_21, 1);
      t_21 :
      if(match_cons(v_21, sym_DefaultVarDec_1))
        {
          w_21 = ATgetArgument(v_21, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(y_21));
        }
      else
        {
          if(match_cons(v_21, sym_VarDec_2))
            {
              w_21 = ATgetArgument(v_21, 0);
              x_21 = ATgetArgument(v_21, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_21), not_null(x_21));
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
ATerm tpaste_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, e_110, _id);
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
            ATerm q_1 (ATerm t)
            {
              t = split_2(t, _id, e_110);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, q_1, _id);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm r_1 (ATerm t)
              {
                t = split_2(t, _id, e_110);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, r_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_DynamicRules_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm t_22 = NULL;
            t = r_98(t);
            {
              r_22 = t;
              {
                ATerm u_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(r_22)), not_null(p_22));
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                t = not_null(t_22);
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
ATerm RDefT_4 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_RDefT_4))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      k_23 = ATgetArgument(h_23, 2);
      l_23 = ATgetArgument(h_23, 3);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(i_23);
          {
            ATerm v_23 = NULL;
            t = i_98(t);
            {
              t_23 = t;
              {
                t = not_null(j_23);
                {
                  ATerm x_23 = NULL;
                  t = j_98(t);
                  {
                    v_23 = t;
                    {
                      t = not_null(k_23);
                      {
                        ATerm z_23 = NULL;
                        t = k_98(t);
                        {
                          x_23 = t;
                          {
                            t = not_null(l_23);
                            {
                              ATerm b_24 = NULL;
                              t = l_98(t);
                              {
                                z_23 = t;
                                {
                                  ATerm c_24 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(t_23), not_null(v_23), not_null(x_23), not_null(z_23)), not_null(r_23));
                                  {
                                    c_24 = t;
                                    if(((b_24 != NULL) && (b_24 != c_24)))
                                      _fail(c_24);
                                    else
                                      b_24 = c_24;
                                  }
                                  t = not_null(b_24);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm tboundin_3 (ATerm t, ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm))
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, h_110, f_110);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, h_110, h_110, h_110, f_110);
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm m_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, h_110, h_110, h_110, f_110);
                  ;
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = m_11;
                  t = DynamicRules_1(t, f_110);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_RDefT_4))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      p_24 = ATgetArgument(m_24, 2);
      q_24 = ATgetArgument(m_24, 3);
      {
        t = not_null(p_24);
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
  ATerm s_1 (ATerm t)
  {
    ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
    a_25 = t;
    y_24 :
    if(match_cons(a_25, sym_VarDec_2))
      {
        b_25 = ATgetArgument(a_25, 0);
        z_24 = ATgetArgument(a_25, 1);
        t = not_null(b_25);
      }
    else
      {
        if(match_cons(a_25, sym_DefaultVarDec_1))
          {
            b_25 = ATgetArgument(a_25, 0);
            t = not_null(b_25);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, s_1);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_SDefT_4))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      l_25 = ATgetArgument(i_25, 2);
      m_25 = ATgetArgument(i_25, 3);
      {
        t = not_null(l_25);
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
  ATerm u_25 = NULL,v_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_DynamicRules_1))
    {
      v_25 = ATgetArgument(u_25, 0);
      {
        t = not_null(v_25);
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
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Var_1))
    {
      b_26 = ATgetArgument(a_26, 0);
      t = (ATerm) ATinsert(ATempty, not_null(b_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_119 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym__2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        t = not_null(h_26);
        {
          ATerm m_26 (ATerm t)
          {
            ATerm o_11 = t;
            int x_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_26);
                ;
                LocalPopChoice(x_11);
              }
            else
              {
                t = o_11;
                {
                  ATerm y_11 = t;
                  int z_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = not_null(i_26);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_119, t_1);
                      t = m_26(t);
                      ;
                      LocalPopChoice(z_11);
                    }
                  else
                    {
                      t = y_11;
                      t = Cons_2(t, _id, m_26);
                    }
                }
              }
            return(t);
          }
          t = m_26(t);
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
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym__2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      if(((q_26 != NULL) && (q_26 != r_26)))
        _fail(r_26);
      else
        q_26 = r_26;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_119 (ATerm), ATerm w_119 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
    {
      y_26 = ATgetFirst((ATermList) x_26);
      z_26 = (ATerm) ATgetNext((ATermList) x_26);
      {
        t = w_119(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm c_27 = NULL;
            c_27 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(c_27));
              t = v_119(t);
            }
            return(t);
          }
          t = fetch_1(t, u_1);
        }
        t = not_null(z_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_119 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym__2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        t = not_null(j_27);
        {
          ATerm o_27 (ATerm t)
          {
            ATerm a_12 = t;
            int b_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(b_12);
              }
            else
              {
                t = a_12;
                {
                  ATerm c_12 = t;
                  int e_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(k_27);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_119, v_1);
                      t = o_27(t);
                      ;
                      LocalPopChoice(e_12);
                    }
                  else
                    {
                      t = c_12;
                      t = Cons_2(t, _id, o_27);
                    }
                }
              }
            return(t);
          }
          t = o_27(t);
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
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  s_27 = t;
  q_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      r_27 :
      if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
        {
          v_27 = ATgetFirst((ATermList) u_27);
          w_27 = (ATerm) ATgetNext((ATermList) u_27);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_27)), not_null(v_27)), not_null(w_27));
        }
      else
        {
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  l_28 = t;
  j_28 :
  if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
    {
      m_28 = ATgetFirst((ATermList) l_28);
      p_28 = (ATerm) ATgetNext((ATermList) l_28);
      k_28 :
      if(match_cons(m_28, sym__2))
        {
          n_28 = ATgetArgument(m_28, 0);
          o_28 = ATgetArgument(m_28, 1);
          {
            ATerm t_28 = NULL,u_28 = NULL,a_29 = NULL,g_29 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              ATerm v_28 = NULL;
              ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
              t = not_null(o_28);
              {
                v_28 = t;
                {
                  t = SSL_explode_term(not_null(v_28));
                  {
                    x_28 = t;
                    e_28 :
                    if(match_cons(x_28, sym__2))
                      {
                        y_28 = ATgetArgument(x_28, 0);
                        z_28 = ATgetArgument(x_28, 1);
                        {
                          if(((t_28 != NULL) && (t_28 != y_28)))
                            _fail(y_28);
                          else
                            t_28 = y_28;
                          if(((u_28 != NULL) && (u_28 != z_28)))
                            _fail(z_28);
                          else
                            u_28 = z_28;
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
            t = g_12;
            {
              ATerm h_12;
              h_12 = t;
              {
                ATerm b_29 = NULL;
                ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
                t = not_null(n_28);
                {
                  b_29 = t;
                  {
                    t = SSL_explode_term(not_null(b_29));
                    {
                      d_29 = t;
                      h_28 :
                      if(match_cons(d_29, sym__2))
                        {
                          e_29 = ATgetArgument(d_29, 0);
                          f_29 = ATgetArgument(d_29, 1);
                          {
                            if(((t_28 != NULL) && (t_28 != e_29)))
                              _fail(e_29);
                            else
                              t_28 = e_29;
                            if(((a_29 != NULL) && (a_29 != f_29)))
                              _fail(f_29);
                            else
                              a_29 = f_29;
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
              t = h_12;
              {
                ATerm h_29 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(u_28));
                {
                  t = zip_1(t, _id);
                  {
                    h_29 = t;
                    if(((g_29 != NULL) && (g_29 != h_29)))
                      _fail(h_29);
                    else
                      g_29 = h_29;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(p_28));
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
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  r_29 = t;
  p_29 :
  if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
    {
      s_29 = ATgetFirst((ATermList) r_29);
      v_29 = (ATerm) ATgetNext((ATermList) r_29);
      q_29 :
      if(match_cons(s_29, sym__2))
        {
          t_29 = ATgetArgument(s_29, 0);
          u_29 = ATgetArgument(s_29, 1);
          {
            ATerm x_29 = NULL;
            if(((t_29 != NULL) && (t_29 != u_29)))
              _fail(u_29);
            else
              t_29 = u_29;
            {
              if(((x_29 != NULL) && (x_29 != v_29)))
                _fail(v_29);
              else
                x_29 = v_29;
              t = not_null(x_29);
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
ATerm while_not_2 (ATerm t, ATerm o_128 (ATerm), ATerm p_128 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_128(t);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          t = p_128(t);
          t = z_29(t);
        }
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm))
{
  t = r_128(t);
  t = while_not_2(t, s_128, t_128);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm b_30 = NULL;
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_30));
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm t_12 = t;
              int c_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(c_13);
                }
              else
                {
                  t = t_12;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, z_1);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_1, x_1, y_1);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_30 (ATerm t)
  {
    ATerm d_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_126(t);
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = d_13;
        {
          ATerm g_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_30 = NULL;
              ATerm j_13;
              j_13 = t;
              {
                ATerm g_30 = NULL;
                t = j_126(t);
                {
                  g_30 = t;
                  if(((f_30 != NULL) && (f_30 != g_30)))
                    _fail(g_30);
                  else
                    f_30 = g_30;
                }
              }
              t = j_13;
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm c_2 (ATerm t)
                  {
                    t = not_null(f_30);
                    return(t);
                  }
                  t = split_2(t, h_30, c_2);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = k_126(t, a_2, h_30, b_2);
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, d_2, union_0, _id);
                }
              }
              ;
              LocalPopChoice(i_13);
            }
          else
            {
              t = g_13;
              {
                ATerm e_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_2, union_0, h_30);
              }
            }
        }
      }
    return(t);
  }
  t = h_30(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm f_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(l_14);
            }
          else
            {
              t = f_14;
              {
                ATerm m_14 = t;
                int p_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(p_14);
                  }
                else
                  {
                    t = m_14;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_2, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  l_30 :
  if(match_cons(q_30, sym_LRule_1))
    {
      r_30 = ATgetArgument(q_30, 0);
      m_30 :
      if(match_cons(r_30, sym_Rule_3))
        {
          n_30 = ATgetArgument(r_30, 0);
          o_30 = ATgetArgument(r_30, 1);
          p_30 = ATgetArgument(r_30, 2);
          {
            t = not_null(n_30);
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
      if(match_cons(q_30, sym_Scope_2))
        {
          r_30 = ATgetArgument(q_30, 0);
          s_30 = ATgetArgument(q_30, 1);
          t = not_null(r_30);
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
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_Var_1))
    {
      o_31 = ATgetArgument(n_31, 0);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_31 = NULL,t_31 = NULL;
            ATerm s_31 = NULL;
            t = SSLgetAnnotations(not_null(n_31));
            {
              s_31 = t;
              if(((r_31 != NULL) && (r_31 != s_31)))
                _fail(s_31);
              else
                r_31 = s_31;
            }
            {
              t = not_null(o_31);
              {
                ATerm v_31 = NULL;
                t = p_0(t);
                {
                  t_31 = t;
                  {
                    ATerm w_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_31)), not_null(r_31));
                    {
                      w_31 = t;
                      if(((v_31 != NULL) && (v_31 != w_31)))
                        _fail(w_31);
                      else
                        v_31 = w_31;
                    }
                    t = not_null(v_31);
                  }
                }
              }
            }
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm s_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_31 = NULL,b_32 = NULL;
                  ATerm a_32 = NULL;
                  t = SSLgetAnnotations(not_null(n_31));
                  {
                    a_32 = t;
                    if(((z_31 != NULL) && (z_31 != a_32)))
                      _fail(a_32);
                    else
                      z_31 = a_32;
                  }
                  {
                    t = not_null(o_31);
                    {
                      ATerm d_32 = NULL;
                      t = p_0(t);
                      {
                        b_32 = t;
                        {
                          ATerm e_32 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_32)), not_null(z_31));
                          {
                            e_32 = t;
                            if(((d_32 != NULL) && (d_32 != e_32)))
                              _fail(e_32);
                            else
                              d_32 = e_32;
                          }
                          t = not_null(d_32);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = s_14;
                  {
                    ATerm h_32 = NULL,j_32 = NULL;
                    ATerm i_32 = NULL;
                    t = SSLgetAnnotations(not_null(n_31));
                    {
                      i_32 = t;
                      if(((h_32 != NULL) && (h_32 != i_32)))
                        _fail(i_32);
                      else
                        h_32 = i_32;
                    }
                    {
                      t = not_null(o_31);
                      {
                        ATerm l_32 = NULL;
                        t = p_0(t);
                        {
                          j_32 = t;
                          {
                            ATerm m_32 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_32)), not_null(h_32));
                            {
                              m_32 = t;
                              if(((l_32 != NULL) && (l_32 != m_32)))
                                _fail(m_32);
                              else
                                l_32 = m_32;
                            }
                            t = not_null(l_32);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm q_124 (ATerm), ATerm r_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__3))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      g_33 = ATgetArgument(d_33, 2);
      {
        t = not_null(e_33);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm k_33 = NULL;
            k_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(g_33));
              t = q_124(t);
            }
            return(t);
          }
          ATerm h_2 (ATerm t)
          {
            ATerm m_33 = NULL;
            m_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(f_33));
              t = q_124(t);
            }
            return(t);
          }
          t = r_124(t, g_2, h_2, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm k_124 (ATerm), ATerm l_124 (ATerm, ATerm (ATerm)))
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  x_33 :
  if(match_cons(y_33, sym__2))
    {
      z_33 = ATgetArgument(y_33, 0);
      a_34 = ATgetArgument(y_33, 1);
      {
        ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,l_34 = NULL;
        ATerm v_14;
        v_14 = t;
        {
          ATerm g_34 = NULL;
          t = not_null(z_33);
          {
            ATerm h_34 = NULL;
            t = k_124(t);
            {
              g_34 = t;
              {
                if(((d_34 != NULL) && (d_34 != g_34)))
                  _fail(g_34);
                else
                  d_34 = g_34;
                {
                  ATerm i_34 = NULL,k_34 = NULL;
                  t = map_1(t, new_0);
                  {
                    h_34 = t;
                    {
                      if(((e_34 != NULL) && (e_34 != h_34)))
                        _fail(h_34);
                      else
                        e_34 = h_34;
                      {
                        ATerm j_34 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_34), not_null(e_34));
                        {
                          t = zip_1(t, _id);
                          {
                            j_34 = t;
                            if(((i_34 != NULL) && (i_34 != j_34)))
                              _fail(j_34);
                            else
                              i_34 = j_34;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(a_34));
                          {
                            t = conc_0(t);
                            {
                              k_34 = t;
                              if(((f_34 != NULL) && (f_34 != k_34)))
                                _fail(k_34);
                              else
                                f_34 = k_34;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = v_14;
        {
          ATerm m_34 = NULL;
          t = not_null(z_33);
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(e_34);
              return(t);
            }
            t = l_124(t, i_2);
            {
              m_34 = t;
              if(((l_34 != NULL) && (l_34 != m_34)))
                _fail(m_34);
              else
                l_34 = m_34;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), not_null(a_34), not_null(f_34));
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
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  w_34 = t;
  u_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      v_34 :
      if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
        {
          z_34 = ATgetFirst((ATermList) y_34);
          a_35 = (ATerm) ATgetNext((ATermList) y_34);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), not_null(a_35));
        }
      else
        {
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
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  i_35 = t;
  f_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      g_35 :
      if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
        {
          l_35 = ATgetFirst((ATermList) k_35);
          o_35 = (ATerm) ATgetNext((ATermList) k_35);
          h_35 :
          if(match_cons(l_35, sym__2))
            {
              m_35 = ATgetArgument(l_35, 0);
              n_35 = ATgetArgument(l_35, 1);
              {
                ATerm q_35 = NULL;
                if(((j_35 != NULL) && (j_35 != m_35)))
                  _fail(m_35);
                else
                  j_35 = m_35;
                {
                  if(((q_35 != NULL) && (q_35 != n_35)))
                    _fail(n_35);
                  else
                    q_35 = n_35;
                  t = not_null(q_35);
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
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_124 (ATerm, ATerm (ATerm)))
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      {
        t = not_null(w_35);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(x_35);
              return(t);
            }
            t = split_2(t, _id, k_2);
            t = lookup_0(t);
            return(t);
          }
          t = v_124(t, j_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm o_125 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      {
        t = not_null(f_36);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm j_36 = NULL;
            j_36 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), not_null(g_36));
              t = o_125(t);
            }
            return(t);
          }
          t = _all(t, l_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm y_124 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_124(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = all_dist_1(t, n_36);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm f_124 (ATerm, ATerm (ATerm)), ATerm g_124 (ATerm), ATerm h_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_124 (ATerm, ATerm (ATerm)))
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), (ATerm) ATempty);
    {
      ATerm s_36 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, f_124);
              ;
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              {
                t = RnBinding_2(t, g_124, i_124);
                t = DistBinding_2(t, s_36, h_124);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_2);
        return(t);
      }
      t = s_36(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, n_2, tboundin_3, tpaste_1);
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
    {
      w_36 = ATgetFirst((ATermList) v_36);
      x_36 = (ATerm) ATgetNext((ATermList) v_36);
      t = not_null(w_36);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), not_null(e_37));
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
ATerm rewrite_1 (ATerm t, ATerm r_123 (ATerm))
{
  ATerm k_37 = NULL;
  ATerm m_37 = NULL;
  k_37 = t;
  {
    ATerm n_37 = NULL;
    t = term_g_15;
    {
      t = r_123(t);
      {
        n_37 = t;
        if(((m_37 != NULL) && (m_37 != n_37)))
          _fail(n_37);
        else
          m_37 = n_37;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(k_37));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineCall0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  p_41 = t;
  l_41 :
  if(match_cons(p_41, sym_CallT_3))
    {
      q_41 = ATgetArgument(p_41, 0);
      s_41 = ATgetArgument(p_41, 1);
      t_41 = ATgetArgument(p_41, 2);
      m_41 :
      if(match_cons(q_41, sym_SVar_1))
        {
          r_41 = ATgetArgument(q_41, 0);
          n_41 :
          if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
            {
              o_41 :
              if(((ATgetType(t_41) == AT_LIST) && ATisEmpty(t_41)))
                {
                  {
                    ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
                    ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
                    t = not_null(p_41);
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_h_15;
                        return(t);
                      }
                      t = rewrite_1(t, o_2);
                      {
                        c_42 = t;
                        j_41 :
                        if(match_cons(c_42, sym_Defined_2))
                          {
                            d_42 = ATgetArgument(c_42, 0);
                            e_42 = ATgetArgument(c_42, 1);
                            k_41 :
                            if(match_string(d_42, "g_0"))
                              {
                                ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
                                if(((w_41 != NULL) && (w_41 != e_42)))
                                  _fail(e_42);
                                else
                                  w_41 = e_42;
                                {
                                  t = not_null(w_41);
                                  {
                                    t = strename_0(t);
                                    {
                                      f_42 = t;
                                      i_41 :
                                      if(match_cons(f_42, sym_SDefT_4))
                                        {
                                          g_42 = ATgetArgument(f_42, 0);
                                          h_42 = ATgetArgument(f_42, 1);
                                          i_42 = ATgetArgument(f_42, 2);
                                          j_42 = ATgetArgument(f_42, 3);
                                          {
                                            ATerm k_42 = NULL,s_42 = NULL;
                                            if(((r_41 != NULL) && (r_41 != g_42)))
                                              _fail(g_42);
                                            else
                                              r_41 = g_42;
                                            {
                                              if(((y_41 != NULL) && (y_41 != h_42)))
                                                _fail(h_42);
                                              else
                                                y_41 = h_42;
                                              {
                                                if(((z_41 != NULL) && (z_41 != i_42)))
                                                  _fail(i_42);
                                                else
                                                  z_41 = i_42;
                                                {
                                                  if(((x_41 != NULL) && (x_41 != j_42)))
                                                    _fail(j_42);
                                                  else
                                                    x_41 = j_42;
                                                  {
                                                    ATerm l_42 = NULL,n_42 = NULL,p_42 = NULL;
                                                    ATerm i_15;
                                                    i_15 = t;
                                                    {
                                                      ATerm m_42 = NULL;
                                                      t = not_null(y_41);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          m_42 = t;
                                                          if(((l_42 != NULL) && (l_42 != m_42)))
                                                            _fail(m_42);
                                                          else
                                                            l_42 = m_42;
                                                        }
                                                      }
                                                    }
                                                    t = i_15;
                                                    {
                                                      ATerm o_42 = NULL;
                                                      t = not_null(z_41);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          o_42 = t;
                                                          if(((n_42 != NULL) && (n_42 != o_42)))
                                                            _fail(o_42);
                                                          else
                                                            n_42 = o_42;
                                                        }
                                                      }
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_42), not_null(n_42));
                                                        {
                                                          t = add_0(t);
                                                          {
                                                            p_42 = t;
                                                            if(((k_42 != NULL) && (k_42 != p_42)))
                                                              _fail(p_42);
                                                            else
                                                              k_42 = p_42;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), term_n_8);
                                                      {
                                                        t = gt_0(t);
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            s_42 = t;
                                                            {
                                                              if(((a_42 != NULL) && (a_42 != s_42)))
                                                                _fail(s_42);
                                                              else
                                                                a_42 = s_42;
                                                              {
                                                                ATerm j_15;
                                                                j_15 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_41)), (ATerm)ATempty, (ATerm) ATempty), term_h_8);
                                                                  {
                                                                    ATerm p_2 (ATerm t)
                                                                    {
                                                                      t = term_g_8;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, p_2);
                                                                  }
                                                                }
                                                                t = j_15;
                                                              }
                                                            }
                                                          }
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
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(a_42), not_null(y_41), not_null(z_41), not_null(x_41))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_42)), (ATerm)ATempty, (ATerm) ATempty));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_SDefT_4))
    {
      d_43 = ATgetArgument(c_43, 0);
      e_43 = ATgetArgument(c_43, 1);
      f_43 = ATgetArgument(c_43, 2);
      g_43 = ATgetArgument(c_43, 3);
      {
        ATerm k_15;
        k_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_43)), (ATerm)ATempty, (ATerm) ATempty), term_h_8);
          {
            ATerm q_2 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = assert_1(t, q_2);
          }
        }
        t = k_15;
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(((ATgetType(l_43) == AT_LIST) && !(ATisEmpty(l_43))))
    {
      m_43 = ATgetFirst((ATermList) l_43);
      n_43 = (ATerm) ATgetNext((ATermList) l_43);
      t = not_null(n_43);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      {
        ATerm u_15;
        u_15 = t;
        {
          ATerm y_43 = NULL;
          ATerm z_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(v_43));
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = (ATerm) ATempty;
              }
            {
              z_43 = t;
              if(((y_43 != NULL) && (y_43 != z_43)))
                _fail(z_43);
              else
                y_43 = z_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_43), not_null(v_43), not_null(y_43));
            t = table_put_0(t);
          }
        }
        t = u_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_123 (ATerm))
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm j_44 = NULL;
    ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
    t = m_123(t);
    {
      j_44 = t;
      {
        if(((i_44 != NULL) && (i_44 != j_44)))
          _fail(j_44);
        else
          i_44 = j_44;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_44), term_a_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_44 = t;
            f_44 :
            if(((ATgetType(k_44) == AT_LIST) && !(ATisEmpty(k_44))))
              {
                l_44 = ATgetFirst((ATermList) k_44);
                m_44 = (ATerm) ATgetNext((ATermList) k_44);
                {
                  if(((h_44 != NULL) && (h_44 != l_44)))
                    _fail(l_44);
                  else
                    h_44 = l_44;
                  {
                    if(((g_44 != NULL) && (g_44 != m_44)))
                      _fail(m_44);
                    else
                      g_44 = m_44;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_44), term_a_16, not_null(g_44));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_44);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm n_44 = NULL;
                              n_44 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_44), not_null(n_44));
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
  t = x_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm l_114 (ATerm), ATerm m_114 (ATerm))
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_114(t);
      t = m_114(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        t = m_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_123 (ATerm))
{
  ATerm u_44 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    ATerm v_44 = NULL;
    ATerm w_44 = NULL;
    t = l_123(t);
    {
      v_44 = t;
      {
        if(((u_44 != NULL) && (u_44 != v_44)))
          _fail(v_44);
        else
          u_44 = v_44;
        {
          ATerm b_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), term_a_16);
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = (ATerm) ATempty;
              }
            {
              b_45 = t;
              if(((w_44 != NULL) && (w_44 != b_45)))
                _fail(b_45);
              else
                w_44 = b_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_44), term_a_16, (ATerm) ATinsert(CheckATermList(not_null(w_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_123 (ATerm), ATerm o_123 (ATerm))
{
  t = begin_scope_1(t, n_123);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, n_123);
      return(t);
    }
    t = restore_always_2(t, o_123, s_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_g_8;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = InlineCall0_0(t);
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = InlineCall_0(t);
              }
            return(t);
          }
          t = repeat_1(t, v_2);
        }
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, t_2, u_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_123 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym__2))
    {
      n_45 = ATgetArgument(m_45, 0);
      o_45 = ATgetArgument(m_45, 1);
      {
        ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
        ATerm o_16;
        o_16 = t;
        {
          ATerm u_45 = NULL;
          ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
          t = p_123(t);
          {
            u_45 = t;
            {
              if(((r_45 != NULL) && (r_45 != u_45)))
                _fail(u_45);
              else
                r_45 = u_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_45), not_null(n_45), not_null(o_45));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_16 = t;
                    int u_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), term_a_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_16);
                      }
                    else
                      {
                        t = s_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_45 = t;
                      k_45 :
                      if(((ATgetType(v_45) == AT_LIST) && !(ATisEmpty(v_45))))
                        {
                          w_45 = ATgetFirst((ATermList) v_45);
                          x_45 = (ATerm) ATgetNext((ATermList) v_45);
                          {
                            if(((s_45 != NULL) && (s_45 != w_45)))
                              _fail(w_45);
                            else
                              s_45 = w_45;
                            {
                              if(((t_45 != NULL) && (t_45 != x_45)))
                                _fail(x_45);
                              else
                                t_45 = x_45;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_45), term_a_16, (ATerm) ATinsert(CheckATermList(not_null(t_45)), (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(n_45))));
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
        t = o_16;
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_SDefT_4))
    {
      e_46 = ATgetArgument(d_46, 0);
      f_46 = ATgetArgument(d_46, 1);
      g_46 = ATgetArgument(d_46, 2);
      h_46 = ATgetArgument(d_46, 3);
      {
        ATerm x_16;
        x_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, not_null(d_46)));
          {
            ATerm w_2 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = assert_1(t, w_2);
          }
        }
        t = x_16;
        {
          ATerm z_16;
          z_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_17, not_null(d_46)));
            {
              ATerm x_2 (ATerm t)
              {
                t = term_h_15;
                return(t);
              }
              t = assert_1(t, x_2);
            }
          }
          t = z_16;
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
  ATerm b_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm))
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_122(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
        u_46 = t;
        o_46 :
        if(((ATgetType(u_46) == AT_LIST) && !(ATisEmpty(u_46))))
          {
            v_46 = ATgetFirst((ATermList) u_46);
            w_46 = (ATerm) ATgetNext((ATermList) u_46);
            {
              ATerm z_46 = NULL,b_47 = NULL;
              ATerm e_17;
              e_17 = t;
              {
                ATerm a_47 = NULL;
                t = not_null(v_46);
                {
                  t = i_122(t);
                  {
                    a_47 = t;
                    if(((z_46 != NULL) && (z_46 != a_47)))
                      _fail(a_47);
                    else
                      z_46 = a_47;
                  }
                }
              }
              t = e_17;
              {
                ATerm c_47 = NULL;
                t = not_null(w_46);
                {
                  t = foldr_3(t, g_122, h_122, i_122);
                  {
                    c_47 = t;
                    if(((b_47 != NULL) && (b_47 != c_47)))
                      _fail(c_47);
                    else
                      b_47 = c_47;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(b_47));
                  t = h_122(t);
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
ATerm crush_3 (ATerm t, ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm))
{
  ATerm p_47 = NULL;
  ATerm r_47 = NULL;
  p_47 = t;
  {
    ATerm s_47 = NULL;
    ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
    t = not_null(p_47);
    {
      s_47 = t;
      {
        t = SSL_explode_term(not_null(s_47));
        {
          u_47 = t;
          o_47 :
          if(match_cons(u_47, sym__2))
            {
              v_47 = ATgetArgument(u_47, 0);
              w_47 = ATgetArgument(u_47, 1);
              if(((r_47 != NULL) && (r_47 != w_47)))
                _fail(w_47);
              else
                r_47 = w_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_47);
      t = foldr_3(t, e_120, f_120, g_120);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        t = term_q_8;
        return(t);
      }
      t = crush_3(t, y_2, add_0, term_size_0);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm a_48 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            t = term_q_8;
            return(t);
          }
          t = crush_3(t, z_2, add_0, a_48);
          return(t);
        }
        t = a_48(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm))
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym_GuardedLChoice_3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      l_48 = ATgetArgument(i_48, 2);
      {
        ATerm u_48 = NULL,b_49 = NULL;
        ATerm y_48 = NULL;
        t = SSLgetAnnotations(not_null(i_48));
        {
          y_48 = t;
          if(((u_48 != NULL) && (u_48 != y_48)))
            _fail(y_48);
          else
            u_48 = y_48;
        }
        {
          t = not_null(j_48);
          {
            ATerm d_49 = NULL;
            t = e_100(t);
            {
              b_49 = t;
              {
                t = not_null(k_48);
                {
                  ATerm f_49 = NULL;
                  t = f_100(t);
                  {
                    d_49 = t;
                    {
                      t = not_null(l_48);
                      {
                        ATerm h_49 = NULL;
                        t = g_100(t);
                        {
                          f_49 = t;
                          {
                            ATerm i_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_49), not_null(d_49), not_null(f_49)), not_null(u_48));
                            {
                              i_49 = t;
                              if(((h_49 != NULL) && (h_49 != i_49)))
                                _fail(i_49);
                              else
                                h_49 = i_49;
                            }
                            t = not_null(h_49);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm a_100 (ATerm), ATerm b_100 (ATerm))
{
  ATerm z_49 = NULL,a_50 = NULL,f_50 = NULL;
  z_49 = t;
  u_49 :
  if(match_cons(z_49, sym_LChoice_2))
    {
      a_50 = ATgetArgument(z_49, 0);
      f_50 = ATgetArgument(z_49, 1);
      {
        ATerm j_50 = NULL,l_50 = NULL;
        ATerm k_50 = NULL;
        t = SSLgetAnnotations(not_null(z_49));
        {
          k_50 = t;
          if(((j_50 != NULL) && (j_50 != k_50)))
            _fail(k_50);
          else
            j_50 = k_50;
        }
        {
          t = not_null(a_50);
          {
            ATerm n_50 = NULL;
            t = a_100(t);
            {
              l_50 = t;
              {
                t = not_null(f_50);
                {
                  ATerm p_50 = NULL;
                  t = b_100(t);
                  {
                    n_50 = t;
                    {
                      ATerm q_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(l_50), not_null(n_50)), not_null(j_50));
                      {
                        q_50 = t;
                        if(((p_50 != NULL) && (p_50 != q_50)))
                          _fail(q_50);
                        else
                          p_50 = q_50;
                      }
                      t = not_null(p_50);
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
ATerm Choice_2 (ATerm t, ATerm y_98 (ATerm), ATerm z_98 (ATerm))
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_Choice_2))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      {
        ATerm i_51 = NULL,k_51 = NULL;
        ATerm j_51 = NULL;
        t = SSLgetAnnotations(not_null(c_51));
        {
          j_51 = t;
          if(((i_51 != NULL) && (i_51 != j_51)))
            _fail(j_51);
          else
            i_51 = j_51;
        }
        {
          t = not_null(d_51);
          {
            ATerm m_51 = NULL;
            t = y_98(t);
            {
              k_51 = t;
              {
                t = not_null(e_51);
                {
                  ATerm o_51 = NULL;
                  t = z_98(t);
                  {
                    m_51 = t;
                    {
                      ATerm p_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(k_51), not_null(m_51)), not_null(i_51));
                      {
                        p_51 = t;
                        if(((o_51 != NULL) && (o_51 != p_51)))
                          _fail(p_51);
                        else
                          o_51 = p_51;
                      }
                      t = not_null(o_51);
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
ATerm Cong_2 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  a_52 :
  if(match_cons(c_52, sym_Cong_2))
    {
      d_52 = ATgetArgument(c_52, 0);
      e_52 = ATgetArgument(c_52, 1);
      {
        ATerm k_52 = NULL,m_52 = NULL;
        ATerm l_52 = NULL;
        t = SSLgetAnnotations(not_null(c_52));
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
        {
          t = not_null(d_52);
          {
            ATerm o_52 = NULL;
            t = x_94(t);
            {
              m_52 = t;
              {
                t = not_null(e_52);
                {
                  ATerm q_52 = NULL;
                  t = y_94(t);
                  {
                    o_52 = t;
                    {
                      ATerm r_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(m_52), not_null(o_52)), not_null(k_52));
                      {
                        r_52 = t;
                        if(((q_52 != NULL) && (q_52 != r_52)))
                          _fail(r_52);
                        else
                          q_52 = r_52;
                      }
                      t = not_null(q_52);
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
ATerm Match_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm c_53 = NULL,d_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Match_1))
    {
      d_53 = ATgetArgument(c_53, 0);
      {
        ATerm i_53 = NULL,k_53 = NULL;
        ATerm j_53 = NULL;
        t = SSLgetAnnotations(not_null(c_53));
        {
          j_53 = t;
          if(((i_53 != NULL) && (i_53 != j_53)))
            _fail(j_53);
          else
            i_53 = j_53;
        }
        {
          t = not_null(d_53);
          {
            ATerm x_53 = NULL;
            t = r_99(t);
            {
              k_53 = t;
              {
                ATerm y_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_53)), not_null(i_53));
                {
                  y_53 = t;
                  if(((x_53 != NULL) && (x_53 != y_53)))
                    _fail(y_53);
                  else
                    x_53 = y_53;
                }
                t = not_null(x_53);
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
ATerm Seq_2 (ATerm t, ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Seq_2))
    {
      s_54 = ATgetArgument(r_54, 0);
      t_54 = ATgetArgument(r_54, 1);
      {
        ATerm x_54 = NULL,z_54 = NULL;
        ATerm y_54 = NULL;
        t = SSLgetAnnotations(not_null(r_54));
        {
          y_54 = t;
          if(((x_54 != NULL) && (x_54 != y_54)))
            _fail(y_54);
          else
            x_54 = y_54;
        }
        {
          t = not_null(s_54);
          {
            ATerm b_55 = NULL;
            t = y_99(t);
            {
              z_54 = t;
              {
                t = not_null(t_54);
                {
                  ATerm d_55 = NULL;
                  t = z_99(t);
                  {
                    b_55 = t;
                    {
                      ATerm e_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(z_54), not_null(b_55)), not_null(x_54));
                      {
                        e_55 = t;
                        if(((d_55 != NULL) && (d_55 != e_55)))
                          _fail(e_55);
                        else
                          d_55 = e_55;
                      }
                      t = not_null(d_55);
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
ATerm Scope_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(match_cons(x_55, sym_Scope_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      {
        ATerm j_56 = NULL,s_56 = NULL;
        ATerm p_56 = NULL;
        t = SSLgetAnnotations(not_null(x_55));
        {
          p_56 = t;
          if(((j_56 != NULL) && (j_56 != p_56)))
            _fail(p_56);
          else
            j_56 = p_56;
        }
        {
          t = not_null(y_55);
          {
            ATerm u_56 = NULL;
            t = u_99(t);
            {
              s_56 = t;
              {
                t = not_null(z_55);
                {
                  ATerm w_56 = NULL;
                  t = v_99(t);
                  {
                    u_56 = t;
                    {
                      ATerm x_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_56), not_null(u_56)), not_null(j_56));
                      {
                        x_56 = t;
                        if(((w_56 != NULL) && (w_56 != x_56)))
                          _fail(x_56);
                        else
                          w_56 = x_56;
                      }
                      t = not_null(w_56);
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
ATerm Build_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm l_57 = NULL,m_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_Build_1))
    {
      m_57 = ATgetArgument(l_57, 0);
      {
        ATerm p_57 = NULL,s_57 = NULL;
        ATerm q_57 = NULL;
        t = SSLgetAnnotations(not_null(l_57));
        {
          q_57 = t;
          if(((p_57 != NULL) && (p_57 != q_57)))
            _fail(q_57);
          else
            p_57 = q_57;
        }
        {
          t = not_null(m_57);
          {
            ATerm u_57 = NULL;
            t = s_99(t);
            {
              s_57 = t;
              {
                ATerm v_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_57)), not_null(p_57));
                {
                  v_57 = t;
                  if(((u_57 != NULL) && (u_57 != v_57)))
                    _fail(v_57);
                  else
                    u_57 = v_57;
                }
                t = not_null(u_57);
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
ATerm SVar_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm f_58 = NULL,g_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym_SVar_1))
    {
      g_58 = ATgetArgument(f_58, 0);
      {
        ATerm j_58 = NULL,l_58 = NULL;
        ATerm k_58 = NULL;
        t = SSLgetAnnotations(not_null(f_58));
        {
          k_58 = t;
          if(((j_58 != NULL) && (j_58 != k_58)))
            _fail(k_58);
          else
            j_58 = k_58;
        }
        {
          t = not_null(g_58);
          {
            ATerm n_58 = NULL;
            t = j_99(t);
            {
              l_58 = t;
              {
                ATerm o_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(l_58)), not_null(j_58));
                {
                  o_58 = t;
                  if(((n_58 != NULL) && (n_58 != o_58)))
                    _fail(o_58);
                  else
                    n_58 = o_58;
                }
                t = not_null(n_58);
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
ATerm CallT_3 (ATerm t, ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm))
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  a_59 = t;
  z_58 :
  if(match_cons(a_59, sym_CallT_3))
    {
      b_59 = ATgetArgument(a_59, 0);
      c_59 = ATgetArgument(a_59, 1);
      d_59 = ATgetArgument(a_59, 2);
      {
        ATerm i_59 = NULL,k_59 = NULL;
        ATerm j_59 = NULL;
        t = SSLgetAnnotations(not_null(a_59));
        {
          j_59 = t;
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
        }
        {
          t = not_null(b_59);
          {
            ATerm m_59 = NULL;
            t = o_99(t);
            {
              k_59 = t;
              {
                t = not_null(c_59);
                {
                  ATerm o_59 = NULL;
                  t = p_99(t);
                  {
                    m_59 = t;
                    {
                      t = not_null(d_59);
                      {
                        ATerm q_59 = NULL;
                        t = q_99(t);
                        {
                          o_59 = t;
                          {
                            ATerm r_59 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(k_59), not_null(m_59), not_null(o_59)), not_null(i_59));
                            {
                              r_59 = t;
                              if(((q_59 != NULL) && (q_59 != r_59)))
                                _fail(r_59);
                              else
                                q_59 = r_59;
                            }
                            t = not_null(q_59);
                          }
                        }
                      }
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
  ATerm c_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym_Fail_0))
    {
      ATerm e_60 = NULL,g_60 = NULL;
      ATerm h_17;
      h_17 = t;
      {
        ATerm f_60 = NULL;
        t = SSLgetAnnotations(not_null(c_60));
        {
          f_60 = t;
          if(((e_60 != NULL) && (e_60 != f_60)))
            _fail(f_60);
          else
            e_60 = f_60;
        }
      }
      t = h_17;
      {
        ATerm h_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(e_60));
        {
          h_60 = t;
          if(((g_60 != NULL) && (g_60 != h_60)))
            _fail(h_60);
          else
            g_60 = h_60;
        }
        t = not_null(g_60);
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
  ATerm p_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_Id_0))
    {
      ATerm r_60 = NULL,t_60 = NULL;
      ATerm n_17;
      n_17 = t;
      {
        ATerm s_60 = NULL;
        t = SSLgetAnnotations(not_null(p_60));
        {
          s_60 = t;
          if(((r_60 != NULL) && (r_60 != s_60)))
            _fail(s_60);
          else
            r_60 = s_60;
        }
      }
      t = n_17;
      {
        ATerm u_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(r_60));
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
        t = not_null(t_60);
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
  ATerm b_61 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          ATerm q_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = q_17;
              {
                ATerm w_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = CallT_3(t, a_3, _id, _id);
                    ;
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm b_18 = t;
                      int c_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          ;
                          LocalPopChoice(c_18);
                        }
                      else
                        {
                          t = b_18;
                          {
                            ATerm d_18 = t;
                            int e_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                ;
                                LocalPopChoice(e_18);
                              }
                            else
                              {
                                t = d_18;
                                {
                                  ATerm f_18 = t;
                                  int g_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_3 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, b_3, _id);
                                      ;
                                      LocalPopChoice(g_18);
                                    }
                                  else
                                    {
                                      t = f_18;
                                      {
                                        ATerm h_18 = t;
                                        int i_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, c_3);
                                            ;
                                            LocalPopChoice(i_18);
                                          }
                                        else
                                          {
                                            t = h_18;
                                            {
                                              ATerm j_18 = t;
                                              int k_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_3 (ATerm t)
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, e_3, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, d_3);
                                                  ;
                                                  LocalPopChoice(k_18);
                                                }
                                              else
                                                {
                                                  t = j_18;
                                                  {
                                                    ATerm l_18 = t;
                                                    int q_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_3 (ATerm t)
                                                        {
                                                          ATerm g_3 (ATerm t)
                                                          {
                                                            ATerm h_3 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, h_3, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, g_3);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, f_3, _id);
                                                        ;
                                                        LocalPopChoice(q_18);
                                                      }
                                                    else
                                                      {
                                                        t = l_18;
                                                        {
                                                          ATerm r_18 = t;
                                                          int s_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              ;
                                                              LocalPopChoice(s_18);
                                                            }
                                                          else
                                                            {
                                                              t = r_18;
                                                              {
                                                                ATerm w_18 = t;
                                                                int y_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, b_61, b_61);
                                                                    ;
                                                                    LocalPopChoice(y_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_18;
                                                                    {
                                                                      ATerm b_19 = t;
                                                                      int c_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2(t, b_61, b_61);
                                                                          ;
                                                                          LocalPopChoice(c_19);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_19;
                                                                          t = GuardedLChoice_3(t, b_61, b_61, b_61);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
    ATerm d_19;
    d_19 = t;
    {
      ATerm z_60 = NULL;
      ATerm a_61 = NULL;
      t = term_size_0(t);
      {
        a_61 = t;
        if(((z_60 != NULL) && (z_60 != a_61)))
          _fail(a_61);
        else
          z_60 = a_61;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), term_e_19);
        t = leq_0(t);
      }
    }
    t = d_19;
  }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm))
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  l_61 = t;
  k_61 :
  if(match_cons(l_61, sym_SDefT_4))
    {
      m_61 = ATgetArgument(l_61, 0);
      n_61 = ATgetArgument(l_61, 1);
      o_61 = ATgetArgument(l_61, 2);
      p_61 = ATgetArgument(l_61, 3);
      {
        ATerm v_61 = NULL,x_61 = NULL;
        ATerm w_61 = NULL;
        t = SSLgetAnnotations(not_null(l_61));
        {
          w_61 = t;
          if(((v_61 != NULL) && (v_61 != w_61)))
            _fail(w_61);
          else
            v_61 = w_61;
        }
        {
          t = not_null(m_61);
          {
            ATerm z_61 = NULL;
            t = c_102(t);
            {
              x_61 = t;
              {
                t = not_null(n_61);
                {
                  ATerm b_62 = NULL;
                  t = d_102(t);
                  {
                    z_61 = t;
                    {
                      t = not_null(o_61);
                      {
                        ATerm d_62 = NULL;
                        t = e_102(t);
                        {
                          b_62 = t;
                          {
                            t = not_null(p_61);
                            {
                              ATerm i_62 = NULL;
                              t = f_102(t);
                              {
                                d_62 = t;
                                {
                                  ATerm j_62 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(x_61), not_null(z_61), not_null(b_62), not_null(d_62)), not_null(v_61));
                                  {
                                    j_62 = t;
                                    if(((i_62 != NULL) && (i_62 != j_62)))
                                      _fail(j_62);
                                    else
                                      i_62 = j_62;
                                  }
                                  t = not_null(i_62);
                                }
                              }
                            }
                          }
                        }
                      }
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
  ATerm y_62 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm a_63 = NULL;
    ATerm f_19 = t;
    if((PushChoice() == 0))
      {
        ATerm z_62 = NULL;
        z_62 = t;
        r_62 :
        if(!(match_string(z_62, "main_0_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_19;
      }
    {
      a_63 = t;
      if(((y_62 != NULL) && (y_62 != a_63)))
        _fail(a_63);
      else
        y_62 = a_63;
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm g_19;
    g_19 = t;
    {
      ATerm n_19 = t;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
            b_63 = t;
            u_62 :
            if(match_cons(b_63, sym_CallT_3))
              {
                c_63 = ATgetArgument(b_63, 0);
                e_63 = ATgetArgument(b_63, 1);
                f_63 = ATgetArgument(b_63, 2);
                v_62 :
                if(match_cons(c_63, sym_SVar_1))
                  {
                    d_63 = ATgetArgument(c_63, 0);
                    w_62 :
                    if(((ATgetType(e_63) == AT_LIST) && ATisEmpty(e_63)))
                      {
                        x_62 :
                        if(((ATgetType(f_63) == AT_LIST) && ATisEmpty(f_63)))
                          {
                            if(((y_62 != NULL) && (y_62 != d_63)))
                              _fail(d_63);
                            else
                              y_62 = d_63;
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = n_19;
        }
    }
    t = g_19;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDefT_4(t, i_3, _id, _id, j_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  z_63 :
  if(match_cons(a_64, sym_Cong_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      {
        ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,m_65 = NULL,o_65 = NULL,q_65 = NULL;
        ATerm o_19;
        o_19 = t;
        {
          ATerm s_64 = NULL;
          t = not_null(c_64);
          {
            ATerm v_64 = NULL;
            t = map_1(t, new_0);
            {
              s_64 = t;
              {
                if(((k_64 != NULL) && (k_64 != s_64)))
                  _fail(s_64);
                else
                  k_64 = s_64;
                {
                  t = not_null(k_64);
                  {
                    ATerm w_64 = NULL;
                    ATerm l_3 (ATerm t)
                    {
                      ATerm t_64 = NULL;
                      ATerm u_64 = NULL;
                      u_64 = t;
                      if(((t_64 != NULL) && (t_64 != u_64)))
                        _fail(u_64);
                      else
                        t_64 = u_64;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_64));
                      return(t);
                    }
                    t = map_1(t, l_3);
                    {
                      v_64 = t;
                      {
                        if(((h_64 != NULL) && (h_64 != v_64)))
                          _fail(v_64);
                        else
                          h_64 = v_64;
                        {
                          ATerm x_64 = NULL;
                          t = new_0(t);
                          {
                            w_64 = t;
                            {
                              if(((i_64 != NULL) && (i_64 != w_64)))
                                _fail(w_64);
                              else
                                i_64 = w_64;
                              {
                                t = not_null(c_64);
                                {
                                  ATerm a_65 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    x_64 = t;
                                    {
                                      if(((l_64 != NULL) && (l_64 != x_64)))
                                        _fail(x_64);
                                      else
                                        l_64 = x_64;
                                      {
                                        t = not_null(l_64);
                                        {
                                          ATerm b_65 = NULL,l_65 = NULL;
                                          ATerm m_3 (ATerm t)
                                          {
                                            ATerm y_64 = NULL;
                                            ATerm z_64 = NULL;
                                            z_64 = t;
                                            if(((y_64 != NULL) && (y_64 != z_64)))
                                              _fail(z_64);
                                            else
                                              y_64 = z_64;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_64));
                                            return(t);
                                          }
                                          t = map_1(t, m_3);
                                          {
                                            a_65 = t;
                                            {
                                              if(((j_64 != NULL) && (j_64 != a_65)))
                                                _fail(a_65);
                                              else
                                                j_64 = a_65;
                                              {
                                                ATerm c_65 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_64), not_null(l_64));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    c_65 = t;
                                                    if(((b_65 != NULL) && (b_65 != c_65)))
                                                      _fail(c_65);
                                                    else
                                                      b_65 = c_65;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_65), not_null(c_64));
                                                  {
                                                    ATerm n_3 (ATerm t)
                                                    {
                                                      ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
                                                      d_65 = t;
                                                      s_63 :
                                                      if(match_cons(d_65, sym__2))
                                                        {
                                                          e_65 = ATgetArgument(d_65, 0);
                                                          h_65 = ATgetArgument(d_65, 1);
                                                          t_63 :
                                                          if(match_cons(e_65, sym__2))
                                                            {
                                                              f_65 = ATgetArgument(e_65, 0);
                                                              g_65 = ATgetArgument(e_65, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_65))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_65)))));
                                                            }
                                                          else
                                                            {
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
                                                      l_65 = t;
                                                      if(((m_64 != NULL) && (m_64 != l_65)))
                                                        _fail(l_65);
                                                      else
                                                        m_64 = l_65;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = o_19;
        {
          ATerm p_19;
          p_19 = t;
          {
            ATerm n_65 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_64), not_null(l_64));
            {
              t = conc_0(t);
              {
                n_65 = t;
                if(((m_65 != NULL) && (m_65 != n_65)))
                  _fail(n_65);
                else
                  m_65 = n_65;
              }
            }
          }
          t = p_19;
          {
            ATerm q_19;
            q_19 = t;
            {
              ATerm p_65 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_64), not_null(h_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_64))));
              {
                t = Mapp2_0(t);
                {
                  p_65 = t;
                  if(((o_65 != NULL) && (o_65 != p_65)))
                    _fail(p_65);
                  else
                    o_65 = p_65;
                }
              }
            }
            t = q_19;
            {
              ATerm r_65 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_64), not_null(j_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_64))));
              {
                t = Bapp2_0(t);
                {
                  r_65 = t;
                  if(((q_65 != NULL) && (q_65 != r_65)))
                    _fail(r_65);
                  else
                    q_65 = r_65;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_65)), not_null(i_64)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_64)), not_null(q_65))));
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
  ATerm d_67 = NULL,e_67 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym_Build_1))
    {
      e_67 = ATgetArgument(d_67, 0);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
            ATerm k_67 = NULL;
            ATerm o_67 = NULL;
            t = new_0(t);
            {
              k_67 = t;
              {
                if(((i_67 != NULL) && (i_67 != k_67)))
                  _fail(k_67);
                else
                  i_67 = k_67;
                {
                  t = not_null(e_67);
                  {
                    ATerm o_3 (ATerm t)
                    {
                      ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
                      l_67 = t;
                      s_66 :
                      if(match_cons(l_67, sym_Anno_2))
                        {
                          m_67 = ATgetArgument(l_67, 0);
                          n_67 = ATgetArgument(l_67, 1);
                          {
                            if(((g_67 != NULL) && (g_67 != m_67)))
                              _fail(m_67);
                            else
                              g_67 = m_67;
                            {
                              if(((h_67 != NULL) && (h_67 != n_67)))
                                _fail(n_67);
                              else
                                h_67 = n_67;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67));
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
                      o_67 = t;
                      if(((j_67 != NULL) && (j_67 != o_67)))
                        _fail(o_67);
                      else
                        j_67 = o_67;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_67)), not_null(g_67))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_67))));
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
                  ATerm t_67 = NULL;
                  ATerm w_67 = NULL;
                  t = new_0(t);
                  {
                    t_67 = t;
                    {
                      if(((r_67 != NULL) && (r_67 != t_67)))
                        _fail(t_67);
                      else
                        r_67 = t_67;
                      {
                        t = not_null(e_67);
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm u_67 = NULL,v_67 = NULL;
                            u_67 = t;
                            w_66 :
                            if(match_cons(u_67, sym_RootApp_1))
                              {
                                v_67 = ATgetArgument(u_67, 0);
                                {
                                  if(((q_67 != NULL) && (q_67 != v_67)))
                                    _fail(v_67);
                                  else
                                    q_67 = v_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_67));
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
                            w_67 = t;
                            if(((s_67 != NULL) && (s_67 != w_67)))
                              _fail(w_67);
                            else
                              s_67 = w_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_67))));
                  ;
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
                  {
                    ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
                    ATerm c_68 = NULL;
                    ATerm g_68 = NULL;
                    t = new_0(t);
                    {
                      c_68 = t;
                      {
                        if(((a_68 != NULL) && (a_68 != c_68)))
                          _fail(c_68);
                        else
                          a_68 = c_68;
                        {
                          t = not_null(e_67);
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
                              d_68 = t;
                              a_67 :
                              if(match_cons(d_68, sym_App_2))
                                {
                                  e_68 = ATgetArgument(d_68, 0);
                                  f_68 = ATgetArgument(d_68, 1);
                                  {
                                    if(((y_67 != NULL) && (y_67 != e_68)))
                                      _fail(e_68);
                                    else
                                      y_67 = e_68;
                                    {
                                      if(((z_67 != NULL) && (z_67 != f_68)))
                                        _fail(f_68);
                                      else
                                        z_67 = f_68;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_68));
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
                              g_68 = t;
                              if(((b_68 != NULL) && (b_68 != g_68)))
                                _fail(g_68);
                              else
                                b_68 = g_68;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_67), not_null(z_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_68)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_68))));
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_69)), not_null(f_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL;
  o_69 = t;
  l_69 :
  if(match_cons(o_69, sym__2))
    {
      p_69 = ATgetArgument(o_69, 0);
      s_69 = ATgetArgument(o_69, 1);
      m_69 :
      if(((ATgetType(p_69) == AT_LIST) && !(ATisEmpty(p_69))))
        {
          q_69 = ATgetFirst((ATermList) p_69);
          r_69 = (ATerm) ATgetNext((ATermList) p_69);
          n_69 :
          if(((ATgetType(s_69) == AT_LIST) && !(ATisEmpty(s_69))))
            {
              t_69 = ATgetFirst((ATermList) s_69);
              u_69 = (ATerm) ATgetNext((ATermList) s_69);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_69), not_null(t_69)), (ATerm) ATmakeAppl(sym__2, not_null(r_69), not_null(u_69)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  c_71 :
  if(match_cons(f_71, sym__2))
    {
      g_71 = ATgetArgument(f_71, 0);
      h_71 = ATgetArgument(f_71, 1);
      d_71 :
      if(((ATgetType(g_71) == AT_LIST) && ATisEmpty(g_71)))
        {
          e_71 :
          if(((ATgetType(h_71) == AT_LIST) && ATisEmpty(h_71)))
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
ATerm genzip_4 (ATerm t, ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t_115 (ATerm))
{
  ATerm j_71 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_115(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          t = r_115(t);
          {
            t = _2(t, t_115, j_71);
            t = s_115(t);
          }
        }
      }
    return(t);
  }
  t = j_71(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_115 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_115);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
  i_72 = t;
  b_72 :
  if(match_cons(i_72, sym_Call_2))
    {
      j_72 = ATgetArgument(i_72, 0);
      l_72 = ATgetArgument(i_72, 1);
      c_72 :
      if(match_cons(j_72, sym_SVar_1))
        {
          k_72 = ATgetArgument(j_72, 0);
          d_72 :
          if(match_string(k_72, "Anno_Cong__"))
            {
              e_72 :
              if(((ATgetType(l_72) == AT_LIST) && !(ATisEmpty(l_72))))
                {
                  m_72 = ATgetFirst((ATermList) l_72);
                  p_72 = (ATerm) ATgetNext((ATermList) l_72);
                  f_72 :
                  if(match_cons(m_72, sym_Cong_2))
                    {
                      n_72 = ATgetArgument(m_72, 0);
                      o_72 = ATgetArgument(m_72, 1);
                      g_72 :
                      if(((ATgetType(p_72) == AT_LIST) && !(ATisEmpty(p_72))))
                        {
                          q_72 = ATgetFirst((ATermList) p_72);
                          r_72 = (ATerm) ATgetNext((ATermList) p_72);
                          h_72 :
                          if(((ATgetType(r_72) == AT_LIST) && ATisEmpty(r_72)))
                            {
                              {
                                ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,s_74 = NULL,d_75 = NULL,f_75 = NULL;
                                ATerm e_20;
                                e_20 = t;
                                {
                                  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(o_72)), not_null(q_72));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      c_73 = t;
                                      x_71 :
                                      if(((ATgetType(c_73) == AT_LIST) && !(ATisEmpty(c_73))))
                                        {
                                          d_73 = ATgetFirst((ATermList) c_73);
                                          e_73 = (ATerm) ATgetNext((ATermList) c_73);
                                          {
                                            ATerm h_73 = NULL;
                                            if(((v_72 != NULL) && (v_72 != d_73)))
                                              _fail(d_73);
                                            else
                                              v_72 = d_73;
                                            {
                                              if(((z_72 != NULL) && (z_72 != e_73)))
                                                _fail(e_73);
                                              else
                                                z_72 = e_73;
                                              {
                                                ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
                                                ATerm r_3 (ATerm t)
                                                {
                                                  ATerm f_73 = NULL;
                                                  ATerm g_73 = NULL;
                                                  g_73 = t;
                                                  if(((f_73 != NULL) && (f_73 != g_73)))
                                                    _fail(g_73);
                                                  else
                                                    f_73 = g_73;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_73));
                                                  return(t);
                                                }
                                                t = map_1(t, r_3);
                                                {
                                                  h_73 = t;
                                                  {
                                                    if(((w_72 != NULL) && (w_72 != h_73)))
                                                      _fail(h_73);
                                                    else
                                                      w_72 = h_73;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(o_72)), not_null(q_72));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          i_73 = t;
                                                          w_71 :
                                                          if(((ATgetType(i_73) == AT_LIST) && !(ATisEmpty(i_73))))
                                                            {
                                                              j_73 = ATgetFirst((ATermList) i_73);
                                                              k_73 = (ATerm) ATgetNext((ATermList) i_73);
                                                              {
                                                                ATerm s_73 = NULL;
                                                                if(((x_72 != NULL) && (x_72 != j_73)))
                                                                  _fail(j_73);
                                                                else
                                                                  x_72 = j_73;
                                                                {
                                                                  if(((a_73 != NULL) && (a_73 != k_73)))
                                                                    _fail(k_73);
                                                                  else
                                                                    a_73 = k_73;
                                                                  {
                                                                    ATerm t_73 = NULL,r_74 = NULL;
                                                                    ATerm s_3 (ATerm t)
                                                                    {
                                                                      ATerm l_73 = NULL;
                                                                      ATerm r_73 = NULL;
                                                                      r_73 = t;
                                                                      if(((l_73 != NULL) && (l_73 != r_73)))
                                                                        _fail(r_73);
                                                                      else
                                                                        l_73 = r_73;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_73));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, s_3);
                                                                    {
                                                                      s_73 = t;
                                                                      {
                                                                        if(((y_72 != NULL) && (y_72 != s_73)))
                                                                          _fail(s_73);
                                                                        else
                                                                          y_72 = s_73;
                                                                        {
                                                                          ATerm u_73 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(a_73));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              u_73 = t;
                                                                              if(((t_73 != NULL) && (t_73 != u_73)))
                                                                                _fail(u_73);
                                                                              else
                                                                                t_73 = u_73;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_73), (ATerm) ATinsert(CheckATermList(not_null(o_72)), not_null(q_72)));
                                                                            {
                                                                              ATerm t_3 (ATerm t)
                                                                              {
                                                                                ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
                                                                                e_74 = t;
                                                                                t_71 :
                                                                                if(match_cons(e_74, sym__2))
                                                                                  {
                                                                                    f_74 = ATgetArgument(e_74, 0);
                                                                                    i_74 = ATgetArgument(e_74, 1);
                                                                                    u_71 :
                                                                                    if(match_cons(f_74, sym__2))
                                                                                      {
                                                                                        g_74 = ATgetArgument(f_74, 0);
                                                                                        h_74 = ATgetArgument(f_74, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_74))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_74), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_74)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                r_74 = t;
                                                                                if(((b_73 != NULL) && (b_73 != r_74)))
                                                                                  _fail(r_74);
                                                                                else
                                                                                  b_73 = r_74;
                                                                              }
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
                                t = e_20;
                                {
                                  ATerm j_20;
                                  j_20 = t;
                                  {
                                    ATerm c_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(a_73));
                                    {
                                      t = conc_0(t);
                                      {
                                        c_75 = t;
                                        if(((s_74 != NULL) && (s_74 != c_75)))
                                          _fail(c_75);
                                        else
                                          s_74 = c_75;
                                      }
                                    }
                                  }
                                  t = j_20;
                                  {
                                    ATerm k_20;
                                    k_20 = t;
                                    {
                                      ATerm e_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_72), not_null(w_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_72))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          e_75 = t;
                                          if(((d_75 != NULL) && (d_75 != e_75)))
                                            _fail(e_75);
                                          else
                                            d_75 = e_75;
                                        }
                                      }
                                    }
                                    t = k_20;
                                    {
                                      ATerm g_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_72), not_null(y_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_72))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          g_75 = t;
                                          if(((f_75 != NULL) && (f_75 != g_75)))
                                            _fail(g_75);
                                          else
                                            f_75 = g_75;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(s_74)), not_null(x_72)), not_null(v_72)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_73)), not_null(f_75))));
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
ATerm As_2 (ATerm t, ATerm r_96 (ATerm), ATerm s_96 (ATerm))
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  o_77 = t;
  n_77 :
  if(match_cons(o_77, sym_As_2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      {
        ATerm u_77 = NULL,w_77 = NULL;
        ATerm v_77 = NULL;
        t = SSLgetAnnotations(not_null(o_77));
        {
          v_77 = t;
          if(((u_77 != NULL) && (u_77 != v_77)))
            _fail(v_77);
          else
            u_77 = v_77;
        }
        {
          t = not_null(p_77);
          {
            ATerm y_77 = NULL;
            t = r_96(t);
            {
              w_77 = t;
              {
                t = not_null(q_77);
                {
                  ATerm a_78 = NULL;
                  t = s_96(t);
                  {
                    y_77 = t;
                    {
                      ATerm b_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(w_77), not_null(y_77)), not_null(u_77));
                      {
                        b_78 = t;
                        if(((a_78 != NULL) && (a_78 != b_78)))
                          _fail(b_78);
                        else
                          a_78 = b_78;
                      }
                      t = not_null(a_78);
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
ATerm PrimT_3 (ATerm t, ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm))
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  o_78 = t;
  n_78 :
  if(match_cons(o_78, sym_PrimT_3))
    {
      p_78 = ATgetArgument(o_78, 0);
      q_78 = ATgetArgument(o_78, 1);
      r_78 = ATgetArgument(o_78, 2);
      {
        ATerm w_78 = NULL,y_78 = NULL;
        ATerm x_78 = NULL;
        t = SSLgetAnnotations(not_null(o_78));
        {
          x_78 = t;
          if(((w_78 != NULL) && (w_78 != x_78)))
            _fail(x_78);
          else
            w_78 = x_78;
        }
        {
          t = not_null(p_78);
          {
            ATerm a_79 = NULL;
            t = q_100(t);
            {
              y_78 = t;
              {
                t = not_null(q_78);
                {
                  ATerm c_79 = NULL;
                  t = r_100(t);
                  {
                    a_79 = t;
                    {
                      t = not_null(r_78);
                      {
                        ATerm e_79 = NULL;
                        t = s_100(t);
                        {
                          c_79 = t;
                          {
                            ATerm f_79 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(y_78), not_null(a_79), not_null(c_79)), not_null(w_78));
                            {
                              f_79 = t;
                              if(((e_79 != NULL) && (e_79 != f_79)))
                                _fail(f_79);
                              else
                                e_79 = f_79;
                            }
                            t = not_null(e_79);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t_79 = t;
  s_79 :
  if(match_cons(t_79, sym_Explode_2))
    {
      u_79 = ATgetArgument(t_79, 0);
      v_79 = ATgetArgument(t_79, 1);
      {
        ATerm z_79 = NULL,b_80 = NULL;
        ATerm a_80 = NULL;
        t = SSLgetAnnotations(not_null(t_79));
        {
          a_80 = t;
          if(((z_79 != NULL) && (z_79 != a_80)))
            _fail(a_80);
          else
            z_79 = a_80;
        }
        {
          t = not_null(u_79);
          {
            ATerm d_80 = NULL;
            t = k_96(t);
            {
              b_80 = t;
              {
                t = not_null(v_79);
                {
                  ATerm f_80 = NULL;
                  t = l_96(t);
                  {
                    d_80 = t;
                    {
                      ATerm g_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(b_80), not_null(d_80)), not_null(z_79));
                      {
                        g_80 = t;
                        if(((f_80 != NULL) && (f_80 != g_80)))
                          _fail(g_80);
                        else
                          f_80 = g_80;
                      }
                      t = not_null(f_80);
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
ATerm Op_2 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm))
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym_Op_2))
    {
      t_80 = ATgetArgument(s_80, 0);
      u_80 = ATgetArgument(s_80, 1);
      {
        ATerm y_80 = NULL,a_81 = NULL;
        ATerm z_80 = NULL;
        t = SSLgetAnnotations(not_null(s_80));
        {
          z_80 = t;
          if(((y_80 != NULL) && (y_80 != z_80)))
            _fail(z_80);
          else
            y_80 = z_80;
        }
        {
          t = not_null(t_80);
          {
            ATerm c_81 = NULL;
            t = g_96(t);
            {
              a_81 = t;
              {
                t = not_null(u_80);
                {
                  ATerm e_81 = NULL;
                  t = h_96(t);
                  {
                    c_81 = t;
                    {
                      ATerm f_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_81), not_null(c_81)), not_null(y_80));
                      {
                        f_81 = t;
                        if(((e_81 != NULL) && (e_81 != f_81)))
                          _fail(f_81);
                        else
                          e_81 = f_81;
                      }
                      t = not_null(e_81);
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
ATerm pat_td_1 (ATerm t, ATerm p_136 (ATerm))
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_136(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                t = pat_td_1(t, p_136);
                return(t);
              }
              t = fetch_1(t, v_3);
              return(t);
            }
            t = Op_2(t, _id, u_3);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = pat_td_1(t, p_136);
                    return(t);
                  }
                  t = Explode_2(t, _id, w_3);
                  ;
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = u_20;
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          t = pat_td_1(t, p_136);
                          return(t);
                        }
                        t = Explode_2(t, x_3, _id);
                        ;
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = w_20;
                        {
                          ATerm y_20 = t;
                          int e_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = pat_td_1(t, p_136);
                                  return(t);
                                }
                                t = fetch_1(t, z_3);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, y_3);
                              ;
                              LocalPopChoice(e_21);
                            }
                          else
                            {
                              t = y_20;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1(t, p_136);
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
  ATerm b_82 = NULL,c_82 = NULL;
  b_82 = t;
  a_82 :
  if(match_cons(b_82, sym_Match_1))
    {
      c_82 = ATgetArgument(b_82, 0);
      {
        ATerm f_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
            ATerm i_82 = NULL;
            ATerm m_82 = NULL;
            t = new_0(t);
            {
              i_82 = t;
              {
                if(((g_82 != NULL) && (g_82 != i_82)))
                  _fail(i_82);
                else
                  g_82 = i_82;
                {
                  t = not_null(c_82);
                  {
                    ATerm b_4 (ATerm t)
                    {
                      ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
                      j_82 = t;
                      q_81 :
                      if(match_cons(j_82, sym_Anno_2))
                        {
                          k_82 = ATgetArgument(j_82, 0);
                          l_82 = ATgetArgument(j_82, 1);
                          {
                            if(((e_82 != NULL) && (e_82 != k_82)))
                              _fail(k_82);
                            else
                              e_82 = k_82;
                            {
                              if(((f_82 != NULL) && (f_82 != l_82)))
                                _fail(l_82);
                              else
                                f_82 = l_82;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_82)), not_null(e_82));
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
                      m_82 = t;
                      if(((h_82 != NULL) && (h_82 != m_82)))
                        _fail(m_82);
                      else
                        h_82 = m_82;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_82)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_82)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_82))))));
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = f_21;
            {
              ATerm n_21 = t;
              int o_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
                  ATerm r_82 = NULL;
                  ATerm u_82 = NULL;
                  t = new_0(t);
                  {
                    r_82 = t;
                    {
                      if(((p_82 != NULL) && (p_82 != r_82)))
                        _fail(r_82);
                      else
                        p_82 = r_82;
                      {
                        t = not_null(c_82);
                        {
                          ATerm c_4 (ATerm t)
                          {
                            ATerm s_82 = NULL,t_82 = NULL;
                            s_82 = t;
                            u_81 :
                            if(match_cons(s_82, sym_RootApp_1))
                              {
                                t_82 = ATgetArgument(s_82, 0);
                                {
                                  if(((o_82 != NULL) && (o_82 != t_82)))
                                    _fail(t_82);
                                  else
                                    o_82 = t_82;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_82));
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
                            u_82 = t;
                            if(((q_82 != NULL) && (q_82 != u_82)))
                              _fail(u_82);
                            else
                              q_82 = u_82;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_82))), not_null(o_82))));
                  ;
                  LocalPopChoice(o_21);
                }
              else
                {
                  t = n_21;
                  {
                    ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
                    ATerm a_83 = NULL;
                    ATerm e_83 = NULL;
                    t = new_0(t);
                    {
                      a_83 = t;
                      {
                        if(((y_82 != NULL) && (y_82 != a_83)))
                          _fail(a_83);
                        else
                          y_82 = a_83;
                        {
                          t = not_null(c_82);
                          {
                            ATerm d_4 (ATerm t)
                            {
                              ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
                              b_83 = t;
                              y_81 :
                              if(match_cons(b_83, sym_App_2))
                                {
                                  c_83 = ATgetArgument(b_83, 0);
                                  d_83 = ATgetArgument(b_83, 1);
                                  {
                                    if(((x_82 != NULL) && (x_82 != c_83)))
                                      _fail(c_83);
                                    else
                                      x_82 = c_83;
                                    {
                                      if(((w_82 != NULL) && (w_82 != d_83)))
                                        _fail(d_83);
                                      else
                                        w_82 = d_83;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_82));
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
                              e_83 = t;
                              if(((z_82 != NULL) && (z_82 != e_83)))
                                _fail(e_83);
                              else
                                z_82 = e_83;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_82))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_82)), not_null(x_82)))));
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym_Cong_2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        ATerm y_85 = NULL;
        ATerm c_86 = NULL;
        t = not_null(v_85);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm z_85 = NULL,a_86 = NULL;
            a_86 = t;
            q_85 :
            if(match_cons(a_86, sym_Match_1))
              {
                z_85 = ATgetArgument(a_86, 0);
                t = not_null(z_85);
              }
            else
              {
                if(match_cons(a_86, sym_Id_0))
                  {
                    t = term_p_21;
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
            c_86 = t;
            if(((y_85 != NULL) && (y_85 != c_86)))
              _fail(c_86);
            else
              y_85 = c_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_85), not_null(y_85)));
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
ATerm oncetd_1 (ATerm t, ATerm i_112 (ATerm))
{
  ATerm h_86 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_112(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = _one(t, h_86);
      }
    return(t);
  }
  t = h_86(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  y_86 = t;
  o_86 :
  if(match_cons(y_86, sym_Let_2))
    {
      z_86 = ATgetArgument(y_86, 0);
      g_87 = ATgetArgument(y_86, 1);
      p_86 :
      if(((ATgetType(z_86) == AT_LIST) && !(ATisEmpty(z_86))))
        {
          a_87 = ATgetFirst((ATermList) z_86);
          f_87 = (ATerm) ATgetNext((ATermList) z_86);
          q_86 :
          if(match_cons(a_87, sym_SDefT_4))
            {
              b_87 = ATgetArgument(a_87, 0);
              c_87 = ATgetArgument(a_87, 1);
              d_87 = ATgetArgument(a_87, 2);
              e_87 = ATgetArgument(a_87, 3);
              r_86 :
              if(((ATgetType(c_87) == AT_LIST) && ATisEmpty(c_87)))
                {
                  s_86 :
                  if(((ATgetType(d_87) == AT_LIST) && ATisEmpty(d_87)))
                    {
                      t_86 :
                      if(((ATgetType(f_87) == AT_LIST) && ATisEmpty(f_87)))
                        {
                          u_86 :
                          if(match_cons(g_87, sym_CallT_3))
                            {
                              h_87 = ATgetArgument(g_87, 0);
                              j_87 = ATgetArgument(g_87, 1);
                              k_87 = ATgetArgument(g_87, 2);
                              v_86 :
                              if(match_cons(h_87, sym_SVar_1))
                                {
                                  i_87 = ATgetArgument(h_87, 0);
                                  w_86 :
                                  if(((ATgetType(j_87) == AT_LIST) && ATisEmpty(j_87)))
                                    {
                                      x_86 :
                                      if(((ATgetType(k_87) == AT_LIST) && ATisEmpty(k_87)))
                                        {
                                          {
                                            if(((b_87 != NULL) && (b_87 != i_87)))
                                              _fail(i_87);
                                            else
                                              b_87 = i_87;
                                            {
                                              t = not_null(e_87);
                                              {
                                                ATerm z_21 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm f_4 (ATerm t)
                                                    {
                                                      ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
                                                      n_87 = t;
                                                      k_86 :
                                                      if(match_cons(n_87, sym_CallT_3))
                                                        {
                                                          o_87 = ATgetArgument(n_87, 0);
                                                          q_87 = ATgetArgument(n_87, 1);
                                                          r_87 = ATgetArgument(n_87, 2);
                                                          l_86 :
                                                          if(match_cons(o_87, sym_SVar_1))
                                                            {
                                                              p_87 = ATgetArgument(o_87, 0);
                                                              m_86 :
                                                              if(((ATgetType(q_87) == AT_LIST) && ATisEmpty(q_87)))
                                                                {
                                                                  n_86 :
                                                                  if(((ATgetType(r_87) == AT_LIST) && ATisEmpty(r_87)))
                                                                    {
                                                                      if(((b_87 != NULL) && (b_87 != p_87)))
                                                                        _fail(p_87);
                                                                      else
                                                                        b_87 = p_87;
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = oncetd_1(t, f_4);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = z_21;
                                                  }
                                              }
                                              t = not_null(e_87);
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
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  v_87 :
  if(match_cons(x_87, sym_Let_2))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      w_87 :
      if(((ATgetType(y_87) == AT_LIST) && ATisEmpty(y_87)))
        {
          t = not_null(z_87);
        }
      else
        {
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
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  f_88 = t;
  d_88 :
  if(match_cons(f_88, sym_Scope_2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      e_88 :
      if(((ATgetType(g_88) == AT_LIST) && ATisEmpty(g_88)))
        {
          t = not_null(h_88);
        }
      else
        {
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
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  q_88 :
  if(match_cons(d_89, sym_Where_1))
    {
      e_89 = ATgetArgument(d_89, 0);
      r_88 :
      if(match_cons(e_89, sym_Seq_2))
        {
          c_89 = ATgetArgument(e_89, 0);
          y_88 = ATgetArgument(e_89, 1);
          s_88 :
          if(match_cons(c_89, sym_Where_1))
            {
              x_88 = ATgetArgument(c_89, 0);
              t_88 :
              if(match_cons(y_88, sym_Seq_2))
                {
                  z_88 = ATgetArgument(y_88, 0);
                  b_89 = ATgetArgument(y_88, 1);
                  u_88 :
                  if(match_cons(z_88, sym_Build_1))
                    {
                      a_89 = ATgetArgument(z_88, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_88), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_89)), not_null(b_89))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_89, sym_Where_1))
            {
              c_89 = ATgetArgument(e_89, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(c_89));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(d_89, sym_Test_1))
        {
          e_89 = ATgetArgument(d_89, 0);
          v_88 :
          if(match_cons(e_89, sym_Test_1))
            {
              c_89 = ATgetArgument(e_89, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_89));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_89, sym_Not_1))
            {
              e_89 = ATgetArgument(d_89, 0);
              w_88 :
              if(match_cons(e_89, sym_Not_1))
                {
                  c_89 = ATgetArgument(e_89, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_89));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(d_89, sym_LChoice_2))
                {
                  e_89 = ATgetArgument(d_89, 0);
                  f_89 = ATgetArgument(d_89, 1);
                  {
                    if(((e_89 != NULL) && (e_89 != f_89)))
                      _fail(f_89);
                    else
                      e_89 = f_89;
                    t = not_null(e_89);
                  }
                }
              else
                {
                  if(match_cons(d_89, sym_Choice_2))
                    {
                      e_89 = ATgetArgument(d_89, 0);
                      f_89 = ATgetArgument(d_89, 1);
                      {
                        if(((e_89 != NULL) && (e_89 != f_89)))
                          _fail(f_89);
                        else
                          e_89 = f_89;
                        t = not_null(e_89);
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
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  h_90 = t;
  d_90 :
  if(match_cons(h_90, sym_LChoice_2))
    {
      i_90 = ATgetArgument(h_90, 0);
      l_90 = ATgetArgument(h_90, 1);
      e_90 :
      if(match_cons(i_90, sym_LChoice_2))
        {
          j_90 = ATgetArgument(i_90, 0);
          k_90 = ATgetArgument(i_90, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_90), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_90), not_null(l_90)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(h_90, sym_Seq_2))
        {
          i_90 = ATgetArgument(h_90, 0);
          l_90 = ATgetArgument(h_90, 1);
          f_90 :
          if(match_cons(i_90, sym_Seq_2))
            {
              j_90 = ATgetArgument(i_90, 0);
              k_90 = ATgetArgument(i_90, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_90), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_90), not_null(l_90)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_90, sym_Choice_2))
            {
              i_90 = ATgetArgument(h_90, 0);
              l_90 = ATgetArgument(h_90, 1);
              g_90 :
              if(match_cons(i_90, sym_Choice_2))
                {
                  j_90 = ATgetArgument(i_90, 0);
                  k_90 = ATgetArgument(i_90, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_90), (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_90), not_null(l_90)));
                }
              else
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
  ATerm a_91 = NULL,b_91 = NULL;
  a_91 = t;
  z_90 :
  if(match_cons(a_91, sym_DefaultVarDec_1))
    {
      b_91 = ATgetArgument(a_91, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_91), term_c_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL;
  g_91 = t;
  f_91 :
  if(match_cons(g_91, sym_DefaultVarDec_1))
    {
      h_91 = ATgetArgument(g_91, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(h_91), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_22), term_c_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, o_0, _id);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            t = map1_1(t, o_0);
            return(t);
          }
          t = try_1(t, h_4);
          return(t);
        }
        t = Cons_2(t, _id, g_4);
      }
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm i_4 (ATerm t)
        {
          t = map1_1(t, o_0);
          return(t);
        }
        t = Cons_2(t, _id, i_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  w_92 = t;
  j_92 :
  if(match_cons(w_92, sym_Lets_2))
    {
      x_92 = ATgetArgument(w_92, 0);
      y_92 = ATgetArgument(w_92, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_92), not_null(y_92));
    }
  else
    {
      if(match_cons(w_92, sym_LChoices_1))
        {
          x_92 = ATgetArgument(w_92, 0);
          p_92 :
          if(((ATgetType(x_92) == AT_LIST) && !(ATisEmpty(x_92))))
            {
              s_92 = ATgetFirst((ATermList) x_92);
              t_92 = (ATerm) ATgetNext((ATermList) x_92);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_92), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_92)));
            }
          else
            {
              if(((ATgetType(x_92) == AT_LIST) && ATisEmpty(x_92)))
                {
                  t = term_f_22;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_92, sym_Choices_1))
            {
              x_92 = ATgetArgument(w_92, 0);
              q_92 :
              if(((ATgetType(x_92) == AT_LIST) && !(ATisEmpty(x_92))))
                {
                  s_92 = ATgetFirst((ATermList) x_92);
                  t_92 = (ATerm) ATgetNext((ATermList) x_92);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_92), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_92)));
                }
              else
                {
                  if(((ATgetType(x_92) == AT_LIST) && ATisEmpty(x_92)))
                    {
                      t = term_f_22;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_92, sym_Seqs_1))
                {
                  x_92 = ATgetArgument(w_92, 0);
                  r_92 :
                  if(((ATgetType(x_92) == AT_LIST) && !(ATisEmpty(x_92))))
                    {
                      s_92 = ATgetFirst((ATermList) x_92);
                      t_92 = (ATerm) ATgetNext((ATermList) x_92);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_92), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_92)));
                    }
                  else
                    {
                      if(((ATgetType(x_92) == AT_LIST) && ATisEmpty(x_92)))
                        {
                          t = term_g_22;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_92, sym_RDefT_4))
                    {
                      x_92 = ATgetArgument(w_92, 0);
                      y_92 = ATgetArgument(w_92, 1);
                      v_92 = ATgetArgument(w_92, 2);
                      u_92 = ATgetArgument(w_92, 3);
                      {
                        ATerm l_93 = NULL,o_93 = NULL;
                        ATerm p_93 = NULL;
                        t = not_null(y_92);
                        {
                          ATerm q_93 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            p_93 = t;
                            {
                              if(((l_93 != NULL) && (l_93 != p_93)))
                                _fail(p_93);
                              else
                                l_93 = p_93;
                              {
                                t = not_null(v_92);
                                {
                                  ATerm j_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, j_4);
                                  {
                                    q_93 = t;
                                    if(((o_93 != NULL) && (o_93 != q_93)))
                                      _fail(q_93);
                                    else
                                      o_93 = q_93;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(x_92), not_null(l_93), not_null(o_93), not_null(u_92));
                      }
                    }
                  else
                    {
                      if(match_cons(w_92, sym_SDefT_4))
                        {
                          x_92 = ATgetArgument(w_92, 0);
                          y_92 = ATgetArgument(w_92, 1);
                          v_92 = ATgetArgument(w_92, 2);
                          u_92 = ATgetArgument(w_92, 3);
                          {
                            ATerm h_22 = t;
                            int i_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_93 = NULL,w_93 = NULL;
                                ATerm x_93 = NULL;
                                t = not_null(v_92);
                                {
                                  ATerm y_93 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    x_93 = t;
                                    {
                                      if(((v_93 != NULL) && (v_93 != x_93)))
                                        _fail(x_93);
                                      else
                                        v_93 = x_93;
                                      {
                                        t = not_null(y_92);
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, k_4);
                                          {
                                            y_93 = t;
                                            if(((w_93 != NULL) && (w_93 != y_93)))
                                              _fail(y_93);
                                            else
                                              w_93 = y_93;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_92), not_null(w_93), not_null(v_93), not_null(u_92));
                                ;
                                LocalPopChoice(i_22);
                              }
                            else
                              {
                                t = h_22;
                                {
                                  ATerm d_94 = NULL,e_94 = NULL;
                                  ATerm f_94 = NULL;
                                  t = not_null(y_92);
                                  {
                                    ATerm g_94 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      f_94 = t;
                                      {
                                        if(((d_94 != NULL) && (d_94 != f_94)))
                                          _fail(f_94);
                                        else
                                          d_94 = f_94;
                                        {
                                          t = not_null(v_92);
                                          {
                                            ATerm l_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, l_4);
                                            {
                                              g_94 = t;
                                              if(((e_94 != NULL) && (e_94 != g_94)))
                                                _fail(g_94);
                                              else
                                                e_94 = g_94;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_92), not_null(d_94), not_null(e_94), not_null(u_92));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(w_92, sym_InfixApp_3))
                            {
                              x_92 = ATgetArgument(w_92, 0);
                              y_92 = ATgetArgument(w_92, 1);
                              v_92 = ATgetArgument(w_92, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_92), (ATerm) ATmakeAppl(sym_Op_2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_92)), not_null(x_92))));
                            }
                          else
                            {
                              if(match_cons(w_92, sym_BAM_3))
                                {
                                  x_92 = ATgetArgument(w_92, 0);
                                  y_92 = ATgetArgument(w_92, 1);
                                  v_92 = ATgetArgument(w_92, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_92))), not_null(x_92)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_92))));
                                }
                              else
                                {
                                  if(match_cons(w_92, sym_AM_2))
                                    {
                                      x_92 = ATgetArgument(w_92, 0);
                                      y_92 = ATgetArgument(w_92, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_92), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_92)));
                                    }
                                  else
                                    {
                                      if(match_cons(w_92, sym_MA_2))
                                        {
                                          x_92 = ATgetArgument(w_92, 0);
                                          y_92 = ATgetArgument(w_92, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_92)), not_null(y_92));
                                        }
                                      else
                                        {
                                          if(match_cons(w_92, sym_BA_2))
                                            {
                                              x_92 = ATgetArgument(w_92, 0);
                                              y_92 = ATgetArgument(w_92, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_92)), not_null(x_92));
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
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL;
  x_95 = t;
  v_95 :
  if(match_cons(x_95, sym_GuardedLChoice_3))
    {
      y_95 = ATgetArgument(x_95, 0);
      z_95 = ATgetArgument(x_95, 1);
      a_96 = ATgetArgument(x_95, 2);
      w_95 :
      if(match_cons(a_96, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_95), not_null(z_95));
        }
      else
        {
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
  ATerm j_96 = NULL,m_96 = NULL;
  j_96 = t;
  f_96 :
  if(match_cons(j_96, sym_Where_1))
    {
      m_96 = ATgetArgument(j_96, 0);
      i_96 :
      if(match_cons(m_96, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  t_96 = t;
  p_96 :
  if(match_cons(t_96, sym_LChoice_2))
    {
      u_96 = ATgetArgument(t_96, 0);
      v_96 = ATgetArgument(t_96, 1);
      q_96 :
      if(match_cons(v_96, sym_Fail_0))
        {
          t = not_null(u_96);
        }
      else
        {
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
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
  b_97 = t;
  z_96 :
  if(match_cons(b_97, sym_LChoice_2))
    {
      c_97 = ATgetArgument(b_97, 0);
      d_97 = ATgetArgument(b_97, 1);
      a_97 :
      if(match_cons(c_97, sym_Fail_0))
        {
          t = not_null(d_97);
        }
      else
        {
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
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
  j_97 = t;
  h_97 :
  if(match_cons(j_97, sym_Choice_2))
    {
      k_97 = ATgetArgument(j_97, 0);
      l_97 = ATgetArgument(j_97, 1);
      i_97 :
      if(match_cons(l_97, sym_Fail_0))
        {
          t = not_null(k_97);
        }
      else
        {
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
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
  r_97 = t;
  p_97 :
  if(match_cons(r_97, sym_Choice_2))
    {
      s_97 = ATgetArgument(r_97, 0);
      t_97 = ATgetArgument(r_97, 1);
      q_97 :
      if(match_cons(s_97, sym_Fail_0))
        {
          t = not_null(t_97);
        }
      else
        {
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
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
  z_97 = t;
  y_97 :
  if(match_cons(z_97, sym_Cong_2))
    {
      a_98 = ATgetArgument(z_97, 0);
      b_98 = ATgetArgument(z_97, 1);
      {
        t = not_null(b_98);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm e_98 = NULL;
            e_98 = t;
            x_97 :
            if(!(match_cons(e_98, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, m_4);
        }
        t = term_f_22;
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
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
  n_98 = t;
  h_98 :
  if(match_cons(n_98, sym_Path_2))
    {
      o_98 = ATgetArgument(n_98, 0);
      p_98 = ATgetArgument(n_98, 1);
      m_98 :
      if(match_cons(p_98, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm w_98 = NULL,x_98 = NULL;
  w_98 = t;
  u_98 :
  if(match_cons(w_98, sym_One_1))
    {
      x_98 = ATgetArgument(w_98, 0);
      v_98 :
      if(match_cons(x_98, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm e_99 = NULL,f_99 = NULL;
  e_99 = t;
  c_99 :
  if(match_cons(e_99, sym_Some_1))
    {
      f_99 = ATgetArgument(e_99, 0);
      d_99 :
      if(match_cons(f_99, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm n_99 = NULL,t_99 = NULL,w_99 = NULL;
  n_99 = t;
  i_99 :
  if(match_cons(n_99, sym_Rec_2))
    {
      t_99 = ATgetArgument(n_99, 0);
      w_99 = ATgetArgument(n_99, 1);
      m_99 :
      if(match_cons(w_99, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL;
  l_100 = t;
  j_100 :
  if(match_cons(l_100, sym_Scope_2))
    {
      m_100 = ATgetArgument(l_100, 0);
      n_100 = ATgetArgument(l_100, 1);
      k_100 :
      if(match_cons(n_100, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
  w_100 = t;
  u_100 :
  if(match_cons(w_100, sym_Seq_2))
    {
      x_100 = ATgetArgument(w_100, 0);
      y_100 = ATgetArgument(w_100, 1);
      v_100 :
      if(match_cons(x_100, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm e_101 = NULL,f_101 = NULL;
  e_101 = t;
  c_101 :
  if(match_cons(e_101, sym_Not_1))
    {
      f_101 = ATgetArgument(e_101, 0);
      d_101 :
      if(match_cons(f_101, sym_Fail_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm k_101 = NULL,l_101 = NULL;
  k_101 = t;
  i_101 :
  if(match_cons(k_101, sym_Test_1))
    {
      l_101 = ATgetArgument(k_101, 0);
      j_101 :
      if(match_cons(l_101, sym_Fail_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm s_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = s_22;
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
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
                        t = F5_0(t);
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
                              t = F6_0(t);
                              ;
                              LocalPopChoice(b_23);
                            }
                          else
                            {
                              t = a_23;
                              {
                                ATerm c_23 = t;
                                int d_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(d_23);
                                  }
                                else
                                  {
                                    t = c_23;
                                    {
                                      ATerm e_23 = t;
                                      int f_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(f_23);
                                        }
                                      else
                                        {
                                          t = e_23;
                                          {
                                            ATerm m_23 = t;
                                            int n_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(n_23);
                                              }
                                            else
                                              {
                                                t = m_23;
                                                {
                                                  ATerm o_23 = t;
                                                  int p_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(p_23);
                                                    }
                                                  else
                                                    {
                                                      t = o_23;
                                                      {
                                                        ATerm q_23 = t;
                                                        int u_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(u_23);
                                                          }
                                                        else
                                                          {
                                                            t = q_23;
                                                            {
                                                              ATerm w_23 = t;
                                                              int y_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_23);
                                                                }
                                                              else
                                                                {
                                                                  t = w_23;
                                                                  {
                                                                    ATerm a_24 = t;
                                                                    int d_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(d_24);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_24;
                                                                        {
                                                                          ATerm e_24 = t;
                                                                          int f_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(f_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_24;
                                                                              {
                                                                                ATerm g_24 = t;
                                                                                int h_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(h_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_24;
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
  ATerm q_101 = NULL,r_101 = NULL;
  q_101 = t;
  o_101 :
  if(match_cons(q_101, sym_Match_1))
    {
      r_101 = ATgetArgument(q_101, 0);
      p_101 :
      if(match_cons(r_101, sym_Wld_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm w_101 = NULL,x_101 = NULL;
  w_101 = t;
  u_101 :
  if(match_cons(w_101, sym_Where_1))
    {
      x_101 = ATgetArgument(w_101, 0);
      v_101 :
      if(match_cons(x_101, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm j_102 = NULL,k_102 = NULL;
  j_102 = t;
  h_102 :
  if(match_cons(j_102, sym_All_1))
    {
      k_102 = ATgetArgument(j_102, 0);
      i_102 :
      if(match_cons(k_102, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
  p_102 = t;
  n_102 :
  if(match_cons(p_102, sym_Rec_2))
    {
      q_102 = ATgetArgument(p_102, 0);
      r_102 = ATgetArgument(p_102, 1);
      o_102 :
      if(match_cons(r_102, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
  x_102 = t;
  v_102 :
  if(match_cons(x_102, sym_Scope_2))
    {
      y_102 = ATgetArgument(x_102, 0);
      z_102 = ATgetArgument(x_102, 1);
      w_102 :
      if(match_cons(z_102, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL;
  f_103 = t;
  d_103 :
  if(match_cons(f_103, sym_LChoice_2))
    {
      g_103 = ATgetArgument(f_103, 0);
      h_103 = ATgetArgument(f_103, 1);
      e_103 :
      if(match_cons(g_103, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL;
  n_103 = t;
  l_103 :
  if(match_cons(n_103, sym_Seq_2))
    {
      o_103 = ATgetArgument(n_103, 0);
      p_103 = ATgetArgument(n_103, 1);
      m_103 :
      if(match_cons(p_103, sym_Id_0))
        {
          t = not_null(o_103);
        }
      else
        {
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
  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL;
  v_103 = t;
  t_103 :
  if(match_cons(v_103, sym_Seq_2))
    {
      w_103 = ATgetArgument(v_103, 0);
      x_103 = ATgetArgument(v_103, 1);
      u_103 :
      if(match_cons(w_103, sym_Id_0))
        {
          t = not_null(x_103);
        }
      else
        {
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
  ATerm d_104 = NULL,e_104 = NULL;
  d_104 = t;
  b_104 :
  if(match_cons(d_104, sym_Not_1))
    {
      e_104 = ATgetArgument(d_104, 0);
      c_104 :
      if(match_cons(e_104, sym_Id_0))
        {
          t = term_f_22;
        }
      else
        {
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
  ATerm j_104 = NULL,k_104 = NULL;
  j_104 = t;
  h_104 :
  if(match_cons(j_104, sym_Test_1))
    {
      k_104 = ATgetArgument(j_104, 0);
      i_104 :
      if(match_cons(k_104, sym_Id_0))
        {
          t = term_g_22;
        }
      else
        {
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
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm k_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(r_24);
          }
        else
          {
            t = k_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm u_24 = t;
                    int v_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(v_24);
                      }
                    else
                      {
                        t = u_24;
                        {
                          ATerm w_24 = t;
                          int x_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(x_24);
                            }
                          else
                            {
                              t = w_24;
                              {
                                ATerm c_25 = t;
                                int d_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
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
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(f_25);
                                        }
                                      else
                                        {
                                          t = e_25;
                                          {
                                            ATerm g_25 = t;
                                            int n_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(n_25);
                                              }
                                            else
                                              {
                                                t = g_25;
                                                {
                                                  ATerm o_25 = t;
                                                  int p_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(p_25);
                                                    }
                                                  else
                                                    {
                                                      t = o_25;
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
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm s_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = s_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm c_26 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(d_26);
                      }
                    else
                      {
                        t = c_26;
                        {
                          ATerm e_26 = t;
                          int j_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(j_26);
                            }
                          else
                            {
                              t = e_26;
                              {
                                ATerm k_26 = t;
                                int l_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(l_26);
                                  }
                                else
                                  {
                                    t = k_26;
                                    {
                                      ATerm n_26 = t;
                                      int s_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(s_26);
                                        }
                                      else
                                        {
                                          t = n_26;
                                          {
                                            ATerm t_26 = t;
                                            int u_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(u_26);
                                              }
                                            else
                                              {
                                                t = t_26;
                                                {
                                                  ATerm v_26 = t;
                                                  int a_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = MatchingCongruence_0(t);
                                                      ;
                                                      LocalPopChoice(a_27);
                                                    }
                                                  else
                                                    {
                                                      t = v_26;
                                                      {
                                                        ATerm b_27 = t;
                                                        int d_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = TransformingAnnoCongruence_0(t);
                                                            ;
                                                            LocalPopChoice(d_27);
                                                          }
                                                        else
                                                          {
                                                            t = b_27;
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
ATerm repeat_1 (ATerm t, ATerm z_127 (ATerm))
{
  ATerm m_104 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      t = z_127(t);
      t = m_104(t);
      return(t);
    }
    t = try_1(t, n_4);
    return(t);
  }
  t = m_104(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm g_111 (ATerm))
{
  t = g_111(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = downup_1(t, g_111);
      return(t);
    }
    t = _all(t, o_4);
    t = g_111(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, p_4);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm r_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, r_4);
    }
    return(t);
  }
  t = map_1(t, q_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_cons(s_104, sym_Strategies_1))
    {
      t_104 = ATgetArgument(s_104, 0);
      {
        ATerm w_104 = NULL,y_104 = NULL;
        ATerm x_104 = NULL;
        t = SSLgetAnnotations(not_null(s_104));
        {
          x_104 = t;
          if(((w_104 != NULL) && (w_104 != x_104)))
            _fail(x_104);
          else
            w_104 = x_104;
        }
        {
          t = not_null(t_104);
          {
            ATerm a_105 = NULL;
            t = b_95(t);
            {
              y_104 = t;
              {
                ATerm b_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(y_104)), not_null(w_104));
                {
                  b_105 = t;
                  if(((a_105 != NULL) && (a_105 != b_105)))
                    _fail(b_105);
                  else
                    a_105 = b_105;
                }
                t = not_null(a_105);
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
ATerm Specification_1 (ATerm t, ATerm g_95 (ATerm))
{
  ATerm l_105 = NULL,m_105 = NULL;
  l_105 = t;
  k_105 :
  if(match_cons(l_105, sym_Specification_1))
    {
      m_105 = ATgetArgument(l_105, 0);
      {
        ATerm p_105 = NULL,r_105 = NULL;
        ATerm q_105 = NULL;
        t = SSLgetAnnotations(not_null(l_105));
        {
          q_105 = t;
          if(((p_105 != NULL) && (p_105 != q_105)))
            _fail(q_105);
          else
            p_105 = q_105;
        }
        {
          t = not_null(m_105);
          {
            ATerm t_105 = NULL;
            t = g_95(t);
            {
              r_105 = t;
              {
                ATerm u_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_105)), not_null(p_105));
                {
                  u_105 = t;
                  if(((t_105 != NULL) && (t_105 != u_105)))
                    _fail(u_105);
                  else
                    t_105 = u_105;
                }
                t = not_null(t_105);
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
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, u_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, t_4);
    return(t);
  }
  t = Specification_1(t, s_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  f_106 = t;
  e_106 :
  if(match_cons(f_106, sym__2))
    {
      g_106 = ATgetArgument(f_106, 0);
      h_106 = ATgetArgument(f_106, 1);
      {
        ATerm l_106 = NULL,n_106 = NULL;
        ATerm m_106 = NULL;
        t = SSLgetAnnotations(not_null(f_106));
        {
          m_106 = t;
          if(((l_106 != NULL) && (l_106 != m_106)))
            _fail(m_106);
          else
            l_106 = m_106;
        }
        {
          t = not_null(g_106);
          {
            ATerm p_106 = NULL;
            t = m_93(t);
            {
              n_106 = t;
              {
                t = not_null(h_106);
                {
                  ATerm r_106 = NULL;
                  t = n_93(t);
                  {
                    p_106 = t;
                    {
                      ATerm s_106 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_106), not_null(p_106)), not_null(l_106));
                      {
                        s_106 = t;
                        if(((r_106 != NULL) && (r_106 != s_106)))
                          _fail(s_106);
                        else
                          r_106 = s_106;
                      }
                      t = not_null(r_106);
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
  ATerm e_27;
  e_27 = t;
  {
    ATerm z_106 = NULL;
    ATerm a_107 = NULL;
    t = term_g_15;
    {
      t = whoami_0(t);
      {
        a_107 = t;
        if(((z_106 != NULL) && (z_106 != a_107)))
          _fail(a_107);
        else
          z_106 = a_107;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_27), not_null(z_106)), term_g_27));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_27;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
  e_107 = t;
  d_107 :
  if(match_cons(e_107, sym__2))
    {
      f_107 = ATgetArgument(e_107, 0);
      g_107 = ATgetArgument(e_107, 1);
      {
        ATerm m_27;
        m_27 = t;
        t = SSL_printnl(not_null(f_107), not_null(g_107));
        t = m_27;
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
  ATerm l_107 = NULL;
  l_107 = t;
  t = SSL_implode_string(not_null(l_107));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = n_27;
      {
        ATerm q_107 = NULL,t_107 = NULL,u_107 = NULL;
        q_107 = t;
        p_107 :
        if(((ATgetType(q_107) == AT_LIST) && !(ATisEmpty(q_107))))
          {
            t_107 = ATgetFirst((ATermList) q_107);
            u_107 = (ATerm) ATgetNext((ATermList) q_107);
            {
              t = not_null(t_107);
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(u_107);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm e_108 = NULL;
  ATerm g_108 = NULL;
  e_108 = t;
  {
    ATerm h_108 = NULL;
    ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL;
    t = not_null(e_108);
    {
      h_108 = t;
      {
        t = SSL_explode_term(not_null(h_108));
        {
          j_108 = t;
          c_108 :
          if(match_cons(j_108, sym__2))
            {
              k_108 = ATgetArgument(j_108, 0);
              l_108 = ATgetArgument(j_108, 1);
              d_108 :
              if(match_string(k_108, ""))
                {
                  if(((g_108 != NULL) && (g_108 != l_108)))
                    _fail(l_108);
                  else
                    g_108 = l_108;
                }
              else
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
      t = not_null(g_108);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_117 (ATerm))
{
  ATerm p_108 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_108);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        {
          t = Nil_0(t);
          t = v_117(t);
        }
      }
    return(t);
  }
  t = p_108(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
  s_108 = t;
  r_108 :
  if(match_cons(s_108, sym__2))
    {
      t_108 = ATgetArgument(s_108, 0);
      u_108 = ATgetArgument(s_108, 1);
      {
        t = not_null(t_108);
        {
          ATerm w_4 (ATerm t)
          {
            t = not_null(u_108);
            return(t);
          }
          t = at_end_1(t, w_4);
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
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_108 = NULL;
  z_108 = t;
  t = SSL_explode_string(not_null(z_108));
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
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_4);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = d_28;
            {
              ATerm i_109 = NULL,m_109 = NULL,n_109 = NULL;
              i_109 = t;
              h_109 :
              if(match_cons(i_109, sym_Path_1))
                {
                  m_109 = ATgetArgument(i_109, 0);
                  t = not_null(m_109);
                }
              else
                {
                  if(match_cons(i_109, sym_Var_1))
                    {
                      m_109 = ATgetArgument(i_109, 0);
                      {
                        t = not_null(m_109);
                        {
                          ATerm g_28 = t;
                          int i_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_28);
                            }
                          else
                            {
                              t = g_28;
                              {
                                ATerm y_4 (ATerm t)
                                {
                                  t = term_q_28;
                                  return(t);
                                }
                                t = debug_1(t, y_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_109, sym_Prefix_2))
                        {
                          m_109 = ATgetArgument(i_109, 0);
                          n_109 = ATgetArgument(i_109, 1);
                          {
                            ATerm s_109 = NULL,u_109 = NULL;
                            ATerm r_28;
                            r_28 = t;
                            {
                              ATerm t_109 = NULL;
                              t = not_null(m_109);
                              {
                                t = eval_config_0(t);
                                {
                                  t_109 = t;
                                  if(((s_109 != NULL) && (s_109 != t_109)))
                                    _fail(t_109);
                                  else
                                    s_109 = t_109;
                                }
                              }
                            }
                            t = r_28;
                            {
                              ATerm v_109 = NULL;
                              t = not_null(n_109);
                              {
                                t = eval_config_0(t);
                                {
                                  v_109 = t;
                                  if(((u_109 != NULL) && (u_109 != v_109)))
                                    _fail(v_109);
                                  else
                                    u_109 = v_109;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_109), not_null(u_109));
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
  ATerm d_110 = NULL;
  d_110 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_28, not_null(d_110));
    {
      t = table_get_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_28;
            w_28 = t;
            {
              ATerm n_110 = NULL;
              ATerm o_110 = NULL;
              o_110 = t;
              if(((n_110 != NULL) && (n_110 != o_110)))
                _fail(o_110);
              else
                n_110 = o_110;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_28, not_null(d_110), not_null(n_110));
                t = table_put_0(t);
              }
            }
            t = w_28;
          }
          return(t);
        }
        t = try_1(t, z_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_131 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm c_29;
    c_29 = t;
    {
      ATerm s_110 = NULL;
      ATerm t_110 = NULL;
      t = term_i_29;
      {
        t = get_config_0(t);
        {
          t_110 = t;
          if(((s_110 != NULL) && (s_110 != t_110)))
            _fail(t_110);
          else
            s_110 = t_110;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_110), term_j_29);
        t = geq_0(t);
      }
    }
    t = c_29;
    t = j_131(t);
    return(t);
  }
  t = try_1(t, a_5);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL;
  z_110 = t;
  x_110 :
  if(match_cons(z_110, sym__2))
    {
      a_111 = ATgetArgument(z_110, 0);
      b_111 = ATgetArgument(z_110, 1);
      y_110 :
      if(match_cons(b_111, sym_Stream_1))
        {
          c_111 = ATgetArgument(b_111, 0);
          {
            ATerm h_111 = NULL;
            t = SSL_fputc(not_null(a_111), not_null(c_111));
            {
              ATerm i_111 = NULL;
              i_111 = t;
              if(((h_111 != NULL) && (h_111 != i_111)))
                _fail(i_111);
              else
                h_111 = i_111;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_111));
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
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  p_111 = t;
  n_111 :
  if(match_cons(p_111, sym__2))
    {
      q_111 = ATgetArgument(p_111, 0);
      s_111 = ATgetArgument(p_111, 1);
      o_111 :
      if(match_cons(q_111, sym_Stream_1))
        {
          r_111 = ATgetArgument(q_111, 0);
          {
            ATerm v_111 = NULL;
            t = SSL_write_term_to_stream_text(not_null(r_111), not_null(s_111));
            {
              ATerm w_111 = NULL;
              w_111 = t;
              if(((v_111 != NULL) && (v_111 != w_111)))
                _fail(w_111);
              else
                v_111 = w_111;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_111));
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
  ATerm b_5 (ATerm t)
  {
    ATerm a_112 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm b_112 = NULL;
      b_112 = t;
      if(((a_112 != NULL) && (a_112 != b_112)))
        _fail(b_112);
      else
        a_112 = b_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(a_112));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, b_5);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm h_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  h_112 = t;
  f_112 :
  if(match_cons(h_112, sym__2))
    {
      k_112 = ATgetArgument(h_112, 0);
      m_112 = ATgetArgument(h_112, 1);
      g_112 :
      if(match_cons(k_112, sym_Stream_1))
        {
          l_112 = ATgetArgument(k_112, 0);
          {
            ATerm p_112 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(l_112), not_null(m_112));
            {
              ATerm q_112 = NULL;
              q_112 = t;
              if(((p_112 != NULL) && (p_112 != q_112)))
                _fail(q_112);
              else
                p_112 = q_112;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_112));
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
ATerm WriteToFile_1 (ATerm t, ATerm n_138 (ATerm))
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL;
  x_112 = t;
  w_112 :
  if(match_cons(x_112, sym__2))
    {
      y_112 = ATgetArgument(x_112, 0);
      z_112 = ATgetArgument(x_112, 1);
      {
        ATerm c_113 = NULL,e_113 = NULL;
        t = not_null(y_112);
        {
          ATerm d_113 = NULL;
          d_113 = t;
          if(((c_113 != NULL) && (c_113 != d_113)))
            _fail(d_113);
          else
            c_113 = d_113;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_113), term_l_29);
            {
              t = open_stream_0(t);
              {
                ATerm f_113 = NULL;
                f_113 = t;
                if(((e_113 != NULL) && (e_113 != f_113)))
                  _fail(f_113);
                else
                  e_113 = f_113;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_113), not_null(z_112));
                  {
                    t = n_138(t);
                    {
                      t = fclose_0(t);
                      t = not_null(z_112);
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
  ATerm n_113 = NULL;
  ATerm m_29;
  m_29 = t;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 (ATerm t)
          {
            ATerm o_113 = NULL,p_113 = NULL;
            o_113 = t;
            k_113 :
            if(match_cons(o_113, sym_Output_1))
              {
                p_113 = ATgetArgument(o_113, 0);
                if(((n_113 != NULL) && (n_113 != p_113)))
                  _fail(p_113);
                else
                  n_113 = p_113;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_5);
          ;
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          {
            ATerm q_113 = NULL;
            t = term_w_29;
            {
              q_113 = t;
              if(((n_113 != NULL) && (n_113 != q_113)))
                _fail(q_113);
              else
                n_113 = q_113;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_5, _id);
  }
  t = m_29;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(n_113);
        return(t);
      }
      t = split_2(t, f_5, _id);
      return(t);
    }
    t = _2(t, _id, e_5);
    {
      ATerm y_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm r_113 = NULL;
              r_113 = t;
              m_113 :
              if(!(match_cons(r_113, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_5);
            return(t);
          }
          t = _2(t, g_5, WriteToBinaryFile_0);
          ;
          LocalPopChoice(a_30);
        }
      else
        {
          t = y_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_133 (ATerm))
{
  ATerm y_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL;
  ATerm c_30;
  c_30 = t;
  t = dtime_0(t);
  t = c_30;
  {
    t = c_133(t);
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm z_113 = NULL;
        t = dtime_0(t);
        {
          z_113 = t;
          if(((y_113 != NULL) && (y_113 != z_113)))
            _fail(z_113);
          else
            y_113 = z_113;
        }
      }
      t = d_30;
      {
        a_114 = t;
        x_113 :
        if(match_cons(a_114, sym__2))
          {
            b_114 = ATgetArgument(a_114, 0);
            c_114 = ATgetArgument(a_114, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_114)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_113))), not_null(c_114));
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
  ATerm k_114 = NULL,n_114 = NULL;
  ATerm v_114 (ATerm t)
  {
    t = SSL_fclose(not_null(n_114));
    return(t);
  }
  n_114 = t;
  j_114 :
  if(match_cons(n_114, sym_Stream_1))
    {
      k_114 = ATgetArgument(n_114, 0);
      {
        ATerm e_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_114));
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = e_30;
            t = v_114(t);
          }
      }
    }
  else
    {
      t = v_114(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_114 = NULL,z_114 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym_Stream_1))
    {
      z_114 = ATgetArgument(y_114, 0);
      t = SSL_read_term_from_stream(not_null(z_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_137 (ATerm))
{
  ATerm j_30;
  j_30 = t;
  {
    ATerm e_115 = NULL,g_115 = NULL;
    ATerm k_30;
    k_30 = t;
    {
      ATerm f_115 = NULL;
      t = z_137(t);
      {
        f_115 = t;
        if(((e_115 != NULL) && (e_115 != f_115)))
          _fail(f_115);
        else
          e_115 = f_115;
      }
    }
    t = k_30;
    {
      ATerm h_115 = NULL;
      h_115 = t;
      if(((g_115 != NULL) && (g_115 != h_115)))
        _fail(h_115);
      else
        g_115 = h_115;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_115)), not_null(e_115)));
        t = printnl_0(t);
      }
    }
  }
  t = j_30;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL;
  n_115 = t;
  m_115 :
  if(match_cons(n_115, sym__2))
    {
      o_115 = ATgetArgument(n_115, 0);
      p_115 = ATgetArgument(n_115, 1);
      {
        ATerm y_115 = NULL;
        t = SSL_fopen(not_null(o_115), not_null(p_115));
        {
          ATerm z_115 = NULL;
          z_115 = t;
          if(((y_115 != NULL) && (y_115 != z_115)))
            _fail(z_115);
          else
            y_115 = z_115;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_115));
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
  ATerm d_116 = NULL;
  d_116 = t;
  t = SSL_is_string(not_null(d_116));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_116 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_116 = NULL;
    i_116 = t;
    if(((h_116 != NULL) && (h_116 != i_116)))
      _fail(i_116);
    else
      h_116 = i_116;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_116));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_116 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_116 = NULL;
    m_116 = t;
    if(((l_116 != NULL) && (l_116 != m_116)))
      _fail(m_116);
    else
      l_116 = m_116;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_116));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_116 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_116 = NULL;
    q_116 = t;
    if(((p_116 != NULL) && (p_116 != q_116)))
      _fail(q_116);
    else
      p_116 = q_116;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_116));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_116 = NULL;
  w_116 = t;
  v_116 :
  if(match_cons(w_116, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_116, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_116, sym_stdin_0))
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
  ATerm j_117 = NULL;
  ATerm l_117 = NULL,m_117 = NULL;
  j_117 = t;
  {
    ATerm n_117 = NULL;
    ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,x_117 = NULL;
    t = not_null(j_117);
    {
      n_117 = t;
      {
        t = SSL_explode_term(not_null(n_117));
        {
          r_117 = t;
          e_117 :
          if(match_cons(r_117, sym__2))
            {
              s_117 = ATgetArgument(r_117, 0);
              t_117 = ATgetArgument(r_117, 1);
              h_117 :
              if(match_string(s_117, ""))
                {
                  i_117 :
                  if(((ATgetType(t_117) == AT_LIST) && !(ATisEmpty(t_117))))
                    {
                      u_117 = ATgetFirst((ATermList) t_117);
                      x_117 = (ATerm) ATgetNext((ATermList) t_117);
                      {
                        if(((m_117 != NULL) && (m_117 != u_117)))
                          _fail(u_117);
                        else
                          m_117 = u_117;
                        if(((l_117 != NULL) && (l_117 != x_117)))
                          _fail(x_117);
                        else
                          l_117 = x_117;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(m_117);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL;
  f_118 = t;
  e_118 :
  if(match_cons(f_118, sym__2))
    {
      g_118 = ATgetArgument(f_118, 0);
      h_118 = ATgetArgument(f_118, 1);
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm j_5 (ATerm t)
                  {
                    ATerm i_118 = NULL,j_118 = NULL;
                    i_118 = t;
                    d_118 :
                    if(match_cons(i_118, sym_Path_1))
                      {
                        j_118 = ATgetArgument(i_118, 0);
                        t = not_null(j_118);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_5, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = v_30;
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
  ATerm r_118 = NULL;
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_118 = NULL;
      ATerm q_118 = NULL;
      q_118 = t;
      if(((p_118 != NULL) && (p_118 != q_118)))
        _fail(q_118);
      else
        p_118 = q_118;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_118), term_z_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm k_5 (ATerm t)
        {
          t = term_a_31;
          return(t);
        }
        t = debug_1(t, k_5);
        _fail(t);
      }
    }
  {
    ATerm b_31;
    b_31 = t;
    {
      ATerm s_118 = NULL;
      t = read_from_stream_0(t);
      {
        s_118 = t;
        if(((r_118 != NULL) && (r_118 != s_118)))
          _fail(s_118);
        else
          r_118 = s_118;
      }
    }
    t = b_31;
    {
      t = fclose_0(t);
      t = not_null(r_118);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm))
{
  ATerm x_118 = NULL,z_118 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm y_118 = NULL;
    t = q_114(t);
    {
      y_118 = t;
      if(((x_118 != NULL) && (x_118 != y_118)))
        _fail(y_118);
      else
        x_118 = y_118;
    }
  }
  t = c_31;
  {
    ATerm a_119 = NULL;
    t = r_114(t);
    {
      a_119 = t;
      if(((z_118 != NULL) && (z_118 != a_119)))
        _fail(a_119);
      else
        z_118 = a_119;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_118), not_null(z_118));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_119 = NULL;
  ATerm d_31;
  d_31 = t;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 (ATerm t)
        {
          ATerm h_119 = NULL,i_119 = NULL;
          h_119 = t;
          e_119 :
          if(match_cons(h_119, sym_Input_1))
            {
              i_119 = ATgetArgument(h_119, 0);
              if(((g_119 != NULL) && (g_119 != i_119)))
                _fail(i_119);
              else
                g_119 = i_119;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_5);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm j_119 = NULL;
          t = term_g_31;
          {
            j_119 = t;
            if(((g_119 != NULL) && (g_119 != j_119)))
              _fail(j_119);
            else
              g_119 = j_119;
          }
        }
      }
  }
  t = d_31;
  {
    ATerm p_5 (ATerm t)
    {
      t = not_null(g_119);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_5);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm q_119 = NULL;
    q_119 = t;
    m_119 :
    if(!(match_string(q_119, "-k")))
      {
        if(!(match_string(q_119, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm h_31;
    h_31 = t;
    {
      ATerm t_119 = NULL;
      ATerm u_119 = NULL;
      t = string_to_int_0(t);
      {
        u_119 = t;
        if(((t_119 != NULL) && (t_119 != u_119)))
          _fail(u_119);
        else
          t_119 = u_119;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_31, not_null(t_119));
        t = set_config_0(t);
      }
    }
    t = h_31;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_j_31;
    return(t);
  }
  t = ArgOption_3(t, q_5, r_5, s_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_119 = NULL;
  z_119 = t;
  t = SSL_string_to_int(not_null(z_119));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm m_120 = NULL;
        m_120 = t;
        h_120 :
        if(!(match_string(m_120, "-S")))
          {
            if(!(match_string(m_120, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_p_31;
        t = set_config_0(t);
        t = term_q_31;
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = term_u_31;
        return(t);
      }
      t = Option_3(t, t_5, u_5, v_5);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              ATerm n_120 = NULL;
              n_120 = t;
              i_120 :
              if(!(match_string(n_120, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              ATerm q_120 = NULL;
              ATerm c_32;
              c_32 = t;
              {
                ATerm o_120 = NULL;
                ATerm p_120 = NULL;
                t = string_to_int_0(t);
                {
                  p_120 = t;
                  if(((o_120 != NULL) && (o_120 != p_120)))
                    _fail(p_120);
                  else
                    o_120 = p_120;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_29, not_null(o_120));
                  t = set_config_0(t);
                }
              }
              t = c_32;
              {
                ATerm r_120 = NULL;
                r_120 = t;
                if(((q_120 != NULL) && (q_120 != r_120)))
                  _fail(r_120);
                else
                  q_120 = r_120;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_120));
              }
              return(t);
            }
            ATerm y_5 (ATerm t)
            {
              t = term_f_32;
              return(t);
            }
            t = ArgOption_3(t, w_5, x_5, y_5);
            ;
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm z_5 (ATerm t)
              {
                ATerm s_120 = NULL;
                s_120 = t;
                l_120 :
                if(!(match_string(s_120, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                t = term_k_32;
                t = set_config_0(t);
                t = term_n_32;
                return(t);
              }
              ATerm b_6 (ATerm t)
              {
                t = term_o_32;
                return(t);
              }
              t = Option_3(t, z_5, a_6, b_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm y_120 = NULL;
    y_120 = t;
    v_120 :
    if(!(match_string(y_120, "-o")))
      {
        if(!(match_string(y_120, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm b_121 = NULL;
    ATerm r_32;
    r_32 = t;
    {
      ATerm z_120 = NULL;
      ATerm a_121 = NULL;
      a_121 = t;
      if(((z_120 != NULL) && (z_120 != a_121)))
        _fail(a_121);
      else
        z_120 = a_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_32, not_null(z_120));
        t = set_config_0(t);
      }
    }
    t = r_32;
    {
      ATerm c_121 = NULL;
      c_121 = t;
      if(((b_121 != NULL) && (b_121 != c_121)))
        _fail(c_121);
      else
        b_121 = c_121;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_121));
    }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_t_32;
    return(t);
  }
  t = ArgOption_3(t, c_6, d_6, e_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm g_121 = NULL;
          g_121 = t;
          f_121 :
          if(!(match_string(g_121, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = term_x_32;
          t = set_config_0(t);
          t = term_y_32;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_z_32;
          return(t);
        }
        t = Option_3(t, f_6, g_6, h_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL;
  m_121 = t;
  k_121 :
  if(match_string(m_121, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(m_121) == AT_LIST) && !(ATisEmpty(m_121))))
        {
          n_121 = ATgetFirst((ATermList) m_121);
          o_121 = (ATerm) ATgetNext((ATermList) m_121);
          l_121 :
          if(((ATgetType(o_121) == AT_LIST) && !(ATisEmpty(o_121))))
            {
              p_121 = ATgetFirst((ATermList) o_121);
              q_121 = (ATerm) ATgetNext((ATermList) o_121);
              {
                ATerm v_121 = NULL;
                ATerm a_33;
                a_33 = t;
                {
                  t = not_null(n_121);
                  t = j_0(t);
                }
                t = a_33;
                {
                  ATerm w_121 = NULL;
                  t = not_null(p_121);
                  {
                    t = l_0(t);
                    {
                      w_121 = t;
                      if(((v_121 != NULL) && (v_121 != w_121)))
                        _fail(w_121);
                      else
                        v_121 = w_121;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_121)), not_null(v_121));
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
  ATerm i_6 (ATerm t)
  {
    ATerm d_122 = NULL;
    d_122 = t;
    a_122 :
    if(!(match_string(d_122, "-i")))
      {
        if(!(match_string(d_122, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    ATerm l_122 = NULL;
    ATerm b_33;
    b_33 = t;
    {
      ATerm j_122 = NULL;
      ATerm k_122 = NULL;
      k_122 = t;
      if(((j_122 != NULL) && (j_122 != k_122)))
        _fail(k_122);
      else
        j_122 = k_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_33, not_null(j_122));
        t = set_config_0(t);
      }
    }
    t = b_33;
    {
      ATerm m_122 = NULL;
      m_122 = t;
      if(((l_122 != NULL) && (l_122 != m_122)))
        _fail(m_122);
      else
        l_122 = m_122;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_122));
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_i_33;
    return(t);
  }
  t = ArgOption_3(t, i_6, j_6, k_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm q_122 = NULL;
  t = report_run_time_0(t);
  {
    ATerm r_122 = NULL;
    t = term_g_15;
    {
      t = whoami_0(t);
      {
        r_122 = t;
        if(((q_122 != NULL) && (q_122 != r_122)))
          _fail(r_122);
        else
          q_122 = r_122;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATempty, term_p_33), not_null(q_122)));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_q_33;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_122 = NULL;
  u_122 = t;
  t = SSL_TicksToSeconds(not_null(u_122));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
  z_122 = t;
  y_122 :
  if(match_cons(z_122, sym__2))
    {
      a_123 = ATgetArgument(z_122, 0);
      b_123 = ATgetArgument(z_122, 1);
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_123), not_null(b_123));
            ;
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            t = SSL_addr(not_null(a_123), not_null(b_123));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_122 (ATerm), ATerm f_122 (ATerm))
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_122(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
        i_123 = t;
        h_123 :
        if(((ATgetType(i_123) == AT_LIST) && !(ATisEmpty(i_123))))
          {
            j_123 = ATgetFirst((ATermList) i_123);
            k_123 = (ATerm) ATgetNext((ATermList) i_123);
            {
              ATerm t_123 = NULL;
              ATerm u_123 = NULL;
              t = not_null(k_123);
              {
                t = foldr_2(t, e_122, f_122);
                {
                  u_123 = t;
                  if(((t_123 != NULL) && (t_123 != u_123)))
                    _fail(u_123);
                  else
                    t_123 = u_123;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_123), not_null(t_123));
                t = f_122(t);
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
ATerm crush_2 (ATerm t, ATerm c_120 (ATerm), ATerm d_120 (ATerm))
{
  ATerm b_124 = NULL;
  ATerm d_124 = NULL;
  b_124 = t;
  {
    ATerm e_124 = NULL;
    ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL;
    t = not_null(b_124);
    {
      e_124 = t;
      {
        t = SSL_explode_term(not_null(e_124));
        {
          n_124 = t;
          a_124 :
          if(match_cons(n_124, sym__2))
            {
              o_124 = ATgetArgument(n_124, 0);
              p_124 = ATgetArgument(n_124, 1);
              if(((d_124 != NULL) && (d_124 != p_124)))
                _fail(p_124);
              else
                d_124 = p_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_124);
      t = foldr_2(t, c_120, d_120);
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
    ATerm l_6 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    t = crush_2(t, l_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL;
  a_125 = t;
  x_124 :
  if(match_cons(a_125, sym__2))
    {
      b_125 = ATgetArgument(a_125, 0);
      c_125 = ATgetArgument(a_125, 1);
      {
        ATerm v_33;
        v_33 = t;
        {
          ATerm w_33 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_125), not_null(c_125));
              ;
              LocalPopChoice(b_34);
            }
          else
            {
              t = w_33;
              t = SSL_gtr(not_null(b_125), not_null(c_125));
            }
        }
        t = v_33;
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
  ATerm i_125 = NULL;
  ATerm c_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL;
      j_125 = t;
      h_125 :
      if(match_cons(j_125, sym__2))
        {
          k_125 = ATgetArgument(j_125, 0);
          l_125 = ATgetArgument(j_125, 1);
          {
            if(((i_125 != NULL) && (i_125 != k_125)))
              _fail(k_125);
            else
              i_125 = k_125;
            if(((i_125 != NULL) && (i_125 != l_125)))
              _fail(l_125);
            else
              i_125 = l_125;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = c_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_131 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm o_34;
    o_34 = t;
    {
      ATerm p_125 = NULL;
      ATerm q_125 = NULL;
      t = term_i_29;
      {
        t = get_config_0(t);
        {
          q_125 = t;
          if(((p_125 != NULL) && (p_125 != q_125)))
            _fail(q_125);
          else
            p_125 = q_125;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_125), term_q_8);
        t = geq_0(t);
      }
    }
    t = o_34;
    t = i_131(t);
    return(t);
  }
  t = try_1(t, m_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm u_125 = NULL,w_125 = NULL;
    ATerm p_34;
    p_34 = t;
    {
      ATerm v_125 = NULL;
      t = run_time_0(t);
      {
        v_125 = t;
        if(((u_125 != NULL) && (u_125 != v_125)))
          _fail(v_125);
        else
          u_125 = v_125;
      }
    }
    t = p_34;
    {
      ATerm x_125 = NULL;
      t = term_g_15;
      {
        t = whoami_0(t);
        {
          x_125 = t;
          if(((w_125 != NULL) && (w_125 != x_125)))
            _fail(x_125);
          else
            w_125 = x_125;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), not_null(u_125)), term_q_34), not_null(w_125)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_n_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_126 = NULL;
  e_126 = t;
  d_126 :
  if(match_cons(e_126, sym_Version_0))
    {
      ATerm g_126 = NULL,m_126 = NULL;
      ATerm s_34;
      s_34 = t;
      {
        ATerm h_126 = NULL;
        t = SSLgetAnnotations(not_null(e_126));
        {
          h_126 = t;
          if(((g_126 != NULL) && (g_126 != h_126)))
            _fail(h_126);
          else
            g_126 = h_126;
        }
      }
      t = s_34;
      {
        ATerm n_126 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_126));
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
ATerm need_help_1 (ATerm t, ATerm a_134 (ATerm))
{
  ATerm t_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_35;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = t_34;
      {
        ATerm o_6 (ATerm t)
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              {
                ATerm p_35 = t;
                int r_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_35);
                  }
                else
                  {
                    t = p_35;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_6);
      }
    }
  t = a_134(t);
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
    ATerm s_35;
    s_35 = t;
    {
      t = term_t_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_y_35, not_null(w_126));
          t = table_put_0(t);
        }
      }
    }
    t = s_35;
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
ATerm long_description_1 (ATerm t, ATerm b_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm h_127 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = Cons_2(t, f_117, h_127);
      }
    return(t);
  }
  t = h_127(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm i_0 (ATerm))
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
          ATerm b_36;
          b_36 = t;
          {
            ATerm u_127 = NULL,w_127 = NULL,y_127 = NULL;
            ATerm c_36;
            c_36 = t;
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
            t = c_36;
            {
              ATerm x_127 = NULL;
              t = not_null(o_127);
              {
                t = e_0(t);
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
          t = b_36;
          {
            ATerm p_6 (ATerm t)
            {
              t = not_null(t_127);
              return(t);
            }
            t = reverse_acc_2(t, e_0, p_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_127) == AT_LIST) && ATisEmpty(q_127)))
        {
          {
            t = term_g_15;
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
  ATerm q_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_107 (ATerm))
{
  ATerm l_128 = NULL,m_128 = NULL;
  l_128 = t;
  k_128 :
  if(match_cons(l_128, sym_Program_1))
    {
      m_128 = ATgetArgument(l_128, 0);
      {
        ATerm v_128 = NULL,x_128 = NULL;
        ATerm w_128 = NULL;
        t = SSLgetAnnotations(not_null(l_128));
        {
          w_128 = t;
          if(((v_128 != NULL) && (v_128 != w_128)))
            _fail(w_128);
          else
            v_128 = w_128;
        }
        {
          t = not_null(m_128);
          {
            ATerm z_128 = NULL;
            t = r_107(t);
            {
              x_128 = t;
              {
                ATerm a_129 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_128)), not_null(v_128));
                {
                  a_129 = t;
                  if(((z_128 != NULL) && (z_128 != a_129)))
                    _fail(a_129);
                  else
                    z_128 = a_129;
                }
                t = not_null(z_128);
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
  ATerm j_129 = NULL;
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_129 = NULL;
      t = term_q_33;
      {
        t = get_config_0(t);
        {
          k_129 = t;
          if(((j_129 != NULL) && (j_129 != k_129)))
            _fail(k_129);
          else
            j_129 = k_129;
        }
      }
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm r_6 (ATerm t)
        {
          ATerm s_6 (ATerm t)
          {
            ATerm l_129 = NULL;
            l_129 = t;
            if(((j_129 != NULL) && (j_129 != l_129)))
              _fail(l_129);
            else
              j_129 = l_129;
            return(t);
          }
          t = Program_1(t, s_6);
          return(t);
        }
        t = option_defined_1(t, r_6);
      }
    }
  {
    ATerm t_6 (ATerm t)
    {
      ATerm u_6 (ATerm t)
      {
        t = not_null(j_129);
        return(t);
      }
      t = short_description_1(t, u_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_6);
    {
      t = term_k_36;
      {
        t = echo_0(t);
        {
          t = term_o_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm m_129 = NULL;
                  ATerm n_129 = NULL;
                  n_129 = t;
                  if(((m_129 != NULL) && (m_129 != n_129)))
                    _fail(n_129);
                  else
                    m_129 = n_129;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_129)), term_q_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_6);
                {
                  ATerm w_6 (ATerm t)
                  {
                    ATerm o_129 = NULL;
                    ATerm p_129 = NULL;
                    ATerm x_6 (ATerm t)
                    {
                      t = not_null(j_129);
                      return(t);
                    }
                    t = long_description_1(t, x_6);
                    {
                      p_129 = t;
                      if(((o_129 != NULL) && (o_129 != p_129)))
                        _fail(p_129);
                      else
                        o_129 = p_129;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_129)), term_r_36);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_6);
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
  ATerm t_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = t_36;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_107 (ATerm))
{
  ATerm z_129 = NULL,a_130 = NULL;
  z_129 = t;
  y_129 :
  if(match_cons(z_129, sym_Undefined_1))
    {
      a_130 = ATgetArgument(z_129, 0);
      {
        ATerm d_130 = NULL,f_130 = NULL;
        ATerm e_130 = NULL;
        t = SSLgetAnnotations(not_null(z_129));
        {
          e_130 = t;
          if(((d_130 != NULL) && (d_130 != e_130)))
            _fail(e_130);
          else
            d_130 = e_130;
        }
        {
          t = not_null(a_130);
          {
            ATerm h_130 = NULL;
            t = s_107(t);
            {
              f_130 = t;
              {
                ATerm i_130 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_130)), not_null(d_130));
                {
                  i_130 = t;
                  if(((h_130 != NULL) && (h_130 != i_130)))
                    _fail(i_130);
                  else
                    h_130 = i_130;
                }
                t = not_null(h_130);
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
ATerm fetch_1 (ATerm t, ATerm p_117 (ATerm))
{
  ATerm n_130 (ATerm t)
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_117, _id);
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = Cons_2(t, _id, n_130);
      }
    return(t);
  }
  t = n_130(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_135 (ATerm))
{
  t = fetch_1(t, a_135);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  p_130 = t;
  o_130 :
  if(((ATgetType(p_130) == AT_LIST) && ATisEmpty(p_130)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_130) == AT_LIST) && !(ATisEmpty(p_130))))
        {
          q_130 = ATgetFirst((ATermList) p_130);
          r_130 = (ATerm) ATgetNext((ATermList) p_130);
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
  ATerm f_37;
  f_37 = t;
  {
    ATerm u_130 = NULL;
    ATerm x_130 = NULL;
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          ATerm v_130 = NULL;
          ATerm w_130 = NULL;
          w_130 = t;
          if(((v_130 != NULL) && (v_130 != w_130)))
            _fail(w_130);
          else
            v_130 = w_130;
          t = (ATerm) ATinsert(ATempty, not_null(v_130));
        }
      }
    {
      x_130 = t;
      if(((u_130 != NULL) && (u_130 != x_130)))
        _fail(x_130);
      else
        u_130 = x_130;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_29, not_null(u_130));
      t = printnl_0(t);
    }
  }
  t = f_37;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_q_33;
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
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_131 = NULL;
  e_131 = t;
  d_131 :
  if(match_cons(e_131, sym_Help_0))
    {
      ATerm g_131 = NULL,k_131 = NULL;
      ATerm l_37;
      l_37 = t;
      {
        ATerm h_131 = NULL;
        t = SSLgetAnnotations(not_null(e_131));
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
      }
      t = l_37;
      {
        ATerm l_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_131));
        {
          l_131 = t;
          if(((k_131 != NULL) && (k_131 != l_131)))
            _fail(l_131);
          else
            k_131 = l_131;
        }
        t = not_null(k_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_113 (ATerm))
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_113(t);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 (ATerm t)
      {
        ATerm r_131 = NULL;
        r_131 = t;
        p_131 :
        if(!(match_string(r_131, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_t_37;
        t = set_config_0(t);
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        t = term_u_37;
        return(t);
      }
      t = Option_3(t, y_6, z_6, a_7);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm b_7 (ATerm t)
        {
          ATerm s_131 = NULL;
          s_131 = t;
          q_131 :
          if(!(match_string(s_131, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_t_37;
          {
            t = set_config_0(t);
            {
              t = term_w_37;
              t = set_config_0(t);
            }
          }
          t = term_x_37;
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = term_y_37;
          return(t);
        }
        t = Option_3(t, b_7, c_7, d_7);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_131 = NULL,w_131 = NULL,x_131 = NULL;
  v_131 = t;
  u_131 :
  if(match_cons(v_131, sym__2))
    {
      w_131 = ATgetArgument(v_131, 0);
      x_131 = ATgetArgument(v_131, 1);
      t = SSL_table_get(not_null(w_131), not_null(x_131));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL;
  e_132 = t;
  d_132 :
  if(match_cons(e_132, sym__3))
    {
      f_132 = ATgetArgument(e_132, 0);
      g_132 = ATgetArgument(e_132, 1);
      h_132 = ATgetArgument(e_132, 2);
      {
        ATerm z_37;
        z_37 = t;
        {
          ATerm l_132 = NULL;
          ATerm m_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_132), not_null(g_132));
          {
            ATerm a_38 = t;
            int b_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_38);
              }
            else
              {
                t = a_38;
                t = (ATerm) ATempty;
              }
            {
              m_132 = t;
              if(((l_132 != NULL) && (l_132 != m_132)))
                _fail(m_132);
              else
                l_132 = m_132;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_132), not_null(g_132), (ATerm) ATinsert(CheckATermList(not_null(l_132)), not_null(h_132)));
            t = table_put_0(t);
          }
        }
        t = z_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_136 (ATerm))
{
  ATerm q_132 = NULL;
  ATerm r_132 = NULL;
  t = term_g_15;
  {
    t = f_136(t);
    {
      r_132 = t;
      if(((q_132 != NULL) && (q_132 != r_132)))
        _fail(r_132);
      else
        q_132 = r_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_36, term_m_36, not_null(q_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL;
  x_132 = t;
  w_132 :
  if(match_string(x_132, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(x_132) == AT_LIST) && !(ATisEmpty(x_132))))
        {
          y_132 = ATgetFirst((ATermList) x_132);
          z_132 = (ATerm) ATgetNext((ATermList) x_132);
          {
            ATerm d_133 = NULL;
            ATerm c_38;
            c_38 = t;
            {
              t = not_null(y_132);
              t = a_0(t);
            }
            t = c_38;
            {
              ATerm e_133 = NULL;
              t = term_g_15;
              {
                t = b_0(t);
                {
                  e_133 = t;
                  if(((d_133 != NULL) && (d_133 != e_133)))
                    _fail(e_133);
                  else
                    d_133 = e_133;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_132)), not_null(d_133));
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
  ATerm e_7 (ATerm t)
  {
    ATerm p_133 = NULL;
    p_133 = t;
    o_133 :
    if(!(match_string(p_133, "--help")))
      {
        if(!(match_string(p_133, "-h")))
          {
            if(!(match_string(p_133, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_d_38;
    {
      t = set_config_0(t);
      t = term_e_38;
    }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_f_38;
    return(t);
  }
  t = Option_3(t, e_7, f_7, g_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL;
  w_133 = t;
  v_133 :
  if(((ATgetType(w_133) == AT_LIST) && !(ATisEmpty(w_133))))
    {
      x_133 = ATgetFirst((ATermList) w_133);
      y_133 = (ATerm) ATgetNext((ATermList) w_133);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_133)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_133)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_94 (ATerm), ATerm w_94 (ATerm))
{
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL;
  n_134 = t;
  m_134 :
  if(((ATgetType(n_134) == AT_LIST) && !(ATisEmpty(n_134))))
    {
      o_134 = ATgetFirst((ATermList) n_134);
      p_134 = (ATerm) ATgetNext((ATermList) n_134);
      {
        ATerm t_134 = NULL,v_134 = NULL;
        ATerm u_134 = NULL;
        t = SSLgetAnnotations(not_null(n_134));
        {
          u_134 = t;
          if(((t_134 != NULL) && (t_134 != u_134)))
            _fail(u_134);
          else
            t_134 = u_134;
        }
        {
          t = not_null(o_134);
          {
            ATerm x_134 = NULL;
            t = v_94(t);
            {
              v_134 = t;
              {
                t = not_null(p_134);
                {
                  ATerm z_134 = NULL;
                  t = w_94(t);
                  {
                    x_134 = t;
                    {
                      ATerm b_135 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_134)), not_null(v_134)), not_null(t_134));
                      {
                        b_135 = t;
                        if(((z_134 != NULL) && (z_134 != b_135)))
                          _fail(b_135);
                        else
                          z_134 = b_135;
                      }
                      t = not_null(z_134);
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
  ATerm l_135 = NULL;
  l_135 = t;
  k_135 :
  if(((ATgetType(l_135) == AT_LIST) && ATisEmpty(l_135)))
    {
      {
        ATerm n_135 = NULL,p_135 = NULL;
        ATerm g_38;
        g_38 = t;
        {
          ATerm o_135 = NULL;
          t = SSLgetAnnotations(not_null(l_135));
          {
            o_135 = t;
            if(((n_135 != NULL) && (n_135 != o_135)))
              _fail(o_135);
            else
              n_135 = o_135;
          }
        }
        t = g_38;
        {
          ATerm q_135 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_135));
          {
            q_135 = t;
            if(((p_135 != NULL) && (p_135 != q_135)))
              _fail(q_135);
            else
              p_135 = q_135;
          }
          t = not_null(p_135);
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
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL;
  w_135 = t;
  v_135 :
  if(match_cons(w_135, sym__2))
    {
      x_135 = ATgetArgument(w_135, 0);
      y_135 = ATgetArgument(w_135, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_28, not_null(x_135), not_null(y_135));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_136 (ATerm))
{
  ATerm h_38;
  h_38 = t;
  {
    ATerm h_7 (ATerm t)
    {
      t = term_i_38;
      t = d_136(t);
      return(t);
    }
    t = try_1(t, h_7);
  }
  t = h_38;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm m_136 = NULL;
      ATerm j_38;
      j_38 = t;
      {
        ATerm k_136 = NULL;
        ATerm l_136 = NULL;
        l_136 = t;
        if(((k_136 != NULL) && (k_136 != l_136)))
          _fail(l_136);
        else
          k_136 = l_136;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_33, not_null(k_136));
          t = set_config_0(t);
        }
      }
      t = j_38;
      {
        ATerm n_136 = NULL;
        n_136 = t;
        if(((m_136 != NULL) && (m_136 != n_136)))
          _fail(n_136);
        else
          m_136 = n_136;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_136));
      }
      return(t);
    }
    ATerm j_7 (ATerm t)
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = m_38;
              {
                t = d_136(t);
                t = Cons_2(t, _id, j_7);
              }
            }
          ;
          LocalPopChoice(l_38);
        }
      else
        {
          t = k_38;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_7, j_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
  ATerm o_38;
  o_38 = t;
  {
    ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL,a_137 = NULL;
    x_136 = t;
    t_136 :
    if(match_cons(x_136, sym__3))
      {
        y_136 = ATgetArgument(x_136, 0);
        z_136 = ATgetArgument(x_136, 1);
        a_137 = ATgetArgument(x_136, 2);
        {
          if(((u_136 != NULL) && (u_136 != y_136)))
            _fail(y_136);
          else
            u_136 = y_136;
          {
            if(((v_136 != NULL) && (v_136 != z_136)))
              _fail(z_136);
            else
              v_136 = z_136;
            {
              if(((w_136 != NULL) && (w_136 != a_137)))
                _fail(a_137);
              else
                w_136 = a_137;
              t = SSL_table_put(not_null(u_136), not_null(v_136), not_null(w_136));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_38;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_136 (ATerm))
{
  ATerm d_137 = NULL;
  ATerm p_38;
  p_38 = t;
  {
    t = term_q_38;
    t = table_put_0(t);
  }
  t = p_38;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm r_38 = t;
      int s_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_136(t);
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
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(u_38);
              }
            else
              {
                t = t_38;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, k_7);
    {
      ATerm l_7 (ATerm t)
      {
        ATerm v_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_38;
            x_38 = t;
            {
              ATerm y_38 = t;
              int z_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_35;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(z_38);
                }
              else
                {
                  t = y_38;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = x_38;
            {
              t = system_usage_0(t);
              {
                t = term_n_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(w_38);
          }
        else
          {
            t = v_38;
            {
              ATerm a_39 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_39;
                  c_39 = t;
                  {
                    t = term_s_37;
                    t = get_config_0(t);
                  }
                  t = c_39;
                  {
                    t = system_about_0(t);
                    {
                      t = term_n_8;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = a_39;
                  {
                    ATerm m_7 (ATerm t)
                    {
                      ATerm n_7 (ATerm t)
                      {
                        ATerm e_137 = NULL;
                        e_137 = t;
                        if(((d_137 != NULL) && (d_137 != e_137)))
                          _fail(e_137);
                        else
                          d_137 = e_137;
                        return(t);
                      }
                      t = Undefined_1(t, n_7);
                      return(t);
                    }
                    t = option_defined_1(t, m_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_137)), term_d_39));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_q_8;
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
      t = try_1(t, l_7);
      {
        ATerm e_39;
        e_39 = t;
        {
          t = term_l_36;
          t = table_destroy_0(t);
        }
        t = e_39;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm))
{
  t = parse_options_1(t, c_134);
  {
    t = store_options_0(t);
    {
      t = e_134(t);
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_134);
            ;
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            {
              ATerm h_39 = t;
              int i_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_134(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_39);
                }
              else
                {
                  t = h_39;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_133(t);
        ;
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_133);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_7, t_133, u_133, p_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      ATerm l_39;
      l_39 = t;
      {
        ATerm h_137 = NULL;
        ATerm i_137 = NULL;
        t = term_q_33;
        {
          t = get_config_0(t);
          {
            i_137 = t;
            if(((h_137 != NULL) && (h_137 != i_137)))
              _fail(i_137);
            else
              h_137 = i_137;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATempty, not_null(h_137)));
          t = printnl_0(t);
        }
      }
      t = l_39;
      return(t);
    }
    t = if_verbose2_1(t, r_7);
    return(t);
  }
  t = iowrap_4(t, l_133, m_133, n_133, q_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_133 (ATerm), ATerm k_133 (ATerm))
{
  t = iowrap_3(t, j_133, k_133, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_133 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    t = _2(t, _id, g_133);
    return(t);
  }
  t = iowrap_2(t, s_7, _fail);
  return(t);
}
ATerm inline_io_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_io_0(t);
  return(t);
}
