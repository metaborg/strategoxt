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
ATerm term_v_38;
ATerm term_i_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_b_35;
ATerm term_t_34;
ATerm term_n_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_c_29;
ATerm term_q_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_a_20;
ATerm term_d_19;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_z_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_f_8;
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
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_m_8);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_8);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_f_15);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_f_15);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_y_35, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_h_37, term_f_15);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_f_15);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_f_15);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, (ATerm) ATempty);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_110 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm length_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm z_109 (ATerm));
ATerm Rec_2 (ATerm, ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm SDef_3 (ATerm, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm));
ATerm Let_2 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm v_109 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm i_98 (ATerm));
ATerm RDefT_4 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm tboundin_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm i_119 (ATerm));
ATerm union_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_119 (ATerm), ATerm n_119 (ATerm));
ATerm diff_1 (ATerm, ATerm e_119 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_128 (ATerm), ATerm g_128 (ATerm));
ATerm for_3 (ATerm, ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm h_124 (ATerm), ATerm i_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm b_124 (ATerm), ATerm c_124 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_124 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_125 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm p_124 (ATerm));
ATerm rename_4 (ATerm, ATerm w_123 (ATerm, ATerm (ATerm)), ATerm x_123 (ATerm), ATerm y_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_123 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_123 (ATerm));
ATerm InlineCall0_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_123 (ATerm));
ATerm scope_2 (ATerm, ATerm e_123 (ATerm), ATerm f_123 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_123 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm));
ATerm crush_3 (ATerm, ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm));
ATerm term_size_0 (ATerm);
ATerm GuardedLChoice_3 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm LChoice_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm Choice_2 (ATerm, ATerm p_98 (ATerm), ATerm q_98 (ATerm));
ATerm Cong_2 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm));
ATerm Match_1 (ATerm, ATerm i_99 (ATerm));
ATerm Seq_2 (ATerm, ATerm p_99 (ATerm), ATerm q_99 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_99 (ATerm), ATerm m_99 (ATerm));
ATerm Build_1 (ATerm, ATerm j_99 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_99 (ATerm));
ATerm CallT_3 (ATerm, ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_111 (ATerm));
ATerm SDefT_4 (ATerm, ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm k_115 (ATerm));
ATerm zip_1 (ATerm, ATerm m_115 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm PrimT_3 (ATerm, ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm));
ATerm Explode_2 (ATerm, ATerm b_96 (ATerm), ATerm c_96 (ATerm));
ATerm Op_2 (ATerm, ATerm x_95 (ATerm), ATerm y_95 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_136 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm q_127 (ATerm));
ATerm downup_1 (ATerm, ATerm x_110 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_94 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_94 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_117 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_131 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm e_138 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_132 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_137 (ATerm));
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
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm z_130 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_133 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_135 (ATerm));
ATerm map_1 (ATerm, ATerm w_116 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_135 (ATerm));
ATerm Program_1 (ATerm, ATerm i_107 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_107 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_117 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_134 (ATerm));
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
ATerm register_usage_1 (ATerm, ATerm w_135 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_135 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_135 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm l_133 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm e_133 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_133 (ATerm), ATerm b_133 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_132 (ATerm));
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
                t = term_s_7;
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
                        t = term_t_7;
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
ATerm topdown_1 (ATerm t, ATerm v_110 (ATerm))
{
  t = v_110(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, v_110);
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
                                        ATerm u_7;
                                        u_7 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_7, not_null(w_10)));
                                          {
                                            ATerm r_0 (ATerm t)
                                            {
                                              t = term_s_7;
                                              return(t);
                                            }
                                            t = assert_1(t, r_0);
                                          }
                                        }
                                        t = u_7;
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
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
                            ATerm w_7;
                            w_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_11)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_7, not_null(h_11)));
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_t_7;
                                  return(t);
                                }
                                t = assert_1(t, s_0);
                              }
                            }
                            t = w_7;
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
    t = term_t_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_s_7;
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
                            ATerm b_8 = t;
                            int c_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(c_8);
                              }
                            else
                              {
                                t = b_8;
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
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_f_8;
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
                t = term_g_8;
                ;
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                {
                  ATerm h_8 = t;
                  int i_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_13 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = term_f_8;
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
                      t = term_g_8;
                      ;
                      LocalPopChoice(i_8);
                    }
                  else
                    {
                      t = h_8;
                      {
                        ATerm j_8 = t;
                        int k_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
                            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                            {
                              ATerm b_1 (ATerm t)
                              {
                                t = term_f_8;
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
                                                                                    ATerm l_8;
                                                                                    l_8 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty), term_g_8);
                                                                                      {
                                                                                        ATerm e_1 (ATerm t)
                                                                                        {
                                                                                          t = term_f_8;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, e_1);
                                                                                      }
                                                                                    }
                                                                                    t = l_8;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
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
                            LocalPopChoice(k_8);
                          }
                        else
                          {
                            t = j_8;
                            {
                              ATerm t_14 = NULL;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm)ATempty, (ATerm) ATempty);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = term_f_8;
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
                              t = term_g_8;
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
    t = term_m_8;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  t = foldr_3(t, g_1, add_0, h_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        t = split_2(t, _id, z_109);
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
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = split_2(t, _id, z_109);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, k_1, _id);
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
                  ATerm l_1 (ATerm t)
                  {
                    t = split_2(t, _id, z_109);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, l_1, _id, _id);
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
                        ATerm m_1 (ATerm t)
                        {
                          t = split_2(t, _id, z_109);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, m_1, _id, _id);
                        ;
                        LocalPopChoice(x_8);
                      }
                    else
                      {
                        t = w_8;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            t = z_109(t);
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
ATerm Rec_2 (ATerm t, ATerm y_99 (ATerm), ATerm z_99 (ATerm))
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
            t = y_99(t);
            {
              r_16 = t;
              {
                t = not_null(l_16);
                {
                  ATerm v_16 = NULL;
                  t = z_99(t);
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
ATerm SDef_3 (ATerm t, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm))
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
            t = q_101(t);
            {
              t_17 = t;
              {
                t = not_null(l_17);
                {
                  ATerm x_17 = NULL;
                  t = r_101(t);
                  {
                    v_17 = t;
                    {
                      t = not_null(m_17);
                      {
                        ATerm z_17 = NULL;
                        t = s_101(t);
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
ATerm Let_2 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm))
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
            t = b_99(t);
            {
              v_18 = t;
              {
                t = not_null(p_18);
                {
                  ATerm z_18 = NULL;
                  t = c_99(t);
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
ATerm sboundin_3 (ATerm t, ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm))
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_110, a_110);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_110, c_110, a_110);
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
                  t = SDefT_4(t, c_110, c_110, c_110, a_110);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  t = Rec_2(t, c_110, a_110);
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
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        {
          ATerm g_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(l_9);
            }
          else
            {
              t = g_9;
              {
                ATerm m_9 = t;
                int n_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(n_9);
                  }
                else
                  {
                    t = m_9;
                    {
                      ATerm o_9 = t;
                      int a_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(a_10);
                        }
                      else
                        {
                          t = o_9;
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
ATerm tpaste_1 (ATerm t, ATerm v_109 (ATerm))
{
  ATerm b_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, v_109, _id);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = b_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = split_2(t, _id, v_109);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, q_1, _id);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm r_1 (ATerm t)
              {
                t = split_2(t, _id, v_109);
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
ATerm DynamicRules_1 (ATerm t, ATerm i_98 (ATerm))
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
            t = i_98(t);
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
ATerm RDefT_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
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
            t = z_97(t);
            {
              t_23 = t;
              {
                t = not_null(j_23);
                {
                  ATerm x_23 = NULL;
                  t = a_98(t);
                  {
                    v_23 = t;
                    {
                      t = not_null(k_23);
                      {
                        ATerm z_23 = NULL;
                        t = b_98(t);
                        {
                          x_23 = t;
                          {
                            t = not_null(l_23);
                            {
                              ATerm b_24 = NULL;
                              t = c_98(t);
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
ATerm tboundin_3 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm))
{
  ATerm j_10 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, y_109, w_109);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = j_10;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, y_109, y_109, y_109, w_109);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm l_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, y_109, y_109, y_109, w_109);
                  ;
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = l_11;
                  t = DynamicRules_1(t, w_109);
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
ATerm union_1 (ATerm t, ATerm i_119 (ATerm))
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
            ATerm n_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_26);
                ;
                LocalPopChoice(o_11);
              }
            else
              {
                t = n_11;
                {
                  ATerm x_11 = t;
                  int y_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = not_null(i_26);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_119, t_1);
                      t = m_26(t);
                      ;
                      LocalPopChoice(y_11);
                    }
                  else
                    {
                      t = x_11;
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
ATerm HdMember_p__2 (ATerm t, ATerm m_119 (ATerm), ATerm n_119 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
    {
      y_26 = ATgetFirst((ATermList) x_26);
      z_26 = (ATerm) ATgetNext((ATermList) x_26);
      {
        t = n_119(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm c_27 = NULL;
            c_27 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(c_27));
              t = m_119(t);
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
ATerm diff_1 (ATerm t, ATerm e_119 (ATerm))
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
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
                {
                  ATerm b_12 = t;
                  int c_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(k_27);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_119, v_1);
                      t = o_27(t);
                      ;
                      LocalPopChoice(c_12);
                    }
                  else
                    {
                      t = b_12;
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
            ATerm e_12;
            e_12 = t;
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
            t = e_12;
            {
              ATerm g_12;
              g_12 = t;
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
              t = g_12;
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
ATerm while_not_2 (ATerm t, ATerm f_128 (ATerm), ATerm g_128 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_128(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        {
          t = g_128(t);
          t = z_29(t);
        }
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm k_128 (ATerm))
{
  t = i_128(t);
  t = while_not_2(t, j_128, k_128);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm j_12 = t;
  int l_12 = stack_ptr;
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
        ATerm m_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm p_12 = t;
              int t_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(t_12);
                }
              else
                {
                  t = p_12;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, z_1);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = m_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_1, x_1, y_1);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = j_12;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_30 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_125(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_30 = NULL;
              ATerm i_13;
              i_13 = t;
              {
                ATerm g_30 = NULL;
                t = a_126(t);
                {
                  g_30 = t;
                  if(((f_30 != NULL) && (f_30 != g_30)))
                    _fail(g_30);
                  else
                    f_30 = g_30;
                }
              }
              t = i_13;
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
                t = b_126(t, a_2, h_30, b_2);
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
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
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
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm l_13 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(f_14);
            }
          else
            {
              t = l_13;
              {
                ATerm l_14 = t;
                int m_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(m_14);
                  }
                else
                  {
                    t = l_14;
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
        ATerm p_14 = t;
        int q_14 = stack_ptr;
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
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = r_14;
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
ATerm DistBinding_2 (ATerm t, ATerm h_124 (ATerm), ATerm i_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
              t = h_124(t);
            }
            return(t);
          }
          ATerm h_2 (ATerm t)
          {
            ATerm m_33 = NULL;
            m_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(f_33));
              t = h_124(t);
            }
            return(t);
          }
          t = i_124(t, g_2, h_2, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm b_124 (ATerm), ATerm c_124 (ATerm, ATerm (ATerm)))
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
        ATerm u_14;
        u_14 = t;
        {
          ATerm g_34 = NULL;
          t = not_null(z_33);
          {
            ATerm h_34 = NULL;
            t = b_124(t);
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
        t = u_14;
        {
          ATerm m_34 = NULL;
          t = not_null(z_33);
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(e_34);
              return(t);
            }
            t = c_124(t, i_2);
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
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_124 (ATerm, ATerm (ATerm)))
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
          t = m_124(t, j_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm f_125 (ATerm))
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
              t = f_125(t);
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
ATerm env_alltd_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_124(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = all_dist_1(t, n_36);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm w_123 (ATerm, ATerm (ATerm)), ATerm x_123 (ATerm), ATerm y_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_123 (ATerm, ATerm (ATerm)))
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
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, w_123);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              {
                t = RnBinding_2(t, x_123, z_123);
                t = DistBinding_2(t, s_36, y_123);
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
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
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
ATerm rewrite_1 (ATerm t, ATerm i_123 (ATerm))
{
  ATerm k_37 = NULL;
  ATerm m_37 = NULL;
  k_37 = t;
  {
    ATerm n_37 = NULL;
    t = term_f_15;
    {
      t = i_123(t);
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
                    ATerm w_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
                    ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
                    t = not_null(p_41);
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_g_15;
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
                                              if(((z_41 != NULL) && (z_41 != h_42)))
                                                _fail(h_42);
                                              else
                                                z_41 = h_42;
                                              {
                                                if(((a_42 != NULL) && (a_42 != i_42)))
                                                  _fail(i_42);
                                                else
                                                  a_42 = i_42;
                                                {
                                                  if(((y_41 != NULL) && (y_41 != j_42)))
                                                    _fail(j_42);
                                                  else
                                                    y_41 = j_42;
                                                  {
                                                    ATerm l_42 = NULL,p_42 = NULL,r_42 = NULL;
                                                    ATerm h_15;
                                                    h_15 = t;
                                                    {
                                                      ATerm o_42 = NULL;
                                                      t = not_null(z_41);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          o_42 = t;
                                                          if(((l_42 != NULL) && (l_42 != o_42)))
                                                            _fail(o_42);
                                                          else
                                                            l_42 = o_42;
                                                        }
                                                      }
                                                    }
                                                    t = h_15;
                                                    {
                                                      ATerm q_42 = NULL;
                                                      t = not_null(a_42);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          q_42 = t;
                                                          if(((p_42 != NULL) && (p_42 != q_42)))
                                                            _fail(q_42);
                                                          else
                                                            p_42 = q_42;
                                                        }
                                                      }
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_42), not_null(p_42));
                                                        {
                                                          t = add_0(t);
                                                          {
                                                            r_42 = t;
                                                            if(((k_42 != NULL) && (k_42 != r_42)))
                                                              _fail(r_42);
                                                            else
                                                              k_42 = r_42;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), term_m_8);
                                                      {
                                                        t = gt_0(t);
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            s_42 = t;
                                                            {
                                                              if(((b_42 != NULL) && (b_42 != s_42)))
                                                                _fail(s_42);
                                                              else
                                                                b_42 = s_42;
                                                              {
                                                                ATerm i_15;
                                                                i_15 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_41)), (ATerm)ATempty, (ATerm) ATempty), term_g_8);
                                                                  {
                                                                    ATerm p_2 (ATerm t)
                                                                    {
                                                                      t = term_f_8;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, p_2);
                                                                  }
                                                                }
                                                                t = i_15;
                                                              }
                                                            }
                                                          }
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
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(b_42), not_null(z_41), not_null(a_42), not_null(y_41))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_42)), (ATerm)ATempty, (ATerm) ATempty));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
        ATerm j_15;
        j_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_43)), (ATerm)ATempty, (ATerm) ATempty), term_g_8);
          {
            ATerm q_2 (ATerm t)
            {
              t = term_f_8;
              return(t);
            }
            t = assert_1(t, q_2);
          }
        }
        t = j_15;
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
        ATerm k_15;
        k_15 = t;
        {
          ATerm y_43 = NULL;
          ATerm z_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(v_43));
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
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
        t = k_15;
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
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm j_44 = NULL;
    ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
    t = d_123(t);
    {
      j_44 = t;
      {
        if(((i_44 != NULL) && (i_44 != j_44)))
          _fail(j_44);
        else
          i_44 = j_44;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_44), term_z_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_44), term_z_15, not_null(g_44));
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
  t = w_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_114(t);
      t = d_114(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        t = d_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_123 (ATerm))
{
  ATerm y_44 = NULL;
  ATerm c_16;
  c_16 = t;
  {
    ATerm z_44 = NULL;
    ATerm a_45 = NULL;
    t = c_123(t);
    {
      z_44 = t;
      {
        if(((y_44 != NULL) && (y_44 != z_44)))
          _fail(z_44);
        else
          y_44 = z_44;
        {
          ATerm b_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_44), term_z_15);
          {
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
                t = (ATerm) ATempty;
              }
            {
              b_45 = t;
              if(((a_45 != NULL) && (a_45 != b_45)))
                _fail(b_45);
              else
                a_45 = b_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_44), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(a_45)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_123 (ATerm), ATerm f_123 (ATerm))
{
  t = begin_scope_1(t, e_123);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, e_123);
      return(t);
    }
    t = restore_always_2(t, f_123, s_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_f_8;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm h_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = InlineCall0_0(t);
                ;
                LocalPopChoice(m_16);
              }
            else
              {
                t = h_16;
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
ATerm assert_1 (ATerm t, ATerm g_123 (ATerm))
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
        ATerm n_16;
        n_16 = t;
        {
          ATerm u_45 = NULL;
          ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
          t = g_123(t);
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
                    ATerm o_16 = t;
                    int s_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), term_z_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(s_16);
                      }
                    else
                      {
                        t = o_16;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_45), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(t_45)), (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(n_45))));
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
        t = n_16;
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
        ATerm u_16;
        u_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, not_null(d_46)));
          {
            ATerm w_2 (ATerm t)
            {
              t = term_f_8;
              return(t);
            }
            t = assert_1(t, w_2);
          }
        }
        t = u_16;
        {
          ATerm y_16;
          y_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_46)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_16, not_null(d_46)));
            {
              ATerm x_2 (ATerm t)
              {
                t = term_g_15;
                return(t);
              }
              t = assert_1(t, x_2);
            }
          }
          t = y_16;
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
  ATerm a_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_17;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_121(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
        u_46 = t;
        t_46 :
        if(((ATgetType(u_46) == AT_LIST) && !(ATisEmpty(u_46))))
          {
            v_46 = ATgetFirst((ATermList) u_46);
            w_46 = (ATerm) ATgetNext((ATermList) u_46);
            {
              ATerm z_46 = NULL,b_47 = NULL;
              ATerm d_17;
              d_17 = t;
              {
                ATerm a_47 = NULL;
                t = not_null(v_46);
                {
                  t = z_121(t);
                  {
                    a_47 = t;
                    if(((z_46 != NULL) && (z_46 != a_47)))
                      _fail(a_47);
                    else
                      z_46 = a_47;
                  }
                }
              }
              t = d_17;
              {
                ATerm c_47 = NULL;
                t = not_null(w_46);
                {
                  t = foldr_3(t, x_121, y_121, z_121);
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
      t = foldr_3(t, v_119, w_119, x_119);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        t = term_n_8;
        return(t);
      }
      t = crush_3(t, y_2, add_0, term_size_0);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm a_48 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            t = term_n_8;
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
ATerm GuardedLChoice_3 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,p_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym_GuardedLChoice_3))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      p_48 = ATgetArgument(i_48, 2);
      {
        ATerm z_48 = NULL,b_49 = NULL;
        ATerm a_49 = NULL;
        t = SSLgetAnnotations(not_null(i_48));
        {
          a_49 = t;
          if(((z_48 != NULL) && (z_48 != a_49)))
            _fail(a_49);
          else
            z_48 = a_49;
        }
        {
          t = not_null(j_48);
          {
            ATerm d_49 = NULL;
            t = v_99(t);
            {
              b_49 = t;
              {
                t = not_null(k_48);
                {
                  ATerm f_49 = NULL;
                  t = w_99(t);
                  {
                    d_49 = t;
                    {
                      t = not_null(p_48);
                      {
                        ATerm h_49 = NULL;
                        t = x_99(t);
                        {
                          f_49 = t;
                          {
                            ATerm i_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_49), not_null(d_49), not_null(f_49)), not_null(z_48));
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
ATerm LChoice_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_LChoice_2))
    {
      e_50 = ATgetArgument(d_50, 0);
      f_50 = ATgetArgument(d_50, 1);
      {
        ATerm j_50 = NULL,l_50 = NULL;
        ATerm k_50 = NULL;
        t = SSLgetAnnotations(not_null(d_50));
        {
          k_50 = t;
          if(((j_50 != NULL) && (j_50 != k_50)))
            _fail(k_50);
          else
            j_50 = k_50;
        }
        {
          t = not_null(e_50);
          {
            ATerm n_50 = NULL;
            t = r_99(t);
            {
              l_50 = t;
              {
                t = not_null(f_50);
                {
                  ATerm p_50 = NULL;
                  t = s_99(t);
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
ATerm Choice_2 (ATerm t, ATerm p_98 (ATerm), ATerm q_98 (ATerm))
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
            t = p_98(t);
            {
              k_51 = t;
              {
                t = not_null(e_51);
                {
                  ATerm o_51 = NULL;
                  t = q_98(t);
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
ATerm Cong_2 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm))
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  b_52 :
  if(match_cons(e_52, sym_Cong_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm k_52 = NULL,m_52 = NULL;
        ATerm l_52 = NULL;
        t = SSLgetAnnotations(not_null(e_52));
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
        {
          t = not_null(f_52);
          {
            ATerm o_52 = NULL;
            t = o_94(t);
            {
              m_52 = t;
              {
                t = not_null(g_52);
                {
                  ATerm q_52 = NULL;
                  t = p_94(t);
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
ATerm Match_1 (ATerm t, ATerm i_99 (ATerm))
{
  ATerm e_53 = NULL,f_53 = NULL;
  e_53 = t;
  b_53 :
  if(match_cons(e_53, sym_Match_1))
    {
      f_53 = ATgetArgument(e_53, 0);
      {
        ATerm t_53 = NULL,v_53 = NULL;
        ATerm u_53 = NULL;
        t = SSLgetAnnotations(not_null(e_53));
        {
          u_53 = t;
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
        }
        {
          t = not_null(f_53);
          {
            ATerm d_54 = NULL;
            t = i_99(t);
            {
              v_53 = t;
              {
                ATerm e_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(v_53)), not_null(t_53));
                {
                  e_54 = t;
                  if(((d_54 != NULL) && (d_54 != e_54)))
                    _fail(e_54);
                  else
                    d_54 = e_54;
                }
                t = not_null(d_54);
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
ATerm Seq_2 (ATerm t, ATerm p_99 (ATerm), ATerm q_99 (ATerm))
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
            t = p_99(t);
            {
              z_54 = t;
              {
                t = not_null(t_54);
                {
                  ATerm d_55 = NULL;
                  t = q_99(t);
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
ATerm Scope_2 (ATerm t, ATerm l_99 (ATerm), ATerm m_99 (ATerm))
{
  ATerm x_55 = NULL,y_55 = NULL,f_56 = NULL;
  x_55 = t;
  w_55 :
  if(match_cons(x_55, sym_Scope_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      f_56 = ATgetArgument(x_55, 1);
      {
        ATerm q_56 = NULL,s_56 = NULL;
        ATerm r_56 = NULL;
        t = SSLgetAnnotations(not_null(x_55));
        {
          r_56 = t;
          if(((q_56 != NULL) && (q_56 != r_56)))
            _fail(r_56);
          else
            q_56 = r_56;
        }
        {
          t = not_null(y_55);
          {
            ATerm u_56 = NULL;
            t = l_99(t);
            {
              s_56 = t;
              {
                t = not_null(f_56);
                {
                  ATerm w_56 = NULL;
                  t = m_99(t);
                  {
                    u_56 = t;
                    {
                      ATerm a_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_56), not_null(u_56)), not_null(q_56));
                      {
                        a_57 = t;
                        if(((w_56 != NULL) && (w_56 != a_57)))
                          _fail(a_57);
                        else
                          w_56 = a_57;
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
ATerm Build_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm l_57 = NULL,m_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_Build_1))
    {
      m_57 = ATgetArgument(l_57, 0);
      {
        ATerm q_57 = NULL,s_57 = NULL;
        ATerm r_57 = NULL;
        t = SSLgetAnnotations(not_null(l_57));
        {
          r_57 = t;
          if(((q_57 != NULL) && (q_57 != r_57)))
            _fail(r_57);
          else
            q_57 = r_57;
        }
        {
          t = not_null(m_57);
          {
            ATerm u_57 = NULL;
            t = j_99(t);
            {
              s_57 = t;
              {
                ATerm v_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_57)), not_null(q_57));
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
ATerm SVar_1 (ATerm t, ATerm a_99 (ATerm))
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
            t = a_99(t);
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
ATerm CallT_3 (ATerm t, ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm))
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
            t = f_99(t);
            {
              k_59 = t;
              {
                t = not_null(c_59);
                {
                  ATerm o_59 = NULL;
                  t = g_99(t);
                  {
                    m_59 = t;
                    {
                      t = not_null(d_59);
                      {
                        ATerm q_59 = NULL;
                        t = h_99(t);
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
      ATerm g_17;
      g_17 = t;
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
      t = g_17;
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
      ATerm h_17;
      h_17 = t;
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
      t = h_17;
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
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              {
                ATerm u_17 = t;
                int w_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = CallT_3(t, a_3, _id, _id);
                    ;
                    LocalPopChoice(w_17);
                  }
                else
                  {
                    t = u_17;
                    {
                      ATerm y_17 = t;
                      int b_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          ;
                          LocalPopChoice(b_18);
                        }
                      else
                        {
                          t = y_17;
                          {
                            ATerm c_18 = t;
                            int d_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                ;
                                LocalPopChoice(d_18);
                              }
                            else
                              {
                                t = c_18;
                                {
                                  ATerm e_18 = t;
                                  int f_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_3 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, b_3, _id);
                                      ;
                                      LocalPopChoice(f_18);
                                    }
                                  else
                                    {
                                      t = e_18;
                                      {
                                        ATerm g_18 = t;
                                        int h_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, c_3);
                                            ;
                                            LocalPopChoice(h_18);
                                          }
                                        else
                                          {
                                            t = g_18;
                                            {
                                              ATerm i_18 = t;
                                              int j_18 = stack_ptr;
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
                                                  LocalPopChoice(j_18);
                                                }
                                              else
                                                {
                                                  t = i_18;
                                                  {
                                                    ATerm k_18 = t;
                                                    int l_18 = stack_ptr;
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
                                                        LocalPopChoice(l_18);
                                                      }
                                                    else
                                                      {
                                                        t = k_18;
                                                        {
                                                          ATerm q_18 = t;
                                                          int r_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              ;
                                                              LocalPopChoice(r_18);
                                                            }
                                                          else
                                                            {
                                                              t = q_18;
                                                              {
                                                                ATerm s_18 = t;
                                                                int w_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, b_61, b_61);
                                                                    ;
                                                                    LocalPopChoice(w_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_18;
                                                                    {
                                                                      ATerm y_18 = t;
                                                                      int b_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2(t, b_61, b_61);
                                                                          ;
                                                                          LocalPopChoice(b_19);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_18;
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
    ATerm c_19;
    c_19 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), term_d_19);
        t = leq_0(t);
      }
    }
    t = c_19;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm z_111 (ATerm))
{
  ATerm d_61 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_111(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = _one(t, d_61);
      }
    return(t);
  }
  t = d_61(t);
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm))
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  m_61 = t;
  l_61 :
  if(match_cons(m_61, sym_SDefT_4))
    {
      n_61 = ATgetArgument(m_61, 0);
      o_61 = ATgetArgument(m_61, 1);
      p_61 = ATgetArgument(m_61, 2);
      q_61 = ATgetArgument(m_61, 3);
      {
        ATerm w_61 = NULL,y_61 = NULL;
        ATerm x_61 = NULL;
        t = SSLgetAnnotations(not_null(m_61));
        {
          x_61 = t;
          if(((w_61 != NULL) && (w_61 != x_61)))
            _fail(x_61);
          else
            w_61 = x_61;
        }
        {
          t = not_null(n_61);
          {
            ATerm a_62 = NULL;
            t = t_101(t);
            {
              y_61 = t;
              {
                t = not_null(o_61);
                {
                  ATerm f_62 = NULL;
                  t = u_101(t);
                  {
                    a_62 = t;
                    {
                      t = not_null(p_61);
                      {
                        ATerm h_62 = NULL;
                        t = v_101(t);
                        {
                          f_62 = t;
                          {
                            t = not_null(q_61);
                            {
                              ATerm j_62 = NULL;
                              t = w_101(t);
                              {
                                h_62 = t;
                                {
                                  ATerm k_62 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(y_61), not_null(a_62), not_null(f_62), not_null(h_62)), not_null(w_61));
                                  {
                                    k_62 = t;
                                    if(((j_62 != NULL) && (j_62 != k_62)))
                                      _fail(k_62);
                                    else
                                      j_62 = k_62;
                                  }
                                  t = not_null(j_62);
                                }
                              }
                            }
                          }
                        }
                      }
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
  ATerm z_62 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm b_63 = NULL;
    ATerm g_19 = t;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL;
        a_63 = t;
        s_62 :
        if(!(match_string(a_63, "main_0_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_19;
      }
    {
      b_63 = t;
      if(((z_62 != NULL) && (z_62 != b_63)))
        _fail(b_63);
      else
        z_62 = b_63;
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm n_19;
    n_19 = t;
    {
      ATerm o_19 = t;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
            c_63 = t;
            v_62 :
            if(match_cons(c_63, sym_CallT_3))
              {
                d_63 = ATgetArgument(c_63, 0);
                f_63 = ATgetArgument(c_63, 1);
                g_63 = ATgetArgument(c_63, 2);
                w_62 :
                if(match_cons(d_63, sym_SVar_1))
                  {
                    e_63 = ATgetArgument(d_63, 0);
                    x_62 :
                    if(((ATgetType(f_63) == AT_LIST) && ATisEmpty(f_63)))
                      {
                        y_62 :
                        if(((ATgetType(g_63) == AT_LIST) && ATisEmpty(g_63)))
                          {
                            if(((z_62 != NULL) && (z_62 != e_63)))
                              _fail(e_63);
                            else
                              z_62 = e_63;
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
          t = o_19;
        }
    }
    t = n_19;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDefT_4(t, i_3, _id, _id, j_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym_Cong_2))
    {
      e_64 = ATgetArgument(d_64, 0);
      f_64 = ATgetArgument(d_64, 1);
      {
        ATerm i_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,n_65 = NULL,v_65 = NULL,x_65 = NULL;
        ATerm p_19;
        p_19 = t;
        {
          ATerm t_64 = NULL;
          t = not_null(f_64);
          {
            ATerm w_64 = NULL;
            t = map_1(t, new_0);
            {
              t_64 = t;
              {
                if(((q_64 != NULL) && (q_64 != t_64)))
                  _fail(t_64);
                else
                  q_64 = t_64;
                {
                  t = not_null(q_64);
                  {
                    ATerm x_64 = NULL;
                    ATerm l_3 (ATerm t)
                    {
                      ATerm u_64 = NULL;
                      ATerm v_64 = NULL;
                      v_64 = t;
                      if(((u_64 != NULL) && (u_64 != v_64)))
                        _fail(v_64);
                      else
                        u_64 = v_64;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_64));
                      return(t);
                    }
                    t = map_1(t, l_3);
                    {
                      w_64 = t;
                      {
                        if(((i_64 != NULL) && (i_64 != w_64)))
                          _fail(w_64);
                        else
                          i_64 = w_64;
                        {
                          ATerm y_64 = NULL;
                          t = new_0(t);
                          {
                            x_64 = t;
                            {
                              if(((o_64 != NULL) && (o_64 != x_64)))
                                _fail(x_64);
                              else
                                o_64 = x_64;
                              {
                                t = not_null(f_64);
                                {
                                  ATerm b_65 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    y_64 = t;
                                    {
                                      if(((r_64 != NULL) && (r_64 != y_64)))
                                        _fail(y_64);
                                      else
                                        r_64 = y_64;
                                      {
                                        t = not_null(r_64);
                                        {
                                          ATerm c_65 = NULL,m_65 = NULL;
                                          ATerm m_3 (ATerm t)
                                          {
                                            ATerm z_64 = NULL;
                                            ATerm a_65 = NULL;
                                            a_65 = t;
                                            if(((z_64 != NULL) && (z_64 != a_65)))
                                              _fail(a_65);
                                            else
                                              z_64 = a_65;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_64));
                                            return(t);
                                          }
                                          t = map_1(t, m_3);
                                          {
                                            b_65 = t;
                                            {
                                              if(((p_64 != NULL) && (p_64 != b_65)))
                                                _fail(b_65);
                                              else
                                                p_64 = b_65;
                                              {
                                                ATerm d_65 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(r_64));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    d_65 = t;
                                                    if(((c_65 != NULL) && (c_65 != d_65)))
                                                      _fail(d_65);
                                                    else
                                                      c_65 = d_65;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_65), not_null(f_64));
                                                  {
                                                    ATerm n_3 (ATerm t)
                                                    {
                                                      ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
                                                      e_65 = t;
                                                      t_63 :
                                                      if(match_cons(e_65, sym__2))
                                                        {
                                                          f_65 = ATgetArgument(e_65, 0);
                                                          i_65 = ATgetArgument(e_65, 1);
                                                          v_63 :
                                                          if(match_cons(f_65, sym__2))
                                                            {
                                                              g_65 = ATgetArgument(f_65, 0);
                                                              h_65 = ATgetArgument(f_65, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_65))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_65)))));
                                                            }
                                                          else
                                                            {
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
                                                      m_65 = t;
                                                      if(((s_64 != NULL) && (s_64 != m_65)))
                                                        _fail(m_65);
                                                      else
                                                        s_64 = m_65;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_19;
        {
          ATerm q_19;
          q_19 = t;
          {
            ATerm o_65 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(r_64));
            {
              t = conc_0(t);
              {
                o_65 = t;
                if(((n_65 != NULL) && (n_65 != o_65)))
                  _fail(o_65);
                else
                  n_65 = o_65;
              }
            }
          }
          t = q_19;
          {
            ATerm r_19;
            r_19 = t;
            {
              ATerm w_65 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_64), not_null(i_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_64))));
              {
                t = Mapp2_0(t);
                {
                  w_65 = t;
                  if(((v_65 != NULL) && (v_65 != w_65)))
                    _fail(w_65);
                  else
                    v_65 = w_65;
                }
              }
            }
            t = r_19;
            {
              ATerm z_65 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_64), not_null(p_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_64))));
              {
                t = Bapp2_0(t);
                {
                  z_65 = t;
                  if(((x_65 != NULL) && (x_65 != z_65)))
                    _fail(z_65);
                  else
                    x_65 = z_65;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(n_65)), not_null(o_64)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_64)), not_null(x_65))));
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
  ATerm e_67 = NULL,f_67 = NULL;
  e_67 = t;
  d_67 :
  if(match_cons(e_67, sym_Build_1))
    {
      f_67 = ATgetArgument(e_67, 0);
      {
        ATerm s_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL;
            ATerm l_67 = NULL;
            ATerm p_67 = NULL;
            t = new_0(t);
            {
              l_67 = t;
              {
                if(((j_67 != NULL) && (j_67 != l_67)))
                  _fail(l_67);
                else
                  j_67 = l_67;
                {
                  t = not_null(f_67);
                  {
                    ATerm o_3 (ATerm t)
                    {
                      ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
                      m_67 = t;
                      t_66 :
                      if(match_cons(m_67, sym_Anno_2))
                        {
                          n_67 = ATgetArgument(m_67, 0);
                          o_67 = ATgetArgument(m_67, 1);
                          {
                            if(((h_67 != NULL) && (h_67 != n_67)))
                              _fail(n_67);
                            else
                              h_67 = n_67;
                            {
                              if(((i_67 != NULL) && (i_67 != o_67)))
                                _fail(o_67);
                              else
                                i_67 = o_67;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67));
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
                      p_67 = t;
                      if(((k_67 != NULL) && (k_67 != p_67)))
                        _fail(p_67);
                      else
                        k_67 = p_67;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_67)), not_null(h_67))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_67))));
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = s_19;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
                  ATerm u_67 = NULL;
                  ATerm x_67 = NULL;
                  t = new_0(t);
                  {
                    u_67 = t;
                    {
                      if(((s_67 != NULL) && (s_67 != u_67)))
                        _fail(u_67);
                      else
                        s_67 = u_67;
                      {
                        t = not_null(f_67);
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm v_67 = NULL,w_67 = NULL;
                            v_67 = t;
                            x_66 :
                            if(match_cons(v_67, sym_RootApp_1))
                              {
                                w_67 = ATgetArgument(v_67, 0);
                                {
                                  if(((r_67 != NULL) && (r_67 != w_67)))
                                    _fail(w_67);
                                  else
                                    r_67 = w_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67));
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
                            x_67 = t;
                            if(((t_67 != NULL) && (t_67 != x_67)))
                              _fail(x_67);
                            else
                              t_67 = x_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_67), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_67))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_67))));
                  ;
                  LocalPopChoice(c_20);
                }
              else
                {
                  t = b_20;
                  {
                    ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
                    ATerm d_68 = NULL;
                    ATerm m_68 = NULL;
                    t = new_0(t);
                    {
                      d_68 = t;
                      {
                        if(((b_68 != NULL) && (b_68 != d_68)))
                          _fail(d_68);
                        else
                          b_68 = d_68;
                        {
                          t = not_null(f_67);
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm e_68 = NULL,k_68 = NULL,l_68 = NULL;
                              e_68 = t;
                              b_67 :
                              if(match_cons(e_68, sym_App_2))
                                {
                                  k_68 = ATgetArgument(e_68, 0);
                                  l_68 = ATgetArgument(e_68, 1);
                                  {
                                    if(((z_67 != NULL) && (z_67 != k_68)))
                                      _fail(k_68);
                                    else
                                      z_67 = k_68;
                                    {
                                      if(((a_68 != NULL) && (a_68 != l_68)))
                                        _fail(l_68);
                                      else
                                        a_68 = l_68;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68));
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
                              m_68 = t;
                              if(((c_68 != NULL) && (c_68 != m_68)))
                                _fail(m_68);
                              else
                                c_68 = m_68;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(z_67), not_null(a_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_68)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_68))));
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  e_69 :
  if(match_cons(f_69, sym__2))
    {
      g_69 = ATgetArgument(f_69, 0);
      h_69 = ATgetArgument(f_69, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_69)), not_null(g_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,b_70 = NULL,c_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  p_69 = t;
  m_69 :
  if(match_cons(p_69, sym__2))
    {
      q_69 = ATgetArgument(p_69, 0);
      m_70 = ATgetArgument(p_69, 1);
      n_69 :
      if(((ATgetType(q_69) == AT_LIST) && !(ATisEmpty(q_69))))
        {
          b_70 = ATgetFirst((ATermList) q_69);
          c_70 = (ATerm) ATgetNext((ATermList) q_69);
          o_69 :
          if(((ATgetType(m_70) == AT_LIST) && !(ATisEmpty(m_70))))
            {
              n_70 = ATgetFirst((ATermList) m_70);
              o_70 = (ATerm) ATgetNext((ATermList) m_70);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_70), not_null(n_70)), (ATerm) ATmakeAppl(sym__2, not_null(c_70), not_null(o_70)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  d_71 :
  if(match_cons(g_71, sym__2))
    {
      h_71 = ATgetArgument(g_71, 0);
      i_71 = ATgetArgument(g_71, 1);
      e_71 :
      if(((ATgetType(h_71) == AT_LIST) && ATisEmpty(h_71)))
        {
          f_71 :
          if(((ATgetType(i_71) == AT_LIST) && ATisEmpty(i_71)))
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
ATerm genzip_4 (ATerm t, ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm k_115 (ATerm))
{
  ATerm k_71 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_115(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        {
          t = i_115(t);
          {
            t = _2(t, k_115, k_71);
            t = j_115(t);
          }
        }
      }
    return(t);
  }
  t = k_71(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_115 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_115);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  j_72 = t;
  c_72 :
  if(match_cons(j_72, sym_Call_2))
    {
      k_72 = ATgetArgument(j_72, 0);
      m_72 = ATgetArgument(j_72, 1);
      d_72 :
      if(match_cons(k_72, sym_SVar_1))
        {
          l_72 = ATgetArgument(k_72, 0);
          e_72 :
          if(match_string(l_72, "Anno_Cong__"))
            {
              f_72 :
              if(((ATgetType(m_72) == AT_LIST) && !(ATisEmpty(m_72))))
                {
                  n_72 = ATgetFirst((ATermList) m_72);
                  q_72 = (ATerm) ATgetNext((ATermList) m_72);
                  g_72 :
                  if(match_cons(n_72, sym_Cong_2))
                    {
                      o_72 = ATgetArgument(n_72, 0);
                      p_72 = ATgetArgument(n_72, 1);
                      h_72 :
                      if(((ATgetType(q_72) == AT_LIST) && !(ATisEmpty(q_72))))
                        {
                          r_72 = ATgetFirst((ATermList) q_72);
                          s_72 = (ATerm) ATgetNext((ATermList) q_72);
                          i_72 :
                          if(((ATgetType(s_72) == AT_LIST) && ATisEmpty(s_72)))
                            {
                              {
                                ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,c_75 = NULL,e_75 = NULL,g_75 = NULL;
                                ATerm j_20;
                                j_20 = t;
                                {
                                  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(p_72)), not_null(r_72));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      d_73 = t;
                                      y_71 :
                                      if(((ATgetType(d_73) == AT_LIST) && !(ATisEmpty(d_73))))
                                        {
                                          e_73 = ATgetFirst((ATermList) d_73);
                                          f_73 = (ATerm) ATgetNext((ATermList) d_73);
                                          {
                                            ATerm n_73 = NULL;
                                            if(((w_72 != NULL) && (w_72 != e_73)))
                                              _fail(e_73);
                                            else
                                              w_72 = e_73;
                                            {
                                              if(((a_73 != NULL) && (a_73 != f_73)))
                                                _fail(f_73);
                                              else
                                                a_73 = f_73;
                                              {
                                                ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
                                                ATerm r_3 (ATerm t)
                                                {
                                                  ATerm g_73 = NULL;
                                                  ATerm h_73 = NULL;
                                                  h_73 = t;
                                                  if(((g_73 != NULL) && (g_73 != h_73)))
                                                    _fail(h_73);
                                                  else
                                                    g_73 = h_73;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73));
                                                  return(t);
                                                }
                                                t = map_1(t, r_3);
                                                {
                                                  n_73 = t;
                                                  {
                                                    if(((x_72 != NULL) && (x_72 != n_73)))
                                                      _fail(n_73);
                                                    else
                                                      x_72 = n_73;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(p_72)), not_null(r_72));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          o_73 = t;
                                                          x_71 :
                                                          if(((ATgetType(o_73) == AT_LIST) && !(ATisEmpty(o_73))))
                                                            {
                                                              p_73 = ATgetFirst((ATermList) o_73);
                                                              q_73 = (ATerm) ATgetNext((ATermList) o_73);
                                                              {
                                                                ATerm c_74 = NULL;
                                                                if(((y_72 != NULL) && (y_72 != p_73)))
                                                                  _fail(p_73);
                                                                else
                                                                  y_72 = p_73;
                                                                {
                                                                  if(((b_73 != NULL) && (b_73 != q_73)))
                                                                    _fail(q_73);
                                                                  else
                                                                    b_73 = q_73;
                                                                  {
                                                                    ATerm d_74 = NULL,b_75 = NULL;
                                                                    ATerm s_3 (ATerm t)
                                                                    {
                                                                      ATerm a_74 = NULL;
                                                                      ATerm b_74 = NULL;
                                                                      b_74 = t;
                                                                      if(((a_74 != NULL) && (a_74 != b_74)))
                                                                        _fail(b_74);
                                                                      else
                                                                        a_74 = b_74;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, s_3);
                                                                    {
                                                                      c_74 = t;
                                                                      {
                                                                        if(((z_72 != NULL) && (z_72 != c_74)))
                                                                          _fail(c_74);
                                                                        else
                                                                          z_72 = c_74;
                                                                        {
                                                                          ATerm e_74 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_73), not_null(b_73));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              e_74 = t;
                                                                              if(((d_74 != NULL) && (d_74 != e_74)))
                                                                                _fail(e_74);
                                                                              else
                                                                                d_74 = e_74;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), (ATerm) ATinsert(CheckATermList(not_null(p_72)), not_null(r_72)));
                                                                            {
                                                                              ATerm t_3 (ATerm t)
                                                                              {
                                                                                ATerm f_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
                                                                                f_74 = t;
                                                                                u_71 :
                                                                                if(match_cons(f_74, sym__2))
                                                                                  {
                                                                                    l_74 = ATgetArgument(f_74, 0);
                                                                                    o_74 = ATgetArgument(f_74, 1);
                                                                                    v_71 :
                                                                                    if(match_cons(l_74, sym__2))
                                                                                      {
                                                                                        m_74 = ATgetArgument(l_74, 0);
                                                                                        n_74 = ATgetArgument(l_74, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_74))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_74), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74)))));
                                                                                      }
                                                                                    else
                                                                                      {
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
                                                                                b_75 = t;
                                                                                if(((c_73 != NULL) && (c_73 != b_75)))
                                                                                  _fail(b_75);
                                                                                else
                                                                                  c_73 = b_75;
                                                                              }
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
                                t = j_20;
                                {
                                  ATerm k_20;
                                  k_20 = t;
                                  {
                                    ATerm d_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_73), not_null(b_73));
                                    {
                                      t = conc_0(t);
                                      {
                                        d_75 = t;
                                        if(((c_75 != NULL) && (c_75 != d_75)))
                                          _fail(d_75);
                                        else
                                          c_75 = d_75;
                                      }
                                    }
                                  }
                                  t = k_20;
                                  {
                                    ATerm l_20;
                                    l_20 = t;
                                    {
                                      ATerm f_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_72), not_null(x_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          f_75 = t;
                                          if(((e_75 != NULL) && (e_75 != f_75)))
                                            _fail(f_75);
                                          else
                                            e_75 = f_75;
                                        }
                                      }
                                    }
                                    t = l_20;
                                    {
                                      ATerm h_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_72), not_null(z_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_72))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          h_75 = t;
                                          if(((g_75 != NULL) && (g_75 != h_75)))
                                            _fail(h_75);
                                          else
                                            g_75 = h_75;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(c_75)), not_null(y_72)), not_null(w_72)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_73)), not_null(g_75))));
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
ATerm As_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym_As_2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      {
        ATerm v_77 = NULL,x_77 = NULL;
        ATerm w_77 = NULL;
        t = SSLgetAnnotations(not_null(p_77));
        {
          w_77 = t;
          if(((v_77 != NULL) && (v_77 != w_77)))
            _fail(w_77);
          else
            v_77 = w_77;
        }
        {
          t = not_null(q_77);
          {
            ATerm z_77 = NULL;
            t = i_96(t);
            {
              x_77 = t;
              {
                t = not_null(r_77);
                {
                  ATerm b_78 = NULL;
                  t = j_96(t);
                  {
                    z_77 = t;
                    {
                      ATerm c_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(x_77), not_null(z_77)), not_null(v_77));
                      {
                        c_78 = t;
                        if(((b_78 != NULL) && (b_78 != c_78)))
                          _fail(c_78);
                        else
                          b_78 = c_78;
                      }
                      t = not_null(b_78);
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
ATerm PrimT_3 (ATerm t, ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm))
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  p_78 = t;
  o_78 :
  if(match_cons(p_78, sym_PrimT_3))
    {
      q_78 = ATgetArgument(p_78, 0);
      r_78 = ATgetArgument(p_78, 1);
      s_78 = ATgetArgument(p_78, 2);
      {
        ATerm x_78 = NULL,z_78 = NULL;
        ATerm y_78 = NULL;
        t = SSLgetAnnotations(not_null(p_78));
        {
          y_78 = t;
          if(((x_78 != NULL) && (x_78 != y_78)))
            _fail(y_78);
          else
            x_78 = y_78;
        }
        {
          t = not_null(q_78);
          {
            ATerm b_79 = NULL;
            t = h_100(t);
            {
              z_78 = t;
              {
                t = not_null(r_78);
                {
                  ATerm d_79 = NULL;
                  t = i_100(t);
                  {
                    b_79 = t;
                    {
                      t = not_null(s_78);
                      {
                        ATerm f_79 = NULL;
                        t = j_100(t);
                        {
                          d_79 = t;
                          {
                            ATerm g_79 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(z_78), not_null(b_79), not_null(d_79)), not_null(x_78));
                            {
                              g_79 = t;
                              if(((f_79 != NULL) && (f_79 != g_79)))
                                _fail(g_79);
                              else
                                f_79 = g_79;
                            }
                            t = not_null(f_79);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm b_96 (ATerm), ATerm c_96 (ATerm))
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  t_79 :
  if(match_cons(u_79, sym_Explode_2))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      {
        ATerm a_80 = NULL,c_80 = NULL;
        ATerm b_80 = NULL;
        t = SSLgetAnnotations(not_null(u_79));
        {
          b_80 = t;
          if(((a_80 != NULL) && (a_80 != b_80)))
            _fail(b_80);
          else
            a_80 = b_80;
        }
        {
          t = not_null(v_79);
          {
            ATerm e_80 = NULL;
            t = b_96(t);
            {
              c_80 = t;
              {
                t = not_null(w_79);
                {
                  ATerm g_80 = NULL;
                  t = c_96(t);
                  {
                    e_80 = t;
                    {
                      ATerm h_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_80), not_null(e_80)), not_null(a_80));
                      {
                        h_80 = t;
                        if(((g_80 != NULL) && (g_80 != h_80)))
                          _fail(h_80);
                        else
                          g_80 = h_80;
                      }
                      t = not_null(g_80);
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
ATerm Op_2 (ATerm t, ATerm x_95 (ATerm), ATerm y_95 (ATerm))
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  t_80 = t;
  s_80 :
  if(match_cons(t_80, sym_Op_2))
    {
      u_80 = ATgetArgument(t_80, 0);
      v_80 = ATgetArgument(t_80, 1);
      {
        ATerm z_80 = NULL,b_81 = NULL;
        ATerm a_81 = NULL;
        t = SSLgetAnnotations(not_null(t_80));
        {
          a_81 = t;
          if(((z_80 != NULL) && (z_80 != a_81)))
            _fail(a_81);
          else
            z_80 = a_81;
        }
        {
          t = not_null(u_80);
          {
            ATerm d_81 = NULL;
            t = x_95(t);
            {
              b_81 = t;
              {
                t = not_null(v_80);
                {
                  ATerm f_81 = NULL;
                  t = y_95(t);
                  {
                    d_81 = t;
                    {
                      ATerm g_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_81), not_null(d_81)), not_null(z_80));
                      {
                        g_81 = t;
                        if(((f_81 != NULL) && (f_81 != g_81)))
                          _fail(g_81);
                        else
                          f_81 = g_81;
                      }
                      t = not_null(f_81);
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
ATerm pat_td_1 (ATerm t, ATerm g_136 (ATerm))
{
  ATerm m_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_136(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = m_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                t = pat_td_1(t, g_136);
                return(t);
              }
              t = fetch_1(t, v_3);
              return(t);
            }
            t = Op_2(t, _id, u_3);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = pat_td_1(t, g_136);
                    return(t);
                  }
                  t = Explode_2(t, _id, w_3);
                  ;
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm x_20 = t;
                    int y_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          t = pat_td_1(t, g_136);
                          return(t);
                        }
                        t = Explode_2(t, x_3, _id);
                        ;
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = x_20;
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm z_3 (ATerm t)
                                {
                                  t = pat_td_1(t, g_136);
                                  return(t);
                                }
                                t = fetch_1(t, z_3);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, y_3);
                              ;
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm a_4 (ATerm t)
                                {
                                  t = pat_td_1(t, g_136);
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
  ATerm c_82 = NULL,d_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym_Match_1))
    {
      d_82 = ATgetArgument(c_82, 0);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
            ATerm j_82 = NULL;
            ATerm n_82 = NULL;
            t = new_0(t);
            {
              j_82 = t;
              {
                if(((h_82 != NULL) && (h_82 != j_82)))
                  _fail(j_82);
                else
                  h_82 = j_82;
                {
                  t = not_null(d_82);
                  {
                    ATerm b_4 (ATerm t)
                    {
                      ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
                      k_82 = t;
                      r_81 :
                      if(match_cons(k_82, sym_Anno_2))
                        {
                          l_82 = ATgetArgument(k_82, 0);
                          m_82 = ATgetArgument(k_82, 1);
                          {
                            if(((f_82 != NULL) && (f_82 != l_82)))
                              _fail(l_82);
                            else
                              f_82 = l_82;
                            {
                              if(((g_82 != NULL) && (g_82 != m_82)))
                                _fail(m_82);
                              else
                                g_82 = m_82;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_82)), not_null(f_82));
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
                      n_82 = t;
                      if(((i_82 != NULL) && (i_82 != n_82)))
                        _fail(n_82);
                      else
                        i_82 = n_82;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_82)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_82)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_82))))));
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL;
                  ATerm s_82 = NULL;
                  ATerm v_82 = NULL;
                  t = new_0(t);
                  {
                    s_82 = t;
                    {
                      if(((q_82 != NULL) && (q_82 != s_82)))
                        _fail(s_82);
                      else
                        q_82 = s_82;
                      {
                        t = not_null(d_82);
                        {
                          ATerm c_4 (ATerm t)
                          {
                            ATerm t_82 = NULL,u_82 = NULL;
                            t_82 = t;
                            v_81 :
                            if(match_cons(t_82, sym_RootApp_1))
                              {
                                u_82 = ATgetArgument(t_82, 0);
                                {
                                  if(((p_82 != NULL) && (p_82 != u_82)))
                                    _fail(u_82);
                                  else
                                    p_82 = u_82;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_82));
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
                            v_82 = t;
                            if(((r_82 != NULL) && (r_82 != v_82)))
                              _fail(v_82);
                            else
                              r_82 = v_82;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_82))), not_null(p_82))));
                  ;
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
                    ATerm b_83 = NULL;
                    ATerm f_83 = NULL;
                    t = new_0(t);
                    {
                      b_83 = t;
                      {
                        if(((z_82 != NULL) && (z_82 != b_83)))
                          _fail(b_83);
                        else
                          z_82 = b_83;
                        {
                          t = not_null(d_82);
                          {
                            ATerm d_4 (ATerm t)
                            {
                              ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
                              c_83 = t;
                              z_81 :
                              if(match_cons(c_83, sym_App_2))
                                {
                                  d_83 = ATgetArgument(c_83, 0);
                                  e_83 = ATgetArgument(c_83, 1);
                                  {
                                    if(((y_82 != NULL) && (y_82 != d_83)))
                                      _fail(d_83);
                                    else
                                      y_82 = d_83;
                                    {
                                      if(((x_82 != NULL) && (x_82 != e_83)))
                                        _fail(e_83);
                                      else
                                        x_82 = e_83;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_82));
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
                              f_83 = t;
                              if(((a_83 != NULL) && (a_83 != f_83)))
                                _fail(f_83);
                              else
                                a_83 = f_83;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_82)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_83)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_82))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_82)), not_null(y_82)))));
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
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  o_85 :
  if(match_cons(p_85, sym_Cong_2))
    {
      q_85 = ATgetArgument(p_85, 0);
      r_85 = ATgetArgument(p_85, 1);
      {
        ATerm u_85 = NULL;
        ATerm y_85 = NULL;
        t = not_null(r_85);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm v_85 = NULL,w_85 = NULL;
            w_85 = t;
            m_85 :
            if(match_cons(w_85, sym_Match_1))
              {
                v_85 = ATgetArgument(w_85, 0);
                t = not_null(v_85);
              }
            else
              {
                if(match_cons(w_85, sym_Id_0))
                  {
                    t = term_q_21;
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
            y_85 = t;
            if(((u_85 != NULL) && (u_85 != y_85)))
              _fail(y_85);
            else
              u_85 = y_85;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_85), not_null(u_85)));
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
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  e_86 :
  if(match_cons(g_86, sym_Scope_2))
    {
      h_86 = ATgetArgument(g_86, 0);
      i_86 = ATgetArgument(g_86, 1);
      f_86 :
      if(((ATgetType(h_86) == AT_LIST) && ATisEmpty(h_86)))
        {
          t = not_null(i_86);
        }
      else
        {
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
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  r_86 :
  if(match_cons(e_87, sym_Where_1))
    {
      f_87 = ATgetArgument(e_87, 0);
      s_86 :
      if(match_cons(f_87, sym_Seq_2))
        {
          d_87 = ATgetArgument(f_87, 0);
          z_86 = ATgetArgument(f_87, 1);
          t_86 :
          if(match_cons(d_87, sym_Where_1))
            {
              y_86 = ATgetArgument(d_87, 0);
              u_86 :
              if(match_cons(z_86, sym_Seq_2))
                {
                  a_87 = ATgetArgument(z_86, 0);
                  c_87 = ATgetArgument(z_86, 1);
                  v_86 :
                  if(match_cons(a_87, sym_Build_1))
                    {
                      b_87 = ATgetArgument(a_87, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_86), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_87)), not_null(c_87))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_87, sym_Where_1))
            {
              d_87 = ATgetArgument(f_87, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_87));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(e_87, sym_Test_1))
        {
          f_87 = ATgetArgument(e_87, 0);
          w_86 :
          if(match_cons(f_87, sym_Test_1))
            {
              d_87 = ATgetArgument(f_87, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_87));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_87, sym_Not_1))
            {
              f_87 = ATgetArgument(e_87, 0);
              x_86 :
              if(match_cons(f_87, sym_Not_1))
                {
                  d_87 = ATgetArgument(f_87, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_87));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(e_87, sym_LChoice_2))
                {
                  f_87 = ATgetArgument(e_87, 0);
                  g_87 = ATgetArgument(e_87, 1);
                  {
                    if(((f_87 != NULL) && (f_87 != g_87)))
                      _fail(g_87);
                    else
                      f_87 = g_87;
                    t = not_null(f_87);
                  }
                }
              else
                {
                  if(match_cons(e_87, sym_Choice_2))
                    {
                      f_87 = ATgetArgument(e_87, 0);
                      g_87 = ATgetArgument(e_87, 1);
                      {
                        if(((f_87 != NULL) && (f_87 != g_87)))
                          _fail(g_87);
                        else
                          f_87 = g_87;
                        t = not_null(f_87);
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
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  c_88 = t;
  y_87 :
  if(match_cons(c_88, sym_LChoice_2))
    {
      d_88 = ATgetArgument(c_88, 0);
      g_88 = ATgetArgument(c_88, 1);
      z_87 :
      if(match_cons(d_88, sym_LChoice_2))
        {
          e_88 = ATgetArgument(d_88, 0);
          f_88 = ATgetArgument(d_88, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_88), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_88), not_null(g_88)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_88, sym_Seq_2))
        {
          d_88 = ATgetArgument(c_88, 0);
          g_88 = ATgetArgument(c_88, 1);
          a_88 :
          if(match_cons(d_88, sym_Seq_2))
            {
              e_88 = ATgetArgument(d_88, 0);
              f_88 = ATgetArgument(d_88, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_88), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_88), not_null(g_88)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_88, sym_Choice_2))
            {
              d_88 = ATgetArgument(c_88, 0);
              g_88 = ATgetArgument(c_88, 1);
              b_88 :
              if(match_cons(d_88, sym_Choice_2))
                {
                  e_88 = ATgetArgument(d_88, 0);
                  f_88 = ATgetArgument(d_88, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_88), (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_88), not_null(g_88)));
                }
              else
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
  ATerm v_88 = NULL,w_88 = NULL;
  v_88 = t;
  u_88 :
  if(match_cons(v_88, sym_DefaultVarDec_1))
    {
      w_88 = ATgetArgument(v_88, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_88), term_a_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm b_89 = NULL,i_89 = NULL;
  b_89 = t;
  a_89 :
  if(match_cons(b_89, sym_DefaultVarDec_1))
    {
      i_89 = ATgetArgument(b_89, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_89), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_22), term_a_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
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
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
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
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL;
  o_90 = t;
  g_90 :
  if(match_cons(o_90, sym_Lets_2))
    {
      p_90 = ATgetArgument(o_90, 0);
      q_90 = ATgetArgument(o_90, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_90), not_null(q_90));
    }
  else
    {
      if(match_cons(o_90, sym_LChoices_1))
        {
          p_90 = ATgetArgument(o_90, 0);
          h_90 :
          if(((ATgetType(p_90) == AT_LIST) && !(ATisEmpty(p_90))))
            {
              k_90 = ATgetFirst((ATermList) p_90);
              l_90 = (ATerm) ATgetNext((ATermList) p_90);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_90), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_90)));
            }
          else
            {
              if(((ATgetType(p_90) == AT_LIST) && ATisEmpty(p_90)))
                {
                  t = term_d_22;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(o_90, sym_Choices_1))
            {
              p_90 = ATgetArgument(o_90, 0);
              i_90 :
              if(((ATgetType(p_90) == AT_LIST) && !(ATisEmpty(p_90))))
                {
                  k_90 = ATgetFirst((ATermList) p_90);
                  l_90 = (ATerm) ATgetNext((ATermList) p_90);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_90), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_90)));
                }
              else
                {
                  if(((ATgetType(p_90) == AT_LIST) && ATisEmpty(p_90)))
                    {
                      t = term_d_22;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(o_90, sym_Seqs_1))
                {
                  p_90 = ATgetArgument(o_90, 0);
                  j_90 :
                  if(((ATgetType(p_90) == AT_LIST) && !(ATisEmpty(p_90))))
                    {
                      k_90 = ATgetFirst((ATermList) p_90);
                      l_90 = (ATerm) ATgetNext((ATermList) p_90);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_90), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_90)));
                    }
                  else
                    {
                      if(((ATgetType(p_90) == AT_LIST) && ATisEmpty(p_90)))
                        {
                          t = term_e_22;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(o_90, sym_RDefT_4))
                    {
                      p_90 = ATgetArgument(o_90, 0);
                      q_90 = ATgetArgument(o_90, 1);
                      n_90 = ATgetArgument(o_90, 2);
                      m_90 = ATgetArgument(o_90, 3);
                      {
                        ATerm d_91 = NULL,e_91 = NULL;
                        ATerm f_91 = NULL;
                        t = not_null(q_90);
                        {
                          ATerm g_91 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            f_91 = t;
                            {
                              if(((d_91 != NULL) && (d_91 != f_91)))
                                _fail(f_91);
                              else
                                d_91 = f_91;
                              {
                                t = not_null(n_90);
                                {
                                  ATerm i_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, i_4);
                                  {
                                    g_91 = t;
                                    if(((e_91 != NULL) && (e_91 != g_91)))
                                      _fail(g_91);
                                    else
                                      e_91 = g_91;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(p_90), not_null(d_91), not_null(e_91), not_null(m_90));
                      }
                    }
                  else
                    {
                      if(match_cons(o_90, sym_SDefT_4))
                        {
                          p_90 = ATgetArgument(o_90, 0);
                          q_90 = ATgetArgument(o_90, 1);
                          n_90 = ATgetArgument(o_90, 2);
                          m_90 = ATgetArgument(o_90, 3);
                          {
                            ATerm f_22 = t;
                            int g_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_91 = NULL,m_91 = NULL;
                                ATerm n_91 = NULL;
                                t = not_null(n_90);
                                {
                                  ATerm o_91 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    n_91 = t;
                                    {
                                      if(((l_91 != NULL) && (l_91 != n_91)))
                                        _fail(n_91);
                                      else
                                        l_91 = n_91;
                                      {
                                        t = not_null(q_90);
                                        {
                                          ATerm j_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, j_4);
                                          {
                                            o_91 = t;
                                            if(((m_91 != NULL) && (m_91 != o_91)))
                                              _fail(o_91);
                                            else
                                              m_91 = o_91;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(p_90), not_null(m_91), not_null(l_91), not_null(m_90));
                                ;
                                LocalPopChoice(g_22);
                              }
                            else
                              {
                                t = f_22;
                                {
                                  ATerm t_91 = NULL,u_91 = NULL;
                                  ATerm z_91 = NULL;
                                  t = not_null(q_90);
                                  {
                                    ATerm a_92 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      z_91 = t;
                                      {
                                        if(((t_91 != NULL) && (t_91 != z_91)))
                                          _fail(z_91);
                                        else
                                          t_91 = z_91;
                                        {
                                          t = not_null(n_90);
                                          {
                                            ATerm k_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, k_4);
                                            {
                                              a_92 = t;
                                              if(((u_91 != NULL) && (u_91 != a_92)))
                                                _fail(a_92);
                                              else
                                                u_91 = a_92;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(p_90), not_null(t_91), not_null(u_91), not_null(m_90));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(o_90, sym_InfixApp_3))
                            {
                              p_90 = ATgetArgument(o_90, 0);
                              q_90 = ATgetArgument(o_90, 1);
                              n_90 = ATgetArgument(o_90, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_90), (ATerm) ATmakeAppl(sym_Op_2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_90)), not_null(p_90))));
                            }
                          else
                            {
                              if(match_cons(o_90, sym_BAM_3))
                                {
                                  p_90 = ATgetArgument(o_90, 0);
                                  q_90 = ATgetArgument(o_90, 1);
                                  n_90 = ATgetArgument(o_90, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(n_90))), not_null(p_90)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_90))));
                                }
                              else
                                {
                                  if(match_cons(o_90, sym_AM_2))
                                    {
                                      p_90 = ATgetArgument(o_90, 0);
                                      q_90 = ATgetArgument(o_90, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_90), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_90)));
                                    }
                                  else
                                    {
                                      if(match_cons(o_90, sym_MA_2))
                                        {
                                          p_90 = ATgetArgument(o_90, 0);
                                          q_90 = ATgetArgument(o_90, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_90)), not_null(q_90));
                                        }
                                      else
                                        {
                                          if(match_cons(o_90, sym_BA_2))
                                            {
                                              p_90 = ATgetArgument(o_90, 0);
                                              q_90 = ATgetArgument(o_90, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_90)), not_null(p_90));
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
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  q_93 :
  if(match_cons(s_93, sym_Where_1))
    {
      t_93 = ATgetArgument(s_93, 0);
      r_93 :
      if(match_cons(t_93, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  w_93 :
  if(match_cons(y_93, sym_LChoice_2))
    {
      z_93 = ATgetArgument(y_93, 0);
      a_94 = ATgetArgument(y_93, 1);
      x_93 :
      if(match_cons(a_94, sym_Fail_0))
        {
          t = not_null(z_93);
        }
      else
        {
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
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  g_94 = t;
  e_94 :
  if(match_cons(g_94, sym_LChoice_2))
    {
      h_94 = ATgetArgument(g_94, 0);
      i_94 = ATgetArgument(g_94, 1);
      f_94 :
      if(match_cons(h_94, sym_Fail_0))
        {
          t = not_null(i_94);
        }
      else
        {
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
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  q_94 :
  if(match_cons(t_94, sym_Choice_2))
    {
      u_94 = ATgetArgument(t_94, 0);
      v_94 = ATgetArgument(t_94, 1);
      r_94 :
      if(match_cons(v_94, sym_Fail_0))
        {
          t = not_null(u_94);
        }
      else
        {
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
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
  c_95 = t;
  a_95 :
  if(match_cons(c_95, sym_Choice_2))
    {
      d_95 = ATgetArgument(c_95, 0);
      e_95 = ATgetArgument(c_95, 1);
      b_95 :
      if(match_cons(d_95, sym_Fail_0))
        {
          t = not_null(e_95);
        }
      else
        {
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
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym_Cong_2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      {
        t = not_null(m_95);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm p_95 = NULL;
            p_95 = t;
            i_95 :
            if(!(match_cons(p_95, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, l_4);
        }
        t = term_d_22;
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
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  u_95 = t;
  s_95 :
  if(match_cons(u_95, sym_Path_2))
    {
      v_95 = ATgetArgument(u_95, 0);
      w_95 = ATgetArgument(u_95, 1);
      t_95 :
      if(match_cons(w_95, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm g_96 = NULL,h_96 = NULL;
  g_96 = t;
  e_96 :
  if(match_cons(g_96, sym_One_1))
    {
      h_96 = ATgetArgument(g_96, 0);
      f_96 :
      if(match_cons(h_96, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  m_96 :
  if(match_cons(o_96, sym_Some_1))
    {
      p_96 = ATgetArgument(o_96, 0);
      n_96 :
      if(match_cons(p_96, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
  u_96 = t;
  s_96 :
  if(match_cons(u_96, sym_Rec_2))
    {
      v_96 = ATgetArgument(u_96, 0);
      w_96 = ATgetArgument(u_96, 1);
      t_96 :
      if(match_cons(w_96, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
  c_97 = t;
  a_97 :
  if(match_cons(c_97, sym_Scope_2))
    {
      d_97 = ATgetArgument(c_97, 0);
      e_97 = ATgetArgument(c_97, 1);
      b_97 :
      if(match_cons(e_97, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
  k_97 = t;
  i_97 :
  if(match_cons(k_97, sym_Seq_2))
    {
      l_97 = ATgetArgument(k_97, 0);
      m_97 = ATgetArgument(k_97, 1);
      j_97 :
      if(match_cons(l_97, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm s_97 = NULL,t_97 = NULL;
  s_97 = t;
  q_97 :
  if(match_cons(s_97, sym_Not_1))
    {
      t_97 = ATgetArgument(s_97, 0);
      r_97 :
      if(match_cons(t_97, sym_Fail_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm y_97 = NULL,d_98 = NULL;
  y_97 = t;
  w_97 :
  if(match_cons(y_97, sym_Test_1))
    {
      d_98 = ATgetArgument(y_97, 0);
      x_97 :
      if(match_cons(d_98, sym_Fail_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
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
                  t = F3_0(t);
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
                        t = F5_0(t);
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
                              t = F6_0(t);
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
                                    t = F7_0(t);
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
                                          t = F8_0(t);
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
                                                t = F9_0(t);
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
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
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
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(d_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_24;
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
  ATerm j_98 = NULL,k_98 = NULL;
  j_98 = t;
  g_98 :
  if(match_cons(j_98, sym_Match_1))
    {
      k_98 = ATgetArgument(j_98, 0);
      h_98 :
      if(match_cons(k_98, sym_Wld_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm r_98 = NULL,s_98 = NULL;
  r_98 = t;
  n_98 :
  if(match_cons(r_98, sym_Where_1))
    {
      s_98 = ATgetArgument(r_98, 0);
      o_98 :
      if(match_cons(s_98, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm x_98 = NULL,y_98 = NULL;
  x_98 = t;
  v_98 :
  if(match_cons(x_98, sym_All_1))
    {
      y_98 = ATgetArgument(x_98, 0);
      w_98 :
      if(match_cons(y_98, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm n_99 = NULL,o_99 = NULL,t_99 = NULL;
  n_99 = t;
  e_99 :
  if(match_cons(n_99, sym_Rec_2))
    {
      o_99 = ATgetArgument(n_99, 0);
      t_99 = ATgetArgument(n_99, 1);
      k_99 :
      if(match_cons(t_99, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
  e_100 = t;
  c_100 :
  if(match_cons(e_100, sym_Scope_2))
    {
      f_100 = ATgetArgument(e_100, 0);
      g_100 = ATgetArgument(e_100, 1);
      d_100 :
      if(match_cons(g_100, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  p_100 = t;
  n_100 :
  if(match_cons(p_100, sym_LChoice_2))
    {
      q_100 = ATgetArgument(p_100, 0);
      r_100 = ATgetArgument(p_100, 1);
      o_100 :
      if(match_cons(q_100, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  x_100 = t;
  v_100 :
  if(match_cons(x_100, sym_Seq_2))
    {
      y_100 = ATgetArgument(x_100, 0);
      z_100 = ATgetArgument(x_100, 1);
      w_100 :
      if(match_cons(z_100, sym_Id_0))
        {
          t = not_null(y_100);
        }
      else
        {
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
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
  f_101 = t;
  d_101 :
  if(match_cons(f_101, sym_Seq_2))
    {
      g_101 = ATgetArgument(f_101, 0);
      h_101 = ATgetArgument(f_101, 1);
      e_101 :
      if(match_cons(g_101, sym_Id_0))
        {
          t = not_null(h_101);
        }
      else
        {
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
  ATerm n_101 = NULL,o_101 = NULL;
  n_101 = t;
  l_101 :
  if(match_cons(n_101, sym_Not_1))
    {
      o_101 = ATgetArgument(n_101, 0);
      m_101 :
      if(match_cons(o_101, sym_Id_0))
        {
          t = term_d_22;
        }
      else
        {
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
  ATerm a_102 = NULL,b_102 = NULL;
  a_102 = t;
  y_101 :
  if(match_cons(a_102, sym_Test_1))
    {
      b_102 = ATgetArgument(a_102, 0);
      z_101 :
      if(match_cons(b_102, sym_Id_0))
        {
          t = term_e_22;
        }
      else
        {
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
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
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
                  t = I3_0(t);
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
                        t = I4_0(t);
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
                              t = I7_0(t);
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
                                    t = I8_0(t);
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
                                          t = I9_0(t);
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
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(f_25);
                                                    }
                                                  else
                                                    {
                                                      t = e_25;
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
  ATerm g_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
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
            t = ElimFail_0(t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm q_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = AssociateR_0(t);
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
                              t = Idempotency_0(t);
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
                                    t = EmptyScope_0(t);
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
                                          t = MatchingCongruence_0(t);
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
                                                t = TransformingAnnoCongruence_0(t);
                                                ;
                                                LocalPopChoice(l_26);
                                              }
                                            else
                                              {
                                                t = k_26;
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
ATerm repeat_1 (ATerm t, ATerm q_127 (ATerm))
{
  ATerm d_102 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      t = q_127(t);
      t = d_102(t);
      return(t);
    }
    t = try_1(t, m_4);
    return(t);
  }
  t = d_102(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm x_110 (ATerm))
{
  t = x_110(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = downup_1(t, x_110);
      return(t);
    }
    t = _all(t, n_4);
    t = x_110(t);
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
ATerm Strategies_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm j_102 = NULL,k_102 = NULL;
  j_102 = t;
  i_102 :
  if(match_cons(j_102, sym_Strategies_1))
    {
      k_102 = ATgetArgument(j_102, 0);
      {
        ATerm n_102 = NULL,p_102 = NULL;
        ATerm o_102 = NULL;
        t = SSLgetAnnotations(not_null(j_102));
        {
          o_102 = t;
          if(((n_102 != NULL) && (n_102 != o_102)))
            _fail(o_102);
          else
            n_102 = o_102;
        }
        {
          t = not_null(k_102);
          {
            ATerm r_102 = NULL;
            t = s_94(t);
            {
              p_102 = t;
              {
                ATerm s_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_102)), not_null(n_102));
                {
                  s_102 = t;
                  if(((r_102 != NULL) && (r_102 != s_102)))
                    _fail(s_102);
                  else
                    r_102 = s_102;
                }
                t = not_null(r_102);
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
ATerm Specification_1 (ATerm t, ATerm x_94 (ATerm))
{
  ATerm c_103 = NULL,d_103 = NULL;
  c_103 = t;
  b_103 :
  if(match_cons(c_103, sym_Specification_1))
    {
      d_103 = ATgetArgument(c_103, 0);
      {
        ATerm g_103 = NULL,i_103 = NULL;
        ATerm h_103 = NULL;
        t = SSLgetAnnotations(not_null(c_103));
        {
          h_103 = t;
          if(((g_103 != NULL) && (g_103 != h_103)))
            _fail(h_103);
          else
            g_103 = h_103;
        }
        {
          t = not_null(d_103);
          {
            ATerm k_103 = NULL;
            t = x_94(t);
            {
              i_103 = t;
              {
                ATerm l_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_103)), not_null(g_103));
                {
                  l_103 = t;
                  if(((k_103 != NULL) && (k_103 != l_103)))
                    _fail(l_103);
                  else
                    k_103 = l_103;
                }
                t = not_null(k_103);
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
ATerm _2 (ATerm t, ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  w_103 = t;
  v_103 :
  if(match_cons(w_103, sym__2))
    {
      x_103 = ATgetArgument(w_103, 0);
      y_103 = ATgetArgument(w_103, 1);
      {
        ATerm c_104 = NULL,e_104 = NULL;
        ATerm d_104 = NULL;
        t = SSLgetAnnotations(not_null(w_103));
        {
          d_104 = t;
          if(((c_104 != NULL) && (c_104 != d_104)))
            _fail(d_104);
          else
            c_104 = d_104;
        }
        {
          t = not_null(x_103);
          {
            ATerm g_104 = NULL;
            t = d_93(t);
            {
              e_104 = t;
              {
                t = not_null(y_103);
                {
                  ATerm i_104 = NULL;
                  t = e_93(t);
                  {
                    g_104 = t;
                    {
                      ATerm j_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_104), not_null(g_104)), not_null(c_104));
                      {
                        j_104 = t;
                        if(((i_104 != NULL) && (i_104 != j_104)))
                          _fail(j_104);
                        else
                          i_104 = j_104;
                      }
                      t = not_null(i_104);
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
  ATerm n_26;
  n_26 = t;
  {
    ATerm q_104 = NULL;
    ATerm r_104 = NULL;
    t = term_f_15;
    {
      t = whoami_0(t);
      {
        r_104 = t;
        if(((q_104 != NULL) && (q_104 != r_104)))
          _fail(r_104);
        else
          q_104 = r_104;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_26), not_null(q_104)), term_t_26));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  u_104 :
  if(match_cons(v_104, sym__2))
    {
      w_104 = ATgetArgument(v_104, 0);
      x_104 = ATgetArgument(v_104, 1);
      {
        ATerm v_26;
        v_26 = t;
        t = SSL_printnl(not_null(w_104), not_null(x_104));
        t = v_26;
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
  ATerm c_105 = NULL;
  c_105 = t;
  t = SSL_implode_string(not_null(c_105));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
        h_105 = t;
        g_105 :
        if(((ATgetType(h_105) == AT_LIST) && !(ATisEmpty(h_105))))
          {
            i_105 = ATgetFirst((ATermList) h_105);
            j_105 = (ATerm) ATgetNext((ATermList) h_105);
            {
              t = not_null(i_105);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(j_105);
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
  ATerm t_105 = NULL;
  ATerm v_105 = NULL;
  t_105 = t;
  {
    ATerm w_105 = NULL;
    ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
    t = not_null(t_105);
    {
      w_105 = t;
      {
        t = SSL_explode_term(not_null(w_105));
        {
          y_105 = t;
          r_105 :
          if(match_cons(y_105, sym__2))
            {
              z_105 = ATgetArgument(y_105, 0);
              a_106 = ATgetArgument(y_105, 1);
              s_105 :
              if(match_string(z_105, ""))
                {
                  if(((v_105 != NULL) && (v_105 != a_106)))
                    _fail(a_106);
                  else
                    v_105 = a_106;
                }
              else
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
      t = not_null(v_105);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_117 (ATerm))
{
  ATerm e_106 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_106);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          t = Nil_0(t);
          t = m_117(t);
        }
      }
    return(t);
  }
  t = e_106(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
  h_106 = t;
  g_106 :
  if(match_cons(h_106, sym__2))
    {
      i_106 = ATgetArgument(h_106, 0);
      j_106 = ATgetArgument(h_106, 1);
      {
        t = not_null(i_106);
        {
          ATerm v_4 (ATerm t)
          {
            t = not_null(j_106);
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
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_106 = NULL;
  o_106 = t;
  t = SSL_explode_string(not_null(o_106));
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
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_4);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = n_27;
            {
              ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
              x_106 = t;
              w_106 :
              if(match_cons(x_106, sym_Path_1))
                {
                  y_106 = ATgetArgument(x_106, 0);
                  t = not_null(y_106);
                }
              else
                {
                  if(match_cons(x_106, sym_Var_1))
                    {
                      y_106 = ATgetArgument(x_106, 0);
                      {
                        t = not_null(y_106);
                        {
                          ATerm x_27 = t;
                          int y_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_27);
                            }
                          else
                            {
                              t = x_27;
                              {
                                ATerm x_4 (ATerm t)
                                {
                                  t = term_z_27;
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
                      if(match_cons(x_106, sym_Prefix_2))
                        {
                          y_106 = ATgetArgument(x_106, 0);
                          z_106 = ATgetArgument(x_106, 1);
                          {
                            ATerm e_107 = NULL,g_107 = NULL;
                            ATerm a_28;
                            a_28 = t;
                            {
                              ATerm f_107 = NULL;
                              t = not_null(y_106);
                              {
                                t = eval_config_0(t);
                                {
                                  f_107 = t;
                                  if(((e_107 != NULL) && (e_107 != f_107)))
                                    _fail(f_107);
                                  else
                                    e_107 = f_107;
                                }
                              }
                            }
                            t = a_28;
                            {
                              ATerm h_107 = NULL;
                              t = not_null(z_106);
                              {
                                t = eval_config_0(t);
                                {
                                  h_107 = t;
                                  if(((g_107 != NULL) && (g_107 != h_107)))
                                    _fail(h_107);
                                  else
                                    g_107 = h_107;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), not_null(g_107));
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
  ATerm r_107 = NULL;
  r_107 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_28, not_null(r_107));
    {
      t = table_get_0(t);
      {
        ATerm y_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_28;
            c_28 = t;
            {
              ATerm t_107 = NULL;
              ATerm u_107 = NULL;
              u_107 = t;
              if(((t_107 != NULL) && (t_107 != u_107)))
                _fail(u_107);
              else
                t_107 = u_107;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_28, not_null(r_107), not_null(t_107));
                t = table_put_0(t);
              }
            }
            t = c_28;
          }
          return(t);
        }
        t = try_1(t, y_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_131 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm d_28;
    d_28 = t;
    {
      ATerm y_107 = NULL;
      ATerm z_107 = NULL;
      t = term_f_28;
      {
        t = get_config_0(t);
        {
          z_107 = t;
          if(((y_107 != NULL) && (y_107 != z_107)))
            _fail(z_107);
          else
            y_107 = z_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), term_g_28);
        t = geq_0(t);
      }
    }
    t = d_28;
    t = a_131(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL;
  f_108 = t;
  d_108 :
  if(match_cons(f_108, sym__2))
    {
      g_108 = ATgetArgument(f_108, 0);
      h_108 = ATgetArgument(f_108, 1);
      e_108 :
      if(match_cons(h_108, sym_Stream_1))
        {
          i_108 = ATgetArgument(h_108, 0);
          {
            ATerm l_108 = NULL;
            t = SSL_fputc(not_null(g_108), not_null(i_108));
            {
              ATerm m_108 = NULL;
              m_108 = t;
              if(((l_108 != NULL) && (l_108 != m_108)))
                _fail(m_108);
              else
                l_108 = m_108;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_108));
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
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL;
  t_108 = t;
  r_108 :
  if(match_cons(t_108, sym__2))
    {
      u_108 = ATgetArgument(t_108, 0);
      w_108 = ATgetArgument(t_108, 1);
      s_108 :
      if(match_cons(u_108, sym_Stream_1))
        {
          v_108 = ATgetArgument(u_108, 0);
          {
            ATerm z_108 = NULL;
            t = SSL_write_term_to_stream_text(not_null(v_108), not_null(w_108));
            {
              ATerm d_109 = NULL;
              d_109 = t;
              if(((z_108 != NULL) && (z_108 != d_109)))
                _fail(d_109);
              else
                z_108 = d_109;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_108));
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
  ATerm a_5 (ATerm t)
  {
    ATerm h_109 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_109 = NULL;
      i_109 = t;
      if(((h_109 != NULL) && (h_109 != i_109)))
        _fail(i_109);
      else
        h_109 = i_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(h_109));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, a_5);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  o_109 = t;
  m_109 :
  if(match_cons(o_109, sym__2))
    {
      p_109 = ATgetArgument(o_109, 0);
      r_109 = ATgetArgument(o_109, 1);
      n_109 :
      if(match_cons(p_109, sym_Stream_1))
        {
          q_109 = ATgetArgument(p_109, 0);
          {
            ATerm u_109 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_109), not_null(r_109));
            {
              ATerm d_110 = NULL;
              d_110 = t;
              if(((u_109 != NULL) && (u_109 != d_110)))
                _fail(d_110);
              else
                u_109 = d_110;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_109));
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
ATerm WriteToFile_1 (ATerm t, ATerm e_138 (ATerm))
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  k_110 = t;
  j_110 :
  if(match_cons(k_110, sym__2))
    {
      l_110 = ATgetArgument(k_110, 0);
      m_110 = ATgetArgument(k_110, 1);
      {
        ATerm p_110 = NULL,r_110 = NULL;
        t = not_null(l_110);
        {
          ATerm q_110 = NULL;
          q_110 = t;
          if(((p_110 != NULL) && (p_110 != q_110)))
            _fail(q_110);
          else
            p_110 = q_110;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_110), term_q_28);
            {
              t = open_stream_0(t);
              {
                ATerm s_110 = NULL;
                s_110 = t;
                if(((r_110 != NULL) && (r_110 != s_110)))
                  _fail(s_110);
                else
                  r_110 = s_110;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_110), not_null(m_110));
                  {
                    t = e_138(t);
                    {
                      t = fclose_0(t);
                      t = not_null(m_110);
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
  ATerm c_111 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm s_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            ATerm d_111 = NULL,e_111 = NULL;
            d_111 = t;
            z_110 :
            if(match_cons(d_111, sym_Output_1))
              {
                e_111 = ATgetArgument(d_111, 0);
                if(((c_111 != NULL) && (c_111 != e_111)))
                  _fail(e_111);
                else
                  c_111 = e_111;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_5);
          ;
          LocalPopChoice(w_28);
        }
      else
        {
          t = s_28;
          {
            ATerm f_111 = NULL;
            t = term_c_29;
            {
              f_111 = t;
              if(((c_111 != NULL) && (c_111 != f_111)))
                _fail(f_111);
              else
                c_111 = f_111;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_5, _id);
  }
  t = r_28;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm e_5 (ATerm t)
      {
        t = not_null(c_111);
        return(t);
      }
      t = split_2(t, e_5, _id);
      return(t);
    }
    t = _2(t, _id, d_5);
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_5 (ATerm t)
          {
            ATerm g_5 (ATerm t)
            {
              ATerm g_111 = NULL;
              g_111 = t;
              b_111 :
              if(!(match_cons(g_111, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, g_5);
            return(t);
          }
          t = _2(t, f_5, WriteToBinaryFile_0);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_132 (ATerm))
{
  ATerm m_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  ATerm k_29;
  k_29 = t;
  t = dtime_0(t);
  t = k_29;
  {
    t = t_132(t);
    {
      ATerm l_29;
      l_29 = t;
      {
        ATerm n_111 = NULL;
        t = dtime_0(t);
        {
          n_111 = t;
          if(((m_111 != NULL) && (m_111 != n_111)))
            _fail(n_111);
          else
            m_111 = n_111;
        }
      }
      t = l_29;
      {
        o_111 = t;
        l_111 :
        if(match_cons(o_111, sym__2))
          {
            p_111 = ATgetArgument(o_111, 0);
            q_111 = ATgetArgument(o_111, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_111)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_111))), not_null(q_111));
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
  ATerm y_111 = NULL,b_112 = NULL;
  ATerm h_112 (ATerm t)
  {
    t = SSL_fclose(not_null(b_112));
    return(t);
  }
  b_112 = t;
  x_111 :
  if(match_cons(b_112, sym_Stream_1))
    {
      y_111 = ATgetArgument(b_112, 0);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_111));
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL;
  k_112 = t;
  j_112 :
  if(match_cons(k_112, sym_Stream_1))
    {
      l_112 = ATgetArgument(k_112, 0);
      t = SSL_read_term_from_stream(not_null(l_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_137 (ATerm))
{
  ATerm o_29;
  o_29 = t;
  {
    ATerm q_112 = NULL,s_112 = NULL;
    ATerm w_29;
    w_29 = t;
    {
      ATerm r_112 = NULL;
      t = q_137(t);
      {
        r_112 = t;
        if(((q_112 != NULL) && (q_112 != r_112)))
          _fail(r_112);
        else
          q_112 = r_112;
      }
    }
    t = w_29;
    {
      ATerm t_112 = NULL;
      t_112 = t;
      if(((s_112 != NULL) && (s_112 != t_112)))
        _fail(t_112);
      else
        s_112 = t_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_112)), not_null(q_112)));
        t = printnl_0(t);
      }
    }
  }
  t = o_29;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
  z_112 = t;
  y_112 :
  if(match_cons(z_112, sym__2))
    {
      a_113 = ATgetArgument(z_112, 0);
      b_113 = ATgetArgument(z_112, 1);
      {
        ATerm e_113 = NULL;
        t = SSL_fopen(not_null(a_113), not_null(b_113));
        {
          ATerm f_113 = NULL;
          f_113 = t;
          if(((e_113 != NULL) && (e_113 != f_113)))
            _fail(f_113);
          else
            e_113 = f_113;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_113));
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
  ATerm j_113 = NULL;
  j_113 = t;
  t = SSL_is_string(not_null(j_113));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_113 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_113 = NULL;
    p_113 = t;
    if(((o_113 != NULL) && (o_113 != p_113)))
      _fail(p_113);
    else
      o_113 = p_113;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_113));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_113 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_113 = NULL;
    t_113 = t;
    if(((s_113 != NULL) && (s_113 != t_113)))
      _fail(t_113);
    else
      s_113 = t_113;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_113));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm w_113 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_113 = NULL;
    x_113 = t;
    if(((w_113 != NULL) && (w_113 != x_113)))
      _fail(x_113);
    else
      w_113 = x_113;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_113));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm f_114 = NULL;
  f_114 = t;
  e_114 :
  if(match_cons(f_114, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(f_114, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(f_114, sym_stdin_0))
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
  ATerm r_114 = NULL;
  ATerm t_114 = NULL,u_114 = NULL;
  r_114 = t;
  {
    ATerm v_114 = NULL;
    ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
    t = not_null(r_114);
    {
      v_114 = t;
      {
        t = SSL_explode_term(not_null(v_114));
        {
          x_114 = t;
          o_114 :
          if(match_cons(x_114, sym__2))
            {
              y_114 = ATgetArgument(x_114, 0);
              z_114 = ATgetArgument(x_114, 1);
              p_114 :
              if(match_string(y_114, ""))
                {
                  q_114 :
                  if(((ATgetType(z_114) == AT_LIST) && !(ATisEmpty(z_114))))
                    {
                      a_115 = ATgetFirst((ATermList) z_114);
                      b_115 = (ATerm) ATgetNext((ATermList) z_114);
                      {
                        if(((u_114 != NULL) && (u_114 != a_115)))
                          _fail(a_115);
                        else
                          u_114 = a_115;
                        if(((t_114 != NULL) && (t_114 != b_115)))
                          _fail(b_115);
                        else
                          t_114 = b_115;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(u_114);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
  p_115 = t;
  o_115 :
  if(match_cons(p_115, sym__2))
    {
      q_115 = ATgetArgument(p_115, 0);
      r_115 = ATgetArgument(p_115, 1);
      {
        ATerm y_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = y_29;
            {
              ATerm c_30 = t;
              int d_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm s_115 = NULL,t_115 = NULL;
                    s_115 = t;
                    n_115 :
                    if(match_cons(s_115, sym_Path_1))
                      {
                        t_115 = ATgetArgument(s_115, 0);
                        t = not_null(t_115);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, h_5, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(d_30);
                }
              else
                {
                  t = c_30;
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
  ATerm b_116 = NULL;
  ATerm e_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_115 = NULL;
      ATerm a_116 = NULL;
      a_116 = t;
      if(((z_115 != NULL) && (z_115 != a_116)))
        _fail(a_116);
      else
        z_115 = a_116;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_115), term_j_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = e_30;
      {
        ATerm j_5 (ATerm t)
        {
          t = term_k_30;
          return(t);
        }
        t = debug_1(t, j_5);
        _fail(t);
      }
    }
  {
    ATerm t_30;
    t_30 = t;
    {
      ATerm c_116 = NULL;
      t = read_from_stream_0(t);
      {
        c_116 = t;
        if(((b_116 != NULL) && (b_116 != c_116)))
          _fail(c_116);
        else
          b_116 = c_116;
      }
    }
    t = t_30;
    {
      t = fclose_0(t);
      t = not_null(b_116);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_114 (ATerm), ATerm i_114 (ATerm))
{
  ATerm h_116 = NULL,j_116 = NULL;
  ATerm u_30;
  u_30 = t;
  {
    ATerm i_116 = NULL;
    t = h_114(t);
    {
      i_116 = t;
      if(((h_116 != NULL) && (h_116 != i_116)))
        _fail(i_116);
      else
        h_116 = i_116;
    }
  }
  t = u_30;
  {
    ATerm k_116 = NULL;
    t = i_114(t);
    {
      k_116 = t;
      if(((j_116 != NULL) && (j_116 != k_116)))
        _fail(k_116);
      else
        j_116 = k_116;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_116), not_null(j_116));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_116 = NULL;
  ATerm v_30;
  v_30 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 (ATerm t)
        {
          ATerm r_116 = NULL,s_116 = NULL;
          r_116 = t;
          o_116 :
          if(match_cons(r_116, sym_Input_1))
            {
              s_116 = ATgetArgument(r_116, 0);
              if(((q_116 != NULL) && (q_116 != s_116)))
                _fail(s_116);
              else
                q_116 = s_116;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_5);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm t_116 = NULL;
          t = term_y_30;
          {
            t_116 = t;
            if(((q_116 != NULL) && (q_116 != t_116)))
              _fail(t_116);
            else
              q_116 = t_116;
          }
        }
      }
  }
  t = v_30;
  {
    ATerm l_5 (ATerm t)
    {
      t = not_null(q_116);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_5);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm b_117 = NULL;
    b_117 = t;
    z_116 :
    if(!(match_string(b_117, "-k")))
      {
        if(!(match_string(b_117, "--keep")))
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
      ATerm c_117 = NULL;
      ATerm d_117 = NULL;
      t = string_to_int_0(t);
      {
        d_117 = t;
        if(((c_117 != NULL) && (c_117 != d_117)))
          _fail(d_117);
        else
          c_117 = d_117;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_31, not_null(c_117));
        t = set_config_0(t);
      }
    }
    t = z_30;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_b_31;
    return(t);
  }
  t = ArgOption_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_117 = NULL;
  i_117 = t;
  t = SSL_string_to_int(not_null(i_117));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm s_117 = NULL;
        s_117 = t;
        l_117 :
        if(!(match_string(s_117, "-S")))
          {
            if(!(match_string(s_117, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_e_31;
        t = set_config_0(t);
        t = term_f_31;
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_g_31;
        return(t);
      }
      t = Option_3(t, s_5, t_5, u_5);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              ATerm t_117 = NULL;
              t_117 = t;
              o_117 :
              if(!(match_string(t_117, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              ATerm w_117 = NULL;
              ATerm j_31;
              j_31 = t;
              {
                ATerm u_117 = NULL;
                ATerm v_117 = NULL;
                t = string_to_int_0(t);
                {
                  v_117 = t;
                  if(((u_117 != NULL) && (u_117 != v_117)))
                    _fail(v_117);
                  else
                    u_117 = v_117;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_28, not_null(u_117));
                  t = set_config_0(t);
                }
              }
              t = j_31;
              {
                ATerm x_117 = NULL;
                x_117 = t;
                if(((w_117 != NULL) && (w_117 != x_117)))
                  _fail(x_117);
                else
                  w_117 = x_117;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_117));
              }
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              t = term_k_31;
              return(t);
            }
            t = ArgOption_3(t, v_5, w_5, x_5);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm y_5 (ATerm t)
              {
                ATerm y_117 = NULL;
                y_117 = t;
                r_117 :
                if(!(match_string(y_117, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_5 (ATerm t)
              {
                t = term_p_31;
                t = set_config_0(t);
                t = term_q_31;
                return(t);
              }
              ATerm a_6 (ATerm t)
              {
                t = term_u_31;
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
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm e_118 = NULL;
    e_118 = t;
    b_118 :
    if(!(match_string(e_118, "-o")))
      {
        if(!(match_string(e_118, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm h_118 = NULL;
    ATerm c_32;
    c_32 = t;
    {
      ATerm f_118 = NULL;
      ATerm g_118 = NULL;
      g_118 = t;
      if(((f_118 != NULL) && (f_118 != g_118)))
        _fail(g_118);
      else
        f_118 = g_118;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(f_118));
        t = set_config_0(t);
      }
    }
    t = c_32;
    {
      ATerm i_118 = NULL;
      i_118 = t;
      if(((h_118 != NULL) && (h_118 != i_118)))
        _fail(i_118);
      else
        h_118 = i_118;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_118));
    }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_g_32;
    return(t);
  }
  t = ArgOption_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = k_32;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm m_118 = NULL;
          m_118 = t;
          l_118 :
          if(!(match_string(m_118, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_p_32;
          t = set_config_0(t);
          t = term_q_32;
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = term_r_32;
          return(t);
        }
        t = Option_3(t, e_6, f_6, g_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL;
  s_118 = t;
  q_118 :
  if(match_string(s_118, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(s_118) == AT_LIST) && !(ATisEmpty(s_118))))
        {
          t_118 = ATgetFirst((ATermList) s_118);
          u_118 = (ATerm) ATgetNext((ATermList) s_118);
          r_118 :
          if(((ATgetType(u_118) == AT_LIST) && !(ATisEmpty(u_118))))
            {
              v_118 = ATgetFirst((ATermList) u_118);
              w_118 = (ATerm) ATgetNext((ATermList) u_118);
              {
                ATerm a_119 = NULL;
                ATerm s_32;
                s_32 = t;
                {
                  t = not_null(t_118);
                  t = j_0(t);
                }
                t = s_32;
                {
                  ATerm b_119 = NULL;
                  t = not_null(v_118);
                  {
                    t = l_0(t);
                    {
                      b_119 = t;
                      if(((a_119 != NULL) && (a_119 != b_119)))
                        _fail(b_119);
                      else
                        a_119 = b_119;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_118)), not_null(a_119));
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
    ATerm o_119 = NULL;
    o_119 = t;
    h_119 :
    if(!(match_string(o_119, "-i")))
      {
        if(!(match_string(o_119, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm r_119 = NULL;
    ATerm t_32;
    t_32 = t;
    {
      ATerm p_119 = NULL;
      ATerm q_119 = NULL;
      q_119 = t;
      if(((p_119 != NULL) && (p_119 != q_119)))
        _fail(q_119);
      else
        p_119 = q_119;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_32, not_null(p_119));
        t = set_config_0(t);
      }
    }
    t = t_32;
    {
      ATerm s_119 = NULL;
      s_119 = t;
      if(((r_119 != NULL) && (r_119 != s_119)))
        _fail(s_119);
      else
        r_119 = s_119;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_119));
    }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_v_32;
    return(t);
  }
  t = ArgOption_3(t, h_6, i_6, j_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm b_120 = NULL;
  t = report_run_time_0(t);
  {
    ATerm c_120 = NULL;
    t = term_f_15;
    {
      t = whoami_0(t);
      {
        c_120 = t;
        if(((b_120 != NULL) && (b_120 != c_120)))
          _fail(c_120);
        else
          b_120 = c_120;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATempty, term_a_33), not_null(b_120)));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_b_33;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_120 = NULL;
  f_120 = t;
  t = SSL_TicksToSeconds(not_null(f_120));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL;
  k_120 = t;
  j_120 :
  if(match_cons(k_120, sym__2))
    {
      l_120 = ATgetArgument(k_120, 0);
      m_120 = ATgetArgument(k_120, 1);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_120), not_null(m_120));
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = SSL_addr(not_null(l_120), not_null(m_120));
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
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_121(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      {
        ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
        t_120 = t;
        s_120 :
        if(((ATgetType(t_120) == AT_LIST) && !(ATisEmpty(t_120))))
          {
            u_120 = ATgetFirst((ATermList) t_120);
            v_120 = (ATerm) ATgetNext((ATermList) t_120);
            {
              ATerm y_120 = NULL;
              ATerm z_120 = NULL;
              t = not_null(v_120);
              {
                t = foldr_2(t, v_121, w_121);
                {
                  z_120 = t;
                  if(((y_120 != NULL) && (y_120 != z_120)))
                    _fail(z_120);
                  else
                    y_120 = z_120;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_120), not_null(y_120));
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
  ATerm g_121 = NULL;
  ATerm i_121 = NULL;
  g_121 = t;
  {
    ATerm j_121 = NULL;
    ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL;
    t = not_null(g_121);
    {
      j_121 = t;
      {
        t = SSL_explode_term(not_null(j_121));
        {
          m_121 = t;
          f_121 :
          if(match_cons(m_121, sym__2))
            {
              n_121 = ATgetArgument(m_121, 0);
              o_121 = ATgetArgument(m_121, 1);
              if(((i_121 != NULL) && (i_121 != o_121)))
                _fail(o_121);
              else
                i_121 = o_121;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_121);
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
    ATerm k_6 (ATerm t)
    {
      t = term_m_8;
      return(t);
    }
    t = crush_2(t, k_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_121 = NULL,a_122 = NULL,b_122 = NULL;
  u_121 = t;
  t_121 :
  if(match_cons(u_121, sym__2))
    {
      a_122 = ATgetArgument(u_121, 0);
      b_122 = ATgetArgument(u_121, 1);
      {
        ATerm n_33;
        n_33 = t;
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_122), not_null(b_122));
              ;
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              t = SSL_gtr(not_null(a_122), not_null(b_122));
            }
        }
        t = n_33;
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
  ATerm h_122 = NULL;
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL;
      i_122 = t;
      g_122 :
      if(match_cons(i_122, sym__2))
        {
          j_122 = ATgetArgument(i_122, 0);
          k_122 = ATgetArgument(i_122, 1);
          {
            if(((h_122 != NULL) && (h_122 != j_122)))
              _fail(j_122);
            else
              h_122 = j_122;
            if(((h_122 != NULL) && (h_122 != k_122)))
              _fail(k_122);
            else
              h_122 = k_122;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_130 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm s_33;
    s_33 = t;
    {
      ATerm n_122 = NULL;
      ATerm o_122 = NULL;
      t = term_f_28;
      {
        t = get_config_0(t);
        {
          o_122 = t;
          if(((n_122 != NULL) && (n_122 != o_122)))
            _fail(o_122);
          else
            n_122 = o_122;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_122), term_n_8);
        t = geq_0(t);
      }
    }
    t = s_33;
    t = z_130(t);
    return(t);
  }
  t = try_1(t, l_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm s_122 = NULL,u_122 = NULL;
    ATerm t_33;
    t_33 = t;
    {
      ATerm t_122 = NULL;
      t = run_time_0(t);
      {
        t_122 = t;
        if(((s_122 != NULL) && (s_122 != t_122)))
          _fail(t_122);
        else
          s_122 = t_122;
      }
    }
    t = t_33;
    {
      ATerm v_122 = NULL;
      t = term_f_15;
      {
        t = whoami_0(t);
        {
          v_122 = t;
          if(((u_122 != NULL) && (u_122 != v_122)))
            _fail(v_122);
          else
            u_122 = v_122;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_33), not_null(s_122)), term_u_33), not_null(u_122)));
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
    t = term_m_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_123 = NULL;
  h_123 = t;
  b_123 :
  if(match_cons(h_123, sym_Version_0))
    {
      ATerm k_123 = NULL,m_123 = NULL;
      ATerm w_33;
      w_33 = t;
      {
        ATerm l_123 = NULL;
        t = SSLgetAnnotations(not_null(h_123));
        {
          l_123 = t;
          if(((k_123 != NULL) && (k_123 != l_123)))
            _fail(l_123);
          else
            k_123 = l_123;
        }
      }
      t = w_33;
      {
        ATerm n_123 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_123));
        {
          n_123 = t;
          if(((m_123 != NULL) && (m_123 != n_123)))
            _fail(n_123);
          else
            m_123 = n_123;
        }
        t = not_null(m_123);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_133 (ATerm))
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_34;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_34);
                  }
                else
                  {
                    t = q_34;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_6);
      }
    }
  t = r_133(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_123 = NULL;
  s_123 = t;
  t = SSL_table_create(not_null(s_123));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_124 = NULL;
  d_124 = t;
  {
    ATerm s_34;
    s_34 = t;
    {
      t = term_t_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_34, term_b_35, not_null(d_124));
          t = table_put_0(t);
        }
      }
    }
    t = s_34;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_124 = NULL;
  j_124 = t;
  t = SSL_table_destroy(not_null(j_124));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_124 = NULL;
  o_124 = t;
  t = SSL_exit(not_null(o_124));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_116 (ATerm))
{
  ATerm t_124 (ATerm t)
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = Cons_2(t, w_116, t_124);
      }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL;
  c_125 = t;
  z_124 :
  if(((ATgetType(c_125) == AT_LIST) && !(ATisEmpty(c_125))))
    {
      a_125 = ATgetFirst((ATermList) c_125);
      b_125 = (ATerm) ATgetNext((ATermList) c_125);
      {
        ATerm g_125 = NULL;
        t = not_null(b_125);
        {
          ATerm e_35;
          e_35 = t;
          {
            ATerm h_125 = NULL,j_125 = NULL,l_125 = NULL;
            ATerm p_35;
            p_35 = t;
            {
              ATerm i_125 = NULL;
              t = i_0(t);
              {
                i_125 = t;
                if(((h_125 != NULL) && (h_125 != i_125)))
                  _fail(i_125);
                else
                  h_125 = i_125;
              }
            }
            t = p_35;
            {
              ATerm k_125 = NULL;
              t = not_null(a_125);
              {
                t = e_0(t);
                {
                  k_125 = t;
                  if(((j_125 != NULL) && (j_125 != k_125)))
                    _fail(k_125);
                  else
                    j_125 = k_125;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_125)), not_null(j_125));
                {
                  l_125 = t;
                  if(((g_125 != NULL) && (g_125 != l_125)))
                    _fail(l_125);
                  else
                    g_125 = l_125;
                }
              }
            }
          }
          t = e_35;
          {
            ATerm o_6 (ATerm t)
            {
              t = not_null(g_125);
              return(t);
            }
            t = reverse_acc_2(t, e_0, o_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_125) == AT_LIST) && ATisEmpty(c_125)))
        {
          {
            t = term_f_15;
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
ATerm short_description_1 (ATerm t, ATerm r_135 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm w_125 = NULL,x_125 = NULL;
  w_125 = t;
  v_125 :
  if(match_cons(w_125, sym_Program_1))
    {
      x_125 = ATgetArgument(w_125, 0);
      {
        ATerm e_126 = NULL,g_126 = NULL;
        ATerm f_126 = NULL;
        t = SSLgetAnnotations(not_null(w_125));
        {
          f_126 = t;
          if(((e_126 != NULL) && (e_126 != f_126)))
            _fail(f_126);
          else
            e_126 = f_126;
        }
        {
          t = not_null(x_125);
          {
            ATerm i_126 = NULL;
            t = i_107(t);
            {
              g_126 = t;
              {
                ATerm j_126 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_126)), not_null(e_126));
                {
                  j_126 = t;
                  if(((i_126 != NULL) && (i_126 != j_126)))
                    _fail(j_126);
                  else
                    i_126 = j_126;
                }
                t = not_null(i_126);
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
  ATerm s_126 = NULL;
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_126 = NULL;
      t = term_b_33;
      {
        t = get_config_0(t);
        {
          t_126 = t;
          if(((s_126 != NULL) && (s_126 != t_126)))
            _fail(t_126);
          else
            s_126 = t_126;
        }
      }
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm u_126 = NULL;
            u_126 = t;
            if(((s_126 != NULL) && (s_126 != u_126)))
              _fail(u_126);
            else
              s_126 = u_126;
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
        t = not_null(s_126);
        return(t);
      }
      t = short_description_1(t, t_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_6);
    {
      t = term_t_35;
      {
        t = echo_0(t);
        {
          t = term_a_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm v_126 = NULL;
                  ATerm w_126 = NULL;
                  w_126 = t;
                  if(((v_126 != NULL) && (v_126 != w_126)))
                    _fail(w_126);
                  else
                    v_126 = w_126;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_126)), term_b_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_6);
                {
                  ATerm v_6 (ATerm t)
                  {
                    ATerm x_126 = NULL;
                    ATerm y_126 = NULL;
                    ATerm w_6 (ATerm t)
                    {
                      t = not_null(s_126);
                      return(t);
                    }
                    t = long_description_1(t, w_6);
                    {
                      y_126 = t;
                      if(((x_126 != NULL) && (x_126 != y_126)))
                        _fail(y_126);
                      else
                        x_126 = y_126;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_126)), term_c_36);
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
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm i_127 = NULL,j_127 = NULL;
  i_127 = t;
  h_127 :
  if(match_cons(i_127, sym_Undefined_1))
    {
      j_127 = ATgetArgument(i_127, 0);
      {
        ATerm m_127 = NULL,o_127 = NULL;
        ATerm n_127 = NULL;
        t = SSLgetAnnotations(not_null(i_127));
        {
          n_127 = t;
          if(((m_127 != NULL) && (m_127 != n_127)))
            _fail(n_127);
          else
            m_127 = n_127;
        }
        {
          t = not_null(j_127);
          {
            ATerm s_127 = NULL;
            t = j_107(t);
            {
              o_127 = t;
              {
                ATerm t_127 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_127)), not_null(m_127));
                {
                  t_127 = t;
                  if(((s_127 != NULL) && (s_127 != t_127)))
                    _fail(t_127);
                  else
                    s_127 = t_127;
                }
                t = not_null(s_127);
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
ATerm fetch_1 (ATerm t, ATerm g_117 (ATerm))
{
  ATerm y_127 (ATerm t)
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_117, _id);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = Cons_2(t, _id, y_127);
      }
    return(t);
  }
  t = y_127(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_134 (ATerm))
{
  t = fetch_1(t, r_134);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
  a_128 = t;
  z_127 :
  if(((ATgetType(a_128) == AT_LIST) && ATisEmpty(a_128)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_128) == AT_LIST) && !(ATisEmpty(a_128))))
        {
          b_128 = ATgetFirst((ATermList) a_128);
          c_128 = (ATerm) ATgetNext((ATermList) a_128);
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
  ATerm m_36;
  m_36 = t;
  {
    ATerm l_128 = NULL;
    ATerm o_128 = NULL;
    ATerm o_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_36);
      }
    else
      {
        t = o_36;
        {
          ATerm m_128 = NULL;
          ATerm n_128 = NULL;
          n_128 = t;
          if(((m_128 != NULL) && (m_128 != n_128)))
            _fail(n_128);
          else
            m_128 = n_128;
          t = (ATerm) ATinsert(ATempty, not_null(m_128));
        }
      }
    {
      o_128 = t;
      if(((l_128 != NULL) && (l_128 != o_128)))
        _fail(o_128);
      else
        l_128 = o_128;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_29, not_null(l_128));
      t = printnl_0(t);
    }
  }
  t = m_36;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_b_33;
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
  ATerm r_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = r_36;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_128 = NULL;
  v_128 = t;
  u_128 :
  if(match_cons(v_128, sym_Help_0))
    {
      ATerm x_128 = NULL,z_128 = NULL;
      ATerm y_36;
      y_36 = t;
      {
        ATerm y_128 = NULL;
        t = SSLgetAnnotations(not_null(v_128));
        {
          y_128 = t;
          if(((x_128 != NULL) && (x_128 != y_128)))
            _fail(y_128);
          else
            x_128 = y_128;
        }
      }
      t = y_36;
      {
        ATerm a_129 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_128));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_113 (ATerm))
{
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_113(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 (ATerm t)
      {
        ATerm g_129 = NULL;
        g_129 = t;
        e_129 :
        if(!(match_string(g_129, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        t = term_i_37;
        t = set_config_0(t);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        t = term_j_37;
        return(t);
      }
      t = Option_3(t, x_6, y_6, z_6);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm a_7 (ATerm t)
        {
          ATerm h_129 = NULL;
          h_129 = t;
          f_129 :
          if(!(match_string(h_129, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = term_i_37;
          {
            t = set_config_0(t);
            {
              t = term_o_37;
              t = set_config_0(t);
            }
          }
          t = term_p_37;
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_q_37;
          return(t);
        }
        t = Option_3(t, a_7, b_7, c_7);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  k_129 = t;
  j_129 :
  if(match_cons(k_129, sym__2))
    {
      l_129 = ATgetArgument(k_129, 0);
      m_129 = ATgetArgument(k_129, 1);
      t = SSL_table_get(not_null(l_129), not_null(m_129));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL;
  t_129 = t;
  s_129 :
  if(match_cons(t_129, sym__3))
    {
      u_129 = ATgetArgument(t_129, 0);
      v_129 = ATgetArgument(t_129, 1);
      w_129 = ATgetArgument(t_129, 2);
      {
        ATerm r_37;
        r_37 = t;
        {
          ATerm a_130 = NULL;
          ATerm b_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_129), not_null(v_129));
          {
            ATerm s_37 = t;
            int t_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_37);
              }
            else
              {
                t = s_37;
                t = (ATerm) ATempty;
              }
            {
              b_130 = t;
              if(((a_130 != NULL) && (a_130 != b_130)))
                _fail(b_130);
              else
                a_130 = b_130;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_129), not_null(v_129), (ATerm) ATinsert(CheckATermList(not_null(a_130)), not_null(w_129)));
            t = table_put_0(t);
          }
        }
        t = r_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_135 (ATerm))
{
  ATerm f_130 = NULL;
  ATerm g_130 = NULL;
  t = term_f_15;
  {
    t = w_135(t);
    {
      g_130 = t;
      if(((f_130 != NULL) && (f_130 != g_130)))
        _fail(g_130);
      else
        f_130 = g_130;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, not_null(f_130));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL;
  m_130 = t;
  l_130 :
  if(match_string(m_130, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(m_130) == AT_LIST) && !(ATisEmpty(m_130))))
        {
          n_130 = ATgetFirst((ATermList) m_130);
          o_130 = (ATerm) ATgetNext((ATermList) m_130);
          {
            ATerm r_130 = NULL;
            ATerm u_37;
            u_37 = t;
            {
              t = not_null(n_130);
              t = a_0(t);
            }
            t = u_37;
            {
              ATerm s_130 = NULL;
              t = term_f_15;
              {
                t = b_0(t);
                {
                  s_130 = t;
                  if(((r_130 != NULL) && (r_130 != s_130)))
                    _fail(s_130);
                  else
                    r_130 = s_130;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_130)), not_null(r_130));
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
    ATerm x_130 = NULL;
    x_130 = t;
    w_130 :
    if(!(match_string(x_130, "--help")))
      {
        if(!(match_string(x_130, "-h")))
          {
            if(!(match_string(x_130, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_v_37;
    {
      t = set_config_0(t);
      t = term_w_37;
    }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_x_37;
    return(t);
  }
  t = Option_3(t, d_7, e_7, f_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_131 = NULL,d_131 = NULL,e_131 = NULL;
  c_131 = t;
  b_131 :
  if(((ATgetType(c_131) == AT_LIST) && !(ATisEmpty(c_131))))
    {
      d_131 = ATgetFirst((ATermList) c_131);
      e_131 = (ATerm) ATgetNext((ATermList) c_131);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_131)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_131)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm))
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
  o_131 = t;
  n_131 :
  if(((ATgetType(o_131) == AT_LIST) && !(ATisEmpty(o_131))))
    {
      p_131 = ATgetFirst((ATermList) o_131);
      q_131 = (ATerm) ATgetNext((ATermList) o_131);
      {
        ATerm u_131 = NULL,w_131 = NULL;
        ATerm v_131 = NULL;
        t = SSLgetAnnotations(not_null(o_131));
        {
          v_131 = t;
          if(((u_131 != NULL) && (u_131 != v_131)))
            _fail(v_131);
          else
            u_131 = v_131;
        }
        {
          t = not_null(p_131);
          {
            ATerm y_131 = NULL;
            t = m_94(t);
            {
              w_131 = t;
              {
                t = not_null(q_131);
                {
                  ATerm a_132 = NULL;
                  t = n_94(t);
                  {
                    y_131 = t;
                    {
                      ATerm b_132 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_131)), not_null(w_131)), not_null(u_131));
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
  ATerm l_132 = NULL;
  l_132 = t;
  k_132 :
  if(((ATgetType(l_132) == AT_LIST) && ATisEmpty(l_132)))
    {
      {
        ATerm n_132 = NULL,p_132 = NULL;
        ATerm y_37;
        y_37 = t;
        {
          ATerm o_132 = NULL;
          t = SSLgetAnnotations(not_null(l_132));
          {
            o_132 = t;
            if(((n_132 != NULL) && (n_132 != o_132)))
              _fail(o_132);
            else
              n_132 = o_132;
          }
        }
        t = y_37;
        {
          ATerm q_132 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_132));
          {
            q_132 = t;
            if(((p_132 != NULL) && (p_132 != q_132)))
              _fail(q_132);
            else
              p_132 = q_132;
          }
          t = not_null(p_132);
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
  ATerm y_132 = NULL,z_132 = NULL,f_133 = NULL;
  y_132 = t;
  w_132 :
  if(match_cons(y_132, sym__2))
    {
      z_132 = ATgetArgument(y_132, 0);
      f_133 = ATgetArgument(y_132, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_28, not_null(z_132), not_null(f_133));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_135 (ATerm))
{
  ATerm z_37;
  z_37 = t;
  {
    ATerm g_7 (ATerm t)
    {
      t = term_a_38;
      t = u_135(t);
      return(t);
    }
    t = try_1(t, g_7);
  }
  t = z_37;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm s_133 = NULL;
      ATerm b_38;
      b_38 = t;
      {
        ATerm p_133 = NULL;
        ATerm q_133 = NULL;
        q_133 = t;
        if(((p_133 != NULL) && (p_133 != q_133)))
          _fail(q_133);
        else
          p_133 = q_133;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_33, not_null(p_133));
          t = set_config_0(t);
        }
      }
      t = b_38;
      {
        ATerm x_133 = NULL;
        x_133 = t;
        if(((s_133 != NULL) && (s_133 != x_133)))
          _fail(x_133);
        else
          s_133 = x_133;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_133));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              {
                t = u_135(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
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
  ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
  ATerm g_38;
  g_38 = t;
  {
    ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL;
    g_134 = t;
    c_134 :
    if(match_cons(g_134, sym__3))
      {
        h_134 = ATgetArgument(g_134, 0);
        i_134 = ATgetArgument(g_134, 1);
        j_134 = ATgetArgument(g_134, 2);
        {
          if(((d_134 != NULL) && (d_134 != h_134)))
            _fail(h_134);
          else
            d_134 = h_134;
          {
            if(((e_134 != NULL) && (e_134 != i_134)))
              _fail(i_134);
            else
              e_134 = i_134;
            {
              if(((f_134 != NULL) && (f_134 != j_134)))
                _fail(j_134);
              else
                f_134 = j_134;
              t = SSL_table_put(not_null(d_134), not_null(e_134), not_null(f_134));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_38;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_135 (ATerm))
{
  ATerm m_134 = NULL;
  ATerm h_38;
  h_38 = t;
  {
    t = term_i_38;
    t = table_put_0(t);
  }
  t = h_38;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_135(t);
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
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(m_38);
              }
            else
              {
                t = l_38;
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
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_38;
            p_38 = t;
            {
              ATerm q_38 = t;
              int r_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_34;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_38);
                }
              else
                {
                  t = q_38;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = p_38;
            {
              t = system_usage_0(t);
              {
                t = term_m_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm s_38 = t;
              int t_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_38;
                  u_38 = t;
                  {
                    t = term_h_37;
                    t = get_config_0(t);
                  }
                  t = u_38;
                  {
                    t = system_about_0(t);
                    {
                      t = term_m_8;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(t_38);
                }
              else
                {
                  t = s_38;
                  {
                    ATerm l_7 (ATerm t)
                    {
                      ATerm m_7 (ATerm t)
                      {
                        ATerm n_134 = NULL;
                        n_134 = t;
                        if(((m_134 != NULL) && (m_134 != n_134)))
                          _fail(n_134);
                        else
                          m_134 = n_134;
                        return(t);
                      }
                      t = Undefined_1(t, m_7);
                      return(t);
                    }
                    t = option_defined_1(t, l_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_134)), term_v_38));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_8;
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
        ATerm w_38;
        w_38 = t;
        {
          t = term_y_35;
          t = table_destroy_0(t);
        }
        t = w_38;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm))
{
  t = parse_options_1(t, t_133);
  {
    t = store_options_0(t);
    {
      t = v_133(t);
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_133);
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
                  t = w_133(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_39);
                }
              else
                {
                  t = z_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm l_133 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_133(t);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_133);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_7, k_133, l_133, o_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm e_133 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      ATerm d_39;
      d_39 = t;
      {
        ATerm q_134 = NULL;
        ATerm s_134 = NULL;
        t = term_b_33;
        {
          t = get_config_0(t);
          {
            s_134 = t;
            if(((q_134 != NULL) && (q_134 != s_134)))
              _fail(s_134);
            else
              q_134 = s_134;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_26, (ATerm) ATinsert(ATempty, not_null(q_134)));
          t = printnl_0(t);
        }
      }
      t = d_39;
      return(t);
    }
    t = if_verbose2_1(t, q_7);
    return(t);
  }
  t = iowrap_4(t, c_133, d_133, e_133, p_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_133 (ATerm), ATerm b_133 (ATerm))
{
  t = iowrap_3(t, a_133, b_133, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_132 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    t = _2(t, _id, x_132);
    return(t);
  }
  t = iowrap_2(t, r_7, _fail);
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
