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
ATerm term_r_39;
ATerm term_e_39;
ATerm term_w_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_a_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_z_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_t_20;
ATerm term_j_20;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_j_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_o_7;
void init_constant_terms (void)
{
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_h_8);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_8);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_h_15);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_h_15);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_h_37);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_h_15);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_h_15);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_h_15);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__3, term_g_37, term_h_37, (ATerm) ATempty);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_111 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm new_0 (ATerm);
ATerm length_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm s_110 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm));
ATerm Let_2 (ATerm, ATerm t_99 (ATerm), ATerm u_99 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_110 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm a_99 (ATerm));
ATerm RDefT_4 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm b_120 (ATerm));
ATerm union_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_120 (ATerm), ATerm g_120 (ATerm));
ATerm diff_1 (ATerm, ATerm x_119 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_128 (ATerm), ATerm z_128 (ATerm));
ATerm for_3 (ATerm, ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm u_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm a_125 (ATerm), ATerm b_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm u_124 (ATerm), ATerm v_124 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm f_125 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm y_125 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm i_125 (ATerm));
ATerm rename_4 (ATerm, ATerm p_124 (ATerm, ATerm (ATerm)), ATerm q_124 (ATerm), ATerm r_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_124 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_124 (ATerm));
ATerm InlineCall0_0 (ATerm);
ATerm occurrences_1 (ATerm, ATerm j_120 (ATerm));
ATerm local_inlinable_1 (ATerm, ATerm t_109 (ATerm));
ATerm DeclareInline_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_114 (ATerm), ATerm w_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_123 (ATerm));
ATerm scope_2 (ATerm, ATerm x_123 (ATerm), ATerm y_123 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_123 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm));
ATerm crush_3 (ATerm, ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm));
ATerm term_size_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm q_100 (ATerm), ATerm r_100 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm));
ATerm LChoice_2 (ATerm, ATerm j_100 (ATerm), ATerm k_100 (ATerm));
ATerm Choice_2 (ATerm, ATerm h_99 (ATerm), ATerm i_99 (ATerm));
ATerm Cong_2 (ATerm, ATerm g_95 (ATerm), ATerm h_95 (ATerm));
ATerm Match_1 (ATerm, ATerm a_100 (ATerm));
ATerm Seq_2 (ATerm, ATerm h_100 (ATerm), ATerm i_100 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_100 (ATerm), ATerm e_100 (ATerm));
ATerm Build_1 (ATerm, ATerm b_100 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_99 (ATerm));
ATerm PrimT_3 (ATerm, ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm));
ATerm CallT_3 (ATerm, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm AsMatchWld_0 (ATerm);
ATerm MatchSimplify_0 (ATerm);
ATerm MatchBuildIdem_0 (ATerm);
ATerm BuildMatchIdem_0 (ATerm);
ATerm MatchIdem_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm));
ATerm zip_1 (ATerm, ATerm f_116 (ATerm));
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_112 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm j_128 (ATerm));
ATerm downup_1 (ATerm, ATerm q_111 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_95 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_95 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_118 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_131 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_138 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_133 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_138 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_115 (ATerm), ATerm b_115 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm o_122 (ATerm), ATerm p_122 (ATerm));
ATerm crush_2 (ATerm, ATerm m_120 (ATerm), ATerm n_120 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_131 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_134 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_136 (ATerm));
ATerm map_1 (ATerm, ATerm p_117 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_136 (ATerm));
ATerm Program_1 (ATerm, ATerm a_108 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_108 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_117 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_135 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_114 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_136 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_95 (ATerm), ATerm f_95 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_136 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_136 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_133 (ATerm), ATerm u_133 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_133 (ATerm));
ATerm inline_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,t_7 = NULL,u_7 = NULL;
  d_7 = t;
  w_5 :
  if(match_cons(d_7, sym_CallT_3))
    {
      e_7 = ATgetArgument(d_7, 0);
      t_7 = ATgetArgument(d_7, 1);
      u_7 = ATgetArgument(d_7, 2);
      x_5 :
      if(match_cons(e_7, sym_SVar_1))
        {
          f_7 = ATgetArgument(e_7, 0);
          {
            ATerm m_8 = NULL;
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_7)), (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_o_7;
                return(t);
              }
              t = rewrite_1(t, f_0);
              {
                n_8 = t;
                r_5 :
                if(match_cons(n_8, sym_Defined_2))
                  {
                    o_8 = ATgetArgument(n_8, 0);
                    p_8 = ATgetArgument(n_8, 1);
                    v_5 :
                    if(match_string(o_8, "n_0"))
                      {
                        if(((m_8 != NULL) && (m_8 != p_8)))
                          _fail(p_8);
                        else
                          m_8 = p_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_8)), not_null(t_7), not_null(u_7));
          }
        }
      else
        {
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
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  a_9 = t;
  w_8 :
  if(match_cons(a_9, sym_CallT_3))
    {
      b_9 = ATgetArgument(a_9, 0);
      d_9 = ATgetArgument(a_9, 1);
      e_9 = ATgetArgument(a_9, 2);
      x_8 :
      if(match_cons(b_9, sym_SVar_1))
        {
          c_9 = ATgetArgument(b_9, 0);
          y_8 :
          if(((ATgetType(d_9) == AT_LIST) && ATisEmpty(d_9)))
            {
              z_8 :
              if(((ATgetType(e_9) == AT_LIST) && ATisEmpty(e_9)))
                {
                  {
                    ATerm h_9 = NULL;
                    ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
                    t = not_null(a_9);
                    {
                      ATerm h_0 (ATerm t)
                      {
                        t = term_p_7;
                        return(t);
                      }
                      t = rewrite_1(t, h_0);
                      {
                        i_9 = t;
                        u_8 :
                        if(match_cons(i_9, sym_Defined_2))
                          {
                            j_9 = ATgetArgument(i_9, 0);
                            k_9 = ATgetArgument(i_9, 1);
                            v_8 :
                            if(match_string(j_9, "k_0"))
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
                    {
                      t = not_null(h_9);
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
ATerm topdown_1 (ATerm t, ATerm o_111 (ATerm))
{
  t = o_111(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, o_111);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  e_10 = t;
  p_9 :
  if(match_cons(e_10, sym__2))
    {
      f_10 = ATgetArgument(e_10, 0);
      m_10 = ATgetArgument(e_10, 1);
      q_9 :
      if(match_cons(f_10, sym_VarDec_2))
        {
          g_10 = ATgetArgument(f_10, 0);
          h_10 = ATgetArgument(f_10, 1);
          r_9 :
          if(match_cons(h_10, sym_FunType_2))
            {
              i_10 = ATgetArgument(h_10, 0);
              l_10 = ATgetArgument(h_10, 1);
              s_9 :
              if(((ATgetType(i_10) == AT_LIST) && !(ATisEmpty(i_10))))
                {
                  j_10 = ATgetFirst((ATermList) i_10);
                  k_10 = (ATerm) ATgetNext((ATermList) i_10);
                  t_9 :
                  if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
                    {
                      y_9 = ATgetFirst((ATermList) k_10);
                      z_9 = (ATerm) ATgetNext((ATermList) k_10);
                      u_9 :
                      if(match_cons(m_10, sym_CallT_3))
                        {
                          a_10 = ATgetArgument(m_10, 0);
                          c_10 = ATgetArgument(m_10, 1);
                          d_10 = ATgetArgument(m_10, 2);
                          v_9 :
                          if(match_cons(a_10, sym_SVar_1))
                            {
                              b_10 = ATgetArgument(a_10, 0);
                              w_9 :
                              if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                                {
                                  x_9 :
                                  if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                                    {
                                      {
                                        ATerm q_7;
                                        q_7 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_10)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_r_7, not_null(b_10)));
                                          {
                                            ATerm r_0 (ATerm t)
                                            {
                                              t = term_o_7;
                                              return(t);
                                            }
                                            t = assert_1(t, r_0);
                                          }
                                        }
                                        t = q_7;
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(k_10) == AT_LIST) && ATisEmpty(k_10)))
                        {
                          {
                            ATerm s_7;
                            s_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_10)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_7, not_null(m_10)));
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_p_7;
                                  return(t);
                                }
                                t = assert_1(t, s_0);
                              }
                            }
                            t = s_7;
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
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  ATerm t_0 (ATerm t)
  {
    t = term_p_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_o_7;
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
      y_10 = t;
      u_10 :
      if(match_cons(y_10, sym__3))
        {
          z_10 = ATgetArgument(y_10, 0);
          a_11 = ATgetArgument(y_10, 1);
          b_11 = ATgetArgument(y_10, 2);
          {
            if(((v_10 != NULL) && (v_10 != z_10)))
              _fail(z_10);
            else
              v_10 = z_10;
            {
              if(((w_10 != NULL) && (w_10 != a_11)))
                _fail(a_11);
              else
                w_10 = a_11;
              {
                if(((x_10 != NULL) && (x_10 != b_11)))
                  _fail(b_11);
                else
                  x_10 = b_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(w_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(x_10);
                      {
                        ATerm x_0 (ATerm t)
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm w_7 = t;
                            int x_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                ;
                                LocalPopChoice(x_7);
                              }
                            else
                              {
                                t = w_7;
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
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  a_12 :
  if(match_cons(c_12, sym_CallT_3))
    {
      d_12 = ATgetArgument(c_12, 0);
      f_12 = ATgetArgument(c_12, 1);
      g_12 = ATgetArgument(c_12, 2);
      b_12 :
      if(match_cons(d_12, sym_SVar_1))
        {
          e_12 = ATgetArgument(d_12, 0);
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_12 = NULL;
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_12)), (ATerm)ATempty, (ATerm) ATempty);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_a_8;
                    return(t);
                  }
                  t = rewrite_1(t, z_0);
                  {
                    j_12 = t;
                    i_11 :
                    if(match_cons(j_12, sym_Undefined_0))
                      {
                        _fail(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = term_b_8;
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
                {
                  ATerm c_8 = t;
                  int d_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_12 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_12)), (ATerm)ATempty, (ATerm) ATempty);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = term_a_8;
                          return(t);
                        }
                        t = rewrite_1(t, a_1);
                        {
                          m_12 = t;
                          k_11 :
                          if(match_cons(m_12, sym_Undefined_0))
                            {
                              _fail(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                      t = term_b_8;
                      ;
                      LocalPopChoice(d_8);
                    }
                  else
                    {
                      t = c_8;
                      {
                        ATerm e_8 = t;
                        int f_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                            ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_12)), (ATerm)ATempty, (ATerm) ATempty);
                            {
                              ATerm b_1 (ATerm t)
                              {
                                t = term_a_8;
                                return(t);
                              }
                              t = rewrite_1(t, b_1);
                              {
                                y_12 = t;
                                w_11 :
                                if(match_cons(y_12, sym_Defined_2))
                                  {
                                    z_12 = ATgetArgument(y_12, 0);
                                    a_13 = ATgetArgument(y_12, 1);
                                    x_11 :
                                    if(match_string(z_12, "d_0"))
                                      {
                                        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
                                        if(((r_12 != NULL) && (r_12 != a_13)))
                                          _fail(a_13);
                                        else
                                          r_12 = a_13;
                                        {
                                          t = not_null(r_12);
                                          {
                                            t = strename_0(t);
                                            {
                                              b_13 = t;
                                              v_11 :
                                              if(match_cons(b_13, sym_SDefT_4))
                                                {
                                                  c_13 = ATgetArgument(b_13, 0);
                                                  d_13 = ATgetArgument(b_13, 1);
                                                  e_13 = ATgetArgument(b_13, 2);
                                                  f_13 = ATgetArgument(b_13, 3);
                                                  {
                                                    ATerm g_13 = NULL;
                                                    if(((e_12 != NULL) && (e_12 != c_13)))
                                                      _fail(c_13);
                                                    else
                                                      e_12 = c_13;
                                                    {
                                                      if(((s_12 != NULL) && (s_12 != d_13)))
                                                        _fail(d_13);
                                                      else
                                                        s_12 = d_13;
                                                      {
                                                        if(((u_12 != NULL) && (u_12 != e_13)))
                                                          _fail(e_13);
                                                        else
                                                          u_12 = e_13;
                                                        {
                                                          if(((t_12 != NULL) && (t_12 != f_13)))
                                                            _fail(f_13);
                                                          else
                                                            t_12 = f_13;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(s_12), not_null(f_12), not_null(t_12));
                                                            {
                                                              ATerm l_13 = NULL;
                                                              t = substitute_args_0(t);
                                                              {
                                                                g_13 = t;
                                                                {
                                                                  if(((w_12 != NULL) && (w_12 != g_13)))
                                                                    _fail(g_13);
                                                                  else
                                                                    w_12 = g_13;
                                                                  {
                                                                    t = not_null(u_12);
                                                                    {
                                                                      ATerm m_13 = NULL,t_13 = NULL;
                                                                      ATerm c_1 (ATerm t)
                                                                      {
                                                                        ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                                                                        h_13 = t;
                                                                        p_11 :
                                                                        if(match_cons(h_13, sym_VarDec_2))
                                                                          {
                                                                            i_13 = ATgetArgument(h_13, 0);
                                                                            j_13 = ATgetArgument(h_13, 1);
                                                                            t = not_null(i_13);
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                        return(t);
                                                                      }
                                                                      t = map_1(t, c_1);
                                                                      {
                                                                        l_13 = t;
                                                                        {
                                                                          if(((v_12 != NULL) && (v_12 != l_13)))
                                                                            _fail(l_13);
                                                                          else
                                                                            v_12 = l_13;
                                                                          {
                                                                            ATerm s_13 = NULL;
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(v_12));
                                                                            {
                                                                              ATerm d_1 (ATerm t)
                                                                              {
                                                                                ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
                                                                                n_13 = t;
                                                                                s_11 :
                                                                                if(match_cons(n_13, sym__2))
                                                                                  {
                                                                                    o_13 = ATgetArgument(n_13, 0);
                                                                                    p_13 = ATgetArgument(n_13, 1);
                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_13)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_13))));
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, d_1);
                                                                              {
                                                                                s_13 = t;
                                                                                if(((m_13 != NULL) && (m_13 != s_13)))
                                                                                  _fail(s_13);
                                                                                else
                                                                                  m_13 = s_13;
                                                                              }
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_13)), not_null(w_12)));
                                                                              {
                                                                                t_13 = t;
                                                                                {
                                                                                  if(((x_12 != NULL) && (x_12 != t_13)))
                                                                                    _fail(t_13);
                                                                                  else
                                                                                    x_12 = t_13;
                                                                                  {
                                                                                    ATerm g_8;
                                                                                    g_8 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_12)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
                                                                                      {
                                                                                        ATerm e_1 (ATerm t)
                                                                                        {
                                                                                          t = term_a_8;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, e_1);
                                                                                      }
                                                                                    }
                                                                                    t = g_8;
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
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
                              t = not_null(x_12);
                              t = simplify0_0(t);
                            }
                            ;
                            LocalPopChoice(f_8);
                          }
                        else
                          {
                            t = e_8;
                            {
                              ATerm y_13 = NULL;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_12)), (ATerm)ATempty, (ATerm) ATempty);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = term_a_8;
                                  return(t);
                                }
                                t = rewrite_1(t, f_1);
                                {
                                  y_13 = t;
                                  z_11 :
                                  if(match_cons(y_13, sym_Undefined_0))
                                    {
                                      _fail(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              }
                              t = term_b_8;
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_h_8;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_i_8;
    return(t);
  }
  t = foldr_3(t, g_1, add_0, h_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm s_110 (ATerm))
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        t = split_2(t, _id, s_110);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
            s_14 = t;
            q_14 :
            if(match_cons(s_14, sym__2))
              {
                t_14 = ATgetArgument(s_14, 0);
                y_14 = ATgetArgument(s_14, 1);
                r_14 :
                if(match_cons(t_14, sym_SDef_3))
                  {
                    u_14 = ATgetArgument(t_14, 0);
                    v_14 = ATgetArgument(t_14, 1);
                    w_14 = ATgetArgument(t_14, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_14), not_null(v_14), not_null(w_14));
                  }
                else
                  {
                    if(match_cons(t_14, sym_SDefT_4))
                      {
                        u_14 = ATgetArgument(t_14, 0);
                        v_14 = ATgetArgument(t_14, 1);
                        w_14 = ATgetArgument(t_14, 2);
                        x_14 = ATgetArgument(t_14, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(y_14), not_null(v_14), not_null(w_14), not_null(x_14));
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
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm l_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = split_2(t, _id, s_110);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, k_1, _id);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = l_8;
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = split_2(t, _id, s_110);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, l_1, _id, _id);
                  ;
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  {
                    ATerm t_8 = t;
                    int f_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = split_2(t, _id, s_110);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, m_1, _id, _id);
                        ;
                        LocalPopChoice(f_9);
                      }
                    else
                      {
                        t = t_8;
                        {
                          ATerm n_1 (ATerm t)
                          {
                            t = s_110(t);
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
ATerm SDef_3 (ATerm t, ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_SDef_3))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      s_15 = ATgetArgument(p_15, 2);
      {
        ATerm x_15 = NULL,z_15 = NULL;
        ATerm y_15 = NULL;
        t = SSLgetAnnotations(not_null(p_15));
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
        {
          t = not_null(q_15);
          {
            ATerm b_16 = NULL;
            t = i_102(t);
            {
              z_15 = t;
              {
                t = not_null(r_15);
                {
                  ATerm d_16 = NULL;
                  t = j_102(t);
                  {
                    b_16 = t;
                    {
                      t = not_null(s_15);
                      {
                        ATerm f_16 = NULL;
                        t = k_102(t);
                        {
                          d_16 = t;
                          {
                            ATerm g_16 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_15), not_null(b_16), not_null(d_16)), not_null(x_15));
                            {
                              g_16 = t;
                              if(((f_16 != NULL) && (f_16 != g_16)))
                                _fail(g_16);
                              else
                                f_16 = g_16;
                            }
                            t = not_null(f_16);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm t_99 (ATerm), ATerm u_99 (ATerm))
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym_Let_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      {
        ATerm z_16 = NULL,b_17 = NULL;
        ATerm a_17 = NULL;
        t = SSLgetAnnotations(not_null(t_16));
        {
          a_17 = t;
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
        }
        {
          t = not_null(u_16);
          {
            ATerm d_17 = NULL;
            t = t_99(t);
            {
              b_17 = t;
              {
                t = not_null(v_16);
                {
                  ATerm f_17 = NULL;
                  t = u_99(t);
                  {
                    d_17 = t;
                    {
                      ATerm g_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(b_17), not_null(d_17)), not_null(z_16));
                      {
                        g_17 = t;
                        if(((f_17 != NULL) && (f_17 != g_17)))
                          _fail(g_17);
                        else
                          f_17 = g_17;
                      }
                      t = not_null(f_17);
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
ATerm sboundin_3 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm))
{
  ATerm g_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_110, t_110);
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
            t = SDef_3(t, v_110, v_110, t_110);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm o_9 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, v_110, v_110, v_110, t_110);
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = o_9;
                  t = Rec_2(t, v_110, t_110);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_RDefT_4))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      r_17 = ATgetArgument(o_17, 2);
      s_17 = ATgetArgument(o_17, 3);
      {
        t = not_null(q_17);
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
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_SDefT_4))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      d_18 = ATgetArgument(a_18, 2);
      e_18 = ATgetArgument(a_18, 3);
      {
        t = not_null(c_18);
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
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Rec_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      t = (ATerm) ATinsert(ATempty, not_null(n_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_SDef_3))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      x_18 = ATgetArgument(u_18, 2);
      {
        t = not_null(w_18);
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Let_2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      {
        t = not_null(i_19);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
            m_19 = t;
            f_19 :
            if(match_cons(m_19, sym_SDef_3))
              {
                n_19 = ATgetArgument(m_19, 0);
                o_19 = ATgetArgument(m_19, 1);
                p_19 = ATgetArgument(m_19, 2);
                t = not_null(n_19);
              }
            else
              {
                if(match_cons(m_19, sym_SDefT_4))
                  {
                    n_19 = ATgetArgument(m_19, 0);
                    o_19 = ATgetArgument(m_19, 1);
                    p_19 = ATgetArgument(m_19, 2);
                    q_19 = ATgetArgument(m_19, 3);
                    t = not_null(n_19);
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
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              {
                ATerm s_10 = t;
                int t_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(t_10);
                  }
                else
                  {
                    t = s_10;
                    {
                      ATerm c_11 = t;
                      int d_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(d_11);
                        }
                      else
                        {
                          t = c_11;
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
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  a_20 = t;
  y_19 :
  if(match_cons(a_20, sym__2))
    {
      b_20 = ATgetArgument(a_20, 0);
      e_20 = ATgetArgument(a_20, 1);
      z_19 :
      if(match_cons(b_20, sym_DefaultVarDec_1))
        {
          c_20 = ATgetArgument(b_20, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(e_20));
        }
      else
        {
          if(match_cons(b_20, sym_VarDec_2))
            {
              c_20 = ATgetArgument(b_20, 0);
              d_20 = ATgetArgument(b_20, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_20), not_null(d_20));
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
ATerm tpaste_1 (ATerm t, ATerm o_110 (ATerm))
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_110, _id);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = split_2(t, _id, o_110);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, q_1, _id);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm r_1 (ATerm t)
              {
                t = split_2(t, _id, o_110);
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
ATerm DynamicRules_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym_DynamicRules_1))
    {
      s_20 = ATgetArgument(r_20, 0);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(r_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(s_20);
          {
            ATerm z_20 = NULL;
            t = a_99(t);
            {
              x_20 = t;
              {
                ATerm a_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(x_20)), not_null(v_20));
                {
                  a_21 = t;
                  if(((z_20 != NULL) && (z_20 != a_21)))
                    _fail(a_21);
                  else
                    z_20 = a_21;
                }
                t = not_null(z_20);
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
ATerm RDefT_4 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_RDefT_4))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      q_21 = ATgetArgument(n_21, 2);
      r_21 = ATgetArgument(n_21, 3);
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm y_21 = NULL;
        t = SSLgetAnnotations(not_null(n_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        {
          t = not_null(o_21);
          {
            ATerm b_22 = NULL;
            t = r_98(t);
            {
              z_21 = t;
              {
                t = not_null(p_21);
                {
                  ATerm d_22 = NULL;
                  t = s_98(t);
                  {
                    b_22 = t;
                    {
                      t = not_null(q_21);
                      {
                        ATerm f_22 = NULL;
                        t = t_98(t);
                        {
                          d_22 = t;
                          {
                            t = not_null(r_21);
                            {
                              ATerm h_22 = NULL;
                              t = u_98(t);
                              {
                                f_22 = t;
                                {
                                  ATerm i_22 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(z_21), not_null(b_22), not_null(d_22), not_null(f_22)), not_null(x_21));
                                  {
                                    i_22 = t;
                                    if(((h_22 != NULL) && (h_22 != i_22)))
                                      _fail(i_22);
                                    else
                                      h_22 = i_22;
                                  }
                                  t = not_null(h_22);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm tboundin_3 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm))
{
  ATerm j_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_110, p_110);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, r_110, r_110, r_110, p_110);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm o_11 = t;
              int q_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, r_110, r_110, r_110, p_110);
                  ;
                  LocalPopChoice(q_11);
                }
              else
                {
                  t = o_11;
                  t = DynamicRules_1(t, p_110);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_RDefT_4))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      v_22 = ATgetArgument(s_22, 2);
      w_22 = ATgetArgument(s_22, 3);
      {
        t = not_null(v_22);
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
    ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
    g_23 = t;
    e_23 :
    if(match_cons(g_23, sym_VarDec_2))
      {
        h_23 = ATgetArgument(g_23, 0);
        f_23 = ATgetArgument(g_23, 1);
        t = not_null(h_23);
      }
    else
      {
        if(match_cons(g_23, sym_DefaultVarDec_1))
          {
            h_23 = ATgetArgument(g_23, 0);
            t = not_null(h_23);
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
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_SDefT_4))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      r_23 = ATgetArgument(o_23, 2);
      s_23 = ATgetArgument(o_23, 3);
      {
        t = not_null(r_23);
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
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_DynamicRules_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        t = not_null(b_24);
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
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Var_1))
    {
      h_24 = ATgetArgument(g_24, 0);
      t = (ATerm) ATinsert(ATempty, not_null(h_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_120 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym__2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      {
        t = not_null(n_24);
        {
          ATerm s_24 (ATerm t)
          {
            ATerm r_11 = t;
            int t_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_24);
                ;
                LocalPopChoice(t_11);
              }
            else
              {
                t = r_11;
                {
                  ATerm u_11 = t;
                  int y_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = not_null(o_24);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_120, t_1);
                      t = s_24(t);
                      ;
                      LocalPopChoice(y_11);
                    }
                  else
                    {
                      t = u_11;
                      t = Cons_2(t, _id, s_24);
                    }
                }
              }
            return(t);
          }
          t = s_24(t);
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
ATerm HdMember_p__2 (ATerm t, ATerm f_120 (ATerm), ATerm g_120 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
    {
      x_24 = ATgetFirst((ATermList) w_24);
      y_24 = (ATerm) ATgetNext((ATermList) w_24);
      {
        t = g_120(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm b_25 = NULL;
            b_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(b_25));
              t = f_120(t);
            }
            return(t);
          }
          t = fetch_1(t, u_1);
        }
        t = not_null(y_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm x_119 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym__2))
    {
      i_25 = ATgetArgument(h_25, 0);
      j_25 = ATgetArgument(h_25, 1);
      {
        t = not_null(i_25);
        {
          ATerm n_25 (ATerm t)
          {
            ATerm h_12 = t;
            int i_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(i_12);
              }
            else
              {
                t = h_12;
                {
                  ATerm k_12 = t;
                  int l_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        t = not_null(j_25);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_119, v_1);
                      t = n_25(t);
                      ;
                      LocalPopChoice(l_12);
                    }
                  else
                    {
                      t = k_12;
                      t = Cons_2(t, _id, n_25);
                    }
                }
              }
            return(t);
          }
          t = n_25(t);
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
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  r_25 = t;
  p_25 :
  if(match_cons(r_25, sym__2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      q_25 :
      if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
        {
          u_25 = ATgetFirst((ATermList) t_25);
          v_25 = (ATerm) ATgetNext((ATermList) t_25);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_25)), not_null(u_25)), not_null(v_25));
        }
      else
        {
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
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  k_26 = t;
  i_26 :
  if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
    {
      l_26 = ATgetFirst((ATermList) k_26);
      o_26 = (ATerm) ATgetNext((ATermList) k_26);
      j_26 :
      if(match_cons(l_26, sym__2))
        {
          m_26 = ATgetArgument(l_26, 0);
          n_26 = ATgetArgument(l_26, 1);
          {
            ATerm s_26 = NULL,t_26 = NULL,z_26 = NULL,f_27 = NULL;
            ATerm n_12;
            n_12 = t;
            {
              ATerm u_26 = NULL;
              ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
              t = not_null(n_26);
              {
                u_26 = t;
                {
                  t = SSL_explode_term(not_null(u_26));
                  {
                    w_26 = t;
                    d_26 :
                    if(match_cons(w_26, sym__2))
                      {
                        x_26 = ATgetArgument(w_26, 0);
                        y_26 = ATgetArgument(w_26, 1);
                        {
                          if(((s_26 != NULL) && (s_26 != x_26)))
                            _fail(x_26);
                          else
                            s_26 = x_26;
                          if(((t_26 != NULL) && (t_26 != y_26)))
                            _fail(y_26);
                          else
                            t_26 = y_26;
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
            t = n_12;
            {
              ATerm o_12;
              o_12 = t;
              {
                ATerm a_27 = NULL;
                ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
                t = not_null(m_26);
                {
                  a_27 = t;
                  {
                    t = SSL_explode_term(not_null(a_27));
                    {
                      c_27 = t;
                      g_26 :
                      if(match_cons(c_27, sym__2))
                        {
                          d_27 = ATgetArgument(c_27, 0);
                          e_27 = ATgetArgument(c_27, 1);
                          {
                            if(((s_26 != NULL) && (s_26 != d_27)))
                              _fail(d_27);
                            else
                              s_26 = d_27;
                            if(((z_26 != NULL) && (z_26 != e_27)))
                              _fail(e_27);
                            else
                              z_26 = e_27;
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
              t = o_12;
              {
                ATerm g_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_26), not_null(t_26));
                {
                  t = zip_1(t, _id);
                  {
                    g_27 = t;
                    if(((f_27 != NULL) && (f_27 != g_27)))
                      _fail(g_27);
                    else
                      f_27 = g_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(o_26));
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
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  q_27 = t;
  o_27 :
  if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
    {
      r_27 = ATgetFirst((ATermList) q_27);
      u_27 = (ATerm) ATgetNext((ATermList) q_27);
      p_27 :
      if(match_cons(r_27, sym__2))
        {
          s_27 = ATgetArgument(r_27, 0);
          t_27 = ATgetArgument(r_27, 1);
          {
            ATerm w_27 = NULL;
            if(((s_27 != NULL) && (s_27 != t_27)))
              _fail(t_27);
            else
              s_27 = t_27;
            {
              if(((w_27 != NULL) && (w_27 != u_27)))
                _fail(u_27);
              else
                w_27 = u_27;
              t = not_null(w_27);
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
ATerm while_not_2 (ATerm t, ATerm y_128 (ATerm), ATerm z_128 (ATerm))
{
  ATerm y_27 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_128(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          t = z_128(t);
          t = y_27(t);
        }
      }
    return(t);
  }
  t = y_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm))
{
  t = b_129(t);
  t = while_not_2(t, c_129, d_129);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm a_28 = NULL;
        a_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_28));
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm r_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, z_1);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = r_13;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_1, x_1, y_1);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = k_13;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm s_126 (ATerm), ATerm t_126 (ATerm), ATerm u_126 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_28 (ATerm t)
  {
    ATerm x_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_126(t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = x_13;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_28 = NULL;
              ATerm c_14;
              c_14 = t;
              {
                ATerm f_28 = NULL;
                t = t_126(t);
                {
                  f_28 = t;
                  if(((e_28 != NULL) && (e_28 != f_28)))
                    _fail(f_28);
                  else
                    e_28 = f_28;
                }
              }
              t = c_14;
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm c_2 (ATerm t)
                  {
                    t = not_null(e_28);
                    return(t);
                  }
                  t = split_2(t, g_28, c_2);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_126(t, a_2, g_28, b_2);
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
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              {
                ATerm e_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_2, union_0, g_28);
              }
            }
        }
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
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
              t = Bind4_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              {
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
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
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  k_28 :
  if(match_cons(p_28, sym_LRule_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      l_28 :
      if(match_cons(q_28, sym_Rule_3))
        {
          m_28 = ATgetArgument(q_28, 0);
          n_28 = ATgetArgument(q_28, 1);
          o_28 = ATgetArgument(q_28, 2);
          {
            t = not_null(m_28);
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
      if(match_cons(p_28, sym_Scope_2))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          t = not_null(q_28);
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
  ATerm m_29 = NULL,n_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Var_1))
    {
      n_29 = ATgetArgument(m_29, 0);
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_29 = NULL,s_29 = NULL;
            ATerm r_29 = NULL;
            t = SSLgetAnnotations(not_null(m_29));
            {
              r_29 = t;
              if(((q_29 != NULL) && (q_29 != r_29)))
                _fail(r_29);
              else
                q_29 = r_29;
            }
            {
              t = not_null(n_29);
              {
                ATerm u_29 = NULL;
                t = p_0(t);
                {
                  s_29 = t;
                  {
                    ATerm v_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_29)), not_null(q_29));
                    {
                      v_29 = t;
                      if(((u_29 != NULL) && (u_29 != v_29)))
                        _fail(v_29);
                      else
                        u_29 = v_29;
                    }
                    t = not_null(u_29);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_29 = NULL,a_30 = NULL;
                  ATerm z_29 = NULL;
                  t = SSLgetAnnotations(not_null(m_29));
                  {
                    z_29 = t;
                    if(((y_29 != NULL) && (y_29 != z_29)))
                      _fail(z_29);
                    else
                      y_29 = z_29;
                  }
                  {
                    t = not_null(n_29);
                    {
                      ATerm c_30 = NULL;
                      t = p_0(t);
                      {
                        a_30 = t;
                        {
                          ATerm d_30 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_30)), not_null(y_29));
                          {
                            d_30 = t;
                            if(((c_30 != NULL) && (c_30 != d_30)))
                              _fail(d_30);
                            else
                              c_30 = d_30;
                          }
                          t = not_null(c_30);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  {
                    ATerm g_30 = NULL,i_30 = NULL;
                    ATerm h_30 = NULL;
                    t = SSLgetAnnotations(not_null(m_29));
                    {
                      h_30 = t;
                      if(((g_30 != NULL) && (g_30 != h_30)))
                        _fail(h_30);
                      else
                        g_30 = h_30;
                    }
                    {
                      t = not_null(n_29);
                      {
                        ATerm k_30 = NULL;
                        t = p_0(t);
                        {
                          i_30 = t;
                          {
                            ATerm l_30 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_30)), not_null(g_30));
                            {
                              l_30 = t;
                              if(((k_30 != NULL) && (k_30 != l_30)))
                                _fail(l_30);
                              else
                                k_30 = l_30;
                            }
                            t = not_null(k_30);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm a_125 (ATerm), ATerm b_125 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__3))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      f_31 = ATgetArgument(c_31, 2);
      {
        t = not_null(d_31);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm j_31 = NULL;
            j_31 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(f_31));
              t = a_125(t);
            }
            return(t);
          }
          ATerm h_2 (ATerm t)
          {
            ATerm l_31 = NULL;
            l_31 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(e_31));
              t = a_125(t);
            }
            return(t);
          }
          t = b_125(t, g_2, h_2, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm u_124 (ATerm), ATerm v_124 (ATerm, ATerm (ATerm)))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym__2))
    {
      y_31 = ATgetArgument(x_31, 0);
      z_31 = ATgetArgument(x_31, 1);
      {
        ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,k_32 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm f_32 = NULL;
          t = not_null(y_31);
          {
            ATerm g_32 = NULL;
            t = u_124(t);
            {
              f_32 = t;
              {
                if(((c_32 != NULL) && (c_32 != f_32)))
                  _fail(f_32);
                else
                  c_32 = f_32;
                {
                  ATerm h_32 = NULL,j_32 = NULL;
                  t = map_1(t, new_0);
                  {
                    g_32 = t;
                    {
                      if(((d_32 != NULL) && (d_32 != g_32)))
                        _fail(g_32);
                      else
                        d_32 = g_32;
                      {
                        ATerm i_32 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_32), not_null(d_32));
                        {
                          t = zip_1(t, _id);
                          {
                            i_32 = t;
                            if(((h_32 != NULL) && (h_32 != i_32)))
                              _fail(i_32);
                            else
                              h_32 = i_32;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_32), not_null(z_31));
                          {
                            t = conc_0(t);
                            {
                              j_32 = t;
                              if(((e_32 != NULL) && (e_32 != j_32)))
                                _fail(j_32);
                              else
                                e_32 = j_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_14;
        {
          ATerm l_32 = NULL;
          t = not_null(y_31);
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(d_32);
              return(t);
            }
            t = v_124(t, i_2);
            {
              l_32 = t;
              if(((k_32 != NULL) && (k_32 != l_32)))
                _fail(l_32);
              else
                k_32 = l_32;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(k_32), not_null(z_31), not_null(e_32));
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
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  v_32 = t;
  t_32 :
  if(match_cons(v_32, sym__2))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      u_32 :
      if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
        {
          y_32 = ATgetFirst((ATermList) x_32);
          z_32 = (ATerm) ATgetNext((ATermList) x_32);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_32), not_null(z_32));
        }
      else
        {
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  h_33 = t;
  e_33 :
  if(match_cons(h_33, sym__2))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      f_33 :
      if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
        {
          k_33 = ATgetFirst((ATermList) j_33);
          n_33 = (ATerm) ATgetNext((ATermList) j_33);
          g_33 :
          if(match_cons(k_33, sym__2))
            {
              l_33 = ATgetArgument(k_33, 0);
              m_33 = ATgetArgument(k_33, 1);
              {
                ATerm p_33 = NULL;
                if(((i_33 != NULL) && (i_33 != l_33)))
                  _fail(l_33);
                else
                  i_33 = l_33;
                {
                  if(((p_33 != NULL) && (p_33 != m_33)))
                    _fail(m_33);
                  else
                    p_33 = m_33;
                  t = not_null(p_33);
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm f_125 (ATerm, ATerm (ATerm)))
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym__2))
    {
      v_33 = ATgetArgument(u_33, 0);
      w_33 = ATgetArgument(u_33, 1);
      {
        t = not_null(v_33);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(w_33);
              return(t);
            }
            t = split_2(t, _id, k_2);
            t = lookup_0(t);
            return(t);
          }
          t = f_125(t, j_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm y_125 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  c_34 :
  if(match_cons(d_34, sym__2))
    {
      e_34 = ATgetArgument(d_34, 0);
      f_34 = ATgetArgument(d_34, 1);
      {
        t = not_null(e_34);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm i_34 = NULL;
            i_34 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(f_34));
              t = y_125(t);
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
ATerm env_alltd_1 (ATerm t, ATerm i_125 (ATerm))
{
  ATerm m_34 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_125(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = all_dist_1(t, m_34);
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm p_124 (ATerm, ATerm (ATerm)), ATerm q_124 (ATerm), ATerm r_124 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_124 (ATerm, ATerm (ATerm)))
{
  ATerm o_34 = NULL;
  o_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_34), (ATerm) ATempty);
    {
      ATerm r_34 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, p_124);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              {
                t = RnBinding_2(t, q_124, s_124);
                t = DistBinding_2(t, r_34, r_124);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_2);
        return(t);
      }
      t = r_34(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
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
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  t_34 :
  if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
    {
      v_34 = ATgetFirst((ATermList) u_34);
      w_34 = (ATerm) ATgetNext((ATermList) u_34);
      t = not_null(v_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym__2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_35), not_null(d_35));
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
ATerm rewrite_1 (ATerm t, ATerm b_124 (ATerm))
{
  ATerm j_35 = NULL;
  ATerm l_35 = NULL;
  j_35 = t;
  {
    ATerm m_35 = NULL;
    t = term_h_15;
    {
      t = b_124(t);
      {
        m_35 = t;
        if(((l_35 != NULL) && (l_35 != m_35)))
          _fail(m_35);
        else
          l_35 = m_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), not_null(j_35));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineCall0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  d_36 = t;
  z_35 :
  if(match_cons(d_36, sym_CallT_3))
    {
      e_36 = ATgetArgument(d_36, 0);
      g_36 = ATgetArgument(d_36, 1);
      h_36 = ATgetArgument(d_36, 2);
      a_36 :
      if(match_cons(e_36, sym_SVar_1))
        {
          f_36 = ATgetArgument(e_36, 0);
          b_36 :
          if(((ATgetType(g_36) == AT_LIST) && ATisEmpty(g_36)))
            {
              c_36 :
              if(((ATgetType(h_36) == AT_LIST) && ATisEmpty(h_36)))
                {
                  {
                    ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
                    ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
                    t = not_null(d_36);
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_i_15;
                        return(t);
                      }
                      t = rewrite_1(t, o_2);
                      {
                        p_36 = t;
                        x_35 :
                        if(match_cons(p_36, sym_Defined_2))
                          {
                            q_36 = ATgetArgument(p_36, 0);
                            r_36 = ATgetArgument(p_36, 1);
                            y_35 :
                            if(match_string(q_36, "g_0"))
                              {
                                ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
                                if(((k_36 != NULL) && (k_36 != r_36)))
                                  _fail(r_36);
                                else
                                  k_36 = r_36;
                                {
                                  t = not_null(k_36);
                                  {
                                    t = strename_0(t);
                                    {
                                      s_36 = t;
                                      w_35 :
                                      if(match_cons(s_36, sym_SDefT_4))
                                        {
                                          t_36 = ATgetArgument(s_36, 0);
                                          u_36 = ATgetArgument(s_36, 1);
                                          v_36 = ATgetArgument(s_36, 2);
                                          w_36 = ATgetArgument(s_36, 3);
                                          {
                                            ATerm x_36 = NULL,d_37 = NULL;
                                            if(((f_36 != NULL) && (f_36 != t_36)))
                                              _fail(t_36);
                                            else
                                              f_36 = t_36;
                                            {
                                              if(((m_36 != NULL) && (m_36 != u_36)))
                                                _fail(u_36);
                                              else
                                                m_36 = u_36;
                                              {
                                                if(((n_36 != NULL) && (n_36 != v_36)))
                                                  _fail(v_36);
                                                else
                                                  n_36 = v_36;
                                                {
                                                  if(((l_36 != NULL) && (l_36 != w_36)))
                                                    _fail(w_36);
                                                  else
                                                    l_36 = w_36;
                                                  {
                                                    ATerm y_36 = NULL,a_37 = NULL,c_37 = NULL;
                                                    ATerm j_15;
                                                    j_15 = t;
                                                    {
                                                      ATerm z_36 = NULL;
                                                      t = not_null(m_36);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          z_36 = t;
                                                          if(((y_36 != NULL) && (y_36 != z_36)))
                                                            _fail(z_36);
                                                          else
                                                            y_36 = z_36;
                                                        }
                                                      }
                                                    }
                                                    t = j_15;
                                                    {
                                                      ATerm b_37 = NULL;
                                                      t = not_null(n_36);
                                                      {
                                                        t = length_0(t);
                                                        {
                                                          b_37 = t;
                                                          if(((a_37 != NULL) && (a_37 != b_37)))
                                                            _fail(b_37);
                                                          else
                                                            a_37 = b_37;
                                                        }
                                                      }
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), not_null(a_37));
                                                        {
                                                          t = add_0(t);
                                                          {
                                                            c_37 = t;
                                                            if(((x_36 != NULL) && (x_36 != c_37)))
                                                              _fail(c_37);
                                                            else
                                                              x_36 = c_37;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_36), term_h_8);
                                                      {
                                                        t = gt_0(t);
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            d_37 = t;
                                                            {
                                                              if(((o_36 != NULL) && (o_36 != d_37)))
                                                                _fail(d_37);
                                                              else
                                                                o_36 = d_37;
                                                              {
                                                                ATerm k_15;
                                                                k_15 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_36)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
                                                                  {
                                                                    ATerm p_2 (ATerm t)
                                                                    {
                                                                      t = term_a_8;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, p_2);
                                                                  }
                                                                }
                                                                t = k_15;
                                                              }
                                                            }
                                                          }
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
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(o_36), not_null(m_36), not_null(n_36), not_null(l_36))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_36)), (ATerm)ATempty, (ATerm) ATempty));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm occurrences_1 (ATerm t, ATerm j_120 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_120(t);
        t = term_i_8;
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = term_h_8;
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      t = term_h_8;
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      t = occurrences_1(t, j_120);
      return(t);
    }
    t = crush_3(t, s_2, add_0, t_2);
    return(t);
  }
  t = split_2(t, q_2, r_2);
  t = add_0(t);
  return(t);
}
ATerm local_inlinable_1 (ATerm t, ATerm t_109 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym_SDefT_4))
    {
      v_37 = ATgetArgument(u_37, 0);
      v_39 = ATgetArgument(u_37, 1);
      w_39 = ATgetArgument(u_37, 2);
      x_39 = ATgetArgument(u_37, 3);
      {
        ATerm n_15;
        n_15 = t;
        {
          ATerm v_41 = NULL;
          t = not_null(x_39);
          {
            ATerm t_15 = t;
            if((PushChoice() == 0))
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
                  q_41 = t;
                  n_37 :
                  if(match_cons(q_41, sym_CallT_3))
                    {
                      r_41 = ATgetArgument(q_41, 0);
                      t_41 = ATgetArgument(q_41, 1);
                      u_41 = ATgetArgument(q_41, 2);
                      o_37 :
                      if(match_cons(r_41, sym_SVar_1))
                        {
                          s_41 = ATgetArgument(r_41, 0);
                          if(((v_37 != NULL) && (v_37 != s_41)))
                            _fail(s_41);
                          else
                            v_37 = s_41;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = oncetd_1(t, u_2);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_15;
              }
            {
              ATerm b_42 = NULL;
              t = t_109(t);
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
                  w_41 = t;
                  q_37 :
                  if(match_cons(w_41, sym_CallT_3))
                    {
                      x_41 = ATgetArgument(w_41, 0);
                      z_41 = ATgetArgument(w_41, 1);
                      a_42 = ATgetArgument(w_41, 2);
                      r_37 :
                      if(match_cons(x_41, sym_SVar_1))
                        {
                          y_41 = ATgetArgument(x_41, 0);
                          if(((v_37 != NULL) && (v_37 != y_41)))
                            _fail(y_41);
                          else
                            v_37 = y_41;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = occurrences_1(t, v_2);
                {
                  b_42 = t;
                  if(((v_41 != NULL) && (v_41 != b_42)))
                    _fail(b_42);
                  else
                    v_41 = b_42;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), term_i_8);
                t = leq_0(t);
              }
            }
          }
        }
        t = n_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareInline_0 (ATerm t)
{
  ATerm i_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym_Let_2))
    {
      k_42 = ATgetArgument(i_42, 0);
      l_42 = ATgetArgument(i_42, 1);
      {
        ATerm u_15;
        u_15 = t;
        {
          t = not_null(k_42);
          {
            ATerm w_2 (ATerm t)
            {
              ATerm x_2 (ATerm t)
              {
                t = not_null(l_42);
                return(t);
              }
              t = local_inlinable_1(t, x_2);
              t = AddSDef_0(t);
              return(t);
            }
            t = map_1(t, w_2);
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym_SDefT_4))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      u_42 = ATgetArgument(r_42, 2);
      v_42 = ATgetArgument(r_42, 3);
      {
        ATerm v_15;
        v_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_42)), (ATerm)ATempty, (ATerm) ATempty), term_b_8);
          {
            ATerm y_2 (ATerm t)
            {
              t = term_a_8;
              return(t);
            }
            t = assert_1(t, y_2);
          }
        }
        t = v_15;
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  c_43 = t;
  b_43 :
  if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
    {
      d_43 = ATgetFirst((ATermList) c_43);
      e_43 = (ATerm) ATgetNext((ATermList) c_43);
      t = not_null(e_43);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym__2))
    {
      l_43 = ATgetArgument(k_43, 0);
      m_43 = ATgetArgument(k_43, 1);
      {
        ATerm w_15;
        w_15 = t;
        {
          ATerm p_43 = NULL;
          ATerm q_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), not_null(m_43));
          {
            ATerm a_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(c_16);
              }
            else
              {
                t = a_16;
                t = (ATerm) ATempty;
              }
            {
              q_43 = t;
              if(((p_43 != NULL) && (p_43 != q_43)))
                _fail(q_43);
              else
                p_43 = q_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_43), not_null(m_43), not_null(p_43));
            t = table_put_0(t);
          }
        }
        t = w_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_123 (ATerm))
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm a_44 = NULL;
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
    t = w_123(t);
    {
      a_44 = t;
      {
        if(((z_43 != NULL) && (z_43 != a_44)))
          _fail(a_44);
        else
          z_43 = a_44;
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), term_j_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_44 = t;
            w_43 :
            if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
              {
                c_44 = ATgetFirst((ATermList) b_44);
                d_44 = (ATerm) ATgetNext((ATermList) b_44);
                {
                  if(((y_43 != NULL) && (y_43 != c_44)))
                    _fail(c_44);
                  else
                    y_43 = c_44;
                  {
                    if(((x_43 != NULL) && (x_43 != d_44)))
                      _fail(d_44);
                    else
                      x_43 = d_44;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_43), term_j_16, not_null(x_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_43);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm e_44 = NULL;
                              e_44 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), not_null(e_44));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_2);
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
  t = e_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_114 (ATerm), ATerm w_114 (ATerm))
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_114(t);
      t = w_114(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        t = w_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_123 (ATerm))
{
  ATerm l_44 = NULL;
  ATerm m_16;
  m_16 = t;
  {
    ATerm m_44 = NULL;
    ATerm n_44 = NULL;
    t = v_123(t);
    {
      m_44 = t;
      {
        if(((l_44 != NULL) && (l_44 != m_44)))
          _fail(m_44);
        else
          l_44 = m_44;
        {
          ATerm o_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_44), term_j_16);
          {
            ATerm n_16 = t;
            int o_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_16);
              }
            else
              {
                t = n_16;
                t = (ATerm) ATempty;
              }
            {
              o_44 = t;
              if(((n_44 != NULL) && (n_44 != o_44)))
                _fail(o_44);
              else
                n_44 = o_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_44), term_j_16, (ATerm) ATinsert(CheckATermList(not_null(n_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_123 (ATerm), ATerm y_123 (ATerm))
{
  t = begin_scope_1(t, x_123);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, x_123);
      return(t);
    }
    t = restore_always_2(t, y_123, a_3);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = term_a_8;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      t = term_i_15;
      return(t);
    }
    ATerm e_3 (ATerm t)
    {
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0(t);
          ;
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          {
            ATerm r_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = DeclareInline_0(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm x_16 = t;
                    int y_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = InlineCall0_0(t);
                        ;
                        LocalPopChoice(y_16);
                      }
                    else
                      {
                        t = x_16;
                        t = InlineCall_0(t);
                      }
                    return(t);
                  }
                  t = repeat_1(t, f_3);
                }
              }
          }
        }
      t = _all(t, inline_sdef_0);
      return(t);
    }
    t = scope_2(t, d_3, e_3);
    return(t);
  }
  t = scope_2(t, b_3, c_3);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_123 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym__2))
    {
      y_44 = ATgetArgument(x_44, 0);
      z_44 = ATgetArgument(x_44, 1);
      {
        ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
        ATerm c_17;
        c_17 = t;
        {
          ATerm j_45 = NULL;
          ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
          t = z_123(t);
          {
            j_45 = t;
            {
              if(((c_45 != NULL) && (c_45 != j_45)))
                _fail(j_45);
              else
                c_45 = j_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_45), not_null(y_44), not_null(z_44));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_17 = t;
                    int h_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_45), term_j_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_17);
                      }
                    else
                      {
                        t = e_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      k_45 = t;
                      v_44 :
                      if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                        {
                          l_45 = ATgetFirst((ATermList) k_45);
                          m_45 = (ATerm) ATgetNext((ATermList) k_45);
                          {
                            if(((d_45 != NULL) && (d_45 != l_45)))
                              _fail(l_45);
                            else
                              d_45 = l_45;
                            {
                              if(((e_45 != NULL) && (e_45 != m_45)))
                                _fail(m_45);
                              else
                                e_45 = m_45;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_45), term_j_16, (ATerm) ATinsert(CheckATermList(not_null(e_45)), (ATerm) ATinsert(CheckATermList(not_null(d_45)), not_null(y_44))));
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
        t = c_17;
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
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym_SDefT_4))
    {
      v_45 = ATgetArgument(u_45, 0);
      w_45 = ATgetArgument(u_45, 1);
      x_45 = ATgetArgument(u_45, 2);
      y_45 = ATgetArgument(u_45, 3);
      {
        ATerm i_17;
        i_17 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_j_17, not_null(u_45)));
          {
            ATerm g_3 (ATerm t)
            {
              t = term_a_8;
              return(t);
            }
            t = assert_1(t, g_3);
          }
        }
        t = i_17;
        {
          ATerm k_17;
          k_17 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_45)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, not_null(u_45)));
            {
              ATerm h_3 (ATerm t)
              {
                t = term_i_15;
                return(t);
              }
              t = assert_1(t, h_3);
            }
          }
          t = k_17;
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
  ATerm m_17 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_17;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm))
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_122(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
        g_46 = t;
        f_46 :
        if(((ATgetType(g_46) == AT_LIST) && !(ATisEmpty(g_46))))
          {
            h_46 = ATgetFirst((ATermList) g_46);
            i_46 = (ATerm) ATgetNext((ATermList) g_46);
            {
              ATerm l_46 = NULL,n_46 = NULL;
              ATerm v_17;
              v_17 = t;
              {
                ATerm m_46 = NULL;
                t = not_null(h_46);
                {
                  t = s_122(t);
                  {
                    m_46 = t;
                    if(((l_46 != NULL) && (l_46 != m_46)))
                      _fail(m_46);
                    else
                      l_46 = m_46;
                  }
                }
              }
              t = v_17;
              {
                ATerm o_46 = NULL;
                t = not_null(i_46);
                {
                  t = foldr_3(t, q_122, r_122, s_122);
                  {
                    o_46 = t;
                    if(((n_46 != NULL) && (n_46 != o_46)))
                      _fail(o_46);
                    else
                      n_46 = o_46;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_46), not_null(n_46));
                  t = r_122(t);
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
ATerm crush_3 (ATerm t, ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm))
{
  ATerm w_46 = NULL;
  ATerm d_47 = NULL;
  w_46 = t;
  {
    ATerm e_47 = NULL;
    ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
    t = not_null(w_46);
    {
      e_47 = t;
      {
        t = SSL_explode_term(not_null(e_47));
        {
          g_47 = t;
          v_46 :
          if(match_cons(g_47, sym__2))
            {
              h_47 = ATgetArgument(g_47, 0);
              i_47 = ATgetArgument(g_47, 1);
              if(((d_47 != NULL) && (d_47 != i_47)))
                _fail(i_47);
              else
                d_47 = i_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_47);
      t = foldr_3(t, o_120, p_120, q_120);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_3 (ATerm t)
      {
        t = term_i_8;
        return(t);
      }
      t = crush_3(t, i_3, add_0, term_size_0);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm m_47 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            t = term_i_8;
            return(t);
          }
          t = crush_3(t, j_3, add_0, m_47);
          return(t);
        }
        t = m_47(t);
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm q_100 (ATerm), ATerm r_100 (ATerm))
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
  y_47 = t;
  x_47 :
  if(match_cons(y_47, sym_Rec_2))
    {
      z_47 = ATgetArgument(y_47, 0);
      a_48 = ATgetArgument(y_47, 1);
      {
        ATerm e_48 = NULL,g_48 = NULL;
        ATerm f_48 = NULL;
        t = SSLgetAnnotations(not_null(y_47));
        {
          f_48 = t;
          if(((e_48 != NULL) && (e_48 != f_48)))
            _fail(f_48);
          else
            e_48 = f_48;
        }
        {
          t = not_null(z_47);
          {
            ATerm i_48 = NULL;
            t = q_100(t);
            {
              g_48 = t;
              {
                t = not_null(a_48);
                {
                  ATerm k_48 = NULL;
                  t = r_100(t);
                  {
                    i_48 = t;
                    {
                      ATerm l_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(g_48), not_null(i_48)), not_null(e_48));
                      {
                        l_48 = t;
                        if(((k_48 != NULL) && (k_48 != l_48)))
                          _fail(l_48);
                        else
                          k_48 = l_48;
                      }
                      t = not_null(k_48);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm))
{
  ATerm c_49 = NULL,g_49 = NULL,j_49 = NULL,k_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym_GuardedLChoice_3))
    {
      g_49 = ATgetArgument(c_49, 0);
      j_49 = ATgetArgument(c_49, 1);
      k_49 = ATgetArgument(c_49, 2);
      {
        ATerm p_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm t_49 = NULL;
            t = n_100(t);
            {
              r_49 = t;
              {
                t = not_null(j_49);
                {
                  ATerm v_49 = NULL;
                  t = o_100(t);
                  {
                    t_49 = t;
                    {
                      t = not_null(k_49);
                      {
                        ATerm x_49 = NULL;
                        t = p_100(t);
                        {
                          v_49 = t;
                          {
                            ATerm y_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(r_49), not_null(t_49), not_null(v_49)), not_null(p_49));
                            {
                              y_49 = t;
                              if(((x_49 != NULL) && (x_49 != y_49)))
                                _fail(y_49);
                              else
                                x_49 = y_49;
                            }
                            t = not_null(x_49);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm j_100 (ATerm), ATerm k_100 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  s_50 :
  if(match_cons(t_50, sym_LChoice_2))
    {
      u_50 = ATgetArgument(t_50, 0);
      v_50 = ATgetArgument(t_50, 1);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(u_50);
          {
            ATerm d_51 = NULL;
            t = j_100(t);
            {
              b_51 = t;
              {
                t = not_null(v_50);
                {
                  ATerm f_51 = NULL;
                  t = k_100(t);
                  {
                    d_51 = t;
                    {
                      ATerm g_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(b_51), not_null(d_51)), not_null(z_50));
                      {
                        g_51 = t;
                        if(((f_51 != NULL) && (f_51 != g_51)))
                          _fail(g_51);
                        else
                          f_51 = g_51;
                      }
                      t = not_null(f_51);
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
ATerm Choice_2 (ATerm t, ATerm h_99 (ATerm), ATerm i_99 (ATerm))
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(match_cons(s_51, sym_Choice_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      {
        ATerm y_51 = NULL,a_52 = NULL;
        ATerm z_51 = NULL;
        t = SSLgetAnnotations(not_null(s_51));
        {
          z_51 = t;
          if(((y_51 != NULL) && (y_51 != z_51)))
            _fail(z_51);
          else
            y_51 = z_51;
        }
        {
          t = not_null(t_51);
          {
            ATerm c_52 = NULL;
            t = h_99(t);
            {
              a_52 = t;
              {
                t = not_null(u_51);
                {
                  ATerm e_52 = NULL;
                  t = i_99(t);
                  {
                    c_52 = t;
                    {
                      ATerm f_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(a_52), not_null(c_52)), not_null(y_51));
                      {
                        f_52 = t;
                        if(((e_52 != NULL) && (e_52 != f_52)))
                          _fail(f_52);
                        else
                          e_52 = f_52;
                      }
                      t = not_null(e_52);
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
ATerm Cong_2 (ATerm t, ATerm g_95 (ATerm), ATerm h_95 (ATerm))
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  t_52 :
  if(match_cons(u_52, sym_Cong_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      {
        ATerm a_53 = NULL,c_53 = NULL;
        ATerm b_53 = NULL;
        t = SSLgetAnnotations(not_null(u_52));
        {
          b_53 = t;
          if(((a_53 != NULL) && (a_53 != b_53)))
            _fail(b_53);
          else
            a_53 = b_53;
        }
        {
          t = not_null(v_52);
          {
            ATerm e_53 = NULL;
            t = g_95(t);
            {
              c_53 = t;
              {
                t = not_null(w_52);
                {
                  ATerm g_53 = NULL;
                  t = h_95(t);
                  {
                    e_53 = t;
                    {
                      ATerm h_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(c_53), not_null(e_53)), not_null(a_53));
                      {
                        h_53 = t;
                        if(((g_53 != NULL) && (g_53 != h_53)))
                          _fail(h_53);
                        else
                          g_53 = h_53;
                      }
                      t = not_null(g_53);
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
ATerm Match_1 (ATerm t, ATerm a_100 (ATerm))
{
  ATerm f_54 = NULL,g_54 = NULL;
  f_54 = t;
  t_53 :
  if(match_cons(f_54, sym_Match_1))
    {
      g_54 = ATgetArgument(f_54, 0);
      {
        ATerm p_54 = NULL,r_54 = NULL;
        ATerm q_54 = NULL;
        t = SSLgetAnnotations(not_null(f_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
        {
          t = not_null(g_54);
          {
            ATerm v_54 = NULL;
            t = a_100(t);
            {
              r_54 = t;
              {
                ATerm w_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(r_54)), not_null(p_54));
                {
                  w_54 = t;
                  if(((v_54 != NULL) && (v_54 != w_54)))
                    _fail(w_54);
                  else
                    v_54 = w_54;
                }
                t = not_null(v_54);
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
ATerm Seq_2 (ATerm t, ATerm h_100 (ATerm), ATerm i_100 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_Seq_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      {
        ATerm n_55 = NULL,p_55 = NULL;
        ATerm o_55 = NULL;
        t = SSLgetAnnotations(not_null(h_55));
        {
          o_55 = t;
          if(((n_55 != NULL) && (n_55 != o_55)))
            _fail(o_55);
          else
            n_55 = o_55;
        }
        {
          t = not_null(i_55);
          {
            ATerm r_55 = NULL;
            t = h_100(t);
            {
              p_55 = t;
              {
                t = not_null(j_55);
                {
                  ATerm a_56 = NULL;
                  t = i_100(t);
                  {
                    r_55 = t;
                    {
                      ATerm b_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(p_55), not_null(r_55)), not_null(n_55));
                      {
                        b_56 = t;
                        if(((a_56 != NULL) && (a_56 != b_56)))
                          _fail(b_56);
                        else
                          a_56 = b_56;
                      }
                      t = not_null(a_56);
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
ATerm Scope_2 (ATerm t, ATerm d_100 (ATerm), ATerm e_100 (ATerm))
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  x_56 :
  if(match_cons(a_57, sym_Scope_2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      {
        ATerm g_57 = NULL,i_57 = NULL;
        ATerm h_57 = NULL;
        t = SSLgetAnnotations(not_null(a_57));
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
        {
          t = not_null(b_57);
          {
            ATerm n_57 = NULL;
            t = d_100(t);
            {
              i_57 = t;
              {
                t = not_null(c_57);
                {
                  ATerm p_57 = NULL;
                  t = e_100(t);
                  {
                    n_57 = t;
                    {
                      ATerm q_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_57), not_null(n_57)), not_null(g_57));
                      {
                        q_57 = t;
                        if(((p_57 != NULL) && (p_57 != q_57)))
                          _fail(q_57);
                        else
                          p_57 = q_57;
                      }
                      t = not_null(p_57);
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
ATerm Build_1 (ATerm t, ATerm b_100 (ATerm))
{
  ATerm c_58 = NULL,d_58 = NULL;
  c_58 = t;
  b_58 :
  if(match_cons(c_58, sym_Build_1))
    {
      d_58 = ATgetArgument(c_58, 0);
      {
        ATerm g_58 = NULL,i_58 = NULL;
        ATerm h_58 = NULL;
        t = SSLgetAnnotations(not_null(c_58));
        {
          h_58 = t;
          if(((g_58 != NULL) && (g_58 != h_58)))
            _fail(h_58);
          else
            g_58 = h_58;
        }
        {
          t = not_null(d_58);
          {
            ATerm k_58 = NULL;
            t = b_100(t);
            {
              i_58 = t;
              {
                ATerm l_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(i_58)), not_null(g_58));
                {
                  l_58 = t;
                  if(((k_58 != NULL) && (k_58 != l_58)))
                    _fail(l_58);
                  else
                    k_58 = l_58;
                }
                t = not_null(k_58);
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
ATerm SVar_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_SVar_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      {
        ATerm z_58 = NULL,b_59 = NULL;
        ATerm a_59 = NULL;
        t = SSLgetAnnotations(not_null(v_58));
        {
          a_59 = t;
          if(((z_58 != NULL) && (z_58 != a_59)))
            _fail(a_59);
          else
            z_58 = a_59;
        }
        {
          t = not_null(w_58);
          {
            ATerm d_59 = NULL;
            t = s_99(t);
            {
              b_59 = t;
              {
                ATerm e_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_59)), not_null(z_58));
                {
                  e_59 = t;
                  if(((d_59 != NULL) && (d_59 != e_59)))
                    _fail(e_59);
                  else
                    d_59 = e_59;
                }
                t = not_null(d_59);
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
ATerm PrimT_3 (ATerm t, ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm))
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
  q_59 = t;
  p_59 :
  if(match_cons(q_59, sym_PrimT_3))
    {
      r_59 = ATgetArgument(q_59, 0);
      s_59 = ATgetArgument(q_59, 1);
      t_59 = ATgetArgument(q_59, 2);
      {
        ATerm y_59 = NULL,a_60 = NULL;
        ATerm z_59 = NULL;
        t = SSLgetAnnotations(not_null(q_59));
        {
          z_59 = t;
          if(((y_59 != NULL) && (y_59 != z_59)))
            _fail(z_59);
          else
            y_59 = z_59;
        }
        {
          t = not_null(r_59);
          {
            ATerm c_60 = NULL;
            t = z_100(t);
            {
              a_60 = t;
              {
                t = not_null(s_59);
                {
                  ATerm e_60 = NULL;
                  t = a_101(t);
                  {
                    c_60 = t;
                    {
                      t = not_null(t_59);
                      {
                        ATerm g_60 = NULL;
                        t = b_101(t);
                        {
                          e_60 = t;
                          {
                            ATerm h_60 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(a_60), not_null(c_60), not_null(e_60)), not_null(y_59));
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
                      }
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
ATerm CallT_3 (ATerm t, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  v_60 = t;
  u_60 :
  if(match_cons(v_60, sym_CallT_3))
    {
      w_60 = ATgetArgument(v_60, 0);
      x_60 = ATgetArgument(v_60, 1);
      y_60 = ATgetArgument(v_60, 2);
      {
        ATerm d_61 = NULL,f_61 = NULL;
        ATerm e_61 = NULL;
        t = SSLgetAnnotations(not_null(v_60));
        {
          e_61 = t;
          if(((d_61 != NULL) && (d_61 != e_61)))
            _fail(e_61);
          else
            d_61 = e_61;
        }
        {
          t = not_null(w_60);
          {
            ATerm h_61 = NULL;
            t = x_99(t);
            {
              f_61 = t;
              {
                t = not_null(x_60);
                {
                  ATerm j_61 = NULL;
                  t = y_99(t);
                  {
                    h_61 = t;
                    {
                      t = not_null(y_60);
                      {
                        ATerm l_61 = NULL;
                        t = z_99(t);
                        {
                          j_61 = t;
                          {
                            ATerm m_61 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(f_61), not_null(h_61), not_null(j_61)), not_null(d_61));
                            {
                              m_61 = t;
                              if(((l_61 != NULL) && (l_61 != m_61)))
                                _fail(m_61);
                              else
                                l_61 = m_61;
                            }
                            t = not_null(l_61);
                          }
                        }
                      }
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
  ATerm x_61 = NULL;
  x_61 = t;
  w_61 :
  if(match_cons(x_61, sym_Fail_0))
    {
      ATerm z_61 = NULL,b_62 = NULL;
      ATerm y_17;
      y_17 = t;
      {
        ATerm a_62 = NULL;
        t = SSLgetAnnotations(not_null(x_61));
        {
          a_62 = t;
          if(((z_61 != NULL) && (z_61 != a_62)))
            _fail(a_62);
          else
            z_61 = a_62;
        }
      }
      t = y_17;
      {
        ATerm c_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(z_61));
        {
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
        }
        t = not_null(b_62);
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
  ATerm k_62 = NULL;
  k_62 = t;
  j_62 :
  if(match_cons(k_62, sym_Id_0))
    {
      ATerm m_62 = NULL,r_62 = NULL;
      ATerm f_18;
      f_18 = t;
      {
        ATerm q_62 = NULL;
        t = SSLgetAnnotations(not_null(k_62));
        {
          q_62 = t;
          if(((m_62 != NULL) && (m_62 != q_62)))
            _fail(q_62);
          else
            m_62 = q_62;
        }
      }
      t = f_18;
      {
        ATerm s_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(m_62));
        {
          s_62 = t;
          if(((r_62 != NULL) && (r_62 != s_62)))
            _fail(s_62);
          else
            r_62 = s_62;
        }
        t = not_null(r_62);
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
  ATerm z_62 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
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
              t = Fail_0(t);
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm k_18 = t;
                int p_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_3 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = CallT_3(t, k_3, _id, _id);
                    ;
                    LocalPopChoice(p_18);
                  }
                else
                  {
                    t = k_18;
                    {
                      ATerm q_18 = t;
                      int r_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_3 (ATerm t)
                          {
                            t = SVar_1(t, _id);
                            return(t);
                          }
                          t = PrimT_3(t, l_3, _id, _id);
                          ;
                          LocalPopChoice(r_18);
                        }
                      else
                        {
                          t = q_18;
                          {
                            ATerm s_18 = t;
                            int y_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1(t, _id);
                                ;
                                LocalPopChoice(y_18);
                              }
                            else
                              {
                                t = s_18;
                                {
                                  ATerm z_18 = t;
                                  int a_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1(t, _id);
                                      ;
                                      LocalPopChoice(a_19);
                                    }
                                  else
                                    {
                                      t = z_18;
                                      {
                                        ATerm b_19 = t;
                                        int c_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Seq_2(t, m_3, _id);
                                            ;
                                            LocalPopChoice(c_19);
                                          }
                                        else
                                          {
                                            t = b_19;
                                            {
                                              ATerm d_19 = t;
                                              int e_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_3 (ATerm t)
                                                  {
                                                    t = Match_1(t, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, n_3);
                                                  ;
                                                  LocalPopChoice(e_19);
                                                }
                                              else
                                                {
                                                  t = d_19;
                                                  {
                                                    ATerm k_19 = t;
                                                    int l_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm o_3 (ATerm t)
                                                        {
                                                          ATerm p_3 (ATerm t)
                                                          {
                                                            t = Match_1(t, _id);
                                                            return(t);
                                                          }
                                                          t = Seq_2(t, p_3, _id);
                                                          return(t);
                                                        }
                                                        t = Scope_2(t, _id, o_3);
                                                        ;
                                                        LocalPopChoice(l_19);
                                                      }
                                                    else
                                                      {
                                                        t = k_19;
                                                        {
                                                          ATerm r_19 = t;
                                                          int s_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_3 (ATerm t)
                                                              {
                                                                ATerm r_3 (ATerm t)
                                                                {
                                                                  ATerm s_3 (ATerm t)
                                                                  {
                                                                    t = Match_1(t, _id);
                                                                    return(t);
                                                                  }
                                                                  t = Seq_2(t, s_3, _id);
                                                                  return(t);
                                                                }
                                                                t = Scope_2(t, _id, r_3);
                                                                return(t);
                                                              }
                                                              t = Seq_2(t, q_3, _id);
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
                                                                    t = Cong_2(t, _id, _id);
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
                                                                          t = Choice_2(t, z_62, z_62);
                                                                          ;
                                                                          LocalPopChoice(w_19);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_19;
                                                                          {
                                                                            ATerm x_19 = t;
                                                                            int f_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = LChoice_2(t, z_62, z_62);
                                                                                ;
                                                                                LocalPopChoice(f_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = x_19;
                                                                                {
                                                                                  ATerm g_20 = t;
                                                                                  int h_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = GuardedLChoice_3(t, z_62, z_62, z_62);
                                                                                      ;
                                                                                      LocalPopChoice(h_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_20;
                                                                                      t = Rec_2(t, _id, _id);
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = z_62(t);
  {
    ATerm i_20;
    i_20 = t;
    {
      ATerm x_62 = NULL;
      ATerm y_62 = NULL;
      t = term_size_0(t);
      {
        y_62 = t;
        if(((x_62 != NULL) && (x_62 != y_62)))
          _fail(y_62);
        else
          x_62 = y_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_62), term_j_20);
        t = leq_0(t);
      }
    }
    t = i_20;
  }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm))
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  j_63 = t;
  i_63 :
  if(match_cons(j_63, sym_SDefT_4))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      m_63 = ATgetArgument(j_63, 2);
      n_63 = ATgetArgument(j_63, 3);
      {
        ATerm t_63 = NULL,v_63 = NULL;
        ATerm u_63 = NULL;
        t = SSLgetAnnotations(not_null(j_63));
        {
          u_63 = t;
          if(((t_63 != NULL) && (t_63 != u_63)))
            _fail(u_63);
          else
            t_63 = u_63;
        }
        {
          t = not_null(k_63);
          {
            ATerm x_63 = NULL;
            t = l_102(t);
            {
              v_63 = t;
              {
                t = not_null(l_63);
                {
                  ATerm z_63 = NULL;
                  t = m_102(t);
                  {
                    x_63 = t;
                    {
                      t = not_null(m_63);
                      {
                        ATerm b_64 = NULL;
                        t = n_102(t);
                        {
                          z_63 = t;
                          {
                            t = not_null(n_63);
                            {
                              ATerm d_64 = NULL;
                              t = o_102(t);
                              {
                                b_64 = t;
                                {
                                  ATerm e_64 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(v_63), not_null(x_63), not_null(z_63), not_null(b_64)), not_null(t_63));
                                  {
                                    e_64 = t;
                                    if(((d_64 != NULL) && (d_64 != e_64)))
                                      _fail(e_64);
                                    else
                                      d_64 = e_64;
                                  }
                                  t = not_null(d_64);
                                }
                              }
                            }
                          }
                        }
                      }
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
  ATerm u_64 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm b_65 = NULL;
    ATerm k_20 = t;
    if((PushChoice() == 0))
      {
        ATerm a_65 = NULL;
        a_65 = t;
        p_64 :
        if(!(match_string(a_65, "main_0_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_20;
      }
    {
      b_65 = t;
      if(((u_64 != NULL) && (u_64 != b_65)))
        _fail(b_65);
      else
        u_64 = b_65;
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm l_20;
    l_20 = t;
    {
      ATerm m_20 = t;
      if((PushChoice() == 0))
        {
          ATerm v_3 (ATerm t)
          {
            ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
            c_65 = t;
            s_64 :
            if(match_cons(c_65, sym_CallT_3))
              {
                d_65 = ATgetArgument(c_65, 0);
                f_65 = ATgetArgument(c_65, 1);
                g_65 = ATgetArgument(c_65, 2);
                t_64 :
                if(match_cons(d_65, sym_SVar_1))
                  {
                    e_65 = ATgetArgument(d_65, 0);
                    if(((u_64 != NULL) && (u_64 != e_65)))
                      _fail(e_65);
                    else
                      u_64 = e_65;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, v_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_20;
        }
    }
    t = l_20;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDefT_4(t, t_3, _id, _id, u_3);
  return(t);
}
ATerm AsMatchWld_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  k_65 :
  if(match_cons(m_65, sym_As_2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      l_65 :
      if(match_cons(n_65, sym_Wld_0))
        {
          t = not_null(o_65);
        }
      else
        {
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
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  v_65 = t;
  s_65 :
  if(match_cons(v_65, sym__2))
    {
      w_65 = ATgetArgument(v_65, 0);
      y_65 = ATgetArgument(v_65, 1);
      t_65 :
      if(match_cons(w_65, sym_Match_1))
        {
          x_65 = ATgetArgument(w_65, 0);
          u_65 :
          if(match_cons(y_65, sym_Build_1))
            {
              z_65 = ATgetArgument(y_65, 0);
              {
                if(((x_65 != NULL) && (x_65 != z_65)))
                  _fail(z_65);
                else
                  x_65 = z_65;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_65));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  n_66 = t;
  j_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      q_66 = ATgetArgument(n_66, 1);
      l_66 :
      if(match_cons(o_66, sym_Build_1))
        {
          p_66 = ATgetArgument(o_66, 0);
          m_66 :
          if(match_cons(q_66, sym_Match_1))
            {
              r_66 = ATgetArgument(q_66, 0);
              {
                if(((p_66 != NULL) && (p_66 != r_66)))
                  _fail(r_66);
                else
                  p_66 = r_66;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_66));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  v_66 :
  if(match_cons(y_66, sym__2))
    {
      z_66 = ATgetArgument(y_66, 0);
      b_67 = ATgetArgument(y_66, 1);
      w_66 :
      if(match_cons(z_66, sym_Match_1))
        {
          a_67 = ATgetArgument(z_66, 0);
          x_66 :
          if(match_cons(b_67, sym_Match_1))
            {
              c_67 = ATgetArgument(b_67, 0);
              {
                if(((a_67 != NULL) && (a_67 != c_67)))
                  _fail(c_67);
                else
                  a_67 = c_67;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(a_67));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
  o_67 = t;
  i_67 :
  if(match_cons(o_67, sym__2))
    {
      p_67 = ATgetArgument(o_67, 0);
      r_67 = ATgetArgument(o_67, 1);
      j_67 :
      if(match_cons(p_67, sym_Build_1))
        {
          q_67 = ATgetArgument(p_67, 0);
          k_67 :
          if(match_cons(r_67, sym_Where_1))
            {
              s_67 = ATgetArgument(r_67, 0);
              l_67 :
              if(match_cons(s_67, sym_Prim_2))
                {
                  m_67 = ATgetArgument(s_67, 0);
                  n_67 = ATgetArgument(s_67, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_67), not_null(n_67));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(r_67, sym_Prim_2))
                {
                  s_67 = ATgetArgument(r_67, 0);
                  t_67 = ATgetArgument(r_67, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(s_67), not_null(t_67));
                }
              else
                {
                  if(match_cons(r_67, sym_PrimT_3))
                    {
                      s_67 = ATgetArgument(r_67, 0);
                      t_67 = ATgetArgument(r_67, 1);
                      u_67 = ATgetArgument(r_67, 2);
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(s_67), not_null(t_67), not_null(u_67));
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
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  m_68 = t;
  j_68 :
  if(match_cons(m_68, sym__2))
    {
      n_68 = ATgetArgument(m_68, 0);
      p_68 = ATgetArgument(m_68, 1);
      k_68 :
      if(match_cons(n_68, sym_Build_1))
        {
          o_68 = ATgetArgument(n_68, 0);
          l_68 :
          if(match_cons(p_68, sym_Build_1))
            {
              q_68 = ATgetArgument(p_68, 0);
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_68));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  b_69 = t;
  a_69 :
  if(match_cons(b_69, sym__2))
    {
      c_69 = ATgetArgument(b_69, 0);
      d_69 = ATgetArgument(b_69, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_69)), not_null(c_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  p_69 = t;
  m_69 :
  if(match_cons(p_69, sym__2))
    {
      q_69 = ATgetArgument(p_69, 0);
      t_69 = ATgetArgument(p_69, 1);
      n_69 :
      if(((ATgetType(q_69) == AT_LIST) && !(ATisEmpty(q_69))))
        {
          r_69 = ATgetFirst((ATermList) q_69);
          s_69 = (ATerm) ATgetNext((ATermList) q_69);
          o_69 :
          if(((ATgetType(t_69) == AT_LIST) && !(ATisEmpty(t_69))))
            {
              u_69 = ATgetFirst((ATermList) t_69);
              v_69 = (ATerm) ATgetNext((ATermList) t_69);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_69), not_null(u_69)), (ATerm) ATmakeAppl(sym__2, not_null(s_69), not_null(v_69)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  c_70 :
  if(match_cons(y_70, sym__2))
    {
      z_70 = ATgetArgument(y_70, 0);
      a_71 = ATgetArgument(y_70, 1);
      n_70 :
      if(((ATgetType(z_70) == AT_LIST) && ATisEmpty(z_70)))
        {
          o_70 :
          if(((ATgetType(a_71) == AT_LIST) && ATisEmpty(a_71)))
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
ATerm genzip_4 (ATerm t, ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm))
{
  ATerm k_71 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_116(t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          t = b_116(t);
          {
            t = _2(t, d_116, k_71);
            t = c_116(t);
          }
        }
      }
    return(t);
  }
  t = k_71(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_116 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_116);
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  u_71 = t;
  p_71 :
  if(match_cons(u_71, sym__2))
    {
      v_71 = ATgetArgument(u_71, 0);
      z_71 = ATgetArgument(u_71, 1);
      q_71 :
      if(match_cons(v_71, sym_Build_1))
        {
          w_71 = ATgetArgument(v_71, 0);
          r_71 :
          if(match_cons(w_71, sym_Op_2))
            {
              x_71 = ATgetArgument(w_71, 0);
              y_71 = ATgetArgument(w_71, 1);
              s_71 :
              if(match_cons(z_71, sym_Match_1))
                {
                  a_72 = ATgetArgument(z_71, 0);
                  t_71 :
                  if(match_cons(a_72, sym_Op_2))
                    {
                      b_72 = ATgetArgument(a_72, 0);
                      c_72 = ATgetArgument(a_72, 1);
                      {
                        ATerm f_72 = NULL,g_72 = NULL;
                        if(((x_71 != NULL) && (x_71 != b_72)))
                          _fail(b_72);
                        else
                          x_71 = b_72;
                        {
                          if(((f_72 != NULL) && (f_72 != c_72)))
                            _fail(c_72);
                          else
                            f_72 = c_72;
                          {
                            ATerm m_72 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_71), not_null(f_72));
                            {
                              ATerm w_3 (ATerm t)
                              {
                                ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
                                h_72 = t;
                                n_71 :
                                if(match_cons(h_72, sym__2))
                                  {
                                    i_72 = ATgetArgument(h_72, 0);
                                    j_72 = ATgetArgument(h_72, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_72)), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_72)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, w_3);
                              {
                                m_72 = t;
                                if(((g_72 != NULL) && (g_72 != m_72)))
                                  _fail(m_72);
                                else
                                  g_72 = m_72;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(g_72)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(y_71))));
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
ATerm eq_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  r_72 :
  if(match_cons(s_72, sym__2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      if(((t_72 != NULL) && (t_72 != u_72)))
        _fail(u_72);
      else
        t_72 = u_72;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  d_73 = t;
  y_72 :
  if(match_cons(d_73, sym__2))
    {
      e_73 = ATgetArgument(d_73, 0);
      i_73 = ATgetArgument(d_73, 1);
      z_72 :
      if(match_cons(e_73, sym_Build_1))
        {
          f_73 = ATgetArgument(e_73, 0);
          a_73 :
          if(match_cons(f_73, sym_Op_2))
            {
              g_73 = ATgetArgument(f_73, 0);
              h_73 = ATgetArgument(f_73, 1);
              b_73 :
              if(match_cons(i_73, sym_Match_1))
                {
                  j_73 = ATgetArgument(i_73, 0);
                  c_73 :
                  if(match_cons(j_73, sym_Op_2))
                    {
                      k_73 = ATgetArgument(j_73, 0);
                      l_73 = ATgetArgument(j_73, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), not_null(k_73));
                        {
                          ATerm p_20 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = p_20;
                            }
                        }
                        t = term_t_20;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm u_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = u_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
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
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = d_21;
                  {
                    ATerm f_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0(t);
                        ;
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = f_21;
                        {
                          ATerm h_21 = t;
                          int i_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchIdem_0(t);
                              ;
                              LocalPopChoice(i_21);
                            }
                          else
                            {
                              t = h_21;
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatchIdem_0(t);
                                    ;
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
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
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  ATerm m_74 (ATerm t)
  {
    ATerm j_74 = NULL;
    ATerm k_74 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), not_null(b_74));
    {
      t = BMF_0(t);
      {
        k_74 = t;
        if(((j_74 != NULL) && (j_74 != k_74)))
          _fail(k_74);
        else
          j_74 = k_74;
      }
    }
    t = not_null(j_74);
    return(t);
  }
  z_73 = t;
  v_73 :
  if(match_cons(z_73, sym_Seq_2))
    {
      a_74 = ATgetArgument(z_73, 0);
      b_74 = ATgetArgument(z_73, 1);
      w_73 :
      if(match_cons(b_74, sym_Seq_2))
        {
          x_73 = ATgetArgument(b_74, 0);
          y_73 = ATgetArgument(b_74, 1);
          {
            ATerm l_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_74 = NULL;
                ATerm g_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), not_null(x_73));
                {
                  t = BMF_0(t);
                  {
                    g_74 = t;
                    if(((f_74 != NULL) && (f_74 != g_74)))
                      _fail(g_74);
                    else
                      f_74 = g_74;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_74), not_null(y_73));
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = l_21;
                t = m_74(t);
              }
          }
        }
      else
        {
          t = m_74(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm p_74 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = _one(t, p_74);
      }
    return(t);
  }
  t = p_74(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  g_75 = t;
  w_74 :
  if(match_cons(g_75, sym_Let_2))
    {
      h_75 = ATgetArgument(g_75, 0);
      o_75 = ATgetArgument(g_75, 1);
      x_74 :
      if(((ATgetType(h_75) == AT_LIST) && !(ATisEmpty(h_75))))
        {
          i_75 = ATgetFirst((ATermList) h_75);
          n_75 = (ATerm) ATgetNext((ATermList) h_75);
          y_74 :
          if(match_cons(i_75, sym_SDefT_4))
            {
              j_75 = ATgetArgument(i_75, 0);
              k_75 = ATgetArgument(i_75, 1);
              l_75 = ATgetArgument(i_75, 2);
              m_75 = ATgetArgument(i_75, 3);
              z_74 :
              if(((ATgetType(k_75) == AT_LIST) && ATisEmpty(k_75)))
                {
                  a_75 :
                  if(((ATgetType(l_75) == AT_LIST) && ATisEmpty(l_75)))
                    {
                      b_75 :
                      if(((ATgetType(n_75) == AT_LIST) && ATisEmpty(n_75)))
                        {
                          c_75 :
                          if(match_cons(o_75, sym_CallT_3))
                            {
                              p_75 = ATgetArgument(o_75, 0);
                              r_75 = ATgetArgument(o_75, 1);
                              s_75 = ATgetArgument(o_75, 2);
                              d_75 :
                              if(match_cons(p_75, sym_SVar_1))
                                {
                                  q_75 = ATgetArgument(p_75, 0);
                                  e_75 :
                                  if(((ATgetType(r_75) == AT_LIST) && ATisEmpty(r_75)))
                                    {
                                      f_75 :
                                      if(((ATgetType(s_75) == AT_LIST) && ATisEmpty(s_75)))
                                        {
                                          {
                                            if(((j_75 != NULL) && (j_75 != q_75)))
                                              _fail(q_75);
                                            else
                                              j_75 = q_75;
                                            {
                                              t = not_null(m_75);
                                              {
                                                ATerm v_21 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm x_3 (ATerm t)
                                                    {
                                                      ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,m_77 = NULL,n_77 = NULL;
                                                      v_75 = t;
                                                      s_74 :
                                                      if(match_cons(v_75, sym_CallT_3))
                                                        {
                                                          w_75 = ATgetArgument(v_75, 0);
                                                          m_77 = ATgetArgument(v_75, 1);
                                                          n_77 = ATgetArgument(v_75, 2);
                                                          t_74 :
                                                          if(match_cons(w_75, sym_SVar_1))
                                                            {
                                                              x_75 = ATgetArgument(w_75, 0);
                                                              u_74 :
                                                              if(((ATgetType(m_77) == AT_LIST) && ATisEmpty(m_77)))
                                                                {
                                                                  v_74 :
                                                                  if(((ATgetType(n_77) == AT_LIST) && ATisEmpty(n_77)))
                                                                    {
                                                                      if(((j_75 != NULL) && (j_75 != x_75)))
                                                                        _fail(x_75);
                                                                      else
                                                                        j_75 = x_75;
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
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
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = v_21;
                                                  }
                                              }
                                              t = not_null(m_75);
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
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  t_77 = t;
  r_77 :
  if(match_cons(t_77, sym_Let_2))
    {
      u_77 = ATgetArgument(t_77, 0);
      v_77 = ATgetArgument(t_77, 1);
      s_77 :
      if(((ATgetType(u_77) == AT_LIST) && ATisEmpty(u_77)))
        {
          t = not_null(v_77);
        }
      else
        {
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
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  z_77 :
  if(match_cons(b_78, sym_Scope_2))
    {
      c_78 = ATgetArgument(b_78, 0);
      d_78 = ATgetArgument(b_78, 1);
      a_78 :
      if(((ATgetType(c_78) == AT_LIST) && ATisEmpty(c_78)))
        {
          t = not_null(d_78);
        }
      else
        {
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
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  m_78 :
  if(match_cons(z_78, sym_Where_1))
    {
      a_79 = ATgetArgument(z_78, 0);
      n_78 :
      if(match_cons(a_79, sym_Seq_2))
        {
          y_78 = ATgetArgument(a_79, 0);
          u_78 = ATgetArgument(a_79, 1);
          o_78 :
          if(match_cons(y_78, sym_Where_1))
            {
              t_78 = ATgetArgument(y_78, 0);
              p_78 :
              if(match_cons(u_78, sym_Seq_2))
                {
                  v_78 = ATgetArgument(u_78, 0);
                  x_78 = ATgetArgument(u_78, 1);
                  q_78 :
                  if(match_cons(v_78, sym_Build_1))
                    {
                      w_78 = ATgetArgument(v_78, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_78)), not_null(x_78))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(a_79, sym_Where_1))
            {
              y_78 = ATgetArgument(a_79, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_78));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(z_78, sym_Test_1))
        {
          a_79 = ATgetArgument(z_78, 0);
          r_78 :
          if(match_cons(a_79, sym_Test_1))
            {
              y_78 = ATgetArgument(a_79, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_78));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(z_78, sym_Not_1))
            {
              a_79 = ATgetArgument(z_78, 0);
              s_78 :
              if(match_cons(a_79, sym_Not_1))
                {
                  y_78 = ATgetArgument(a_79, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(y_78));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(z_78, sym_LChoice_2))
                {
                  a_79 = ATgetArgument(z_78, 0);
                  b_79 = ATgetArgument(z_78, 1);
                  {
                    if(((a_79 != NULL) && (a_79 != b_79)))
                      _fail(b_79);
                    else
                      a_79 = b_79;
                    t = not_null(a_79);
                  }
                }
              else
                {
                  if(match_cons(z_78, sym_Choice_2))
                    {
                      a_79 = ATgetArgument(z_78, 0);
                      b_79 = ATgetArgument(z_78, 1);
                      {
                        if(((a_79 != NULL) && (a_79 != b_79)))
                          _fail(b_79);
                        else
                          a_79 = b_79;
                        t = not_null(a_79);
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
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  y_79 = t;
  t_79 :
  if(match_cons(y_79, sym_LChoice_2))
    {
      z_79 = ATgetArgument(y_79, 0);
      c_80 = ATgetArgument(y_79, 1);
      u_79 :
      if(match_cons(z_79, sym_LChoice_2))
        {
          a_80 = ATgetArgument(z_79, 0);
          b_80 = ATgetArgument(z_79, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_80), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_80), not_null(c_80)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_79, sym_Seq_2))
        {
          z_79 = ATgetArgument(y_79, 0);
          c_80 = ATgetArgument(y_79, 1);
          w_79 :
          if(match_cons(z_79, sym_Seq_2))
            {
              a_80 = ATgetArgument(z_79, 0);
              b_80 = ATgetArgument(z_79, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_80), not_null(c_80)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(y_79, sym_Choice_2))
            {
              z_79 = ATgetArgument(y_79, 0);
              c_80 = ATgetArgument(y_79, 1);
              x_79 :
              if(match_cons(z_79, sym_Choice_2))
                {
                  a_80 = ATgetArgument(z_79, 0);
                  b_80 = ATgetArgument(z_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_80), (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_80), not_null(c_80)));
                }
              else
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
  ATerm r_80 = NULL,s_80 = NULL;
  r_80 = t;
  q_80 :
  if(match_cons(r_80, sym_DefaultVarDec_1))
    {
      s_80 = ATgetArgument(r_80, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_80), term_c_22);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL;
  x_80 = t;
  w_80 :
  if(match_cons(x_80, sym_DefaultVarDec_1))
    {
      y_80 = ATgetArgument(x_80, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_80), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_22), term_c_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, o_0, _id);
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            t = map1_1(t, o_0);
            return(t);
          }
          t = try_1(t, z_3);
          return(t);
        }
        t = Cons_2(t, _id, y_3);
      }
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = e_22;
      {
        ATerm a_4 (ATerm t)
        {
          t = map1_1(t, o_0);
          return(t);
        }
        t = Cons_2(t, _id, a_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
  e_82 = t;
  w_81 :
  if(match_cons(e_82, sym_Lets_2))
    {
      f_82 = ATgetArgument(e_82, 0);
      g_82 = ATgetArgument(e_82, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_82), not_null(g_82));
    }
  else
    {
      if(match_cons(e_82, sym_LChoices_1))
        {
          f_82 = ATgetArgument(e_82, 0);
          x_81 :
          if(((ATgetType(f_82) == AT_LIST) && !(ATisEmpty(f_82))))
            {
              a_82 = ATgetFirst((ATermList) f_82);
              b_82 = (ATerm) ATgetNext((ATermList) f_82);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_82), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(b_82)));
            }
          else
            {
              if(((ATgetType(f_82) == AT_LIST) && ATisEmpty(f_82)))
                {
                  t = term_t_20;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(e_82, sym_Choices_1))
            {
              f_82 = ATgetArgument(e_82, 0);
              y_81 :
              if(((ATgetType(f_82) == AT_LIST) && !(ATisEmpty(f_82))))
                {
                  a_82 = ATgetFirst((ATermList) f_82);
                  b_82 = (ATerm) ATgetNext((ATermList) f_82);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_82), (ATerm) ATmakeAppl(sym_Choices_1, not_null(b_82)));
                }
              else
                {
                  if(((ATgetType(f_82) == AT_LIST) && ATisEmpty(f_82)))
                    {
                      t = term_t_20;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(e_82, sym_Seqs_1))
                {
                  f_82 = ATgetArgument(e_82, 0);
                  z_81 :
                  if(((ATgetType(f_82) == AT_LIST) && !(ATisEmpty(f_82))))
                    {
                      a_82 = ATgetFirst((ATermList) f_82);
                      b_82 = (ATerm) ATgetNext((ATermList) f_82);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_82), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_82)));
                    }
                  else
                    {
                      if(((ATgetType(f_82) == AT_LIST) && ATisEmpty(f_82)))
                        {
                          t = term_j_22;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(e_82, sym_RDefT_4))
                    {
                      f_82 = ATgetArgument(e_82, 0);
                      g_82 = ATgetArgument(e_82, 1);
                      d_82 = ATgetArgument(e_82, 2);
                      c_82 = ATgetArgument(e_82, 3);
                      {
                        ATerm t_82 = NULL,u_82 = NULL;
                        ATerm v_82 = NULL;
                        t = not_null(g_82);
                        {
                          ATerm w_82 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            v_82 = t;
                            {
                              if(((t_82 != NULL) && (t_82 != v_82)))
                                _fail(v_82);
                              else
                                t_82 = v_82;
                              {
                                t = not_null(d_82);
                                {
                                  ATerm b_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, b_4);
                                  {
                                    w_82 = t;
                                    if(((u_82 != NULL) && (u_82 != w_82)))
                                      _fail(w_82);
                                    else
                                      u_82 = w_82;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(f_82), not_null(t_82), not_null(u_82), not_null(c_82));
                      }
                    }
                  else
                    {
                      if(match_cons(e_82, sym_SDefT_4))
                        {
                          f_82 = ATgetArgument(e_82, 0);
                          g_82 = ATgetArgument(e_82, 1);
                          d_82 = ATgetArgument(e_82, 2);
                          c_82 = ATgetArgument(e_82, 3);
                          {
                            ATerm k_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_83 = NULL,c_83 = NULL;
                                ATerm d_83 = NULL;
                                t = not_null(d_82);
                                {
                                  ATerm e_83 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    d_83 = t;
                                    {
                                      if(((b_83 != NULL) && (b_83 != d_83)))
                                        _fail(d_83);
                                      else
                                        b_83 = d_83;
                                      {
                                        t = not_null(g_82);
                                        {
                                          ATerm c_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, c_4);
                                          {
                                            e_83 = t;
                                            if(((c_83 != NULL) && (c_83 != e_83)))
                                              _fail(e_83);
                                            else
                                              c_83 = e_83;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(f_82), not_null(c_83), not_null(b_83), not_null(c_82));
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = k_22;
                                {
                                  ATerm j_83 = NULL,k_83 = NULL;
                                  ATerm l_83 = NULL;
                                  t = not_null(g_82);
                                  {
                                    ATerm m_83 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      l_83 = t;
                                      {
                                        if(((j_83 != NULL) && (j_83 != l_83)))
                                          _fail(l_83);
                                        else
                                          j_83 = l_83;
                                        {
                                          t = not_null(d_82);
                                          {
                                            ATerm d_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, d_4);
                                            {
                                              m_83 = t;
                                              if(((k_83 != NULL) && (k_83 != m_83)))
                                                _fail(m_83);
                                              else
                                                k_83 = m_83;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(f_82), not_null(j_83), not_null(k_83), not_null(c_82));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(e_82, sym_InfixApp_3))
                            {
                              f_82 = ATgetArgument(e_82, 0);
                              g_82 = ATgetArgument(e_82, 1);
                              d_82 = ATgetArgument(e_82, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_82), (ATerm) ATmakeAppl(sym_Op_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_82)), not_null(f_82))));
                            }
                          else
                            {
                              if(match_cons(e_82, sym_BAM_3))
                                {
                                  f_82 = ATgetArgument(e_82, 0);
                                  g_82 = ATgetArgument(e_82, 1);
                                  d_82 = ATgetArgument(e_82, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_82))), not_null(f_82)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_82))));
                                }
                              else
                                {
                                  if(match_cons(e_82, sym_AM_2))
                                    {
                                      f_82 = ATgetArgument(e_82, 0);
                                      g_82 = ATgetArgument(e_82, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_82), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_82)));
                                    }
                                  else
                                    {
                                      if(match_cons(e_82, sym_MA_2))
                                        {
                                          f_82 = ATgetArgument(e_82, 0);
                                          g_82 = ATgetArgument(e_82, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_82)), not_null(g_82));
                                        }
                                      else
                                        {
                                          if(match_cons(e_82, sym_BA_2))
                                            {
                                              f_82 = ATgetArgument(e_82, 0);
                                              g_82 = ATgetArgument(e_82, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_82)), not_null(f_82));
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
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  r_85 = t;
  p_85 :
  if(match_cons(r_85, sym_GuardedLChoice_3))
    {
      s_85 = ATgetArgument(r_85, 0);
      t_85 = ATgetArgument(r_85, 1);
      u_85 = ATgetArgument(r_85, 2);
      q_85 :
      if(match_cons(u_85, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_85), not_null(t_85));
        }
      else
        {
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
  ATerm h_87 = NULL,i_87 = NULL;
  h_87 = t;
  f_87 :
  if(match_cons(h_87, sym_Where_1))
    {
      i_87 = ATgetArgument(h_87, 0);
      g_87 :
      if(match_cons(i_87, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  l_87 :
  if(match_cons(n_87, sym_LChoice_2))
    {
      o_87 = ATgetArgument(n_87, 0);
      p_87 = ATgetArgument(n_87, 1);
      m_87 :
      if(match_cons(p_87, sym_Fail_0))
        {
          t = not_null(o_87);
        }
      else
        {
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
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  v_87 = t;
  t_87 :
  if(match_cons(v_87, sym_LChoice_2))
    {
      w_87 = ATgetArgument(v_87, 0);
      x_87 = ATgetArgument(v_87, 1);
      u_87 :
      if(match_cons(w_87, sym_Fail_0))
        {
          t = not_null(x_87);
        }
      else
        {
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
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  b_88 :
  if(match_cons(d_88, sym_Choice_2))
    {
      e_88 = ATgetArgument(d_88, 0);
      f_88 = ATgetArgument(d_88, 1);
      c_88 :
      if(match_cons(f_88, sym_Fail_0))
        {
          t = not_null(e_88);
        }
      else
        {
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
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
  l_88 = t;
  j_88 :
  if(match_cons(l_88, sym_Choice_2))
    {
      m_88 = ATgetArgument(l_88, 0);
      n_88 = ATgetArgument(l_88, 1);
      k_88 :
      if(match_cons(m_88, sym_Fail_0))
        {
          t = not_null(n_88);
        }
      else
        {
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
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_Cong_2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      {
        t = not_null(v_88);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm y_88 = NULL;
            y_88 = t;
            r_88 :
            if(!(match_cons(y_88, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, e_4);
        }
        t = term_t_20;
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
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  b_89 :
  if(match_cons(d_89, sym_Path_2))
    {
      e_89 = ATgetArgument(d_89, 0);
      f_89 = ATgetArgument(d_89, 1);
      c_89 :
      if(match_cons(f_89, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm l_89 = NULL,m_89 = NULL;
  l_89 = t;
  j_89 :
  if(match_cons(l_89, sym_One_1))
    {
      m_89 = ATgetArgument(l_89, 0);
      k_89 :
      if(match_cons(m_89, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm r_89 = NULL,s_89 = NULL;
  r_89 = t;
  p_89 :
  if(match_cons(r_89, sym_Some_1))
    {
      s_89 = ATgetArgument(r_89, 0);
      q_89 :
      if(match_cons(s_89, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  b_90 :
  if(match_cons(d_90, sym_Rec_2))
    {
      e_90 = ATgetArgument(d_90, 0);
      f_90 = ATgetArgument(d_90, 1);
      c_90 :
      if(match_cons(f_90, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
  l_90 = t;
  j_90 :
  if(match_cons(l_90, sym_Scope_2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      k_90 :
      if(match_cons(n_90, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  r_90 :
  if(match_cons(t_90, sym_Seq_2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      s_90 :
      if(match_cons(u_90, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm b_91 = NULL,c_91 = NULL;
  b_91 = t;
  z_90 :
  if(match_cons(b_91, sym_Not_1))
    {
      c_91 = ATgetArgument(b_91, 0);
      a_91 :
      if(match_cons(c_91, sym_Fail_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm h_91 = NULL,i_91 = NULL;
  h_91 = t;
  f_91 :
  if(match_cons(h_91, sym_Test_1))
    {
      i_91 = ATgetArgument(h_91, 0);
      g_91 :
      if(match_cons(i_91, sym_Fail_0))
        {
          t = term_t_20;
        }
      else
        {
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
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
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
                        t = F5_0(t);
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
                              t = F6_0(t);
                              ;
                              LocalPopChoice(c_23);
                            }
                          else
                            {
                              t = b_23;
                              {
                                ATerm d_23 = t;
                                int i_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(i_23);
                                  }
                                else
                                  {
                                    t = d_23;
                                    {
                                      ATerm j_23 = t;
                                      int k_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(k_23);
                                        }
                                      else
                                        {
                                          t = j_23;
                                          {
                                            ATerm l_23 = t;
                                            int m_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(m_23);
                                              }
                                            else
                                              {
                                                t = l_23;
                                                {
                                                  ATerm t_23 = t;
                                                  int u_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(u_23);
                                                    }
                                                  else
                                                    {
                                                      t = t_23;
                                                      {
                                                        ATerm v_23 = t;
                                                        int w_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_23);
                                                                }
                                                              else
                                                                {
                                                                  t = x_23;
                                                                  {
                                                                    ATerm c_24 = t;
                                                                    int d_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(d_24);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_24;
                                                                        {
                                                                          ATerm e_24 = t;
                                                                          int i_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(i_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_24;
                                                                              {
                                                                                ATerm j_24 = t;
                                                                                int k_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(k_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_24;
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
  ATerm n_91 = NULL,o_91 = NULL;
  n_91 = t;
  l_91 :
  if(match_cons(n_91, sym_Match_1))
    {
      o_91 = ATgetArgument(n_91, 0);
      m_91 :
      if(match_cons(o_91, sym_Wld_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm t_91 = NULL,u_91 = NULL;
  t_91 = t;
  r_91 :
  if(match_cons(t_91, sym_Where_1))
    {
      u_91 = ATgetArgument(t_91, 0);
      s_91 :
      if(match_cons(u_91, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm z_91 = NULL,a_92 = NULL;
  z_91 = t;
  x_91 :
  if(match_cons(z_91, sym_All_1))
    {
      a_92 = ATgetArgument(z_91, 0);
      y_91 :
      if(match_cons(a_92, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
  f_92 = t;
  d_92 :
  if(match_cons(f_92, sym_Rec_2))
    {
      g_92 = ATgetArgument(f_92, 0);
      h_92 = ATgetArgument(f_92, 1);
      e_92 :
      if(match_cons(h_92, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm r_92 = NULL,s_92 = NULL,y_92 = NULL;
  r_92 = t;
  l_92 :
  if(match_cons(r_92, sym_Scope_2))
    {
      s_92 = ATgetArgument(r_92, 0);
      y_92 = ATgetArgument(r_92, 1);
      m_92 :
      if(match_cons(y_92, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  e_93 = t;
  c_93 :
  if(match_cons(e_93, sym_LChoice_2))
    {
      f_93 = ATgetArgument(e_93, 0);
      g_93 = ATgetArgument(e_93, 1);
      d_93 :
      if(match_cons(f_93, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  k_93 :
  if(match_cons(m_93, sym_Seq_2))
    {
      n_93 = ATgetArgument(m_93, 0);
      o_93 = ATgetArgument(m_93, 1);
      l_93 :
      if(match_cons(o_93, sym_Id_0))
        {
          t = not_null(n_93);
        }
      else
        {
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
  ATerm u_93 = NULL,x_93 = NULL,y_93 = NULL;
  u_93 = t;
  s_93 :
  if(match_cons(u_93, sym_Seq_2))
    {
      x_93 = ATgetArgument(u_93, 0);
      y_93 = ATgetArgument(u_93, 1);
      t_93 :
      if(match_cons(x_93, sym_Id_0))
        {
          t = not_null(y_93);
        }
      else
        {
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
  ATerm e_94 = NULL,f_94 = NULL;
  e_94 = t;
  c_94 :
  if(match_cons(e_94, sym_Not_1))
    {
      f_94 = ATgetArgument(e_94, 0);
      d_94 :
      if(match_cons(f_94, sym_Id_0))
        {
          t = term_t_20;
        }
      else
        {
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
  ATerm k_94 = NULL,l_94 = NULL;
  k_94 = t;
  i_94 :
  if(match_cons(k_94, sym_Test_1))
    {
      l_94 = ATgetArgument(k_94, 0);
      j_94 :
      if(match_cons(l_94, sym_Id_0))
        {
          t = term_j_22;
        }
      else
        {
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
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm r_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = r_24;
            {
              ATerm u_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(z_24);
                }
              else
                {
                  t = u_24;
                  {
                    ATerm a_25 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = a_25;
                        {
                          ATerm d_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm f_25 = t;
                                int k_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(k_25);
                                  }
                                else
                                  {
                                    t = f_25;
                                    {
                                      ATerm l_25 = t;
                                      int m_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(m_25);
                                        }
                                      else
                                        {
                                          t = l_25;
                                          {
                                            ATerm o_25 = t;
                                            int w_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(w_25);
                                              }
                                            else
                                              {
                                                t = o_25;
                                                {
                                                  ATerm x_25 = t;
                                                  int y_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(y_25);
                                                    }
                                                  else
                                                    {
                                                      t = x_25;
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
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm e_26 = t;
              int f_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(f_26);
                }
              else
                {
                  t = e_26;
                  {
                    ATerm h_26 = t;
                    int p_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(p_26);
                      }
                    else
                      {
                        t = h_26;
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm v_26 = t;
                                int b_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(b_27);
                                  }
                                else
                                  {
                                    t = v_26;
                                    {
                                      ATerm h_27 = t;
                                      int i_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(i_27);
                                        }
                                      else
                                        {
                                          t = h_27;
                                          {
                                            ATerm j_27 = t;
                                            int k_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(k_27);
                                              }
                                            else
                                              {
                                                t = j_27;
                                                {
                                                  ATerm l_27 = t;
                                                  int m_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatch_0(t);
                                                      ;
                                                      LocalPopChoice(m_27);
                                                    }
                                                  else
                                                    {
                                                      t = l_27;
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
ATerm repeat_1 (ATerm t, ATerm j_128 (ATerm))
{
  ATerm n_94 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      t = j_128(t);
      t = n_94(t);
      return(t);
    }
    t = try_1(t, f_4);
    return(t);
  }
  t = n_94(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm q_111 (ATerm))
{
  t = q_111(t);
  {
    ATerm g_4 (ATerm t)
    {
      t = downup_1(t, q_111);
      return(t);
    }
    t = _all(t, g_4);
    t = q_111(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, h_4);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm j_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, j_4);
    }
    return(t);
  }
  t = map_1(t, i_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_95 (ATerm))
{
  ATerm t_94 = NULL,u_94 = NULL;
  t_94 = t;
  s_94 :
  if(match_cons(t_94, sym_Strategies_1))
    {
      u_94 = ATgetArgument(t_94, 0);
      {
        ATerm x_94 = NULL,z_94 = NULL;
        ATerm y_94 = NULL;
        t = SSLgetAnnotations(not_null(t_94));
        {
          y_94 = t;
          if(((x_94 != NULL) && (x_94 != y_94)))
            _fail(y_94);
          else
            x_94 = y_94;
        }
        {
          t = not_null(u_94);
          {
            ATerm b_95 = NULL;
            t = k_95(t);
            {
              z_94 = t;
              {
                ATerm c_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_94)), not_null(x_94));
                {
                  c_95 = t;
                  if(((b_95 != NULL) && (b_95 != c_95)))
                    _fail(c_95);
                  else
                    b_95 = c_95;
                }
                t = not_null(b_95);
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
ATerm Specification_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm s_95 = NULL,t_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym_Specification_1))
    {
      t_95 = ATgetArgument(s_95, 0);
      {
        ATerm w_95 = NULL,y_95 = NULL;
        ATerm x_95 = NULL;
        t = SSLgetAnnotations(not_null(s_95));
        {
          x_95 = t;
          if(((w_95 != NULL) && (w_95 != x_95)))
            _fail(x_95);
          else
            w_95 = x_95;
        }
        {
          t = not_null(t_95);
          {
            ATerm a_96 = NULL;
            t = p_95(t);
            {
              y_95 = t;
              {
                ATerm b_96 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_95)), not_null(w_95));
                {
                  b_96 = t;
                  if(((a_96 != NULL) && (a_96 != b_96)))
                    _fail(b_96);
                  else
                    a_96 = b_96;
                }
                t = not_null(a_96);
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
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, m_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, l_4);
    return(t);
  }
  t = Specification_1(t, k_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm))
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL;
  m_96 = t;
  l_96 :
  if(match_cons(m_96, sym__2))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      {
        ATerm s_96 = NULL,u_96 = NULL;
        ATerm t_96 = NULL;
        t = SSLgetAnnotations(not_null(m_96));
        {
          t_96 = t;
          if(((s_96 != NULL) && (s_96 != t_96)))
            _fail(t_96);
          else
            s_96 = t_96;
        }
        {
          t = not_null(n_96);
          {
            ATerm w_96 = NULL;
            t = v_93(t);
            {
              u_96 = t;
              {
                t = not_null(o_96);
                {
                  ATerm y_96 = NULL;
                  t = w_93(t);
                  {
                    w_96 = t;
                    {
                      ATerm z_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_96), not_null(w_96)), not_null(s_96));
                      {
                        z_96 = t;
                        if(((y_96 != NULL) && (y_96 != z_96)))
                          _fail(z_96);
                        else
                          y_96 = z_96;
                      }
                      t = not_null(y_96);
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
  ATerm n_27;
  n_27 = t;
  {
    ATerm g_97 = NULL;
    ATerm h_97 = NULL;
    t = term_h_15;
    {
      t = whoami_0(t);
      {
        h_97 = t;
        if(((g_97 != NULL) && (g_97 != h_97)))
          _fail(h_97);
        else
          g_97 = h_97;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_27), not_null(g_97)), term_x_27));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_27;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  l_97 = t;
  k_97 :
  if(match_cons(l_97, sym__2))
    {
      m_97 = ATgetArgument(l_97, 0);
      n_97 = ATgetArgument(l_97, 1);
      {
        ATerm b_28;
        b_28 = t;
        t = SSL_printnl(not_null(m_97), not_null(n_97));
        t = b_28;
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
  ATerm s_97 = NULL;
  s_97 = t;
  t = SSL_implode_string(not_null(s_97));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
        x_97 = t;
        w_97 :
        if(((ATgetType(x_97) == AT_LIST) && !(ATisEmpty(x_97))))
          {
            y_97 = ATgetFirst((ATermList) x_97);
            z_97 = (ATerm) ATgetNext((ATermList) x_97);
            {
              t = not_null(y_97);
              {
                ATerm n_4 (ATerm t)
                {
                  t = not_null(z_97);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_4);
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
  ATerm j_98 = NULL;
  ATerm l_98 = NULL;
  j_98 = t;
  {
    ATerm m_98 = NULL;
    ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
    t = not_null(j_98);
    {
      m_98 = t;
      {
        t = SSL_explode_term(not_null(m_98));
        {
          o_98 = t;
          h_98 :
          if(match_cons(o_98, sym__2))
            {
              p_98 = ATgetArgument(o_98, 0);
              q_98 = ATgetArgument(o_98, 1);
              i_98 :
              if(match_string(p_98, ""))
                {
                  if(((l_98 != NULL) && (l_98 != q_98)))
                    _fail(q_98);
                  else
                    l_98 = q_98;
                }
              else
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
      t = not_null(l_98);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_118 (ATerm))
{
  ATerm y_98 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_98);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        {
          t = Nil_0(t);
          t = f_118(t);
        }
      }
    return(t);
  }
  t = y_98(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
  c_99 = t;
  b_99 :
  if(match_cons(c_99, sym__2))
    {
      d_99 = ATgetArgument(c_99, 0);
      e_99 = ATgetArgument(c_99, 1);
      {
        t = not_null(d_99);
        {
          ATerm o_4 (ATerm t)
          {
            t = not_null(e_99);
            return(t);
          }
          t = at_end_1(t, o_4);
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
  ATerm j_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = j_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_99 = NULL;
  l_99 = t;
  t = SSL_explode_string(not_null(l_99));
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
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm p_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_4);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm c_100 = NULL,f_100 = NULL,g_100 = NULL;
              c_100 = t;
              w_99 :
              if(match_cons(c_100, sym_Path_1))
                {
                  f_100 = ATgetArgument(c_100, 0);
                  t = not_null(f_100);
                }
              else
                {
                  if(match_cons(c_100, sym_Var_1))
                    {
                      f_100 = ATgetArgument(c_100, 0);
                      {
                        t = not_null(f_100);
                        {
                          ATerm x_28 = t;
                          int y_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_28);
                            }
                          else
                            {
                              t = x_28;
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  t = term_z_28;
                                  return(t);
                                }
                                t = debug_1(t, q_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_100, sym_Prefix_2))
                        {
                          f_100 = ATgetArgument(c_100, 0);
                          g_100 = ATgetArgument(c_100, 1);
                          {
                            ATerm u_100 = NULL,w_100 = NULL;
                            ATerm a_29;
                            a_29 = t;
                            {
                              ATerm v_100 = NULL;
                              t = not_null(f_100);
                              {
                                t = eval_config_0(t);
                                {
                                  v_100 = t;
                                  if(((u_100 != NULL) && (u_100 != v_100)))
                                    _fail(v_100);
                                  else
                                    u_100 = v_100;
                                }
                              }
                            }
                            t = a_29;
                            {
                              ATerm x_100 = NULL;
                              t = not_null(g_100);
                              {
                                t = eval_config_0(t);
                                {
                                  x_100 = t;
                                  if(((w_100 != NULL) && (w_100 != x_100)))
                                    _fail(x_100);
                                  else
                                    w_100 = x_100;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_100), not_null(w_100));
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
  ATerm i_101 = NULL;
  i_101 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(i_101));
    {
      t = table_get_0(t);
      {
        ATerm r_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_29;
            c_29 = t;
            {
              ATerm k_101 = NULL;
              ATerm l_101 = NULL;
              l_101 = t;
              if(((k_101 != NULL) && (k_101 != l_101)))
                _fail(l_101);
              else
                k_101 = l_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_29, not_null(i_101), not_null(k_101));
                t = table_put_0(t);
              }
            }
            t = c_29;
          }
          return(t);
        }
        t = try_1(t, r_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_131 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm d_29;
    d_29 = t;
    {
      ATerm p_101 = NULL;
      ATerm q_101 = NULL;
      t = term_e_29;
      {
        t = get_config_0(t);
        {
          q_101 = t;
          if(((p_101 != NULL) && (p_101 != q_101)))
            _fail(q_101);
          else
            p_101 = q_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_101), term_f_29);
        t = geq_0(t);
      }
    }
    t = d_29;
    t = t_131(t);
    return(t);
  }
  t = try_1(t, s_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  w_101 = t;
  u_101 :
  if(match_cons(w_101, sym__2))
    {
      x_101 = ATgetArgument(w_101, 0);
      y_101 = ATgetArgument(w_101, 1);
      v_101 :
      if(match_cons(y_101, sym_Stream_1))
        {
          z_101 = ATgetArgument(y_101, 0);
          {
            ATerm c_102 = NULL;
            t = SSL_fputc(not_null(x_101), not_null(z_101));
            {
              ATerm d_102 = NULL;
              d_102 = t;
              if(((c_102 != NULL) && (c_102 != d_102)))
                _fail(d_102);
              else
                c_102 = d_102;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_102));
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
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  r_102 = t;
  p_102 :
  if(match_cons(r_102, sym__2))
    {
      s_102 = ATgetArgument(r_102, 0);
      u_102 = ATgetArgument(r_102, 1);
      q_102 :
      if(match_cons(s_102, sym_Stream_1))
        {
          t_102 = ATgetArgument(s_102, 0);
          {
            ATerm x_102 = NULL;
            t = SSL_write_term_to_stream_text(not_null(t_102), not_null(u_102));
            {
              ATerm y_102 = NULL;
              y_102 = t;
              if(((x_102 != NULL) && (x_102 != y_102)))
                _fail(y_102);
              else
                x_102 = y_102;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_102));
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
  ATerm t_4 (ATerm t)
  {
    ATerm c_103 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm d_103 = NULL;
      d_103 = t;
      if(((c_103 != NULL) && (c_103 != d_103)))
        _fail(d_103);
      else
        c_103 = d_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_29, not_null(c_103));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, t_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
  j_103 = t;
  h_103 :
  if(match_cons(j_103, sym__2))
    {
      k_103 = ATgetArgument(j_103, 0);
      m_103 = ATgetArgument(j_103, 1);
      i_103 :
      if(match_cons(k_103, sym_Stream_1))
        {
          l_103 = ATgetArgument(k_103, 0);
          {
            ATerm p_103 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(l_103), not_null(m_103));
            {
              ATerm q_103 = NULL;
              q_103 = t;
              if(((p_103 != NULL) && (p_103 != q_103)))
                _fail(q_103);
              else
                p_103 = q_103;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_103));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_138 (ATerm))
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
  x_103 = t;
  w_103 :
  if(match_cons(x_103, sym__2))
    {
      y_103 = ATgetArgument(x_103, 0);
      z_103 = ATgetArgument(x_103, 1);
      {
        ATerm c_104 = NULL,e_104 = NULL;
        t = not_null(y_103);
        {
          ATerm d_104 = NULL;
          d_104 = t;
          if(((c_104 != NULL) && (c_104 != d_104)))
            _fail(d_104);
          else
            c_104 = d_104;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_104), term_h_29);
            {
              t = open_stream_0(t);
              {
                ATerm f_104 = NULL;
                f_104 = t;
                if(((e_104 != NULL) && (e_104 != f_104)))
                  _fail(f_104);
                else
                  e_104 = f_104;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_104), not_null(z_103));
                  {
                    t = x_138(t);
                    {
                      t = fclose_0(t);
                      t = not_null(z_103);
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
  ATerm n_104 = NULL;
  ATerm i_29;
  i_29 = t;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            ATerm o_104 = NULL,p_104 = NULL;
            o_104 = t;
            k_104 :
            if(match_cons(o_104, sym_Output_1))
              {
                p_104 = ATgetArgument(o_104, 0);
                if(((n_104 != NULL) && (n_104 != p_104)))
                  _fail(p_104);
                else
                  n_104 = p_104;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_4);
          ;
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          {
            ATerm q_104 = NULL;
            t = term_o_29;
            {
              q_104 = t;
              if(((n_104 != NULL) && (n_104 != q_104)))
                _fail(q_104);
              else
                n_104 = q_104;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_4, _id);
  }
  t = i_29;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        t = not_null(n_104);
        return(t);
      }
      t = split_2(t, x_4, _id);
      return(t);
    }
    t = _2(t, _id, w_4);
    {
      ATerm p_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            ATerm z_4 (ATerm t)
            {
              ATerm r_104 = NULL;
              r_104 = t;
              m_104 :
              if(!(match_cons(r_104, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_4);
            return(t);
          }
          t = _2(t, y_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = p_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_133 (ATerm))
{
  ATerm x_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL;
  ATerm w_29;
  w_29 = t;
  t = dtime_0(t);
  t = w_29;
  {
    t = m_133(t);
    {
      ATerm x_29;
      x_29 = t;
      {
        ATerm y_104 = NULL;
        t = dtime_0(t);
        {
          y_104 = t;
          if(((x_104 != NULL) && (x_104 != y_104)))
            _fail(y_104);
          else
            x_104 = y_104;
        }
      }
      t = x_29;
      {
        z_104 = t;
        w_104 :
        if(match_cons(z_104, sym__2))
          {
            a_105 = ATgetArgument(z_104, 0);
            b_105 = ATgetArgument(z_104, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_105)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_104))), not_null(b_105));
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
  ATerm j_105 = NULL,k_105 = NULL;
  ATerm q_105 (ATerm t)
  {
    t = SSL_fclose(not_null(k_105));
    return(t);
  }
  k_105 = t;
  i_105 :
  if(match_cons(k_105, sym_Stream_1))
    {
      j_105 = ATgetArgument(k_105, 0);
      {
        ATerm b_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(j_105));
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = b_30;
            t = q_105(t);
          }
      }
    }
  else
    {
      t = q_105(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym_Stream_1))
    {
      u_105 = ATgetArgument(t_105, 0);
      t = SSL_read_term_from_stream(not_null(u_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_138 (ATerm))
{
  ATerm f_30;
  f_30 = t;
  {
    ATerm z_105 = NULL,b_106 = NULL;
    ATerm j_30;
    j_30 = t;
    {
      ATerm a_106 = NULL;
      t = j_138(t);
      {
        a_106 = t;
        if(((z_105 != NULL) && (z_105 != a_106)))
          _fail(a_106);
        else
          z_105 = a_106;
      }
    }
    t = j_30;
    {
      ATerm c_106 = NULL;
      c_106 = t;
      if(((b_106 != NULL) && (b_106 != c_106)))
        _fail(c_106);
      else
        b_106 = c_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_106)), not_null(z_105)));
        t = printnl_0(t);
      }
    }
  }
  t = f_30;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
  i_106 = t;
  h_106 :
  if(match_cons(i_106, sym__2))
    {
      j_106 = ATgetArgument(i_106, 0);
      k_106 = ATgetArgument(i_106, 1);
      {
        ATerm n_106 = NULL;
        t = SSL_fopen(not_null(j_106), not_null(k_106));
        {
          ATerm o_106 = NULL;
          o_106 = t;
          if(((n_106 != NULL) && (n_106 != o_106)))
            _fail(o_106);
          else
            n_106 = o_106;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_106));
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
  ATerm s_106 = NULL;
  s_106 = t;
  t = SSL_is_string(not_null(s_106));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm w_106 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_106 = NULL;
    x_106 = t;
    if(((w_106 != NULL) && (w_106 != x_106)))
      _fail(x_106);
    else
      w_106 = x_106;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_106));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_107 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_107 = NULL;
    b_107 = t;
    if(((a_107 != NULL) && (a_107 != b_107)))
      _fail(b_107);
    else
      a_107 = b_107;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_107));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm e_107 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_107 = NULL;
    f_107 = t;
    if(((e_107 != NULL) && (e_107 != f_107)))
      _fail(f_107);
    else
      e_107 = f_107;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_107));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_107 = NULL;
  l_107 = t;
  k_107 :
  if(match_cons(l_107, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_107, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_107, sym_stdin_0))
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
  ATerm v_107 = NULL;
  ATerm x_107 = NULL,y_107 = NULL;
  v_107 = t;
  {
    ATerm z_107 = NULL;
    ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL;
    t = not_null(v_107);
    {
      z_107 = t;
      {
        t = SSL_explode_term(not_null(z_107));
        {
          d_108 = t;
          s_107 :
          if(match_cons(d_108, sym__2))
            {
              e_108 = ATgetArgument(d_108, 0);
              f_108 = ATgetArgument(d_108, 1);
              t_107 :
              if(match_string(e_108, ""))
                {
                  u_107 :
                  if(((ATgetType(f_108) == AT_LIST) && !(ATisEmpty(f_108))))
                    {
                      g_108 = ATgetFirst((ATermList) f_108);
                      h_108 = (ATerm) ATgetNext((ATermList) f_108);
                      {
                        if(((y_107 != NULL) && (y_107 != g_108)))
                          _fail(g_108);
                        else
                          y_107 = g_108;
                        if(((x_107 != NULL) && (x_107 != h_108)))
                          _fail(h_108);
                        else
                          x_107 = h_108;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(y_107);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
  p_108 = t;
  o_108 :
  if(match_cons(p_108, sym__2))
    {
      q_108 = ATgetArgument(p_108, 0);
      r_108 = ATgetArgument(p_108, 1);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm s_108 = NULL,t_108 = NULL;
                    s_108 = t;
                    n_108 :
                    if(match_cons(s_108, sym_Path_1))
                      {
                        t_108 = ATgetArgument(s_108, 0);
                        t = not_null(t_108);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, a_5, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = o_30;
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
  ATerm b_109 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_108 = NULL;
      ATerm a_109 = NULL;
      a_109 = t;
      if(((z_108 != NULL) && (z_108 != a_109)))
        _fail(a_109);
      else
        z_108 = a_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_108), term_s_30);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm b_5 (ATerm t)
        {
          t = term_t_30;
          return(t);
        }
        t = debug_1(t, b_5);
        _fail(t);
      }
    }
  {
    ATerm u_30;
    u_30 = t;
    {
      ATerm c_109 = NULL;
      t = read_from_stream_0(t);
      {
        c_109 = t;
        if(((b_109 != NULL) && (b_109 != c_109)))
          _fail(c_109);
        else
          b_109 = c_109;
      }
    }
    t = u_30;
    {
      t = fclose_0(t);
      t = not_null(b_109);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_115 (ATerm), ATerm b_115 (ATerm))
{
  ATerm h_109 = NULL,j_109 = NULL;
  ATerm v_30;
  v_30 = t;
  {
    ATerm i_109 = NULL;
    t = a_115(t);
    {
      i_109 = t;
      if(((h_109 != NULL) && (h_109 != i_109)))
        _fail(i_109);
      else
        h_109 = i_109;
    }
  }
  t = v_30;
  {
    ATerm k_109 = NULL;
    t = b_115(t);
    {
      k_109 = t;
      if(((j_109 != NULL) && (j_109 != k_109)))
        _fail(k_109);
      else
        j_109 = k_109;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_109), not_null(j_109));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_109 = NULL;
  ATerm w_30;
  w_30 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm r_109 = NULL,w_109 = NULL;
          r_109 = t;
          o_109 :
          if(match_cons(r_109, sym_Input_1))
            {
              w_109 = ATgetArgument(r_109, 0);
              if(((q_109 != NULL) && (q_109 != w_109)))
                _fail(w_109);
              else
                q_109 = w_109;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_5);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm x_109 = NULL;
          t = term_z_30;
          {
            x_109 = t;
            if(((q_109 != NULL) && (q_109 != x_109)))
              _fail(x_109);
            else
              q_109 = x_109;
          }
        }
      }
  }
  t = w_30;
  {
    ATerm d_5 (ATerm t)
    {
      t = not_null(q_109);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_5);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm c_110 = NULL;
    c_110 = t;
    a_110 :
    if(!(match_string(c_110, "-k")))
      {
        if(!(match_string(c_110, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm a_31;
    a_31 = t;
    {
      ATerm d_110 = NULL;
      ATerm e_110 = NULL;
      t = string_to_int_0(t);
      {
        e_110 = t;
        if(((d_110 != NULL) && (d_110 != e_110)))
          _fail(e_110);
        else
          d_110 = e_110;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_31, not_null(d_110));
        t = set_config_0(t);
      }
    }
    t = a_31;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_h_31;
    return(t);
  }
  t = ArgOption_3(t, e_5, f_5, g_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_110 = NULL;
  h_110 = t;
  t = SSL_string_to_int(not_null(h_110));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 (ATerm t)
      {
        ATerm x_110 = NULL;
        x_110 = t;
        k_110 :
        if(!(match_string(x_110, "-S")))
          {
            if(!(match_string(x_110, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = term_m_31;
        t = set_config_0(t);
        t = term_n_31;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = term_o_31;
        return(t);
      }
      t = Option_3(t, h_5, i_5, j_5);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = i_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              ATerm y_110 = NULL;
              y_110 = t;
              l_110 :
              if(!(match_string(y_110, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_5 (ATerm t)
            {
              ATerm b_111 = NULL;
              ATerm r_31;
              r_31 = t;
              {
                ATerm z_110 = NULL;
                ATerm a_111 = NULL;
                t = string_to_int_0(t);
                {
                  a_111 = t;
                  if(((z_110 != NULL) && (z_110 != a_111)))
                    _fail(a_111);
                  else
                    z_110 = a_111;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_29, not_null(z_110));
                  t = set_config_0(t);
                }
              }
              t = r_31;
              {
                ATerm c_111 = NULL;
                c_111 = t;
                if(((b_111 != NULL) && (b_111 != c_111)))
                  _fail(c_111);
                else
                  b_111 = c_111;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_111));
              }
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              t = term_s_31;
              return(t);
            }
            t = ArgOption_3(t, k_5, l_5, m_5);
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            {
              ATerm n_5 (ATerm t)
              {
                ATerm d_111 = NULL;
                d_111 = t;
                w_110 :
                if(!(match_string(d_111, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                t = term_u_31;
                t = set_config_0(t);
                t = term_v_31;
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = term_a_32;
                return(t);
              }
              t = Option_3(t, n_5, o_5, p_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = b_32;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm j_111 = NULL;
    j_111 = t;
    g_111 :
    if(!(match_string(j_111, "-o")))
      {
        if(!(match_string(j_111, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm m_111 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm k_111 = NULL;
      ATerm l_111 = NULL;
      l_111 = t;
      if(((k_111 != NULL) && (k_111 != l_111)))
        _fail(l_111);
      else
        k_111 = l_111;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_32, not_null(k_111));
        t = set_config_0(t);
      }
    }
    t = n_32;
    {
      ATerm n_111 = NULL;
      n_111 = t;
      if(((m_111 != NULL) && (m_111 != n_111)))
        _fail(n_111);
      else
        m_111 = n_111;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_111));
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_p_32;
    return(t);
  }
  t = ArgOption_3(t, q_5, s_5, t_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm t_111 = NULL;
          t_111 = t;
          s_111 :
          if(!(match_string(t_111, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = term_a_33;
          t = set_config_0(t);
          t = term_b_33;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_c_33;
          return(t);
        }
        t = Option_3(t, u_5, y_5, z_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
  z_111 = t;
  x_111 :
  if(match_string(z_111, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(z_111) == AT_LIST) && !(ATisEmpty(z_111))))
        {
          a_112 = ATgetFirst((ATermList) z_111);
          b_112 = (ATerm) ATgetNext((ATermList) z_111);
          y_111 :
          if(((ATgetType(b_112) == AT_LIST) && !(ATisEmpty(b_112))))
            {
              c_112 = ATgetFirst((ATermList) b_112);
              d_112 = (ATerm) ATgetNext((ATermList) b_112);
              {
                ATerm h_112 = NULL;
                ATerm d_33;
                d_33 = t;
                {
                  t = not_null(a_112);
                  t = j_0(t);
                }
                t = d_33;
                {
                  ATerm i_112 = NULL;
                  t = not_null(c_112);
                  {
                    t = l_0(t);
                    {
                      i_112 = t;
                      if(((h_112 != NULL) && (h_112 != i_112)))
                        _fail(i_112);
                      else
                        h_112 = i_112;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_112)), not_null(h_112));
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
  ATerm a_6 (ATerm t)
  {
    ATerm p_112 = NULL;
    p_112 = t;
    m_112 :
    if(!(match_string(p_112, "-i")))
      {
        if(!(match_string(p_112, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm u_112 = NULL;
    ATerm o_33;
    o_33 = t;
    {
      ATerm q_112 = NULL;
      ATerm r_112 = NULL;
      r_112 = t;
      if(((q_112 != NULL) && (q_112 != r_112)))
        _fail(r_112);
      else
        q_112 = r_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_33, not_null(q_112));
        t = set_config_0(t);
      }
    }
    t = o_33;
    {
      ATerm v_112 = NULL;
      v_112 = t;
      if(((u_112 != NULL) && (u_112 != v_112)))
        _fail(v_112);
      else
        u_112 = v_112;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_112));
    }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_r_33;
    return(t);
  }
  t = ArgOption_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = s_33;
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
  ATerm z_112 = NULL;
  t = report_run_time_0(t);
  {
    ATerm a_113 = NULL;
    t = term_h_15;
    {
      t = whoami_0(t);
      {
        a_113 = t;
        if(((z_112 != NULL) && (z_112 != a_113)))
          _fail(a_113);
        else
          z_112 = a_113;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATinsert(ATempty, term_a_34), not_null(z_112)));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
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
  ATerm d_113 = NULL;
  d_113 = t;
  t = SSL_TicksToSeconds(not_null(d_113));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL;
  i_113 = t;
  h_113 :
  if(match_cons(i_113, sym__2))
    {
      j_113 = ATgetArgument(i_113, 0);
      k_113 = ATgetArgument(i_113, 1);
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_113), not_null(k_113));
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            t = SSL_addr(not_null(j_113), not_null(k_113));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_122 (ATerm), ATerm p_122 (ATerm))
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_122(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
        r_113 = t;
        q_113 :
        if(((ATgetType(r_113) == AT_LIST) && !(ATisEmpty(r_113))))
          {
            s_113 = ATgetFirst((ATermList) r_113);
            t_113 = (ATerm) ATgetNext((ATermList) r_113);
            {
              ATerm w_113 = NULL;
              ATerm x_113 = NULL;
              t = not_null(t_113);
              {
                t = foldr_2(t, o_122, p_122);
                {
                  x_113 = t;
                  if(((w_113 != NULL) && (w_113 != x_113)))
                    _fail(x_113);
                  else
                    w_113 = x_113;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_113), not_null(w_113));
                t = p_122(t);
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
ATerm crush_2 (ATerm t, ATerm m_120 (ATerm), ATerm n_120 (ATerm))
{
  ATerm e_114 = NULL;
  ATerm h_114 = NULL;
  e_114 = t;
  {
    ATerm i_114 = NULL;
    ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
    t = not_null(e_114);
    {
      i_114 = t;
      {
        t = SSL_explode_term(not_null(i_114));
        {
          k_114 = t;
          d_114 :
          if(match_cons(k_114, sym__2))
            {
              l_114 = ATgetArgument(k_114, 0);
              m_114 = ATgetArgument(k_114, 1);
              if(((h_114 != NULL) && (h_114 != m_114)))
                _fail(m_114);
              else
                h_114 = m_114;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_114);
      t = foldr_2(t, m_120, n_120);
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
    ATerm d_6 (ATerm t)
    {
      t = term_h_8;
      return(t);
    }
    t = crush_2(t, d_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  s_114 = t;
  r_114 :
  if(match_cons(s_114, sym__2))
    {
      t_114 = ATgetArgument(s_114, 0);
      u_114 = ATgetArgument(s_114, 1);
      {
        ATerm l_34;
        l_34 = t;
        {
          ATerm n_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_114), not_null(u_114));
              ;
              LocalPopChoice(p_34);
            }
          else
            {
              t = n_34;
              t = SSL_gtr(not_null(t_114), not_null(u_114));
            }
        }
        t = l_34;
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
  ATerm e_115 = NULL;
  ATerm q_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL;
      f_115 = t;
      d_115 :
      if(match_cons(f_115, sym__2))
        {
          g_115 = ATgetArgument(f_115, 0);
          h_115 = ATgetArgument(f_115, 1);
          {
            if(((e_115 != NULL) && (e_115 != g_115)))
              _fail(g_115);
            else
              e_115 = g_115;
            if(((e_115 != NULL) && (e_115 != h_115)))
              _fail(h_115);
            else
              e_115 = h_115;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = q_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_131 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm x_34;
    x_34 = t;
    {
      ATerm k_115 = NULL;
      ATerm l_115 = NULL;
      t = term_e_29;
      {
        t = get_config_0(t);
        {
          l_115 = t;
          if(((k_115 != NULL) && (k_115 != l_115)))
            _fail(l_115);
          else
            k_115 = l_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_115), term_i_8);
        t = geq_0(t);
      }
    }
    t = x_34;
    t = s_131(t);
    return(t);
  }
  t = try_1(t, e_6);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm p_115 = NULL,r_115 = NULL;
    ATerm y_34;
    y_34 = t;
    {
      ATerm q_115 = NULL;
      t = run_time_0(t);
      {
        q_115 = t;
        if(((p_115 != NULL) && (p_115 != q_115)))
          _fail(q_115);
        else
          p_115 = q_115;
      }
    }
    t = y_34;
    {
      ATerm s_115 = NULL;
      t = term_h_15;
      {
        t = whoami_0(t);
        {
          s_115 = t;
          if(((r_115 != NULL) && (r_115 != s_115)))
            _fail(s_115);
          else
            r_115 = s_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_35), not_null(p_115)), term_z_34), not_null(r_115)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_115 = NULL;
  z_115 = t;
  y_115 :
  if(match_cons(z_115, sym_Version_0))
    {
      ATerm h_116 = NULL,j_116 = NULL;
      ATerm f_35;
      f_35 = t;
      {
        ATerm i_116 = NULL;
        t = SSLgetAnnotations(not_null(z_115));
        {
          i_116 = t;
          if(((h_116 != NULL) && (h_116 != i_116)))
            _fail(i_116);
          else
            h_116 = i_116;
        }
      }
      t = f_35;
      {
        ATerm k_116 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_116));
        {
          k_116 = t;
          if(((j_116 != NULL) && (j_116 != k_116)))
            _fail(k_116);
          else
            j_116 = k_116;
        }
        t = not_null(j_116);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_134 (ATerm))
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_35;
      t = get_config_0(t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm g_6 (ATerm t)
        {
          ATerm k_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(n_35);
            }
          else
            {
              t = k_35;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, g_6);
      }
    }
  t = k_134(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_116 = NULL;
  p_116 = t;
  t = SSL_table_create(not_null(p_116));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_116 = NULL;
  t_116 = t;
  {
    ATerm q_35;
    q_35 = t;
    {
      t = term_r_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_35, term_s_35, not_null(t_116));
          t = table_put_0(t);
        }
      }
    }
    t = q_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_116 = NULL;
  x_116 = t;
  t = SSL_table_destroy(not_null(x_116));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_117 = NULL;
  b_117 = t;
  t = SSL_exit(not_null(b_117));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_117 (ATerm))
{
  ATerm e_117 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = Cons_2(t, p_117, e_117);
      }
    return(t);
  }
  t = e_117(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_117 = NULL,m_117 = NULL,o_117 = NULL;
  o_117 = t;
  k_117 :
  if(((ATgetType(o_117) == AT_LIST) && !(ATisEmpty(o_117))))
    {
      l_117 = ATgetFirst((ATermList) o_117);
      m_117 = (ATerm) ATgetNext((ATermList) o_117);
      {
        ATerm t_117 = NULL;
        t = not_null(m_117);
        {
          ATerm v_35;
          v_35 = t;
          {
            ATerm u_117 = NULL,w_117 = NULL,y_117 = NULL;
            ATerm i_36;
            i_36 = t;
            {
              ATerm v_117 = NULL;
              t = i_0(t);
              {
                v_117 = t;
                if(((u_117 != NULL) && (u_117 != v_117)))
                  _fail(v_117);
                else
                  u_117 = v_117;
              }
            }
            t = i_36;
            {
              ATerm x_117 = NULL;
              t = not_null(l_117);
              {
                t = e_0(t);
                {
                  x_117 = t;
                  if(((w_117 != NULL) && (w_117 != x_117)))
                    _fail(x_117);
                  else
                    w_117 = x_117;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_117)), not_null(w_117));
                {
                  y_117 = t;
                  if(((t_117 != NULL) && (t_117 != y_117)))
                    _fail(y_117);
                  else
                    t_117 = y_117;
                }
              }
            }
          }
          t = v_35;
          {
            ATerm h_6 (ATerm t)
            {
              t = not_null(t_117);
              return(t);
            }
            t = reverse_acc_2(t, e_0, h_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_117) == AT_LIST) && ATisEmpty(o_117)))
        {
          {
            t = term_h_15;
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
  ATerm i_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm n_118 = NULL,o_118 = NULL;
  n_118 = t;
  m_118 :
  if(match_cons(n_118, sym_Program_1))
    {
      o_118 = ATgetArgument(n_118, 0);
      {
        ATerm r_118 = NULL,t_118 = NULL;
        ATerm s_118 = NULL;
        t = SSLgetAnnotations(not_null(n_118));
        {
          s_118 = t;
          if(((r_118 != NULL) && (r_118 != s_118)))
            _fail(s_118);
          else
            r_118 = s_118;
        }
        {
          t = not_null(o_118);
          {
            ATerm v_118 = NULL;
            t = a_108(t);
            {
              t_118 = t;
              {
                ATerm w_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_118)), not_null(r_118));
                {
                  w_118 = t;
                  if(((v_118 != NULL) && (v_118 != w_118)))
                    _fail(w_118);
                  else
                    v_118 = w_118;
                }
                t = not_null(v_118);
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
  ATerm f_119 = NULL;
  ATerm j_36 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_119 = NULL;
      t = term_b_34;
      {
        t = get_config_0(t);
        {
          g_119 = t;
          if(((f_119 != NULL) && (f_119 != g_119)))
            _fail(g_119);
          else
            f_119 = g_119;
        }
      }
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = j_36;
      {
        ATerm j_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            ATerm h_119 = NULL;
            h_119 = t;
            if(((f_119 != NULL) && (f_119 != h_119)))
              _fail(h_119);
            else
              f_119 = h_119;
            return(t);
          }
          t = Program_1(t, k_6);
          return(t);
        }
        t = option_defined_1(t, j_6);
      }
    }
  {
    ATerm l_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        t = not_null(f_119);
        return(t);
      }
      t = short_description_1(t, m_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_6);
    {
      t = term_f_37;
      {
        t = echo_0(t);
        {
          t = term_i_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm i_119 = NULL;
                  ATerm j_119 = NULL;
                  j_119 = t;
                  if(((i_119 != NULL) && (i_119 != j_119)))
                    _fail(j_119);
                  else
                    i_119 = j_119;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_119)), term_j_37);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm k_119 = NULL;
                    ATerm l_119 = NULL;
                    ATerm p_6 (ATerm t)
                    {
                      t = not_null(f_119);
                      return(t);
                    }
                    t = long_description_1(t, p_6);
                    {
                      l_119 = t;
                      if(((k_119 != NULL) && (k_119 != l_119)))
                        _fail(l_119);
                      else
                        k_119 = l_119;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_119)), term_k_37);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_6);
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
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm v_119 = NULL,w_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym_Undefined_1))
    {
      w_119 = ATgetArgument(v_119, 0);
      {
        ATerm d_120 = NULL,h_120 = NULL;
        ATerm e_120 = NULL;
        t = SSLgetAnnotations(not_null(v_119));
        {
          e_120 = t;
          if(((d_120 != NULL) && (d_120 != e_120)))
            _fail(e_120);
          else
            d_120 = e_120;
        }
        {
          t = not_null(w_119);
          {
            ATerm k_120 = NULL;
            t = b_108(t);
            {
              h_120 = t;
              {
                ATerm l_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_120)), not_null(d_120));
                {
                  l_120 = t;
                  if(((k_120 != NULL) && (k_120 != l_120)))
                    _fail(l_120);
                  else
                    k_120 = l_120;
                }
                t = not_null(k_120);
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
ATerm fetch_1 (ATerm t, ATerm z_117 (ATerm))
{
  ATerm v_120 (ATerm t)
  {
    ATerm p_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_117, _id);
        ;
        LocalPopChoice(s_37);
      }
    else
      {
        t = p_37;
        t = Cons_2(t, _id, v_120);
      }
    return(t);
  }
  t = v_120(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_135 (ATerm))
{
  t = fetch_1(t, k_135);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL;
  x_120 = t;
  w_120 :
  if(((ATgetType(x_120) == AT_LIST) && ATisEmpty(x_120)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_120) == AT_LIST) && !(ATisEmpty(x_120))))
        {
          y_120 = ATgetFirst((ATermList) x_120);
          z_120 = (ATerm) ATgetNext((ATermList) x_120);
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
  ATerm w_37;
  w_37 = t;
  {
    ATerm c_121 = NULL;
    ATerm f_121 = NULL;
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        {
          ATerm d_121 = NULL;
          ATerm e_121 = NULL;
          e_121 = t;
          if(((d_121 != NULL) && (d_121 != e_121)))
            _fail(e_121);
          else
            d_121 = e_121;
          t = (ATerm) ATinsert(ATempty, not_null(d_121));
        }
      }
    {
      f_121 = t;
      if(((c_121 != NULL) && (c_121 != f_121)))
        _fail(f_121);
      else
        c_121 = f_121;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(c_121));
      t = printnl_0(t);
    }
  }
  t = w_37;
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
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_121 = NULL;
  m_121 = t;
  l_121 :
  if(match_cons(m_121, sym_Help_0))
    {
      ATerm o_121 = NULL,q_121 = NULL;
      ATerm b_38;
      b_38 = t;
      {
        ATerm p_121 = NULL;
        t = SSLgetAnnotations(not_null(m_121));
        {
          p_121 = t;
          if(((o_121 != NULL) && (o_121 != p_121)))
            _fail(p_121);
          else
            o_121 = p_121;
        }
      }
      t = b_38;
      {
        ATerm r_121 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_121));
        {
          r_121 = t;
          if(((q_121 != NULL) && (q_121 != r_121)))
            _fail(r_121);
          else
            q_121 = r_121;
        }
        t = not_null(q_121);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_114 (ATerm))
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_114(t);
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm x_121 = NULL;
        x_121 = t;
        v_121 :
        if(!(match_string(x_121, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = term_h_38;
        t = set_config_0(t);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        t = term_i_38;
        return(t);
      }
      t = Option_3(t, q_6, r_6, s_6);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm t_6 (ATerm t)
        {
          ATerm y_121 = NULL;
          y_121 = t;
          w_121 :
          if(!(match_string(y_121, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = term_h_38;
          {
            t = set_config_0(t);
            {
              t = term_k_38;
              t = set_config_0(t);
            }
          }
          t = term_l_38;
          return(t);
        }
        ATerm v_6 (ATerm t)
        {
          t = term_m_38;
          return(t);
        }
        t = Option_3(t, t_6, u_6, v_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_122 = NULL,c_122 = NULL,e_122 = NULL;
  b_122 = t;
  a_122 :
  if(match_cons(b_122, sym__2))
    {
      c_122 = ATgetArgument(b_122, 0);
      e_122 = ATgetArgument(b_122, 1);
      t = SSL_table_get(not_null(c_122), not_null(e_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL,t_122 = NULL;
  l_122 = t;
  k_122 :
  if(match_cons(l_122, sym__3))
    {
      m_122 = ATgetArgument(l_122, 0);
      n_122 = ATgetArgument(l_122, 1);
      t_122 = ATgetArgument(l_122, 2);
      {
        ATerm n_38;
        n_38 = t;
        {
          ATerm x_122 = NULL;
          ATerm y_122 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_122), not_null(n_122));
          {
            ATerm o_38 = t;
            int p_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_38);
              }
            else
              {
                t = o_38;
                t = (ATerm) ATempty;
              }
            {
              y_122 = t;
              if(((x_122 != NULL) && (x_122 != y_122)))
                _fail(y_122);
              else
                x_122 = y_122;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_122), not_null(n_122), (ATerm) ATinsert(CheckATermList(not_null(x_122)), not_null(t_122)));
            t = table_put_0(t);
          }
        }
        t = n_38;
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
  ATerm c_123 = NULL;
  ATerm d_123 = NULL;
  t = term_h_15;
  {
    t = p_136(t);
    {
      d_123 = t;
      if(((c_123 != NULL) && (c_123 != d_123)))
        _fail(d_123);
      else
        c_123 = d_123;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_37, term_h_37, not_null(c_123));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL;
  j_123 = t;
  i_123 :
  if(match_string(j_123, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(j_123) == AT_LIST) && !(ATisEmpty(j_123))))
        {
          k_123 = ATgetFirst((ATermList) j_123);
          l_123 = (ATerm) ATgetNext((ATermList) j_123);
          {
            ATerm o_123 = NULL;
            ATerm q_38;
            q_38 = t;
            {
              t = not_null(k_123);
              t = a_0(t);
            }
            t = q_38;
            {
              ATerm p_123 = NULL;
              t = term_h_15;
              {
                t = b_0(t);
                {
                  p_123 = t;
                  if(((o_123 != NULL) && (o_123 != p_123)))
                    _fail(p_123);
                  else
                    o_123 = p_123;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_123)), not_null(o_123));
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
  ATerm w_6 (ATerm t)
  {
    ATerm u_123 = NULL;
    u_123 = t;
    t_123 :
    if(!(match_string(u_123, "--help")))
      {
        if(!(match_string(u_123, "-h")))
          {
            if(!(match_string(u_123, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = term_r_38;
    {
      t = set_config_0(t);
      t = term_s_38;
    }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = term_t_38;
    return(t);
  }
  t = Option_3(t, w_6, x_6, y_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL;
  d_124 = t;
  c_124 :
  if(((ATgetType(d_124) == AT_LIST) && !(ATisEmpty(d_124))))
    {
      e_124 = ATgetFirst((ATermList) d_124);
      f_124 = (ATerm) ATgetNext((ATermList) d_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_95 (ATerm), ATerm f_95 (ATerm))
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL;
  w_124 = t;
  o_124 :
  if(((ATgetType(w_124) == AT_LIST) && !(ATisEmpty(w_124))))
    {
      x_124 = ATgetFirst((ATermList) w_124);
      y_124 = (ATerm) ATgetNext((ATermList) w_124);
      {
        ATerm e_125 = NULL,h_125 = NULL;
        ATerm g_125 = NULL;
        t = SSLgetAnnotations(not_null(w_124));
        {
          g_125 = t;
          if(((e_125 != NULL) && (e_125 != g_125)))
            _fail(g_125);
          else
            e_125 = g_125;
        }
        {
          t = not_null(x_124);
          {
            ATerm l_125 = NULL;
            t = e_95(t);
            {
              h_125 = t;
              {
                t = not_null(y_124);
                {
                  ATerm n_125 = NULL;
                  t = f_95(t);
                  {
                    l_125 = t;
                    {
                      ATerm o_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_125)), not_null(h_125)), not_null(e_125));
                      {
                        o_125 = t;
                        if(((n_125 != NULL) && (n_125 != o_125)))
                          _fail(o_125);
                        else
                          n_125 = o_125;
                      }
                      t = not_null(n_125);
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
  ATerm z_125 = NULL;
  z_125 = t;
  x_125 :
  if(((ATgetType(z_125) == AT_LIST) && ATisEmpty(z_125)))
    {
      {
        ATerm b_126 = NULL,d_126 = NULL;
        ATerm u_38;
        u_38 = t;
        {
          ATerm c_126 = NULL;
          t = SSLgetAnnotations(not_null(z_125));
          {
            c_126 = t;
            if(((b_126 != NULL) && (b_126 != c_126)))
              _fail(c_126);
            else
              b_126 = c_126;
          }
        }
        t = u_38;
        {
          ATerm e_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_126));
          {
            e_126 = t;
            if(((d_126 != NULL) && (d_126 != e_126)))
              _fail(e_126);
            else
              d_126 = e_126;
          }
          t = not_null(d_126);
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
  ATerm k_126 = NULL,l_126 = NULL,m_126 = NULL;
  k_126 = t;
  j_126 :
  if(match_cons(k_126, sym__2))
    {
      l_126 = ATgetArgument(k_126, 0);
      m_126 = ATgetArgument(k_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_29, not_null(l_126), not_null(m_126));
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
  ATerm v_38;
  v_38 = t;
  {
    ATerm z_6 (ATerm t)
    {
      t = term_w_38;
      t = n_136(t);
      return(t);
    }
    t = try_1(t, z_6);
  }
  t = v_38;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm y_126 = NULL;
      ATerm x_38;
      x_38 = t;
      {
        ATerm w_126 = NULL;
        ATerm x_126 = NULL;
        x_126 = t;
        if(((w_126 != NULL) && (w_126 != x_126)))
          _fail(x_126);
        else
          w_126 = x_126;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_34, not_null(w_126));
          t = set_config_0(t);
        }
      }
      t = x_38;
      {
        ATerm z_126 = NULL;
        z_126 = t;
        if(((y_126 != NULL) && (y_126 != z_126)))
          _fail(z_126);
        else
          y_126 = z_126;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_126));
      }
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_39 = t;
          int b_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_39);
            }
          else
            {
              t = a_39;
              {
                t = n_136(t);
                t = Cons_2(t, _id, b_7);
              }
            }
          ;
          LocalPopChoice(z_38);
        }
      else
        {
          t = y_38;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, b_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL;
  ATerm c_39;
  c_39 = t;
  {
    ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL,l_127 = NULL;
    i_127 = t;
    e_127 :
    if(match_cons(i_127, sym__3))
      {
        j_127 = ATgetArgument(i_127, 0);
        k_127 = ATgetArgument(i_127, 1);
        l_127 = ATgetArgument(i_127, 2);
        {
          if(((f_127 != NULL) && (f_127 != j_127)))
            _fail(j_127);
          else
            f_127 = j_127;
          {
            if(((g_127 != NULL) && (g_127 != k_127)))
              _fail(k_127);
            else
              g_127 = k_127;
            {
              if(((h_127 != NULL) && (h_127 != l_127)))
                _fail(l_127);
              else
                h_127 = l_127;
              t = SSL_table_put(not_null(f_127), not_null(g_127), not_null(h_127));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_39;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_136 (ATerm))
{
  ATerm o_127 = NULL;
  ATerm d_39;
  d_39 = t;
  {
    t = term_e_39;
    t = table_put_0(t);
  }
  t = d_39;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm f_39 = t;
      int g_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_136(t);
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
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(i_39);
              }
            else
              {
                t = h_39;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, c_7);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_39;
            l_39 = t;
            {
              ATerm m_39 = t;
              int n_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_35;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_39);
                }
              else
                {
                  t = m_39;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = l_39;
            {
              t = system_usage_0(t);
              {
                t = term_h_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm o_39 = t;
              int p_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_39;
                  q_39 = t;
                  {
                    t = term_g_38;
                    t = get_config_0(t);
                  }
                  t = q_39;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_8;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(p_39);
                }
              else
                {
                  t = o_39;
                  {
                    ATerm h_7 (ATerm t)
                    {
                      ATerm i_7 (ATerm t)
                      {
                        ATerm p_127 = NULL;
                        p_127 = t;
                        if(((o_127 != NULL) && (o_127 != p_127)))
                          _fail(p_127);
                        else
                          o_127 = p_127;
                        return(t);
                      }
                      t = Undefined_1(t, i_7);
                      return(t);
                    }
                    t = option_defined_1(t, h_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_127)), term_r_39));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_i_8;
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
      t = try_1(t, g_7);
      {
        ATerm s_39;
        s_39 = t;
        {
          t = term_g_37;
          t = table_destroy_0(t);
        }
        t = s_39;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm))
{
  t = parse_options_1(t, m_134);
  {
    t = store_options_0(t);
    {
      t = o_134(t);
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_134);
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_134(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm))
{
  ATerm j_7 (ATerm t)
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_134(t);
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_134);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_7, d_134, e_134, k_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      ATerm c_40;
      c_40 = t;
      {
        ATerm s_127 = NULL;
        ATerm t_127 = NULL;
        t = term_b_34;
        {
          t = get_config_0(t);
          {
            t_127 = t;
            if(((s_127 != NULL) && (s_127 != t_127)))
              _fail(t_127);
            else
              s_127 = t_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_27, (ATerm) ATinsert(ATempty, not_null(s_127)));
          t = printnl_0(t);
        }
      }
      t = c_40;
      return(t);
    }
    t = if_verbose2_1(t, m_7);
    return(t);
  }
  t = iowrap_4(t, v_133, w_133, x_133, l_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_133 (ATerm), ATerm u_133 (ATerm))
{
  t = iowrap_3(t, t_133, u_133, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_133 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    t = _2(t, _id, q_133);
    return(t);
  }
  t = iowrap_2(t, n_7, _fail);
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
